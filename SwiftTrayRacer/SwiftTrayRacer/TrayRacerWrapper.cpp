//
//  TrayRacerWrapper.cpp
//  SwiftTrayRacer
//
//  Created by Magnus Strandh on 14/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

#include "TrayRacerWrapper.h"
#include "TrayRacer.h"

TrayRacer* racer;

void createTrayRacer(const char* fileData) {
    racer = new TrayRacer();
    racer->setup(fileData);
}

const unsigned char* getTrayRacerImage() {
    return racer->render();
}

void destroyTrayRacer() {
    free(racer);
    racer = NULL;
}