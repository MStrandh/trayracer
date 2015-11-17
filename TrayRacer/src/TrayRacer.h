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
    int m_Width;
    int m_Height;
    
    Film *film;

    int maxRecursionDepth;
        
public:
    TrayRacer();
    virtual ~TrayRacer();
    
    void setup(const char* filePath);
    uint8_t* render();
    int width();
    int height();
};

#endif /* defined(__TrayRacer__TrayRacer__) */
