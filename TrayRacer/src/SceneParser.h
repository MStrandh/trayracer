//
//  SceneParser.h
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef SceneParser_h
#define SceneParser_h

#include <iostream>

#include "SceneConfiguration.h"
#include "ISceneFile.h"

using namespace std;

class SceneParser {
	
private:
	void parseSize(SceneConfiguration* config, stringstream& line);
	
public:
	SceneParser();
	virtual ~SceneParser();
	
	const SceneConfiguration* parse(ISceneFile& file);
};

#endif /* SceneParser_h */
