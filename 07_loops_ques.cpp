// Loops questions 

#include <iostream>
#include <cmath>
using namespace std;


// 1.  Print sum of digits of a number using while loops 

// int main(){
  
//     int n = 10829;
//     int sum =0;
//     while(n>0){
//         int lastDigit = n%10;
//         sum+=lastDigit;
//         n/=10;
//     }
//     cout<<"Sum of digits is : "<<sum<<endl;

// }


// 2. Print sum of odd digits of a number using while loops 

// int main(){
//     int n ;
//     cout<<"Enter a number "<<endl;
//     cin>>n;
//     int sum =0;
//     while(n>0){
//         int lastDigit = n%10;
//         if(lastDigit%2!=0){
//             sum+=lastDigit;
//         }
//         n/=10;
//     }
//     cout<<"Sum of odd digits is : "<<sum<<endl;
    
//     return 0;
// }



// 3 . Print digit of a given number reverse using while loops

// int main(){
//     int n =10829;
//     while(n>0){
//         int lastDigit = n%10;
//         cout<<lastDigit;
//         n/=10;
//     }
//     return 0;
// }



// 4. Reverse the given the number 
// 529 = 5*10^2 + 2*10^1 + 9*10^0;

// int main(){
//     int n = 10829;
//     int rev =0;
//     while(n>0){
//         int lastDigit = n%10;
//         rev = rev*10+lastDigit;
//         n/=10;
//     }
//     cout<<"Reverse of number is : "<<rev<<endl;
//     return 0;

// }



// 5 . Check if a number is prime or not 
// optimized case loop run till sqrt(number) or i*i<=number
int main(){
    int number = 9;
    bool isPrime = true;
    for (int i =2;i<=sqrt(number);i++){
        if(number%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not prime";
    }

}