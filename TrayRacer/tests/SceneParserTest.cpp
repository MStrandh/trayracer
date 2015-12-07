//
//  SceneParserTest.cpp
//  TrayRacer
//
//  Created by Magnus Strandh on 21/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

#include "catch.hpp"
#include "fakeit.hpp"

#include "SceneParser.h"
#include "ISceneFile.h"

using namespace std;
using namespace fakeit;

class TestableSceneFile : public ISceneFile {
	
public:
	TestableSceneFile() {};
	
	~TestableSceneFile() {};
	
	bool isEmpty() {
		return true;
	};
	
	std::string readLine() {
		return "";
	};
};

SCENARIO("scene file header can be parsed", "[SceneParser]") {
	GIVEN("a valid scene file") {
		WHEN("reading a size tag") {
			Mock<TestableSceneFile> mock;
		
			When(Method(mock, readLine)).Return("size 320 240");

			SceneParser* parser = new SceneParser();
			const SceneConfiguration* sceneConfig = parser->parse(mock.get());
			
			THEN("the dimensions of the scene has changed") {
				REQUIRE(sceneConfig->getWidth() == 320);
				REQUIRE(sceneConfig->getHeight() == 240);
			}
		}
	}
}