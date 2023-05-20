#include <iostream>
#include <limits>
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

    int minElement = numeric_limits<int>::max();
    int maxElement = numeric_limits<int>::min();

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }

        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }

    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}
