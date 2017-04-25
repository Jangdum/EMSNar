#include "test.h"
#include <iostream>
#include "VariableDataBase.hpp"

using namespace std;

VariableDataBase varBase;
void TestData();

Test::Test()
{
	TestData();
}

void TestData()
{
	cout << "Ems" << varBase.GetEMSUnit();
}
