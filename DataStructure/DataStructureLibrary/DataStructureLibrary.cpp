// DataStructureLibrary.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "DataStructureLibrary.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
DATASTRUCTURELIBRARY_API int nDataStructureLibrary=0;

// This is an example of an exported function.
DATASTRUCTURELIBRARY_API int fnDataStructureLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDataStructureLibrary::CDataStructureLibrary()
{
    return;
}

void CDataStructureLibrary::test(void) {
    cout << "hello,world" << endl;
}