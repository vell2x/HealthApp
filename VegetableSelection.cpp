#include "VegetableSelection.h"

VegetableSelection::VegetableSelection()
{
	vegetableMap.insert(pair<string, string>("Eye Health", "Kale"));
	vegetableMap.insert(pair<string, string>("Hair Growth", "Spinach"));
	vegetableMap.insert(pair<string, string>("Teeth and Gums", "Celery"));
	vegetableMap.insert(pair<string, string>("Skin", "Broccoli"));
	vegetableMap.insert(pair<string, string>("Weight Loss", "Asparagus"));
	vegetableMap.insert(pair<string, string>("Digestion", "Cabbage"));
	vegetableMap.insert(pair<string, string>("Post Surgery", "Carrots"));
	vegetableMap.insert(pair<string, string>("Good Sleep", "Carrots"));
	vegetableMap.insert(pair<string, string>("Blood Flow", "Collard Greens"));
	vegetableMap.insert(pair<string, string>("Healthy Heart", "Peas"));
}

VegetableSelection::~VegetableSelection()
{
}

vector<string> VegetableSelection::GetRequestedVegetables(vector<string> list)
{
	for (auto i = list.begin(); i != list.end(); i++)
	{
		if (vegetableMap.find(*i) != vegetableMap.end())
			nutritionVegetables.push_back(vegetableMap.at(*i));
	}
	return nutritionVegetables;
}