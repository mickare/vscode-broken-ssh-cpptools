FROM ubuntu

# Install tools
RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    git \
    ssh-client \
    iproute2 \
    procps \
    htop \
    curl \
    wget \
    unzip \
    lsb-release \
    nano \
    vim \
    gosu \
    binutils \
    sudo \
    ca-certificates \
    apt-transport-https \
    #
    # Install C++ tools
    build-essential \
    gcc-8 \
    g++-8 \
    clang-9 \
    clang-format \
    cmake \
    cppcheck \
    gdb \
    #
    # Cleanup
    && rm -rf /var/lib/apt/lists/

# ********************************************************
# From this point could be another Dockerfile

ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID
ENV DEFAULT_USERNAME=${USERNAME}

# Create the user
RUN echo "New User: ${USERNAME} (${USER_UID}:${USER_GID})" \
    && groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    #
    # [Optional] Add sudo support.
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME

# Prepare workspace
RUN mkdir -p /workspace \
    && chmod -R 777 /workspace \
    && mkdir -p /home/vscode/.vscode-server/extensions \
    && mkdir -p /home/vscode/.vscode-server-insiders/extensions \
    && chown $USER_UID:$USER_GID -R /home/vscode

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog

USER "$USERNAME"
#WORKDIR /catkin_ws
