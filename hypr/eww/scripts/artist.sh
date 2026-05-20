#!/bin/bash

playerctl metadata artist 2>/dev/null || echo "Spotify"
