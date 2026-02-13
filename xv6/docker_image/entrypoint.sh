#!/bin/bash

# This entrypoint script is used to run different commands based on the service
# The service will be determined by environment variables or passed arguments

# Set up environment variables
export SYSTEMC_HOME=/usr
export LD_LIBRARY_PATH="${SYSTEMC_HOME}/lib64:${SYSTEMC_HOME}/lib:/usr/local/lib64:/usr/lib64:/usr/local/lib:/usr/lib:${LD_LIBRARY_PATH}"
export PKG_CONFIG_PATH="${SYSTEMC_HOME}/lib/pkgconfig:${PKG_CONFIG_PATH}"
export PATH="/usr/bin:${PATH}"

# Execute the command passed to the container
exec "$@"