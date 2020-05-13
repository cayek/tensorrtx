#include "plugin_factory.h"
#include "NvInferPlugin.h"
#include "decode.h"
#include "common.h"

using namespace nvinfer1;
using nvinfer1::PluginFactory;

IPlugin* PluginFactory::createPlugin(const char* layerName, const void* serialData, size_t serialLength) {
    IPlugin *plugin = nullptr;
    plugin = new DecodePlugin(serialData, serialLength);
    return plugin;
}
