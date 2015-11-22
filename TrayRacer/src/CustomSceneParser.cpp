//
//  CustomSceneParser.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "CustomSceneParser.h"

#include <iostream>

CustomSceneParser::CustomSceneParser() {
}

CustomSceneParser::~CustomSceneParser() {

}

std::shared_ptr<const SceneConfiguration> CustomSceneParser::parse(std::shared_ptr<SceneConfigurationFile> file) {
	std::shared_ptr<SceneConfiguration> config(new SceneConfiguration());
	
	std::cout << "Line: " << file->readLine() << std::endl;
	
	return config;
}