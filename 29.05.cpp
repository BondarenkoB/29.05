﻿#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int arr[size];

    cout << "Введіть " << size << " чисел:\n";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    cout << "Масив у зворотньому напрямку:\n";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
