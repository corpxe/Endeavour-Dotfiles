#!/bin/bash

cp ~/.config/i3/config.powersave ~/.config/i3/config

i3-msg restart
notify-send "i3" "Powersave profile loaded"
