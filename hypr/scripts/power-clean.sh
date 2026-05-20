#!/bin/sh

# Stop portals (power mode only)
systemctl --user stop xdg-desktop-portal.service
systemctl --user stop xdg-desktop-portal-hyprland.service
systemctl --user stop xdg-desktop-portal-gtk.service
systemctl --user stop xdg-document-portal.service

# Prevent them from restarting
systemctl --user mask xdg-desktop-portal.service
systemctl --user mask xdg-desktop-portal-hyprland.service
systemctl --user mask xdg-desktop-portal-gtk.service
systemctl --user mask xdg-document-portal.service

# Kill trackers if present
pkill -f tracker-miner 2>/dev/null
pkill -f tracker-extract 2>/dev/null

exit 0
