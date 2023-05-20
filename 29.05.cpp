#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    double arr[size];

    cout << "Введіть " << size << " чисел:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    double sumOfNegatives = 0;
    double productBetweenMinMax = 1;
    double productOfEvenIndexes = 1;
    double sumBetweenFirstAndLastNegative = 0;
    bool firstNegativeFound = false;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) 
        {
            sumOfNegatives += arr[i];
        }

        if (arr[i] > arr[size - 1] && arr[i] < arr[0]) 
        {
            productBetweenMinMax *= arr[i];
        }

        if (i % 2 == 0) 
        {
            productOfEvenIndexes *= arr[i];
        }

        if (arr[i] < 0) 
        {
            if (!firstNegativeFound) 
            {
                firstNegativeFound = true;
            }


            else {
                sumBetweenFirstAndLastNegative += arr[i];
            }
        }
    }

    cout << "Сума від'ємних чисел: " << sumOfNegatives << endl;
    cout << "Добуток елементів, що розташовані між мінімальним та максимальним елементами: " << productBetweenMinMax << endl;
    cout << "Добуток елементів з парними індексами: " << productOfEvenIndexes << endl;
    cout << "Сума елементів, що розташовані між першим та останнім від'ємними елементами: " << sumBetweenFirstAndLastNegative << endl;

    return 0;
}
