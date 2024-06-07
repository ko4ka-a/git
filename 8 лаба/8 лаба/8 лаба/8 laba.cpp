#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct pazient
{
	string surname;
	string name;
	string otchestvo;
	string adress;
	int cart;
	int pol;
	void setpazient(string s, string nam, string o, string a, int c, int p)
	{
		surname = s;
		name = nam;
		otchestvo = o;
		adress = a;
		cart = c;
		pol = p;
	}
};
int main()
{
	setlocale(LC_ALL, "Ru");
	system("chcp 1251");
	system("cls");
	int kol_paz;
	pazient arr[50];
	int num_of_pazient = 0;
	cout << "Введите кол-во пациентов" << endl;
	cin >> kol_paz;
	string s, nam, o, a;
	int c, p;
	for (int i = 0; i < kol_paz; i++)
	{
		cout << "Введите Фамилию Имя Отчество пациента" << i + 1 << ", адрес, номер медицинской карты, номер страхового полиса" << endl;
		cin >> s >> nam >> o >> a >> c >> p;
		arr[i].setpazient(s, nam, o, a, c, p);
		num_of_pazient++;
	}
	//удаление пациентов с заданным номером
	int num_zapret;
	cout << "Введите запретный номер медицинской карты " << endl;
	cin >> num_zapret;
	int arr_z[50];
	int num_of_delete = 0;
	for (int i = 0; i < kol_paz; i++)
	{
		if (arr[i].cart == num_zapret)
		{
			arr_z[num_of_delete] = i;
			num_of_delete++;
		}
	}
	pazient new_arr[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите Фамилию Имя Отчество пациента, адрес,номер медицинской карты, номер страхового полиса" << endl;
		cin >> s >> nam >> o >> a >> c >> p;
		new_arr[i].setpazient(s, nam, o, a, c, p);
	}
	ofstream fout("f1.txt");
	if (fout.is_open())
	{
		for (int i = 0; i < num_of_pazient; ++i)
		{
			bool flag = true;
			for (int j = 0; j < num_of_delete; ++j)
			{
				if (i == arr_z[j])
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				fout << arr[i].surname << ' ' << arr[i].name << ' ' << arr[i].otchestvo << ' ' << arr[i].adress << ' ' << arr[i].cart << ' ' << arr[i].pol << endl;

			}
		}
		for (int i = 0; i < 2; ++i)
		{
			fout << new_arr[i].surname << ' ' << new_arr[i].name << ' ' << new_arr[i].otchestvo << ' ' << new_arr[i].adress << ' ' << new_arr[i].cart << ' ' << new_arr[i].pol << endl;
		}
		cout << "Данные о пациентах успешно записаны в файл." << endl;
		fout.close();
	}
	else
	{
		cerr << "Ошибка открытия файла." << endl;
	}
	return 0;
}
