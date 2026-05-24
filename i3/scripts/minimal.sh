#!/bin/bash

cp ~/.config/i3/config.minimal ~/.config/i3/config

i3-msg restart
notify-send "i3" "Main profile loaded"
