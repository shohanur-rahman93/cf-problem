#include <iostream>

int getMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {3, 4, 2, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The minimum element in the array is: " << getMin(arr, size) << std::endl;
    return 0;
}

