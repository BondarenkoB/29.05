#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sidesCount = 5;
    int sides[sidesCount];
    int perimeter = 0;

    cout << "Введіть довжину сторін п'ятикутника:\n";
    for (int i = 0; i < sidesCount; i++)
    {
        cout << "Сторона " << i + 1 << ": ";
        cin >> sides[i];
        perimeter += sides[i];
    }

    cout << "Периметр п'ятикутника: " << perimeter << endl;

    return 0;
}
