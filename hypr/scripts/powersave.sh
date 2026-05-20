#!/bin/bash

# kill visual services
pkill waybar
pkill mpvpaper
pkill swaybg
pkill hyprpaper

# disable animations
hyprctl keyword animations:enabled 0

# disable blur
hyprctl keyword decoration:blur:enabled false

# reduce shadows
hyprctl keyword decoration:drop_shadow false

# reduce rounding
hyprctl keyword decoration:rounding 0

# disable gaps
hyprctl keyword general:gaps_in 0
hyprctl keyword general:gaps_out 0

# reduce border size
hyprctl keyword general:border_size 1

# set plain background
hyprctl dispatch exec "swaybg -c '#000000'"
