// Loops are used to repeat a block of code multiple times.

#include <iostream>
using namespace std;

int main(){
    // for loop
    for(int i =0;i<10;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // iterate(run) , iteration(single run) ,iterator(loop variable/counter variable)

    // Print number 1 to n 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i =0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // Print sum of n natural number 
    int sum =0;
    for (int i =0;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of all the number is "<<sum<<endl;


    // while loops 
    int count =1;
    while(count<=10){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;

    // Print square pattern using for loop 
    for(int i=1;i<=4;i++){
        cout<<"* * * *"<<endl;
    }
    

    // do while loop
    int number =1;
    do {
        cout<<number<<" ";
        number++;
    }while(number<=10);



    return 0;
}

// continue statement is to skip and break statement is to stop .