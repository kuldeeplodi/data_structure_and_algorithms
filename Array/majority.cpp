#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

// brute force approach
// time complexity O(n^2)
// int majority(vector<int> nums){
//     int n=nums.size();
    
//     for (int val:nums){
//         int freq=0;
//         for (int el :nums){
//                  if(el==val){
//                     freq++;
//                  }
//         }
//         if(freq>n/2){
//             return val;
//         }
//     }
    
// }

// sorting approach
// time complexity O(nlogn)

// int majority(vector<int> nums){
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
//     int freq=1,ans=nums[0];
//     for(int i =1;i<n;i++){
//         if(nums[i]==nums[i+1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=nums[i];
            
//         }
//         if(freq>n/2){
//             return ans;}

//     }
//     return -1;
// }

// moore voting algorithm
// time complexity O(n)
int majority(vector<int> nums){
    int n=nums.size();
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){

vector<int> nums={1,2,2,1,1};
int n=majority(nums);
cout<<n;

    return 0;
}