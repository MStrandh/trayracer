//
//  ISceneFile.h
//  TrayRacer
//
//  Created by Magnus Strandh on 22/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef ISceneFile_h
#define ISceneFile_h

class ISceneFile {
	
public:
	virtual ~ISceneFile() {}
	
	virtual bool isEmpty() = 0;
	virtual std::string readLine() = 0;
};

#endif /* ISceneFile_h */
