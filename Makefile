obj-m += rotfs.o

KDIR := /lib/modules/$(shell uname -r)/build

CFLAGS_rotfs.o := -DDEBUG

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
