#include <stdio.h>
#include <dlfcn.h>
#include "plugin.h"

plugin::plugin(const char *name)
{
    printf("plugin %s loaded\n",name);
    printf("we could register the plugin here\n");
}

plugin::~plugin()
{
    printf("plugin unloaded\n");
}

int main()
{
    printf("main function, calling dlopen\n");
    void *handle = dlopen("./libnull_plugin.so", RTLD_NOW);
    printf("main function, after calling dlopen\n");
    dlclose(handle);
    printf("main function, after calling dlclose\n");
}
