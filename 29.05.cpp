#include <iostream>
#include <limits>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int monthsCount = 12;
    int profits[monthsCount];
    int maxProfit = numeric_limits<int>::min();
    int minProfit = numeric_limits<int>::max();
    int maxMonth, minMonth;

    cout << "Введіть прибуток фірми за кожен місяць:\n";
    for (int i = 0; i < monthsCount; i++) 
    {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profits[i];

        if (profits[i] > maxProfit)
        {
            maxProfit = profits[i];
            maxMonth = i + 1;
        }

        if (profits[i] < minProfit) 
        {
            minProfit = profits[i];
            minMonth = i + 1;
        }
    }

    cout << "Місяць з найбільшим прибутком: " << maxMonth << endl;
    cout << "Місяць з найменшим прибутком: " << minMonth << endl;

    return 0;
}
