#include <bits/stdc++.h>
using namespace std;


// In this we run two loops comparing j and j+1 element if j is greater then swap both
// after each round the greatest element is in place the (n-i-1) is for running only the
// rounds as each time number of rounds decreses

void swap(int &a, int &b)
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



void BubbleSort(int arr[], int size)
{  
    int n = size;
    for(int  i=0 ;i<n-1; i++){
        for(int j =0 ; j <n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}


int main()
{

    int arr[] = {11, 8, 9, 2, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array " << endl;
    printArray(arr, size);
    BubbleSort(arr, size);
    cout << "Sorted Array " << endl;
    printArray(arr, size);
}
