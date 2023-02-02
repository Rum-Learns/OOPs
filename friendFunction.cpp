// C++ Program to demonstrate the
// fucntioning of a friend class
#include <iostream>
using namespace std;

class MainClass
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    MainClass()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class FriendClass;
};

// Here, class F is declared as a
// friend inside class MainClass. Therefore,
// F is a friend of class MainClass. Class F
// can access the private members of
// class MainClass.
class FriendClass
{
public:
    void display(MainClass &t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main()
{
    MainClass g;
    FriendClass fri;
    fri.display(g);
    return 0;
}
