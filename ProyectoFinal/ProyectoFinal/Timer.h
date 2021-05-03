#pragma once
#ifndef TIMER_H
#define TIMER_H

#include "SDL.h"

// !Enum TimerStatus.
/*! State of the timer. */
enum TimerStatus { INITIALIZED, STARTED, PAUSED, STOPPED };

//! Timer class
/*!
	Handles timers (stop, pause, etc.).
*/
class Timer
{
public:
	//! Constructor of an initialized Timer.
	Timer();

	//! Destructor
	~Timer();

	//! Starts the timer. 
	void start();

	//! Stops the timer
	void stop();

	//! Pauses the timer (only if started)
	void pause();

	//! Resumes the timer (only after paused)
	void resume();

	//! Resets the timer
	void reset();

	//! If the timer is running, updates the timer
	Uint32 getTicks();

	//! Adds ms to Timer in ordre to advance it
	/*!
		\param time ms to advance timer
	*/
	void add(Uint32 time);

	//! Sets ms to Timer
	/*!
	\param time New current time and Pause Timer
	*/
	void setTimeAndPause(Uint32 time);

	//! Gets the state of the timer
	/*!
		\return Status of the timer
	*/
	TimerStatus getStatus() { return mStatus; };

	//! Returns current date in number of days since Jan 1, 1970 UTC
	static Uint32 getCurrentSystemDays();
protected:

	Uint32		mStartTicks;	/*!<  Time elapsed since started*/
	Uint32		mPauseTicks;	/*!<  Time elapsed while paused*/
	Uint32		mTicks;			/*!<  Time for timer */
	TimerStatus	mStatus;		/*!<  State of the timer*/
};
#endif

