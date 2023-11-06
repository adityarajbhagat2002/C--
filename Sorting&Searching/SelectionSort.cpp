#include<bits/stdc++.h>
using namespace std;

//in selection sort we keep the pointer at one point and find the minimum 
//element in the rest of the array considering the the first elemet as smallest 
//if we find any small element then we swap and keep doint it 

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[] , int size){
    int n=size;

    for(int i =0 ;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex] ,arr[i]);

    }

}


void printArray(int arr[] ,int size){
    for(int i =0; i<size ; i++){
        cout<<arr[i]<< " ";
    }

    cout<<endl;

}

int main(){

    int arr[] = {12 ,3 ,4  ,9 ,10 , 34 };
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    SelectionSort(arr, size);

    cout<<"Sorted Array in Ascending Order is " <<endl;

    printArray(arr , size);

}

