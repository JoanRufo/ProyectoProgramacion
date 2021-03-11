#include "ResourceManager.h"



ResourceManager * ResourceManager::getInstance()
{
	return nullptr;
}

ResourceManager::ResourceManager()
{
}

Sint32 ResourceManager::addGraphic(const char * file)
{
	return Sint32();
}

Uint32 ResourceManager::updateFirstFreeSlotGraphic()
{
	return Uint32();
}


ResourceManager::~ResourceManager()
{
}

void ResourceManager::removeGraphic(const char * file)
{
}

Sint32 ResourceManager::loadAndGetGraphicID(const char * file)
{
	return Sint32();
}

std::string ResourceManager::getGraphicPathByID(Sint32 ID)
{
	return std::string();
}

void ResourceManager::getGraphicSize(Sint32 img, int & width, int & height)
{
}

Uint16 ResourceManager::getGraphicWidth(Sint32 img)
{
	return Uint16();
}

Uint16 ResourceManager::getGraphicHeight(Sint32 img)
{
	return Uint16();
}

SDL_Surface * ResourceManager::getGraphicByID(Sint32 ID)
{
	return nullptr;
}

void ResourceManager::setAlphaGraphic(Sint32 ID, Uint8 alpha_value)
{
}

void ResourceManager::printLoadedGraphics()
{
}

Sint32 ResourceManager::createGraphic(const char * name, Uint16 width, Uint16 height)
{
	return Sint32();
}
