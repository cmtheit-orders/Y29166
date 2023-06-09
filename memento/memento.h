
#ifndef DRIVER_MEMENTO
#define DRIVER_MEMENTO

#include <linux/ioctl.h>
#define MOMENTO_IOC_MAGIC 0x5b

#define MOMENTO_RESET _IO(MOMENTO_IOC_MAGIC, 1)
#define MOMENTO_GET _IOR(MOMENTO_IOC_MAGIC, 2, char)
#define MOMENTO_SET _IOW(MOMENTO_IOC_MAGIC, 3, char)

#endif // DRIVER_MEMENTO
