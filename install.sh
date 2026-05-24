#!/bin/bash

echo "Installing official packages..."

while read -r pkg; do
    if sudo pacman -Si "$pkg" &>/dev/null; then
        echo "[OK] Installing $pkg"
        sudo pacman -S --needed --noconfirm "$pkg"
    else
        echo "[SKIP] Package not found: $pkg"
    fi
done < packages/arch.txt

echo "Installing AUR packages..."

while read -r pkg; do
    if yay -Si "$pkg" &>/dev/null; then
        echo "[OK] Installing $pkg"
        yay -S --needed --noconfirm "$pkg"
    else
        echo "[SKIP] AUR package not found: $pkg"
    fi
done < packages/aur.txt


echo "Copying configs..."

mkdir -p ~/.config

cp -r hypr ~/.config/
cp -r i3 ~/.config/
cp -r terminal/alacritty ~/.config/
cp -r wallpapers ~


cp terminal/.zshrc ~/
cp terminal/starship.toml ~/.config/

source ~/.zshrc
echo "Done."

if [ -d "private/ssh" ]; then
    echo "Restoring SSH configs..."
    cp -r private/ssh ~/.ssh
    chmod 700 ~/.ssh
    chmod 600 ~/.ssh/*
fi
