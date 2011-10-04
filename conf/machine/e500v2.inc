TARGET_FPU = "ppc-efd"

require conf/machine/include/tune-ppce500v2.inc

MACHINE_FEATURES = "kernel26 pci ext2 ext3 serial"
MACHINE_EXTRA_RRECOMMENDS = ""

PREFERRED_PROVIDER_virtual/kernel = "linux-qoriq-sdk"
PREFERRED_VERSION_virtual/kernel = "3.0.1"
PREFERRED_PROVIDER_linux-libc-headers = "linux-qoriq-sdk-headers"

KERNEL_IMAGETYPE = "uImage"
SERIAL_CONSOLE = "115200 ttyS0"
IMAGE_FSTYPES = "tar.gz ext2.gz"
# disable the images below for now
#		ext2.bz2 ext2.lzma \
#		ext2.gz.u-boot ext2.bz2.u-boot ext2.lzma.u-boot"

MACHINEOVERRIDES .= ":e500v2"