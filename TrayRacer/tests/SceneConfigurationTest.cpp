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

TEST_CASE("a scene configuration can change scene properties", "[SceneConfiguration]") {
	SceneConfiguration* config = new SceneConfiguration();
			
	SECTION("the width and the height of the scene is changed") {
		config->setDimension(320, 240);
				
		REQUIRE(config->getWidth() == 320);
		REQUIRE(config->getHeight() == 240);
	}
}