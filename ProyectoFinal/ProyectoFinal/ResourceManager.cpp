#include "ResourceManager.h"

ResourceManager* ResourceManager::pInstance = NULL;

ResourceManager * ResourceManager::getInstance()
{
	if (pInstance = NULL) {
		pInstance = new ResourceManager();
	}
	return pInstance;
}

ResourceManager::ResourceManager()
{
}

Sint32 ResourceManager::addGraphic(const char * file)
{
	SDL_Texture* texture = IMG_LoadTexture(renderer, file);
	if (texture == nullptr) {
		return -1;
	}

	int freeSlot = updateFirstFreeSlotGraphic();
	Sint32 id = 0;

	if (freeSlot == -1) {
		mGraphicsVector.push_back(texture);
		id = mGraphicsVector.size() - 1;
	}
	else {
		mGraphicsVector.at(freeSlot) = texture;
		id = freeSlot;
	}

	mIDMap.insert(std::pair<std::string, int>(file, id));
	return 0;

}

Uint32 ResourceManager::updateFirstFreeSlotGraphic()
{
	if ((mGraphicsVector.size() == 1) && (mGraphicsVector.at(0) == NULL)) {
		return 0;
	}
	else {
		for (int i = 0; i < mGraphicsVector.size(); i++) {
			if (mGraphicsVector.at(i) == nullptr) {
				return i;
			}
		}
	}

	return -1;
}


ResourceManager::~ResourceManager()
{
}



void ResourceManager::removeGraphic(const char * file)
{
}

Sint32 ResourceManager::loadAndGetGraphicID(const char * file)
{
	Sint32 id = 0;

	if (mIDMap.find(file) == mIDMap.end()) {
		id = -1;
	}
	else {
		id = mIDMap.find(file)->second;
	}
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

SDL_Texture * ResourceManager::getGraphicByID(Sint32 ID)
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
