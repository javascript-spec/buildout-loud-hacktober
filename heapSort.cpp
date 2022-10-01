#include<iostream>
using namespace std;
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[],int n,int i){
    int l=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[l])
    l=left;
    if(right<n && arr[right]>arr[l])
    l=right;

    if(l!=i){
    swap(arr[i],arr[l]);
    heapify(arr,n,l);  //continue heapifying if root is not largest
    }

}
// main function to do heap sort
void heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);

        heapify(arr, i, 0); // Heapify root element to get highest element at root again
    }

}
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}