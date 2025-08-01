// Conditional Statements 

#include <iostream>
using namespace std;

int main(){
    // If - else statement 
    int age ;
    cout << "Enter your age: ";
    cin>>age ;
    if(age>=18){
        cout<<"You are eligible to vote "<<endl;
    }else{
        cout<<"You are not eligible to vote "<<endl;
    }


    // Print largest of two numbers 
    if (age >20){
        cout<<"Age is greater "<<endl;
    }else{
        cout<<" 20 is greater" <<endl;
    }

    // Print if a number is odd or even 
    if(age%2==0){
        cout<<"Its a even number"<<endl;
    }else{
        cout<<"Its a odd number "<<endl;
    }

    // Else of statement 
    // Create a income tax calculator
    
    int income ;
    cout<<"Enter your income : ";
    cin>>income ;
    if(income<=500000){
        cout<<"No tax"<<endl;
    }else if(income>500000 && income <=1000000){
        cout<<"20% tax : "<<(income)*0.2<<endl;
    }else{
        cout<<"30% tax : "<<(income)*0.3<<endl;
    }

    // Print larget of three number 
    int a =10;
    int b=5;
    int c=7;

    if(a>=b && a>=c){
        cout<<"a is the largest "<<endl;
    }else if (b>=a &&b>=c){
        cout<<" b is the largest "<<endl;
    }else{
        cout<<" c is the largest "<<endl;
    }

    // Ternary operator ----> variable = condition ? statement 1 : statement 2;
    bool isAdult = (age >=18) ? true : false;
    cout<<"Is adult is "<<isAdult<<endl;


    // switch statement 
    int day = 2;

    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: cout<<"Weekday"<<endl;
                break;
        case 6:
        case 7: cout<<"Weekend"<<endl;
                break;
        default: cout<<"Wrong input"<<endl;
    }

    return 0;

}