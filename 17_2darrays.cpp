// 2D arrays 
#include <iostream>
using namespace std;

int main(){

int students[2][3] = {{100,100,100},{75,80,85}};
cout<<(students[1][1])<<endl;

// Input and output 2D Arrays 
int n = 3;
int m = 4;
int arr[n][m];

for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
}



}


// 2D array in memory 
// A 2D memory in array is represented as a contiguous block of memory cells(linearly)

// Rows major (generally),Column major 


