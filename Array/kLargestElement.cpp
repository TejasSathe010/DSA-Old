#include <iostream>
using namespace std;


void kLargestElement(int arr[], int size, int k){
    sort(arr, arr+size, greater<int>());
    for(int i=0; i<k; i++) {
        cout << arr[i] << endl;
    }
}


int main(){
    int k = 3;
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    kLargestElement(arr, size, k);
}