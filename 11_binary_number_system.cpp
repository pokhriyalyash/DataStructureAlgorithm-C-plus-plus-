#include <iostream>
using namespace std;

// Binary number system -- 0 ,1
// Decimal number system --- 0 , 1,2 ,3 4,5, 6, 7, 8, 9


int binToDec(int binNum){
    int decNum = 0;
    int n=binNum;
    int pow=1;
    while(n>0){
        int lastDigit = n%10;
        decNum+=lastDigit*pow;
        pow=pow*2;
        n/=10;
    }
    return decNum;
}

int decToBin(int decNum){
    int n = decNum;
    int binNum=0;
    int pow=1;
    while(n>0){
        int lastDigit = n%2;
        
        binNum+=lastDigit*pow;
        pow*=10;
        n/=2;
    }
    return binNum;
}


// Datatype modifier --- alter meaning of existing datatype
// long>=4bytes(more than int)
// short 2 bytes
// signed int is same as int 
// unsigned int can store only non negative number
// long long ---same as long long int

// unsigned me MSB most significant bit free rehta hai .



int main(){
    cout<<"Decimal of binary digit 101 is :"<<binToDec(101)<<endl;
    cout<<"Binary of decimal digit 5 is :"<<decToBin(5)<<endl;
    
    // datatype modifier
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(unsigned int)<<endl;

}


