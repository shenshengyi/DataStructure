// DataStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>
//#include "School_Environment_Test.h"
int main(int argc,char**argv)
{
	testing::InitGoogleTest(&argc, argv);
	/*testing::AddGlobalTestEnvironment(new School_Environment_Test);*/
	return RUN_ALL_TESTS();
}
