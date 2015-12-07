//
//  SceneParser.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneParser.h"

#include <iostream>

CSceneParser::CSceneParser() {
}

CSceneParser::~CSceneParser() {

}

const SceneConfiguration* CSceneParser::parse(ISceneFile& file) {
	SceneConfiguration* config = new SceneConfiguration();
	
	std::cout << "Line: " << file.readLine() << std::endl;
	
	return config;
}