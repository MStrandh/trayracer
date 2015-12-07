//
//  SceneConfiguration.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneConfiguration.h"

SceneConfiguration::SceneConfiguration()
	: mSceneWidth(0)
	, mSceneHeight(0)
{
	
}

SceneConfiguration::~SceneConfiguration() {
	
}

void SceneConfiguration::setDimension(int width, int height) {
	mSceneWidth = width;
	mSceneHeight = height;
}

int SceneConfiguration::getWidth() const {
	return mSceneWidth;
};

int SceneConfiguration::getHeight() const {
	return mSceneHeight;
};