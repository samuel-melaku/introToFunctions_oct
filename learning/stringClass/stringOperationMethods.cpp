#include <iostream>
#include <string>
using namespace std;
using namespace string;

int main()
{
    string greeting = "What the heck?";
    greeting.replace(greeting.find("heck"), 4, "****");
    cout << greeting << endl;

    string greeting = "What is up?";
    cout << greeting.find_first_of("!") << endl;
    // npos == -1
    unsigned long x = -1 // breaks
}