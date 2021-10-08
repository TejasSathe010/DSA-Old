#include <iostream>
using namespace std;

int peakElementUtil(int arr[], int start, int end, int size){
    int mid = (start + end)/2;
    if ((mid==0 || arr[mid] >= arr[mid - 1]) &&
    (mid==end || arr[mid] >= arr[mid + 1])){
        return mid;
    }else if(mid > 0 && arr[mid] < arr[mid-1]){
        return peakElementUtil(arr, start, mid-1, size);
    }else{
        return peakElementUtil(arr, mid+1, end, size);
    }

}

int peakElement(int arr[], int size){
    return peakElementUtil(arr, 0, size-1, size);
}

int main(){
    int arr[] = {2, 4, 6, 9, 15, 7, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = peakElement(arr, size);
    cout << index << endl;

}