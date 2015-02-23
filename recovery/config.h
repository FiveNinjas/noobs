#ifndef CONFIG_H
#define CONFIG_H

/* Version number displayed in the title bar */
#define VERSION_NUMBER "1.3.12"

/* Color of the background */
// #define BACKGROUND_COLOR  Qt::white
#define BACKGROUND_COLOR  QColor(0x00, 0x00, 0x00)

/* Highlight color of installed OS */
#define INSTALLED_OS_BACKGROUND_COLOR  QColor(0xef,0xff,0xef)

/* Places background.png resource file in center of screen */
#define CENTER_BACKGROUND_IMAGE

/* Enable language selection */
#define ENABLE_LANGUAGE_CHOOSER

/* Website launched when launching Arora */
#define HOMEPAGE  "http://www.fiveninjas.com/"

/* Location to download the list of available distributions from */
#define DEFAULT_REPO_SERVER  "http://updates.fiveninjas.com/os_list_v2.json"

/* Size of recovery FAT partition in MB.
 * First partition starts at offset 1 MB (sector 2048)
 * If you want the second partition to start at offset 1024 MB, enter 1023 */
#define RESCUE_PARTITION_SIZE  63

/* Files that are currently on the FAT partition are normaaly saved to memory during
 * repartitioning.
 * If files they are larger than number of MB, try resizing the FAT partition instead */
#define MAXIMUM_BOOTFILES_SIZE  64

#define SETTINGS_PARTITION  "/dev/mmcblk0p3"
#define SETTINGS_PARTITION_SIZE  (1024*1024*6)

#define USB_MOUNTPOINT "/media/usb"
#define USB_DEVICE "/dev/sda1"

/* If the image name matches this exactly, mark it as recommended */
#define RECOMMENDED_IMAGE "Slice"

#define FAT_PARTITION_OF_IMAGE  "/dev/mmcblk0p5"

/* RiscOS magic */
#define RISCOS_OFFSET_KEY "riscos_offset"
#define RISCOS_OFFSET (1760)
#define RISCOS_SECTOR_OFFSET (RISCOS_OFFSET * 2048)

#define RISCOS_BLOB_FILENAME  "/mnt/riscos-boot.bin"
#define RISCOS_BLOB_SECTOR_OFFSET  (1)

/* Maximum number of partitions */
#define MAXIMUM_PARTITIONS  32

#endif // CONFIG_H
