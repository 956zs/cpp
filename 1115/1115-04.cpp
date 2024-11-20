#include <iostream>
using namespace std;

int main()
{
    float c, f;
    cout << "請輸入華氏的溫度：";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "換算成攝氏溫度為 " << c << "度";
}