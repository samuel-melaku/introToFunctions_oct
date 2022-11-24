#include <iostream>
using namespace std;

int main()
{
    int age = 11;
    if(age < 13)
    {
        cout << "You're not old enough\n";
    } else if(age < 19)
    {
        cout << "You are almost 19\n";
    }
     else {
        cout << "False";
    }
    return 0;
}