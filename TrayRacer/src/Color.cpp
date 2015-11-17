//
//  Color.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-10.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#include "Color.h"

#include <algorithm>

float Color::clamp(float val)
{
    return std::max(std::min(val, 1.0f), 0.0f);
}

Color Color::operator+(Color clr)
{
    float newRed = clamp(r + clr.getRed());
    float newGreen = clamp(g + clr.getGreen());
    float newBlue = clamp(b + clr.getBlue());

    return Color(newRed, newGreen, newBlue);
}

Color Color::operator* (float val)
{
    float newRed = clamp(r * val);
    float newGreen = clamp(g * val);
    float newBlue = clamp(b * val);
    
    return Color(newRed, newGreen, newBlue);
}

Color Color::operator* (Color clr)
{
    float newRed = clamp(r * clr.getRed());
    float newGreen = clamp(g * clr.getGreen());
    float newBlue = clamp(b * clr.getBlue());
    
    return Color(newRed, newGreen, newBlue);
}

Color Color::operator/ (float val)
{
    float newRed = clamp(r / val);
    float newGreen = clamp(g / val);
    float newBlue = clamp(b / val);
    
    return Color(newRed, newGreen, newBlue);
}

Color* Color::operator+= (Color rhs)
{
    this->setRed(r + rhs.getRed());
    this->setGreen(g + rhs.getGreen());
    this->setBlue(b + rhs.getBlue());
    
    return this;
}

float* Color::toFloatArray()
{
    float* color = new float[3];
    
    color[0] = r;
    color[1] = g;
    color[2] = b;
    
    return color;
}

void Color::setRed(float red)
{
    r = clamp(red);
}

void Color::setGreen(float green)
{
    g = clamp(green);
}

void Color::setBlue(float blue)
{
    b = clamp(blue);
}

void Color::setRGB(float red, float green, float blue)
{
    setRed(red);
    setGreen(green);
    setBlue(blue);
}

float Color::getRed() const
{
    return r;
}

float Color::getGreen() const
{
    return g;
}

float Color::getBlue() const
{
    return b;
}

void Color::printColor() {
    printf("Color: [%f, %f, %f]\n", r, g, b);
}

Color::Color() : Color(0.0f, 0.0f, 0.0f)
{
    
}

Color::Color(float red, float green, float blue)
{
    setRGB(red, green, blue);
}

Color::~Color()
{
    
}