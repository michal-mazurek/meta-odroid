# Odroid XU default BSP


DEFAULTTUNE = "cortexa15hf-neon"
include conf/machine/include/tune-cortexa15.inc
include conf/machine/include/odroid-default-settings.inc

PREFERRED_PROVIDER_virtual/xserver ?= "xserver-xorg"
XSERVER ?= "xserver-xorg \
           xf86-input-evdev \
           xf86-input-mouse \
           xf86-video-fbdev \
           xf86-input-keyboard"

MACHINE_EXTRA_RRECOMMENDS = " kernel-modules kernel-devicetree"

EXTRA_IMAGEDEPENDS += "u-boot secure-odroid-xu3 u-boot-config"

IMAGE_FSTYPES_append = " ext4 sdcard"

SERIAL_CONSOLE = "115200 ttySAC2"

PREFERRED_PROVIDER_virtual/kernel ?= "linux-stable"
PREFERRED_VERSION_linux-stable ?= "4.9%"

#specify u-boot parameters
PREFERRED_PROVIDER_virtual/bootloader ?= "u-boot"
PREFERRED_PROVIDER_u-boot ?= "u-boot"
PREFERRED_VERSION_u-boot ?= "2017.01%"


KERNEL_IMAGETYPE ?= "zImage"
UBOOT_BINARY ?= "u-boot-dtb.bin"

MACHINE_FEATURES = "serial usbgadget usbhost vfat ext2 rtc alsa screen"