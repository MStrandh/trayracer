//
//  TrayRacer.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 15/09/14.
//  Copyright (c) 2014 Magnus Strandh. All rights reserved.
//

#include "TrayRacer.h"

using namespace std;

TrayRacer::TrayRacer() : m_Width(320), m_Height(240) {
    std::cout << "TrayRacer v.0.0.1" << std::endl;
}

TrayRacer::~TrayRacer() {
    
}

void TrayRacer::setup(const char* filePath)
{
    film = new Film(m_Width, m_Height);
}

uint8_t* TrayRacer::render()
{
    Sampler* sampler = new Sampler(film->getWidth(), film->getHeight());
    
    Sample sample = Sample();
    Color color = Color();
    
    while (sampler->hasMoreSamples())
    {
        sample = sampler->getSample();
        film->writeColor(sample, color);
    }
    
    return film->getData();
}

int TrayRacer::width()
{
    return m_Width;
}

int TrayRacer::height()
{
    return m_Height;
}

