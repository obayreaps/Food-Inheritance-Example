#include "Food.h"
#include <iostream>

using namespace std;

Food::Food(const string& name, const string& origin, int rankingHealthiness)
: name(name), origin(origin), rankingHealthiness(rankingHealthiness) {}

void Food::displayInfo()
{
    cout << "Name: " << name << endl;
    cout << "Origin: " << origin << endl;
    cout << "Healthiness Ranking: " << rankingHealthiness << endl;
}

FastFood::FastFood(const string& name, const string& origin, int rankingHealthiness, bool fastfood)
: Food(name, origin, rankingHealthiness), isFastFood(fastfood) {}

void FastFood::displayInfo()
{
    Food::displayInfo();
    cout << "FastFood: " << (isFastFood ? "Yes" : "No") << endl;
}

WholeFood::WholeFood(const string& name, const string& origin, int rankingHealthiness, bool wholefood)
: Food(name, origin, rankingHealthiness), isWholeFood(wholefood){}

void WholeFood::displayInfo()
{
    Food::displayInfo();
    cout << "Type: " << (isWholeFood ? "Fruit" : "Vegetable") << endl;
}

Sweets::Sweets(const string& name, const string& origin, int rankingHealthiness, bool sweet)
: Food(name, origin, rankingHealthiness), isSweet(sweet) {}

void Sweets::displayInfo()
{
    Food::displayInfo();
    cout << "Sweets: " << (isSweet ? "Yes" : "No") << endl;
}