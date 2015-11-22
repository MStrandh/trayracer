//
//  TrayRacerWrapper.h
//  SwiftTrayRacer
//
//  Created by Magnus Strandh on 14/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

#ifndef __SwiftTrayRacer__TrayRacerWrapper__
#define __SwiftTrayRacer__TrayRacerWrapper__

#ifdef __cplusplus
extern "C" {
#endif

    void createTrayRacer(const char* filePath);
    const unsigned char* getTrayRacerImage();
    
#ifdef __cplusplus
}
#endif

#endif /* defined(__SwiftTrayRacer__TrayRacerWrapper__) */
