#!/bin/sh
vpn=$(nmcli -t -f NAME,TYPE connection show | grep vpn | cut -d: -f1 | wofi --dmenu --prompt "🔐 VPN")
[ -z "$vpn" ] && exit
nmcli connection up "$vpn"
