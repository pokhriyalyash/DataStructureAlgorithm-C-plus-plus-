// Functions are block of code which runs when it is called . 
// returnType fname(){//logic}


#include <iostream>
using namespace std;

// global scope
int num = 25;

void myFunc(){
    cout<<"My First Function"<<endl;
}

// forward declaration ---function declare
void sayHello();


// function with parameter
int sum(int a,int b=2){
    return a+b;
}

// WAF to product two numbers 
int product(int a,int b){
    return a*b;
}

// WAF to print if a number is odd or even
bool isEven(int a){
    return a%2==0;
}

// WAF to print factorial of num n
int factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}


// WAF to print if a number is prime or not .
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// WAF to find binomial coefficient for given n and r.
int binomialCoefficient(int n ,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}




// function overloading ---->multiple function with same name but different parameters
// function overloading --type of parameter and number of parameter
// Important difference in term of return type is not function overloading.


// WAF to print all Prime number in range 2 to n;

void printPrime(int n){
    for(int i =2;i<=n;i++){
        if(isPrime(i)){
        cout<<i<<" ";
    }
    }
}

int main(){
   myFunc();

   sayHello();
   

   int sumAns = sum(6,8);
   cout<<"Sum answer is "<<sumAns<<endl;


   // using default parameter b=2 
   cout<<sum(5)<<endl;
   

   //Product
   cout<<"Product is "<<product(7,9)<<endl;

   //isEven
   if(isEven(7)){
    cout<<"Its a even number";
   }else{
    cout<<"Its a odd number";
   }

   //   factorial 
   cout<<"Factorial of 7 is : "<<factorial(7)<<endl;


   //Prime or not 
   if(isPrime(7)){
    cout<<"Its a prime"<<endl;
   }else{
    cout<<"Its not a prime"<<endl;
   }
    
   // Binomial coeficient
   cout<<binomialCoefficient(5,2)<<endl;
   

   //Print prime 

   printPrime(1000);
   
   return 0;
}

// function forward declaration 
// Declaration ---> function name , return type 
// defination body of function 


// function defination 
void sayHello(){
    cout<<"Hello World"<<endl;
}


// What happens in memory ?

// Memory ---- heap and stack memory 
// Stack memory(static related ) ----Jab code/function execute hota hai stacke ke anadar ek layer banti hai jisko stack frame kehte hain .
// Stack frame full ek function ko allocate hota hai uske variables parameter etc ke liye .
// return krte hi stack frame delete hojata hai .
// Current function jo chalta wo top of stack pe hota hai.


// Scope ---->area where variable can be accesed aur used .
// int num is global scope 
// functions/loops/if-else are local scope .










