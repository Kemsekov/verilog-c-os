FROM ubuntu:24.04

# Avoid prompts from apt
ENV DEBIAN_FRONTEND=noninteractive

# Install basic and build dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    curl \
    wget \
    git \
    vim \
    ca-certificates \
    gnupg \
    software-properties-common \
    libexpat1-dev \
    libelf-dev \
    libelf1 \
    binutils-dev \
    libbfd-dev \
    libgmp-dev \
    python3 \
    python3-pip \
    pkg-config \
    bzip2 \
    gcc-riscv64-unknown-elf \
    verilator \
    && ldconfig \
    && rm -rf /var/lib/apt/lists/*

# --- SystemC Installation ---
# Clones SystemC 3.0.1 (latest stable) and installs to /usr/local/systemc
RUN git clone --depth 1 --branch 3.0.1 https://github.com/accellera-official/systemc.git /tmp/systemc \
    && mkdir -p /tmp/systemc/build \
    && cd /tmp/systemc/build \
    && cmake .. \
        -DCMAKE_INSTALL_PREFIX=/usr/local/systemc \
        -DCMAKE_CXX_STANDARD=17 \
        -DBUILD_SHARED_LIBS=ON \
    && make -j$(nproc) \
    && make install \
    && rm -rf /tmp/systemc

# Set SystemC environment variables
ENV SYSTEMC_HOME=/usr/local/systemc
ENV LD_LIBRARY_PATH=/usr/local/systemc/lib-linux64:/usr/local/systemc/lib:$LD_LIBRARY_PATH
ENV CPLUS_INCLUDE_PATH=/usr/local/systemc/include:$CPLUS_INCLUDE_PATH

# Create working directory
WORKDIR /workspace

# Build the ISA simulator inside the container
COPY isa_sim/ ./isa_sim/
WORKDIR /workspace/isa_sim
# Note: Ensure your Makefile uses $SYSTEMC_HOME/include and $SYSTEMC_HOME/lib
RUN make clean && make

# Go back to workspace directory
WORKDIR /workspace

# Copy the entrypoint script
COPY docker_image/entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
