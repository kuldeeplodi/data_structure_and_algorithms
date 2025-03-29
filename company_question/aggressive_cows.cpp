#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


bool isPossible(vector<int>arr,int n,int c,int minAllowedDist){//O(n)
    int cows=1,laststall=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]-laststall >= minAllowedDist){
              cows++;
              laststall=arr[i];
        }
        if(cows==c){
            return true;
        }
    }
    return false;
    
}
int getDistance(vector<int> arr,int n ,int c){ //O(log(sum)*n)
       sort(arr.begin(),arr.end());
       int st=1,end=arr[n-1]-arr[0];
       int ans=-1;
       while(st<=end){//O(log(sum))
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,c,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return ans;
}
int main(){
    vector <int> arr={1,2,8,4,9};
    int c=3,n=5;
    cout<<getDistance(arr,n,c);
    return 0;
}