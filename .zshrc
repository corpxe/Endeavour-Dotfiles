# STARSHIP
eval "$(starship init zsh)"

# AUTOSUGGESTIONS
source /usr/share/zsh/plugins/zsh-autosuggestions/zsh-autosuggestions.zsh

# SYNTAX HIGHLIGHTING
source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh

# HISTORY
HISTSIZE=5000
SAVEHIST=5000
HISTFILE=~/.zsh_history

setopt HIST_IGNORE_DUPS
setopt SHARE_HISTORY

# BETTER TAB AUTOCOMPLETE
autoload -Uz compinit && compinit

# WORD MOVEMENT
bindkey '^[[1;5C' forward-word
bindkey '^[[1;5D' backward-word

# CTRL + BACKSPACE
bindkey '^H' backward-kill-word

# CTRL + DELETE
bindkey '^[[3;5~' kill-word

# DELETE KEY
bindkey '^[[3~' delete-char

# ALIASES
alias ls='eza --icons'
alias ll='eza -la --icons'
alias cat='bat'
alias fetch='fastfetch'
alias cls='clear'
alias la='ls -a'
alias todo='python3 ~/todo/todo.py'
alias install='sudo pacman -S'
alias yayinstall='yay -S'
alias update='sudo pacman -Syu'
