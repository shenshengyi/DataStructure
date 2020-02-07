#pragma once

#define DATASTRUCTURELIBRARY_EXPORTS

#include <DataStructureLibrary.h>
#include <LinearList.h>
#include <gtest/gtest.h>


class LinearList_Test : public testing::Test
{
public:
protected:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp()override;
    void TearDown()override;

    Container::LinearList<int> _ve;
};

