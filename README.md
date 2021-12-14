# cstring
---
pierwszy projekt

## Building

### Building on Ubuntu 18.04/20.04

```sh
sudo apt update

# Required packages
sudo apt install -y \
    cmake \
    gcc \
    git \
    make

git clone git@github.com:Cyan-Beaver/cstring.git
cd cstring
git checkout main
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j$(nproc) cstring

# optional
make install # defaults to /usr/local
```
