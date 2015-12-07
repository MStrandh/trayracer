//
//  SceneConfigurationTest.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 07/12/15.
//  Copyright © 2015 Magnus Strandh. All rights reserved.
//

#include "catch.hpp"
#include "fakeit.hpp"

#include "SceneConfiguration.h"

using namespace std;
using namespace fakeit;

SCENARIO("a scene configuration can change scene properties", "[SceneConfiguration]") {
	GIVEN("a newly created scene") {
		SceneConfiguration* config = new SceneConfiguration();
		
		WHEN("the dimensions are changed") {
			config->setDimension(320, 240);
			
			THEN("the width and the height of the scene is changed") {
				REQUIRE(config->getWidth() == 320);
				REQUIRE(config->getHeight() == 240);
			}
		}
	}
}