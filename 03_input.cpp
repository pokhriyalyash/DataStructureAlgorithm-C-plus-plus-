// Input in c++

#include <iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cin>>a;
    cout<<"You entered a : "<<a<<endl;
    cin>>b;
    cout<<"You entered b : "<<b<<endl;
    int sum = a+b ;
    cout<<"Sum of a and b is "<<sum<<endl;
    

    int num =5 ;
    cout<<num<<endl;
    num = 6;
    cout<<num<<endl;

    // Constants 
    const int n = 5;
    // cannot be updated 
    // constant must be initialized


    // Implicit conversion 
    cout<<('A'+1)<<endl; // ASCII value of A is 65 so 65 +1 =66 so here char is automaticallyu convert to int .

    // explicit type conversion --->here we explicitly convert char to int
    cout<<int('A')<<endl;
    cout<<bool(3)+2<<endl; //3 
}



// Constants VS Macros 
// Macros dont take space in memory while constant takes space as variable .
// Macros are used in datatype dsa symbolic represntation like long long as ll .
// #define ll long long .


// Type conversion  ----->conversion of datat from one type to another .


// Implicit conversion ----> automatic type conversion / promotion done by compiler to avoid data loss .

// Explicit conversion ----->manual type conversion done by programmer  .

