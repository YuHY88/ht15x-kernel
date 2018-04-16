#########################################################################
# File Name: build.sh
# Author: ma6174
# mail: ma6174@163.com
# Created Time: 2017年11月15日 星期三 15时46分50秒
#########################################################################
#!/bin/bash

export ARCH=mips 
export PATH=/home/work/share/mscc-brsdk-source-2017.02-017/mscc-brsdk-mips-2017.02-017/stage1/x86_64-linux/usr/bin:$PATH
export CROSS_COMPILE=mipsel-linux-
#export INSTALL_MOD_PATH="./ccache /usr/bin/gcc"
#export O=vmlinux.bin

#cp config-servalt .config

make vmlinux.bin

cp ./arch/mips/boot/vmlinux.bin ./mscc-linux-servalt.bin

xz --force --check=none --lzma2=preset=6e,dict=64KiB mscc-linux-servalt.bin


#make ARCH=mips CROSS_COMPILE=/opt/mscc/mscc-brsdk-mips-2017.02-017/stage1/x86_64-linux/usr/bin/mipsel-linux-

