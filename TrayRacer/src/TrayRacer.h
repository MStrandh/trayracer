//
//  TrayRacer.h
//  TrayRacer
//
//  Created by Magnus Strandh on 15/09/14.
//  Copyright (c) 2014 Magnus Strandh. All rights reserved.
//

#ifndef __TrayRacer__TrayRacer__
#define __TrayRacer__TrayRacer__

#include <iostream>

#include "Film.h"
#include "Sampler.h"

class TrayRacer {
    
private:
	Film* mFilm;

    int maxRecursionDepth;
        
public:
	TrayRacer(Film* film);
    virtual ~TrayRacer();
    
    uint8_t* render();
    int width() const;
    int height() const;
};

#endif /* defined(__TrayRacer__TrayRacer__) */
