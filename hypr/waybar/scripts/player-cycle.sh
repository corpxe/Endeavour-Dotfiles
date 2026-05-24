#!/bin/bash

STATEFILE=/tmp/waybar-player
PLAYERS=($(playerctl -l))

[[ ${#PLAYERS[@]} -eq 0 ]] && exit

CURRENT=$(cat "$STATEFILE" 2>/dev/null)

for i in "${!PLAYERS[@]}"; do
    if [[ "${PLAYERS[$i]}" == "$CURRENT" ]]; then
        NEXT=$(( (i + 1) % ${#PLAYERS[@]} ))
        echo "${PLAYERS[$NEXT]}" > "$STATEFILE"
        exit
    fi
done

echo "${PLAYERS[0]}" > "$STATEFILE"
