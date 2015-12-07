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

std::shared_ptr<TrayRacer> racer;

void createTrayRacer(const char* filePath) {
	Film* film = new Film(320, 240);
	TrayRacer* trayRacer = new TrayRacer(film);
	
	racer = std::shared_ptr<TrayRacer>(trayRacer);
}

const unsigned char* getTrayRacerImage() {
    return racer->render();
}