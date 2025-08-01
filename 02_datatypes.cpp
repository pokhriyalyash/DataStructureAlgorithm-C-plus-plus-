// Naming conventions 
// 1. Start with underscore or letter 
// 2. Name can only contains upercase and lowercase letter , digit from 0-9 and underscore 
// 3. cannot be keyword .

// Datatypes
// Primitive datatypes. 

#include <iostream>
// To increase precsiion of float and double 
#include <iomanip>

using namespace std;

int main(){
    // int datatype--->4 byte
    int a =10;

    // char datatype----->1 byte
    char grade = 'A';

    // boolean datattype----->1 byte
    bool isTrue = false;

    // float datatype------>4 byte
    float pi =3.14;

    // Precision of float and double 
    pi = 3.14159265358979323846;
    cout<<pi<<endl; //3.14159 
    cout<<setprecision(12)<<pi<<endl; //after 7 digits its precision is changing and approximating

    double pi2 = 3.14159265358979323846 ;
    cout<<pi2<<endl; //3.14159 
     cout<<setprecision(12)<<pi2<<endl;


    // sizeof() ---->gives size of datatype .
    cout<<"Size of int datattype is : "<<sizeof(int)<<endl;
    cout<<"Size of char datattype is : "<<sizeof(char)<<endl;
    cout<<"Size of bool datattype is : "<<sizeof(bool)<<endl;
    cout<<"Size of float datatype is : "<<sizeof(float)<<endl;

    return 0;

}


// float ----> precision 7 digits 
// Double ----> precision 15 digits
// cout------>5 digits precision


// Single line commments 
/*
   Multi line comments 
*/