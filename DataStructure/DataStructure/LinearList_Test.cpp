#include "pch.h"
#include "LinearList_Test.h"

void LinearList_Test::SetUpTestCase(void) {

}

void LinearList_Test::TearDownTestCase(void) {
}

void LinearList_Test::SetUp() {
	for (int i = 0; i < 10; i++) {
		_ve.Insert(i, i * i);
	}
}

void LinearList_Test::TearDown() {
}

TEST_F(LinearList_Test, Length) {
	EXPECT_EQ(10, _ve.Length());
}

TEST_F(LinearList_Test, IsEmpty) {
	EXPECT_FALSE(_ve.IsEmpty());
}

TEST_F(LinearList_Test, Find) {
	int x;
	cout << _ve << endl;
	_ve.Find(3, x);
	EXPECT_EQ(4, x);
}