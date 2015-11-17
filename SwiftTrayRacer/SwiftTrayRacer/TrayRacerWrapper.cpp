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

TrayRacer* racer;

void createTrayRacer(const char* fileData) {
	std::shared_ptr<Film> film(new Film(320, 240));
    racer = new TrayRacer(film);
    racer->setup(fileData);
}

const unsigned char* getTrayRacerImage() {
    return racer->render();
}

void destroyTrayRacer() {
    free(racer);
    racer = NULL;
}