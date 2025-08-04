#include <iostream>
using namespace std;

// Best buy and sell stock 

void maxProfit1(int prices[],int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i =1;i<n;i++){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        
        maxProfit = max(maxProfit,prices[i]-bestBuy[i]);
    }
    cout<<maxProfit<<endl;
}

void maxProfit2(int prices[],int n){
  int minPrice = prices[0];
  int maxProfit = 0;
  for(int i=1;i<n;i++){
    minPrice = min(minPrice,prices[i]);
    maxProfit = max(maxProfit,prices[i]-minPrice);
  }
  cout<<maxProfit<<endl;

}

// trapped rainwater 
void trappedRainwater(int *height,int n){
    int leftMax[20000],rightMax[200000];

    leftMax[0] = height[0];
    for(int i =1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);
    }
    rightMax[n-1]=height[n-1];
    for(int i =n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i+1]);
    }
    int waterTrapped=0;
    for(int i =0;i<n;i++){
        int currWater = min(leftMax[i],rightMax[i])-height[i];
        if(currWater>0){
            waterTrapped+=currWater;
        }

    }
    cout<<"Water trapped is : "<<waterTrapped<<endl;

}
int main(){
    int prices[]={7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    maxProfit1(prices,n);
    maxProfit2(prices,n);
    int height[] ={4,2,0,6,3,2,5};
    int n2=sizeof(height)/sizeof(int);
    trappedRainwater(height,n2);

}