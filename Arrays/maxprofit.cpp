#include <iostream>
#include <algorithm>
using namespace std;
//Naive but important solution
int maxprofit(int price[],int start,int end){
    if(end<=start){
        return 0;
    }
    int profit=0;
    for(int i=start; i<end; i++){
        for(int j=i+1; j<=end; j++){
            if(price[j]>price[i]){
                int curr_profit=price[j]-price[i] + maxprofit(price,start,i-1)+maxprofit(price,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}
//Efficient solution
int maxprofit(int price[],int n){
    int profit=0;
    for(int i=1; i<n; i++){
        if(price[i]>price[i-1]){
            profit=profit+(price[i]-price[i-1]);
        }
    }
    return profit;
}