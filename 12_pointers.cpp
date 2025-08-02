// Pointers --- special type of variables to storeaddress of another varaible .
// hexadecimal number address

// Address of operator (&) --->gives address of variable
// Dereference operator (*)---->get value of the variable pointed by any pointer
#include <iostream>
using namespace std;

// pass by value
void changeB(int b){
    b = 20;
    cout<<b<<endl;
}

// pass by reference -- pointer
void changeBbyref(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}

// pass by reference variables --alternate name of already existing 
void changeBbyrefvar(int &a){
    a =25;
    cout<<a<<endl;
}


int main(){
    int a =10;
    cout<<a<<" address is "<<&a<<endl;

    // pointers 
    int *ptr = &a;
    cout<<"Address of a is "<<ptr<<endl;

    // sizeof pointer --8byte
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    
    // Pointer of pointer
    int** ptr2 = &ptr;
    cout<<"Address of ptr is "<<ptr2<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr2)<<endl;

    // Dereference operator(*)
    cout<<*ptr<<endl;  //10

    // Null pointer we assign NULL value to the pointer to show that it doesnot point to any location .
    int *pointr = NULL;

    // Dereferencing null pointer is not possible as. it wil give result as error;--->segmentation fault error

    int *pointer; //Stores garbage value

    // Pass by value 
    int b =10;
    changeB(b);
    cout<<"New value of b :"<<b<<endl; //Here value is not changes as in function we pass by value 
    // Pass by reference
    changeBbyref(&b);
    cout<<"New value of b :"<<b<<endl; //Here value is not changes as in function we pass by value 

    // Pass by reference variable
    // reference variable should be initialised
    changeBbyrefvar(b);
    
    cout<<"New value of a :"<<b<<endl; //Here value is not changes as in function we pass by value 


    // Question 
    int x = 5 ,y = 10;
    int*pointer1 = &x ;
    int*pointer2 = &y;
    pointer2 = pointer1;
    // What will be ptr2 point to
    cout<<pointer2<<endl;
    cout<<&x<<endl;









   

}


// Passing by Value or Passing by reference 

// Pass by value 
// When parameter is copy of actual argument in the memory 

// Pass by reference 
// when we pass reference argument to the function (pointer) or reference variable



