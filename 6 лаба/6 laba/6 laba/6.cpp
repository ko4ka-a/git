#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    string str;
    string result = "";
    cout << "Введите строку: ";
    getline(cin, str);
    for (int i=0;i<str.length();i++) 
    {
        if (!isdigit(str[i]))
        {
         result += str[i];
        }
    }
    cout << "Исходная строка: " << str << endl;
    cout << "Строка без цифр: " << result <<endl;
    char d = 'A';
    for (int i = 0; i < result.length(); i++) 
    {
        if (isalpha(result[i])) 
        {
            result[i] = d;
            d++;
        }
    }
    cout << "Строка без цифр и с идентификаторами: " << result <<endl;
    return 0;
}