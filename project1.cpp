1)
#include<iostream>
using namespace std;
int main()
{
    const int n = 18;
    double a[n]; int i;
    cout << " Enter " << n << "  numbers\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n / 2; i++)
        for (int j = 0; j < n / 2; j++)
            if (a[i] > a[j])
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    cout << "Sorted massive:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "" << endl;
    return 0;
}


2)
#include <iostream>
#include <time.h>
using namespace std;
void output(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    srand(time(NULL));

    const int size = 18;
    int arr[size];

    //filling array
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10;

    output(arr, size);
    cout << endl;
    //buble sort
    for (int i = 0; i < size / 2 - 1; i++)
        for (int j = 0; j < size / 2 - i - 1; j++)
            if (arr[j] > arr[j + 1])
                // swap
                swap(arr[j], arr[j + 1]);


    output(arr, size);

}
3)
#include <iostream>
using namespace std;
int main()
{
    const int n = 7;
    int arr[n];
    int arr1[n];


    //first
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //second
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    //counting
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
                counter++;
        }
    }
    //new array
    int* result = new int[counter];
    int c = 0;//indexator

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
                result[c++] = arr[i];
        }
    }
    for (size_t i = 0; i < counter; i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
}
