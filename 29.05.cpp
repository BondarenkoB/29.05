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
    int startMonth, endMonth;

    cout << "Введіть прибуток фірми за кожен місяць:\n";
    for (int i = 0; i < monthsCount; i++) 
    {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profits[i];
    }

    cout << "Введіть початковий і кінцевий місяці діапазону (1-12):\n";
    cout << "Початковий місяць: ";
    cin >> startMonth;
    cout << "Кінцевий місяць: ";
    cin >> endMonth;

    for (int i = startMonth - 1; i < endMonth; i++) 
    {
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

    cout << "Місяць з найбільшим прибутком у обраному діапазоні: " << maxMonth << endl;
    cout << "Місяць з найменшим прибутком у обраному діапазоні: " << minMonth << endl;

    return 0;
}
