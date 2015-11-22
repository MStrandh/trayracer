//
//  SceneConfigurationFile.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneConfigurationFile.h"

SceneConfigurationFile::SceneConfigurationFile(const char* filePath) : inputStream(), outputString("") {
	inputStream.open(filePath);
}

SceneConfigurationFile::~SceneConfigurationFile() {
	
}

bool SceneConfigurationFile::isEmpty() {
	return inputStream.is_open();
}

string SceneConfigurationFile::readLine() {
	getline (inputStream, outputString);
	
	return outputString;
}