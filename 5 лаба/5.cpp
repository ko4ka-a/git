#include <iostream> 
using namespace std;
int f(int a[100][100], int line, int column, int m)// ����� �������, ������� ����� ������� ����� ��������� ���� ������� ��������� �������. ��� ����� ������� ������ ��� ���������� �������, ��� ���-�� �����, ���-�� �������� � ����������� �������
{
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i >= 1) && (j >= 0) && (i - j > 0))// ����� ����� ������� �������, ������� �������, ��� �������� ���� ������� ��������� �� i-������ ������ ���������� � 1, j-������� � 0 � ������ ����������� ����������� ����� ������-����� ������� ������ 0, ���� ����� ����� 0, �� ��� ������� ������� ���������, ���� ������ �������, �� ��� ����� ������� ���� ������� ���������
            {
                s += a[i][j];// ��������� ����� ��������� ���� ������� ���������
            }
        }
    }
    return s;// � ���� ������� ������������ ����� ���������
}
int main()
{
    setlocale(LC_ALL, "RU");
    int m,n;// ������� ������ ��� ����������� �������-m � ��� ���-�� ������-n
    cout << "������� ����������� �������" << endl;
    cin >> m;
    cout << "������� ���������� ������" << endl;
    cin >> n;
    int a[100][100];// ������� ������ ��� ���������� �������
    int max = 0;// ������� ������ ��� ������������� �������� � ����������� ��� � 0
    while (n > 0)// ��������� ����, ����� ��������� ����� ��� ���� ������
    {
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = rand() % 101 - 50;// ����������� ������ �������� �������������� � �������������� �������
                cout << a[i][j] << " ";// ����� �������
            }
            cout << endl;
        }
        f(a, n, n, m);// ��������� �������, ����� ����������� ����� � ������ �������
        n--;// ����������� ���������� ������
        cout << f(a, n, n, m);// ����� �����
        int ss = f(a, n, n, m);// ���������� ������ ��� ����� ss � �������������� � ������ ��������� ��� ������������ ���������
        if (max < ss)// ���� ss ����� ������,�� max ������� �������� ss, ���� ������, � max ������ �� ����������
        {
            max = ss;// Max ��������� ss ��� ������������ ���������
        }
    }
    cout << endl;
    cout << max;// ����� ������������ �����
    return 0;
}