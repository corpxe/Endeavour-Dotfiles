#!/bin/sh

systemctl --user unmask xdg-desktop-portal.service
systemctl --user unmask xdg-desktop-portal-hyprland.service
systemctl --user unmask xdg-desktop-portal-gtk.service
systemctl --user unmask xdg-document-portal.service

systemctl --user start xdg-desktop-portal.service

exit 0
