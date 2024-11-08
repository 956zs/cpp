#include <iostream>
using namespace std;

int main()
{
    string YYYY, MM, DD;
    cout << "有效期限 西元年分為:";
    cin >> YYYY;
    cout << "有效期限 月份為:";
    cin >> MM;
    cout << "有效期限 日期為:";
    cin >> DD;
    cout << "本項產品的有效日期為:西元" << YYYY << "年" << MM << "月" << DD << "日";
    return 0;
}