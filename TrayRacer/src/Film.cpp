//
//  Film.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-06.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#include "Film.h"

Film::Film(int width, int height)
{
    screenWidth = width;
    screenHeight = height;
    
    int filmSize = 4 * screenWidth * screenHeight;
    
    pixels = new uint8_t[filmSize];
    
    memset(pixels, 0, filmSize);
}

Film::~Film()
{
    
}

int Film::getWidth()
{
    return screenWidth;
}

int Film::getHeight()
{
    return screenHeight;
}

uint8_t* Film::getData()
{
    return pixels;
}

void Film::writeColor(const Sample& sample, const Color& color)
{
    uint8_t r = color.getRed() * 255.0f;
    uint8_t g = color.getGreen() * 255.0f;
    uint8_t b = color.getBlue() * 255.0f;
    uint8_t a = 255.0f;
    
    int pos = sample.y * screenWidth + sample.x;
    
    pos *= 4;
    
    pixels[pos + 0] = r;
    pixels[pos + 1] = g;
    pixels[pos + 2] = b;
    pixels[pos + 3] = a;
}