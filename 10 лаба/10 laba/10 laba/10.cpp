#include <iostream>
using namespace std;
int main() 
{
    system("chcp 1251");
    int matrix[100][100];
    int n,m,k;
    int column[100];
    cout << "������� ���������� �����:";
    cin >> n;
    cout << "������� ���������� ��������:";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            matrix[i][j] = rand() % 101 - 50;// ����������� ������ �������� �������������� � �������������� �������
            cout << matrix[i][j] << " ";// ����� �������
        }
        cout << endl;
    }
    cout << "������� ����� �������, ������� ���������� ��������:";
    cin >> k;
    if (k > m) 
    {
        cout << "������������ �������� k" << endl;
    }
    else
    {
        cout << "������� �������� �������:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> column[i];
        }
        cout << "����� �������:" << endl;
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


