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

SCENARIO("scene configuration file can be parsed", "[SceneParser]") {
	GIVEN("") {
		Mock<TestableSceneFile> mock;
		
		When(Method(mock, readLine)).Return("");

		CSceneParser parser;
		parser.parse(mock.get());
	}
}