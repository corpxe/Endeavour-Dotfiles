#!/bin/bash

ACTIVE=$(cat /tmp/polybar-player 2>/dev/null)

if [[ -z "$ACTIVE" ]]; then
    ACTIVE=$(playerctl -l 2>/dev/null | head -1)
    echo "$ACTIVE" > /tmp/polybar-player
fi

STATUS=$(playerctl -p "$ACTIVE" metadata --format "{{artist}} - {{title}}" 2>/dev/null)

if [[ -z "$STATUS" ]]; then
    echo "No Media"
else
    echo "$STATUS"
fi
