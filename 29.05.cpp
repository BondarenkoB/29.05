#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int profits[6];
    int totalProfit = 0;

    cout << "Введіть прибуток фірми за кожен місяць:\n";
    for (int i = 0; i < 6; i++) 
    {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profits[i];
        totalProfit += profits[i];
    }

    cout << "Загальний прибуток за 6 місяців: " << totalProfit << endl;

    return 0;
}
