//
//  main.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 22/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

#include <iostream>

#include "TrayRacer.h"

int main(int argc, const char * argv[]) {
    std::string filePath = "";
    filePath.append("./assets/scene1.test");
    
    std::cout << argv[0] << std::endl;
    std::cout << filePath << std::endl;
    
    TrayRacer* racer = new TrayRacer();
    racer->setup(filePath.c_str());
    racer->render();
    
    return 0;
}
