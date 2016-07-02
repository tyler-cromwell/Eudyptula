/* Linux Kernel Headers */
#include <linux/kernel.h>
#include <linux/module.h>

/* Module Information */
MODULE_AUTHOR("Tyler Cromwell <tyler@csh.rit.edu>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Solution to Task 01 of the Eudyptula Challenge");

static int __init begin_module(void) {
    printk(KERN_DEBUG "Hello world!\n");
    return 0;
}

static void __exit end_module(void) {
    printk(KERN_DEBUG "Goodbye, cruel world.\n");
}

module_init(begin_module);  /* insmod */
module_exit(end_module);    /* rmmod */
