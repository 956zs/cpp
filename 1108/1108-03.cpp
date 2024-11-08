#include <iostream>
using namespace std;

int main()
{
    string setnumber, name, birthday, hobby;

    cout << "請輸入你的座號:";
    cin >> setnumber;
    cout << "請輸入你的姓名:";
    cin >> name;
    cout << "請輸入你的生日:";
    cin >> birthday;
    cout << "請輸入你的興趣:";
    cin >> hobby;

    cout << "\n嗨!" + setnumber + "號" + name + "您好，\n您的生日是" + birthday + "，興趣是" + hobby + "。\n很高興認識您。";

    return 0;
}