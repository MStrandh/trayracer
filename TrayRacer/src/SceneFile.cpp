//
//  SceneFile.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneFile.h"

SceneFile::SceneFile(const char* filePath) : inputStream(), outputString("") {
	inputStream.open(filePath);
}

SceneFile::~SceneFile() {
	
}

bool SceneFile::isReady() {
	return inputStream.is_open();
}

bool SceneFile::canReadMore() {
	return inputStream.peek() != ifstream::traits_type::eof();
}

string SceneFile::readLine() {
	getline(inputStream, outputString);
	
	return outputString;
}