#!/bin/bash

PLAYERS=($(playerctl -l))

CURRENT=$(cat /tmp/polybar-player 2>/dev/null)

if [[ -z "$CURRENT" ]]; then
    echo "${PLAYERS[0]}" > /tmp/polybar-player
    exit
fi

FOUND=0

for PLAYER in "${PLAYERS[@]}"; do
    if [[ $FOUND -eq 1 ]]; then
        echo "$PLAYER" > /tmp/polybar-player
        exit
    fi

    if [[ "$PLAYER" == "$CURRENT" ]]; then
        FOUND=1
    fi
done

echo "${PLAYERS[0]}" > /tmp/polybar-player

