#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool isPossible(vector<int>arr,int n,int m,int maxAllowedPage){//O(n)
    int painters=1,time=0;
    for (int i=0;i<n;i++){
        if(arr[i]>maxAllowedPage){
            return false;
        }
        if(time+arr[i]<=maxAllowedPage){
            time+=arr[i];
        }
        else{
            painters++;
            time=arr[i];
        }
    }
    return painters>m?false:true;
    
}
int painterPartition(vector<int> arr,int n ,int m){ //O(log(sum)*n)
     int sum=0,maxVal=INT_MIN;
       for (int i=0;i<n;i++){//O(n)
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
       }
       int st=maxVal,end=sum;
       int ans=-1;
       while(st<=end){//O(log(sum))
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
       }
       return ans;
}
int main(){

    vector<int>arr={40,30,10,20};
    int n=4,m=2;
    cout<<painterPartition(arr,n,m)<<endl;
    return 0;
}