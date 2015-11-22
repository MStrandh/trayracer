//
//  CustomSceneParser.h
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef CustomSceneParser_h
#define CustomSceneParser_h

#include <iostream>

#include "SceneConfiguration.h"
#include "SceneConfigurationFile.h"

class CustomSceneParser {
	
public:
	CustomSceneParser();
	virtual ~CustomSceneParser();
	
	std::shared_ptr<const SceneConfiguration> parse(std::shared_ptr<SceneConfigurationFile> file);
};

#endif /* CustomSceneParser_h */
