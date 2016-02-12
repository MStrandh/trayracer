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
	
	bool isReady() {
		return true;
	};
	
	bool canReadMore() {
		return true;
	}
	
	std::string readLine() {
		return "";
	};
};

TEST_CASE("scene file header can be parsed", "[SceneParser]") {
	Mock<TestableSceneFile> mock;
	SceneParser* parser = new SceneParser();

	SECTION("the dimensions of the scene has changed") {
		When(Method(mock, canReadMore)).Return(true, false);
		When(Method(mock, readLine)).Return("size 320 240");
		
		const SceneConfiguration* sceneConfig = parser->parse(mock.get());
		
		REQUIRE(sceneConfig->getWidth() == 320);
		REQUIRE(sceneConfig->getHeight() == 240);
	}
}