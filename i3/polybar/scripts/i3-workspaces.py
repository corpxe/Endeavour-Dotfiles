#!/usr/bin/env python3

import i3ipc

ICON_MAP = {
    "zen": "󰖟",
    "firefox": "󰈹",
    "code": "󰨞",
    "vscodium": "󰨞",
    "spotify": "󰓇",
    "discord": "",
    "steam": "",
    "kitty": "",
    "alacritty": "",
    "thunar": "",
    "obsidian": "󱓧",
    "netflix": "󰝆",
    "prime": "󰜫",
    "youtube": "󰗃",
    "gemini": "󰭹",
    "chatgpt": "󰚩",
    "antigravity": "󰀍",
}

i3 = i3ipc.Connection()

tree = i3.get_tree()

output = []

for ws in tree.workspaces():
    name = ws.name

    icons = []

    for win in ws.leaves():
        cls = win.window_class

        if cls:
            icon = ICON_MAP.get(cls.lower(), "󰣆")

            if icon not in icons:
                icons.append(icon)

    if not icons:
        icons.append("")

    label = f"{name}: {' '.join(icons)}"

    if ws.focused:
        label = f"%{{F#f5c2e7}}{label}%{{F-}}"

    output.append(label)

print("  ".join(output))
