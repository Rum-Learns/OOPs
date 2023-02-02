// C++ program to implement
// the above approach
#include <iostream>
using namespace std;
class item
{
    char name[30];
    int price;

public:
    void getitem();
    void printitem();
};

// Function to get item details
void item::getitem()
{
    cout << "Item Name = ";
    cin >> name;
    cout << "Price = ";
    cin >> price;
}

// Function to print item
// details
void item ::printitem()
{
    cout << "Name : " << name << "\n";
    cout << "Price : " << price << "\n";
}

const int size = 3;

// Driver code
int main()
{
    item t[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Item : " << (i + 1) << "\n";
        t[i].getitem();
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item Details : " << (i + 1) << "\n";
        t[i].printitem();
    }
}
