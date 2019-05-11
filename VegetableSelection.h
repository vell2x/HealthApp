#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class VegetableSelection
{
public:
	VegetableSelection();
	~VegetableSelection();
	vector<string> GetRequestedVegetables(vector<string> list);

private:
	map<string, string> vegetableMap;
	vector<string> nutritionVegetables;
};

