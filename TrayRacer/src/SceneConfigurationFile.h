//
//  SceneConfigurationFile.h
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef SceneConfigurationFile_h
#define SceneConfigurationFile_h

#include <iostream>
#include <fstream>

using namespace std;

class SceneConfigurationFile {
private:
	ifstream inputStream;
	string outputString;
	
public:
	SceneConfigurationFile(const char* filePath);
	virtual ~SceneConfigurationFile();
	
	bool isEmpty();
	string readLine();
};

#endif /* SceneConfigurationFile_h */