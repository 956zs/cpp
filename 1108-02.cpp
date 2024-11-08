#include <iostream>
using namespace std;

int main()
{
    string s;
    s = "*";
    for (int i = 0; i < 5; i++)
    {
        cout << s << "\n";
        s += "*";
    }
    return 0;
}