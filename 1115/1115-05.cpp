#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "請輸入車票票價:";
    cin >> a;
    b = a / 50;
    c = (a % 50) / 10;
    d = (a % 10) / 5;
    e = (a % 5) / 1;
    cout << a << " 元，各種幣值的最少數量為:\n"
         << "伍拾圓: " << b << " 個\n"
         << "拾圓:   " << c << " 個\n"
         << "伍圓:   " << d << " 個\n"
         << "壹圓:   " << e << " 個";
}