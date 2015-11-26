//
//  ISceneConfigurationFile.h
//  TrayRacer
//
//  Created by Magnus Strandh on 22/11/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#ifndef ISceneConfigurationFile_h
#define ISceneConfigurationFile_h

class ISceneConfigurationFile {
	
public:
	virtual ~ISceneConfigurationFile() {}
	
	virtual bool isEmpty() = 0;
	virtual std::string readLine() = 0;
};

#endif /* ISceneConfigurationFile_h */
