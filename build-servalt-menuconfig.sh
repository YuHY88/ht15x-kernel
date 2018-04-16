#########################################################################
# File Name: build-menuconfig.sh
# Author: ma6174
# mail: ma6174@163.com
# Created Time: 2017年11月15日 星期三 15时49分19秒
#########################################################################
#!/bin/bash

#cp config-servalt .config

make ARCH=mips CROSS_COMPILE=/opt/mscc/mscc-brsdk-mips-2017.02-017/stage1/x86_64-linux/usr/bin/mipsel-linux- menuconfig

#cp .config config-servalt

