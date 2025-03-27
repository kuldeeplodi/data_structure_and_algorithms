#include<iostream>
#include<vector>
using namespace std;

int rotated_sorted(vector<int>arr,int tar){
    int n=arr.size();
    int st=0;
    int end=n-1;
    while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[st]<=arr[mid]){
        if(arr[st]<=tar&&tar<=arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    else{
        if(arr[mid]<=tar&&tar<=arr[end]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    }
    return -1;


}
int main(){


    vector<int>arr={6,7,0,1,2,3,4,5};
    int tar=10;
    cout<<rotated_sorted(arr,tar)<<endl;
    return 0;
}