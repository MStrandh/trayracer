//
//  SceneFile.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "SceneFile.h"

CSceneFile::CSceneFile(const char* filePath) : inputStream(), outputString("") {
	inputStream.open(filePath);
}

CSceneFile::~CSceneFile() {
	
}

bool CSceneFile::isEmpty() {
	return inputStream.is_open();
}

string CSceneFile::readLine() {
	getline (inputStream, outputString);
	
	return outputString;
}