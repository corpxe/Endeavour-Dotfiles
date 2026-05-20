#!/bin/bash

url=$(playerctl metadata mpris:artUrl 2>/dev/null)

if [[ "$url" == file://* ]]; then
    path="${url#file://}"

    if [[ -f "$path" ]]; then
        echo "$path"
        exit
    fi
fi

echo "/usr/share/icons/Adwaita/256x256/places/folder-music.png"
