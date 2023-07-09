#!/bin/bash -e

source "$(dirname $(realpath "${BASH_SOURCE[0]}"))/../Tools/Scripts/lib.sh"

# Leaving empty string for the default repo.
DOCKER_REPO=""
GROUP="lucky"
PROJECT="message-encoder-decoder"
VERSION="latest"
