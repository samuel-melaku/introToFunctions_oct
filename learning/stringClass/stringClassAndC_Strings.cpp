#include <iostream>
#include <string>
using std::string; 
using namespace std;

int main()
{
    string greeting = "hello";
    string complete_greeting = greeting + " there";
    complete_greeting += "!";
    cout << complete_greeting << endl; // outputs h, because h is the letter in the 0 position of the string
    cout << complete_greeting.length() << endl;

    char name[] = "Caleb";
    name = "tacobell"; //error because it is too long
}