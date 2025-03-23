#include<iostream>
#include<vector>
using namespace std;
int stock_buy_sell(vector<int> prices)
{   int n=prices.size();
    int bestBuy=prices[0];
    int maxprofit=0;
    for(int i=1;i<n;i++){
         if(prices[i]>bestBuy){
            maxprofit=max(maxprofit,prices[i]-bestBuy);
         }
         bestBuy=min(bestBuy,prices[i]);
    }
    return maxprofit;

}
int main(){
    vector<int> stock={7,1,5,3,6,4};
    int p=stock_buy_sell(stock);
    cout<<p;


    return 0;
}