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
#include "SceneParser.h"
#include "SceneConfiguration.h"
#include "SceneFile.h"

TrayRacer* racer;
const SceneConfiguration* config;

void parseScene(const char* filePath) {
	SceneFile file(filePath);
	SceneParser* parser = new SceneParser();
	
	config = parser->parse(file);
}

void createTrayRacer() {
	Film* film = new Film(config->getWidth(), config->getHeight());
	racer = new TrayRacer(film);
}

const unsigned char* getTrayRacerImage() {
    return racer->render();
}

int getImageWidth() {
	return config->getWidth();
}

int getImageHeight() {
	return config->getHeight();
}