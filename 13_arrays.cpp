// Arrays : linear collection of same type of elements stored together in contiguous memory location.

#include <iostream>
using namespace std;



// Arrays are passed by reference means int arr[] == int *arr[] or arr[0] ka reference pass hua hai ...

// find largest 
int largest(int arr[],int n){
    int largest = arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}





int main(){
    // creating an array 
    // Memory is statically allocated at compile time .
    // int marks[50];
    int marks[] = {80,90,65};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    cout<<sizeof(marks)<<endl; //12 bytes
    int len = sizeof(marks)/sizeof(int);

    cout<<"Length of marks array is : "<<len<<endl;

    int age[5] = {20,21,24,25,22};
    // output
    for(int i =0;i<sizeof(age)/sizeof(int);i++){
        cout<<age[i]<<endl;
    }
    
    // Input 
    cout<<"Input n : ";
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int nums[] = {7,10,12,4,6};
    int length = sizeof(nums)/sizeof(int);
    cout<<"Largest element in this array is : "<<largest(nums,length)<<endl;

    return 0;

}


