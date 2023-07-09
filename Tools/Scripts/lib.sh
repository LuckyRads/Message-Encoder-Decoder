#!/bin/bash -e

REPO_ROOT="$(dirname $0)/../../../"

lib_COLOR_RED="\e[31m"
lib_COLOR_GREEN="\e[32m"
lib_COLOR_YELLOW="\e[0;33m"
lib_COLOR_BLUE="\e[0;34m"
lib_COLOR_PURPLE="\e[0;35m"
lib_COLOR_CYAN="\e[0;36m"
lib_COLOR_WHITE="\e[0;37m"
lib_COLOR_ENDCOLOR="\e[0m"

print_debug() {
    echo -e "${lib_COLOR_WHITE}DEBUG: $1${lib_COLOR_ENDCOLOR}"
}

print_info() {
    echo -e "${lib_COLOR_BLUE}INFO: $1${lib_COLOR_ENDCOLOR}"
}

print_warning() {
    echo -e "${lib_COLOR_YELLOW}WARNING: $1${lib_COLOR_ENDCOLOR}"
}

print_error() {
    echo -e "${lib_COLOR_RED}ERROR: $1${lib_COLOR_ENDCOLOR}"
}

print_success() {
    echo -e "${lib_COLOR_GREEN}SUCCESS: $1${lib_COLOR_ENDCOLOR}"
}
