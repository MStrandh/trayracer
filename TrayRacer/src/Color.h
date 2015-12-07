//
//  Color.h
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-10.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#ifndef __TrayRacer__Color__
#define __TrayRacer__Color__

#include <iostream>

class Color {
    
private:
    float r;
    float g;
    float b;
    
    float clamp(float val);
    
public:
	Color();
	Color(float red, float green, float blue);
	
	virtual ~Color();
	
    Color operator+ (Color clr);
    Color operator* (float val);
    Color operator* (Color clr);
    Color operator/ (float val);
    Color* operator+= (Color rhs);
    
    float* toFloatArray();
    
    void setRed(float red);
    void setGreen(float green);
    void setBlue(float blue);
    
    void setRGB(float red, float green, float blue);
    
    float getRed() const;
    float getGreen() const;
    float getBlue() const;
    
    void printColor();
};

#endif /* defined(__TrayRacer__Color__) */
