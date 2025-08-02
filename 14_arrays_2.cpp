#include <iostream>
using namespace std;


// Time complexity = O(n)
int linearSearch(int arr[],int n,int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i ;
        }
    }
    return -1;
}
// Print array
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<(arr[i])<<" ";
    }
}
// Reverse an array without extra space 
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        // int temp = arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start],arr[end]);

        start++;
        end--;
    }
    printArray(arr,n);
}

// BinarySearch --- 0(logn)
int binarySearch(int arr[] , int n ,int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}





int main(){
    // Linear Search
    int arr[] = {2,4,6,8,10,12,14,16};
    int key=10;
    int n = sizeof(arr)/sizeof(int);
    int ans = linearSearch(arr,n,key);
    if(ans!=-1){
        cout<<"Key is at "<<ans<<endl;
    }else{
        cout<<"Kety is not in this array"<<endl;

    }

    // Reverse an array using extra space --TC and SC --O(n);


    // int arr[] = {2,4,6,8,10,12,14,16};
    //  int n = sizeof(arr)/sizeof(int);
    int copyArr[n];
    for(int i =0;i<n;i++){
        int j = n-i-1;
        copyArr[i]=arr[j];
    }

    for(int i =0;i<n;i++){
        arr[i]=copyArr[i];
    }

    // Print array 
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // reverse array without extra space -->TC O(n) SC O(1);
    reverse(arr,n);

    cout<<endl;
    // binarySearch
    cout<<"Value is at index : "<<binarySearch(arr,n,key)<<endl;


    



    


}