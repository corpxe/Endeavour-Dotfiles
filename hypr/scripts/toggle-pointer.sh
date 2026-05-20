#!/bin/sh

CONF="$HOME/.config/hypr/hyprland.conf"

if grep -q "sensitivity = 0 #Mouse_Mod" "$CONF"; then
    sed -i 's/sensitivity = 0 #Mouse_Mod/sensitivity = -0.9 #Mouse_Mod/' "$CONF"
else
    sed -i 's/sensitivity = -0.9 #Mouse_Mod/sensitivity = 0 #Mouse_Mod/' "$CONF"
fi

hyprctl reload
