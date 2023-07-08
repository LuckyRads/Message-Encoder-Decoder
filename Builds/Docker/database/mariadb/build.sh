#!/bin/bash -e

source "$(dirname $0)/common.sh"

print_info "==> ${GROUP} => ${PROJECT} -> Building ${IMAGE_NAME} image with version ${VERSION}..."

docker build . -t ${DOCKER_REPO}${GROUP}/${PROJECT}/${IMAGE_NAME}:${VERSION}
