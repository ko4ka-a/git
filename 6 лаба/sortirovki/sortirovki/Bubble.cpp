#pragma once
#include <iostream>
using namespace std;
void BubbleSort(int* masiv)
{
    if (sizeof(masiv) < 2)
    {
        return;
    }
    for (int i = 0; i < sizeof(masiv) - 1; i++)
    {
        for (int j = 0; j < sizeof(masiv) - i - 1; j++)
        {
            if (masiv[j] > masiv[j + 1])
            {
                swap(masiv[i], masiv[i + 1]);
            }
        }
    }
}
void CountingSort(int* masiv) {
    if (sizeof(masiv) < 2) {
        return;
    }

    int mn = masiv[0];
    int mx = masiv[0];
    for (int i = 1; i < sizeof(masiv); i++) {
        if (mx < masiv[i]) {
            mx = masiv[i];
        }
        else if (mn > masiv[i]) {
            mn = masiv[i];
        }
    }
    int countingArrLenght = mx - mn + 1;
    int* countingArr = new int[countingArrLenght] {};
    for (int i = 0; i < sizeof(masiv); i++) {
        countingArr[masiv[i] - mn]++;
    }
    int index = 0;
    for (int i = 0; i < countingArrLenght; i++) {
        for (int j = 0; j < countingArr[i]; j++) {
            masiv[index++] = i + mn;
        }
    }

    delete[] countingArr;
}
int main() 
{
    system("chcp 1251");
    int masiv[100];
    int n;
    cout << "¬ведите размерность массива" << endl;
    cin >> n;
    cout << "¬ведите массив" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> masiv[i];
    }
    BubbleSort(masiv);
    cout << "ќтсортированный массив" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << masiv[i];
    }
    return 0;
}