#include "NutritionRequest.h"

NutritionRequest::NutritionRequest()
{
}

NutritionRequest::~NutritionRequest()
{
}

void NutritionRequest::AddItemToList()
{
	string cont = "Y";

	while (cont.compare("N") != 0 && cont.compare("n") != 0) 
	{
		string input = "";
		int selection;

		cout << "1) Eye Health" << endl;
		cout << "2) Hair Growth" << endl;;
		cout << "3) Teeth and Gums" << endl;
		cout << "4) Skin" << endl;
		cout << "5) Weight Loss" << endl;
		cout << "6) Digestion" << endl;
		cout << "7) Post Surgery" << endl;
		cout << "8) Good Sleep" << endl;
		cout << "9) Blood Flow" << endl;
		cout << "10) Healthy Heart" << endl;
		cout << "Please select a health benefit: ";

		cin >> selection;

		switch (selection)
		{
		case 1:
			list.push_back("Eye Health");
			break;
		case 2:
			list.push_back("Hair Growth");
			break;
		case 3:
			list.push_back("Teeth and Gums");
			break;
		case 4:
			list.push_back("Skin");
			break;
		case 5:
			list.push_back("Weight Loss");
			break;
		case 6:
			list.push_back("Digestion");
			break;
		case 7:
			list.push_back("Post Surgery");
			break;
		case 8:
			list.push_back("Good Sleep");
			break;
		case 9:
			list.push_back("Blood Flow");
			break;
		case 10:
			list.push_back("Healthy Heart");
			break;
		default:
			continue;
		}
		cout << "Do you want to add another health benefit?(y/n): ";
		cin >> cont;
	}
	

	
}

void NutritionRequest::PrintList()
{
	for (auto i = list.begin(); i != list.end(); i++)
	{
		cout << *i << endl;
	}
}

vector<string> NutritionRequest::getList()
{
	return list;
}