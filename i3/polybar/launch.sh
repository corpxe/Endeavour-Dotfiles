#!/bin/bash

killall -q polybar

while pgrep -u $UID -x polybar >/dev/null; do
    sleep 1
done

MONITOR=$(polybar --list-monitors | head -1 | cut -d':' -f1)

MONITOR=$MONITOR polybar main >/tmp/polybar.log 2>&1 &
