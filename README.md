# EndeavourOS Rice / Dotfiles

A customized Linux setup focused on:

* **Hyprland**
* **i3wm**
* **Waybar**
* **Cyber/Dark UI**
* **Developer Workflow**
* **Portable Arch Environment**

This repository contains:

* Window manager configs
* Terminal customization
* Dotfiles
* Wallpapers
* Package lists
* Bootstrap/install scripts

---

# 🖼 Preview

## Environments

* Hyprland (Primary)
* i3wm (Fallback / Lightweight/ Efficiency)
## Features

* Glassmorphism UI
* Custom Waybar
* Spotify controls
* Rofi launcher
* Wlogout power menu
* ZSH + Starship
* Alacritty setup
* Developer-focused environment

---

# 📂 Repository Structure

```text
dotfiles/
├── README.md
├── install.sh
├── packages/
│   ├── arch.txt
│   └── aur.txt
│
├── hypr/
│   ├── hyprland.conf
│   ├── waybar/
│   ├── eww/
│   └── scripts/
│
├── i3/
│   ├── config
│   └── polybar/
│
├── terminal/
│   ├── alacritty/
│   ├── zsh/
│   └── starship/
│
├── rofi/
├── wallpapers/
```

---

# ⚡ Included Components

## 🪟 Window Managers

* Hyprland
* i3wm

## 🧩 Bars / Widgets

* Waybar
* EWW
* Wlogout

## 💻 Terminal Stack

* ZSH
* Starship
* Alacritty
* Kitty

## 🎨 UI

-  Rounded glassmorphism
* Cyber/minimal aesthetics

## 🛠 Developer Setup

* Git
* SSH
* VSCode
-  Python
* NodeJS

---

# 📦 Main Packages Used

## Core

```bash
hyprland
waybar
rofi-wayland
eww
wlogout
swww
grim
slurp
wl-clipboard
```

## Terminal

```bash
zsh
starship
alacritty
kitty
zsh-autosuggestions
zsh-syntax-highlighting
```

## Audio / Media

```bash
pipewire
wireplumber
playerctl
pamixer
pavucontrol
```

## Bluetooth / Network

```bash
bluez
bluez-utils
networkmanager
nm-connection-editor
```

## Developer Tools

```bash
git
github-cli
openssh
code
python
nodejs
npm
```

## Fonts
 
```bash
ttf-jetbrains-mono-nerd
noto-fonts
noto-fonts-emoji
```

---

# 🧠 Features

## Hyprland

* Dynamic tiling
* Rounded windows
* Blur
* Animations
* Floating rules
* Custom keybinds

## i3wm

* Lightweight fallback environment
* Stable workflow
* Minimal setup

## EWW Dashboard

* Music controls
* Todo widget
* Calendar
* User card
* System info
* Wallpaper section

## Waybar

* Media display
* Workspace indicators
* Network stats
* Battery
* Bluetooth
* Clock

---

# ⌨ Keybinds

## Hyprland

| Keybind   | Action          |
| --------- | --------------- |
| SUPER + Q | Terminal        |
| SUPER + D | Rofi            |
| SUPER + E | File Manager    |
| SUPER + L | Wlogout         |
| SUPER + F | Fullscreen      |
| SUPER + V | Toggle Floating |
| SUPER + G | EWW Dashboard   |
| SUPER + W | Zen - Browser   |
| SUPER + B | Brave - Browser |

---

# 🖥 Wallpapers

Wallpapers are stored in:

```text
wallpapers/
```

Used with:

```bash
swww
```

---

# Installation

## 1️⃣ Clone Repo

```bash
git clone https://github.com/YOUR_USERNAME/dotfiles.git

cd dotfiles
```

---

## 2️⃣ Run Installer

```bash
chmod +x install.sh

./install.sh
```

---

# ⚙ install.sh Guide

The installer:

* Installs official Arch packages
* Installs AUR packages
* Skips missing packages safely
* Copies configs
* Restores user environment

---

# 🛡 Security Notes

Never upload:

* `.ssh/id_*`
* API keys
* `.env`
* Tokens
* Secrets

Use:

```text
.gitignore
```

for private files.

---

# 📌 Goals of This Setup

* Portable Linux workflow
* Developer-focused environment
* Fast recovery after reinstall
* Minimal yet aesthetic desktop
* Hybrid productivity + rice setup

---

# 📜 License

Personal dotfiles configuration.

Feel free to fork and modify.
