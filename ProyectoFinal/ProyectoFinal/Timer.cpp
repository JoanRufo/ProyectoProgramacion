#include "Timer.h"
#include <ctime>

Timer::Timer() {
	mStartTicks = 0;
	mPauseTicks = 0;
	mTicks = 0;
	mStatus = INITIALIZED;
}

Timer::~Timer() {
}

void Timer::start() {
	mStartTicks = SDL_GetTicks();
	mTicks = 0;
	mStatus = STARTED;
}

void Timer::stop() {
	if (mStatus != STOPPED) {
		mStatus = STOPPED;
		mTicks += SDL_GetTicks() - mStartTicks;
	}
}

void Timer::pause() {
	//If the timer is running and isn't already paused 
	if (mStatus == STARTED) {
		mStatus = PAUSED;
		mTicks += SDL_GetTicks() - mStartTicks;
		mPauseTicks = mTicks;
		mStartTicks = SDL_GetTicks();
	}
}

void Timer::resume() {
	if (mStatus == PAUSED) {
		mStatus = STARTED;
		mStartTicks = SDL_GetTicks();
		mPauseTicks = 0;
	}
}

void Timer::reset() {
	mStartTicks = 0;
	mPauseTicks = 0;
	mTicks = 0;
	mStatus = INITIALIZED;
}

void Timer::add(Uint32 time) {
	mTicks += time;
}

void Timer::setTimeAndPause(Uint32 time) {
	mStartTicks = SDL_GetTicks();
	mTicks = time;
	mPauseTicks = mTicks;
	mStatus = PAUSED;
}

Uint32 Timer::getCurrentSystemDays()
{
	time_t currentTime;
	Uint32 resultValue = 0;
	time(&currentTime);
	currentTime /= 60; // to minutes
	currentTime /= 60; // to hours
	currentTime /= 24; // to days
	resultValue = static_cast<Uint32>(currentTime);
	return resultValue;
}

Uint32 Timer::getTicks() {
	//If the timer is running
	switch (mStatus) {
	case STARTED:
		mTicks += SDL_GetTicks() - mStartTicks;
		mStartTicks = SDL_GetTicks();
		return mTicks;
		break;
	case PAUSED:
		return mPauseTicks;
		break;
	case STOPPED:
		return mTicks;
		break;
	default:
		break;
	}
	return 0;
}
