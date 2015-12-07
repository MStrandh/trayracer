//
//  Film.h
//  TrayRacer
//
//  Created by Magnus Strandh on 2012-12-06.
//  Copyright (c) 2012 Magnus Strandh. All rights reserved.
//

#ifndef __TrayRacer__Film__
#define __TrayRacer__Film__

#include <iostream>

#include "Sample.h"
#include "Color.h"

class Film {
    
private:
    int screenWidth;
    int screenHeight;
    
    uint8_t *pixels;
    
public:
    Film(int width, int height);
    virtual ~Film();
    
    void writeColor(const Sample& sample, const Color& color);
    
    int getWidth() const;
    int getHeight() const;
    
    uint8_t* getData() const;
};

#endif /* defined(__TrayRacer__Film__) */
