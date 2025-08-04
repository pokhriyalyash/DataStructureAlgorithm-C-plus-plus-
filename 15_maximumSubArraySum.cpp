#include <iostream>
using namespace std;

// Subsequence follows the order but can be in continuous or not 
// Subarrays are continuous part of an arrray 


// Print Subarrays  O(n3)
void printSubArrays(int arr[],int n){
    // for outerloop
    for(int start =0;start<n;start++){

        // for innerloop
        for(int end = start;end<n;end++){

           
            // cout<<"("<<start<<","<<end<<")";
            // to print 
            for(int i = start;i<=end;i++){
                cout<<arr[i] ;

            }
            cout<<",";

        }
        cout<<endl;

    }
}

// Maximum sum in array  O(n3)
void maxSumArray(int arr[],int n){
    int maxSum = INT_MIN;

    for(int start=0;start<n;start++){
        for(int end = start;end<n;end++){
            int currSum = 0;
            for(int i =start;i<=end;i++){
                currSum+=arr[i];
            }
            if(maxSum<currSum){
                maxSum=currSum;
            }
        }
    }
    cout<<"Maximum sum in this arrays is : "<<maxSum<<endl;
}

// Maximum sum of array -O(n2)
void maxSubArray2(int arr[],int n){
    int maxSum = INT_MIN;
    for(int start = 0;start<n;start++){
        int currsum=0;
        
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxSum = max(currsum,maxSum);
        }

    }
    cout<<"Maximum subarray sum is : "<<maxSum<<endl;

}

// Maximum subarray sum Kadanes Algorithm - O(n)
void kadanes(int arr[],int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i =0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }

    }
    cout<<"Maximum Sum using kadanes algorithm is : "<<maxSum<<endl;

}

int main(){
    int arr[] = {-2,-3,-6,-5,-4,-8};
    int n = sizeof(arr)/sizeof(int);
    printSubArrays(arr,n);
    maxSumArray(arr,n);
    maxSubArray2(arr,n);
    kadanes(arr,n);
}