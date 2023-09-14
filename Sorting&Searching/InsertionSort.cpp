#include <bits/stdc++.h>
using namespace std;

// kind of comparsion but in this in this every element is taken and compared with
// every element to it's left and inserted in it's position


//Note -Unordered_map T.C -O(1)'
//map T.C -O(Logn)

void Swap(int &a, int &b)
{
    int temp = a;
    a = b; 
    b = temp;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {11, 8, 9, 2, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array " << endl;
    printArray(arr, size);
    InsertionSort(arr, size);
    cout << "Sorted Array " << endl;
    printArray(arr, size);
}

