#include <linux/module.h>
#include <linux/init.h>

static int __init rotfs_init(void)
{
	pr_debug("rotfs module loaded\n");
	return 0;
}

static void __exit rotfs_fini(void)
{
	pr_debug("rotfs module unloaded\n");
}

module_init(rotfs_init);
module_exit(rotfs_fini);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("mrtimuk");
