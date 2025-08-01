// Basics Of C++ 

// Preprocessor directive ----- Aesi instruction jo compile se pehle karni .
// All preprocessor directive start with # .

#include <iostream>

// Helps in naming conflicts . Standard c++ namespace is std . std::cout<<"";
using namespace std;

// Macros symbolic constants 
#define PI 3.14;


// starting point of execeution

int main(){
    // logic
    cout<<"Hello World "<<endl;

    // variables 
    int a =10;
    int b =12;
    
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    // Garbage value 
    int c ;
    cout<<"Here c stores a garbage value "<<c<<endl;

    return 0;
}


// Header files include pre written code thats required to execute our programme . Example iostream ,vector etc .

// How code execute 

// source code ----> compiler ----> code .exe / code .out ----->output 

// compiler is a program that translates source code into machine code .


