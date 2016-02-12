//
//  SceneParser.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneParser.h"

#include <sstream>

SceneParser::SceneParser() {
}

SceneParser::~SceneParser() {

}

void SceneParser::parseSize(SceneConfiguration* config, stringstream& line) {
	int width;
	int height;
	
	line >> width;
	line >> height;
	
	config->setDimension(width, height);
}

const SceneConfiguration* SceneParser::parse(ISceneFile& file) {
	SceneConfiguration* config = new SceneConfiguration();
	
	string currentLine;
	string cmd;
	
	while (file.canReadMore()) {
		currentLine = file.readLine();
		
		//if (currentLine.find_first_not_of(" \t\r\n") != string::npos) {
			stringstream strStream(currentLine);
			strStream >> cmd;
		
			if(cmd == "size") {
				parseSize(config, strStream);
			}
		//}
	}
	
	return config;
}