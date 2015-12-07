//
//  SceneConfiguration.h
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef SceneConfiguration_h
#define SceneConfiguration_h

#include <stdio.h>

class SceneConfiguration {
	
private:
	int mSceneWidth;
	int mSceneHeight;
	
public:
	SceneConfiguration();
	virtual ~SceneConfiguration();
	
	void setDimension(int width, int height);
	
	int getWidth() const;
	int getHeight() const;
};

#endif /* SceneConfiguration_h */
