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
	
	std::shared_ptr<Film> film(new Film(320, 240));
	
    TrayRacer* racer = new TrayRacer(film);
    racer->render();
    
    return 0;
}
