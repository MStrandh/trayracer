//
//  TrayRacer.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 15/09/14.
//  Copyright (c) 2014 Magnus Strandh. All rights reserved.
//

#include "TrayRacer.h"

using namespace std;

TrayRacer::TrayRacer(Film* film)
	: mFilm(film)
{
    std::cout << "TrayRacer v.0.0.1" << std::endl;
}

TrayRacer::~TrayRacer() {
}

uint8_t* TrayRacer::render()
{
    Sampler* sampler = new Sampler(mFilm->getWidth(), mFilm->getHeight());
    
    Sample sample = Sample();
    Color color = Color();
    
    while (sampler->hasMoreSamples())
    {
        sample = sampler->getSample();
        mFilm->writeColor(sample, color);
    }
    
    return mFilm->getData();
}

int TrayRacer::width() const
{
    return mFilm->getWidth();
}

int TrayRacer::height() const
{
    return mFilm->getHeight();
}

