#include "FruitSelection.h"



FruitSelection::FruitSelection()
{
	fruitMap.insert(pair<string, string>("Eye Health", "Oranges"));
	fruitMap.insert(pair<string, string>("Hair Growth", "Bananas"));
	fruitMap.insert(pair<string, string>("Teeth and Gums", "Apples"));
	fruitMap.insert(pair<string, string>("Skin", "Kiwi"));
	fruitMap.insert(pair<string, string>("Weight Loss", "Grapefruit"));
	fruitMap.insert(pair<string, string>("Digestion", "Apples"));
	fruitMap.insert(pair<string, string>("Post Surgery", "Grapes"));
	fruitMap.insert(pair<string, string>("Good Sleep", "Kiwi"));
	fruitMap.insert(pair<string, string>("Blood Flow", "Pomegranate"));
	fruitMap.insert(pair<string, string>("Healthy Heart", "Avocados"));
}


FruitSelection::~FruitSelection()
{
}

vector<string> GetRequestedFruits(vector<string> list)
{
	
}
