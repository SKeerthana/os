#include <linux/kernal.h>
#include <linux/module.h>
#include <linux/init.h>

MODULELICENSE("TECH2SOLVES");
MODULEAUTHOR("Veera");
MODULEDESCRIPTION("My first c kernal module");

static int __init veera_init(void){
  printk(KERN_INFO " I honestly think you ought to calm down");
  return 0;
}

static void __exit veera_cleanup(void){
  printk(KERN_INFO " What are you doing Brave?");
}

module_init(veera_init);
module_exit(veera_cleanup);
