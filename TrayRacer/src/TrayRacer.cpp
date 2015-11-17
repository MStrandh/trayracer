//
//  TrayRacer.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 15/09/14.
//  Copyright (c) 2014 Magnus Strandh. All rights reserved.
//

#include "TrayRacer.h"

using namespace std;

TrayRacer::TrayRacer(shared_ptr<Film> film) {
    std::cout << "TrayRacer v.0.0.1" << std::endl;
	
	mFilm = film;
}

TrayRacer::~TrayRacer() {
    
}

void TrayRacer::setup(const char* filePath)
{
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

int TrayRacer::width()
{
    return mFilm->getWidth();
}

int TrayRacer::height()
{
    return mFilm->getHeight();
}

