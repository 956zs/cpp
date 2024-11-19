#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "請輸入您的換幣金額:";
    cin >> a;
    b = a / 10;
    c = (a % 10) / 5;
    d = (a % 5);
    cout << a << " 元共可兌換零錢: 拾元:" << b << "個 " << "伍元:" << c << "個 " << "壹元:" << d << "個";
}