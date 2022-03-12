#include <iostream>

using namespace std;

void turnLeft(int *arr, int size, int n)
{
    int temp;
    for (size_t j = 0; j < -n; j++)
    {
        temp = arr[0];
        for (size_t i = 0; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size-1] = temp;
    }
}

void turnRight(int *arr, int size, int n)
{
    int temp;
    for (size_t j = 0; j < n; j++)
    {
        temp = arr[size-1];
        for (size_t i = size-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
}

void printArray (int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
cout << endl;
}

int main()
{
    const int mySize = 8;
    int myArr[mySize] = { 1,2,3,4,5,6,7,8 };
    
    printArray(myArr, mySize);
    
    int n;
    cout << "На сколько сдвигаем массив: ";
    cin >> n;
    if ((n < 0) && (n > -mySize))
        turnLeft(myArr, mySize, n);
    else if ((n > 0) && (n < mySize))
        turnRight(myArr, mySize, n);
    else
        cout << "ничего не двигаем." << endl;
    
    printArray(myArr, mySize);
    
    return 0;
}
