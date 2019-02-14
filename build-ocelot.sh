#########################################################################
# File Name: build.sh
# Author: ma6174
# mail: ma6174@163.com
# Created Time: 2017年11月15日 星期三 15时46分50秒
#########################################################################
#!/bin/bash

export ARCH=mips 
export PATH=/opt/mscc/mscc-brsdk-mips-2017.02-017/stage1/x86_64-linux/usr/bin:$PATH
export CROSS_COMPILE=mipsel-linux-
#export INSTALL_MOD_PATH="./ccache /usr/bin/gcc"
#export O=vmlinux.bin

cp config-ocelot .config

make vmlinux.bin

cp ./arch/mips/boot/vmlinux.bin ./mscc-linux-ocelot.bin

xz --force --check=none --lzma2=preset=6e,dict=64KiB mscc-linux-ocelot.bin


#make ARCH=mips CROSS_COMPILE=/opt/mscc/mscc-brsdk-mips-2017.02-017/stage1/x86_64-linux/usr/bin/mipsel-linux-

