#!/bin/bash

STATEFILE=/tmp/waybar-player
PLAYERS=($(playerctl -l 2>/dev/null))

if [[ ${#PLAYERS[@]} -eq 0 ]]; then
    echo '{"text":"󰝛 No Media","class":"custom-media"}'
    exit
fi

ACTIVE=$(cat "$STATEFILE" 2>/dev/null)

if [[ -z "$ACTIVE" ]]; then
    ACTIVE=${PLAYERS[0]}
    echo "$ACTIVE" > "$STATEFILE"
fi

INFO=$(playerctl -p "$ACTIVE" metadata \
--format "  {{artist}} - {{title}}" 2>/dev/null)

[[ -z "$INFO" ]] && INFO="󰝛 No Media"

echo "{\"text\":\"$INFO\",\"class\":\"custom-media\"}"
