#!/bin/bash -e

source "$(dirname $0)/common.sh"

print_info "==> ${GROUP} => ${PROJECT} -> Building ${IMAGE_NAME} image with version ${VERSION}..."

docker build . -t ${DOCKER_REPO}${GROUP}/${PROJECT}/${IMAGE_NAME}:${VERSION}

print_debug "+--------------------------------------+"
print_debug "|------------- Build info -------------|"
print_debug "+--------------------------------------+"
docker images | grep ${DOCKER_REPO}${GROUP}/${PROJECT}/${IMAGE_NAME}
print_debug "+--------------------------------------+"

print_info "==> ${GROUP} => ${PROJECT} -> ${IMAGE_NAME} image with version ${VERSION} built successfully!"
