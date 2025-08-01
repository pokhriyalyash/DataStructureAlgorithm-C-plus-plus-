// Patterns 

#include <iostream>
using namespace std ; 

int main(){
    // Hollow rectangle pattern 
    // * * * * *
    // *       *
    // *       *
    // * * * * *

    int n =4;
    for(int i =1;i<=n;i++){
        cout<<"*";
        for(int j =1;j<=(n-1);j++){
           if(i==1||i==n){
            cout<<"*";
           }else{
            cout<<" ";
           }
        }
        cout<<"*"<<endl;
    }

    // Inverted rotated half pyramid 
    //       *
    //     * *
    //   * * *
    // * * * *

    cout<<endl;
    cout<<"Inverted rotated half pyramid "<<endl;
    cout<<endl;

    for(int i = 1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
          cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Diamond Pattern"<<endl;
    cout<<endl;

    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    // * * * * * * *
    //   * * * * *
    //     * * * 
    //       *


    for(int i = 1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n;i>=1;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Print Butterfly Pattern"<<endl;
    cout<<endl;

    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *

    for (int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i =n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


}