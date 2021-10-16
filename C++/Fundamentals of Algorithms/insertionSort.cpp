#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int array[] = {2, 5, 1, 20, 21, 15, 19};
    int n = sizeof(array)/sizeof(array[0]);
    insertionSort(array, n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
