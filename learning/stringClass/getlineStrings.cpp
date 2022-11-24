#include <iostream>
#include <string>
using namespace std;
using namespace string;

int main()
{
    string greeting;
    getline(cin, greeting);
    cout << greeting << endl;
    cin.getline() // this version gets numbers as well, and the line before that gets strings
}