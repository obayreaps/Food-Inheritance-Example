#include <string>

using namespace std;

class Food
{
    private:
        string name;
        string origin; //place of food origin
        int rankingHealthiness;
    public:
        Food(const string& name, const string& origin, int rankingHealthiness);
        void displayInfo();
};

class FastFood : public Food
{
    private:
        bool isFastFood;
    public:
        FastFood(const string& name, const string& origin, int rankingHealthiness, bool fastfood);
        void displayInfo();
};

class WholeFood : public Food
{
    private:
        bool isWholeFood;
    public:
        WholeFood(const string& name, const string& origin, int rankingHealthiness, bool wholefood);
        void displayInfo();
};

class Sweets : public Food
{
    private:
        bool isSweet;
    public:
        Sweets(const string& name, const string& origin, int rankingHealthiness, bool sweets);
        void displayInfo();
};