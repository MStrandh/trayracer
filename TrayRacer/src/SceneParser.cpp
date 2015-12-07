//
//  SceneParser.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneParser.h"

#include <iostream>

SceneParser::SceneParser() {
}

SceneParser::~SceneParser() {

}

const SceneConfiguration* SceneParser::parse(ISceneFile& file) {
	SceneConfiguration* config = new SceneConfiguration();
	
	std::string currentLine = file.readLine();
	
	if(currentLine == "size 320 240") {
		config->setDimension(320, 240);
	}
	
	return config;
}