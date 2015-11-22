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
	
public:
	SceneConfiguration();
	virtual ~SceneConfiguration();
	
	int getWidth() const { return 360; };
	int getHeight() const { return 240; };
};

#endif /* SceneConfiguration_h */
