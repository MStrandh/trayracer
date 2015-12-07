//
//  Sampler.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-06.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#include "Sampler.h"

Sampler::Sampler(int w, int h)
{
	scanlineWidth = w;
	totalSamples = w * h;
	currentSample = 0;
	
	samples = new int[totalSamples];
}

Sampler::~Sampler()
{
	
}

Sample Sampler::getSample()
{
    int col = currentSample % scanlineWidth;
    int row = (currentSample - col) / scanlineWidth;
    
    Sample s;
    s.y = row;
    s.x = col;
    
    currentSample += 1;
    
    return s;
}

bool Sampler::hasMoreSamples()
{
    return (currentSample + 1) <= totalSamples;
}

int Sampler::getProcessedCount()
{
    return currentSample;
}

int Sampler::getTotalCount()
{
    return totalSamples;
}