#!/bin/sh

choice=$(nmcli -t -f IN-USE,SSID,SIGNAL,SECURITY device wifi list \
 | sed 's/^*/✓ /' \
 | awk -F: '{printf "%-30s  %3s%%  %s\n", $2, $3, $4}' \
 | wofi --dmenu --prompt "📡 Wi-Fi Networks")

[ -z "$choice" ] && exit

ssid=$(echo "$choice" | awk '{print $1}')
nmcli device wifi connect "$ssid" --ask
