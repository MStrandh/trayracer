//
//  TrayRacerWrapper.cpp
//  SwiftTrayRacer
//
//  Created by Magnus Strandh on 14/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

#include "TrayRacerWrapper.h"
#include "TrayRacer.h"
#include "Film.h"
#include "CustomSceneParser.h"
#include "SceneConfiguration.h"
#include "SceneConfigurationFile.h"

std::shared_ptr<TrayRacer> racer;

void createTrayRacer(const char* filePath) {
	std::shared_ptr<Film> film(new Film(320, 240));
	std::shared_ptr<CustomSceneParser> parser(new CustomSceneParser());
	std::shared_ptr<SceneConfigurationFile> sceneConfigFile(new SceneConfigurationFile(filePath));
	std::shared_ptr<const SceneConfiguration> sceneConfig = parser->parse(sceneConfigFile);
	
	racer = std::make_shared<TrayRacer>(film);
}

const unsigned char* getTrayRacerImage() {
    return racer->render();
}