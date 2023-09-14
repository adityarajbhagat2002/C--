// sort the array
// calculate the mid index and check the key at mid 
// return if it is there ,if mid is less than key then 
// move left and do the same process and if greater then vice-versa

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
     //  mid= start + (end-start)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }else{
            mid= mid-1;
        }
        mid= (start + end)/2;

      //  mid= start + (end-start)/2;


    }
    return -1;

}

int main(){
    int array1[8] = {2,3,5,6,7,8,12,33};
    int index= BinarySearch(array1 , 8,12);
    cout<< "Index of 12  is  " <<index<<endl;
    return 0;


}