#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j][0] > arr[j + 1][0])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    const int size = 7;
    string cities[size] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};

    cout << "Data sebelum diurutkan:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << cities[i] << endl;
    }

    bubbleSort(cities, size);
    cout << "\nData setelah diurutkan:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << cities[i] << endl;
    }

    return 0;
}
