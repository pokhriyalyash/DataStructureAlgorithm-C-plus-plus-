// Operators are symbols that tells compilers to perform some operations on variables and values.
// Operands are values or variables on which some operation is being performed .

// Arithmetic Operators
// Binary operators ---> + , - ,* , / ,% 
// Unary operators ---> a++ , ++a , --a ,a--

#include <iostream>
using namespace std;


int main(){

// Post incremenet ----> use then update    
int a = 2;
int b = a++;
cout<<a<<endl;
cout<<b<<endl;


// Pre increment ---> update then use
int c = 2;
int d = ++c;
cout<<c<<endl;
cout<<d<<endl;
return 0 ;
}

// Relational operators ---> < , > , <= , >= , == , !=
// Logical operators ---> && , || , !
// Assignment operators ---> = , += , -= , *= , /= , %= 