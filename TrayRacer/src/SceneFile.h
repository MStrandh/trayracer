//
//  SceneFile.h
//  TrayRacer
//
//  Created by Magnus Strandh on 18/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef SceneFile_h
#define SceneFile_h

#include <iostream>
#include <fstream>

#include "ISceneFile.h"

using namespace std;

class CSceneFile : public ISceneFile {
private:
	ifstream inputStream;
	string outputString;
	
public:
	CSceneFile(const char* filePath);
	virtual ~CSceneFile();
	
	bool isEmpty() override;
	string readLine() override;
};

#endif /* SceneFile_h */
