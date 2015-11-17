//
//  Sampler.h
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-06.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#ifndef __TrayRacer__Sampler__
#define __TrayRacer__Sampler__

#include <iostream>

#include "Sample.h"

class Sampler {
    
private:
    int scanlineWidth;
    int totalSamples;
    int currentSample;
    
    int *samples;
    
public:
    Sample getSample();
    bool hasMoreSamples();
    
    int getProcessedCount();
    int getTotalCount();
    
    Sampler(int w, int h);
    virtual ~Sampler();
};

#endif /* defined(__TrayRacer__Sampler__) */
