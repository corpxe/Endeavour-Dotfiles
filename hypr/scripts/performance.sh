#!/bin/bash

# restore animations
hyprctl keyword animations:enabled 1

# restore blur
hyprctl keyword decoration:blur:enabled true

# restore shadows
hyprctl keyword decoration:drop_shadow true

# restore rounding
hyprctl keyword decoration:rounding 10

# restore gaps
hyprctl keyword general:gaps_in 6
hyprctl keyword general:gaps_out 12

# restart waybar
waybar &

# restart wallpaper
mpvpaper -o "loop no-audio panscan=1.0" "*" ~/wallpaper/live/gwen.mp4
# mpvpaper -o "loop no-audio panscan=1.0" eDP-1 ~/wallpaper/live/gwen.mp4
