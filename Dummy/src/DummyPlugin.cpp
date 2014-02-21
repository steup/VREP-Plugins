#include "DummyPlugin.h"

#include <Log.h>

void DummyPlugin::load()
{
    Log::name(name());
}

unsigned char DummyPlugin::version() const
{
  return 1;
}

const std::string DummyPlugin::name() const
{
  return "Dummy Plugin";
}

bool DummyPlugin::load()
{
  Log::out() << "loaded" << std::endl;
  return true;
}

bool DummyPlugin::unload()
{
  Log::out() << "unloaded" << std::endl;
  return true;
}

DummyPlugin plugin;
