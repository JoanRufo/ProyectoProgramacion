#pragma once
#ifndef SCENE_H
#define SCENE_H
class Scene
{
public:
	//! Constructor of an empty Scene.
	Scene();

	//! Destructor
	virtual ~Scene();

	//! Initializes the Scene.
	virtual void init();

	//! Function to withdraw anything owned by the class and to call init
	virtual void reinit();

	//! Handles the drawing of the scene
	virtual void render();

	//! Handles the updating of the scene
	virtual void update();

	void setReInit(bool loaded = true) { mReinit = loaded; };
	bool mustReInit() { return mReinit; };

protected:
	bool		mReinit;			/*!<  Reload when returning to scene*/
};

#endif

