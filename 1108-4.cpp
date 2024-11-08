#include <iostream>
using namespace std;

int main()
{
    string YYYY, MM, DD;
    cout << "有效期限年月日(以空白隔開年月日):";
    cin >> YYYY >> MM >> DD;
    cout << "本項產品的有效日期為:西元" << YYYY << "年" << MM << "月" << DD << "日";
    return 0;
}