# The plugin demo using dlopen

## main system

main.cpp defines the plugin system, a plugin would create a plugin by declare
plugin instance in it's implementation.

# plugins

The plugin implementation, just declares the plugin instance, and pass any
parameters you want to the constructor function of the class. Here you could
create any plugin specific variables and pass to the constructor. The plugin
class would register the plugins if it needs.


