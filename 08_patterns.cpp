// Patterns based on nested loops 

// Nested loops ---> loops inside loops 

// Outerloops ---> number of rows
// Innerloops ----> number of columns 
// Work -----> each row

#include <iostream>
using namespace std;

int main(){
    // Star Pattern 
    // *
    // * * 
    // * * * 
    // * * * * 
    int n = 4;
    cout<<"Star Pattern"<<endl;
    for(int i =1;i<=n;i++ ){
        for(int j =1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Inverted Star Pattern"<<endl;
    cout<<endl;
    // Inverted Star Pattern 
    // * * * *
    // * * * 
    // * * 
    // *

    for( int i =1;i<=n;i++){
        for(int j = 1;j<=(n-i+1);j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Print Half Pyramid Pattern "<<endl;
    cout<<endl;
    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4 

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Print Character Pyramid Pattern "<<endl;
    cout<<endl;
    
    // A
    // A B 
    // A B C 
    // A B C D

    char ch ='A';
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(ch+(j-1))<<" ";
          
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Print Character pyramid "<<endl;
    cout<<endl;

    // A
    // B C
    // D E F
    // G H I J

    char character ='A';
    for(int i = 0 ;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Print floyds triangle"<<endl;
    cout<<endl;
    // Floyds triangle 
    // 1
    // 2 3 
    // 4 5 6
    // 7 8 9 10

    int num =1;
    for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }




}