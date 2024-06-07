#include <iostream>
using namespace std;
int main() 
{
    system("chcp 1251");
    int matrix[100][100];
    int n,m,k;
    int column[100];
    cout << "Введите количество строк:";
    cin >> n;
    cout << "Введите количество столбцов:";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            matrix[i][j] = rand() % 101 - 50;// Заполняется массив рандомно положительными и отрицательными числами
            cout << matrix[i][j] << " ";// Вывод матрицы
        }
        cout << endl;
    }
    cout << "Введите номер столбца, который необходимо вставить:";
    cin >> k;
    if (k > m) 
    {
        cout << "Некорректное значение k" << endl;
    }
    else
    {
        cout << "Введите элементы столбца:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> column[i];
        }
        cout << "Новая матрица:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == k - 1)
                {
                    cout << column[i] << " " << matrix[i][j] << " ";
                }
                else
                {
                    cout << matrix[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}


