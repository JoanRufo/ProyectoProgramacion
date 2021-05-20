#pragma once
#ifndef SOUNDMANAGER
#define SOUNDMANAGER

#include <iostream>
#include <map>
#include <vector>
#include "SDL.h"
#include "SDL_mixer.h"

class SoundManager
{
public:
	
	~SoundManager();

	void removeSound(const char* file);


	Sint32 loadAndGetSoundID(const char* file);


	std::string getSoundPathByID(Sint32 ID);


	


	
	
};
#endif

