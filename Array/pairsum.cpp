// return pair in sorted array with target sum
#include<stdio.h>
#include<climits>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// brute force approach
// time complexity O(n^2)

// cd

// two pointer approach
// time complexity O(n)
vector<int> pairsum(vector<int> nums,int target){
    vector<int> result;
    stable_sort(nums.begin(),nums.end());
    int n =nums.size();
    int left=0,right=n-1;
    while(left<right){
      int ps=nums[left]+nums[right];  
      if(ps>target){
          right--;
         
      }
      else if(ps<target){
          left++;
      }
      else{
          result.push_back(left);
          result.push_back(right);
           return result;
      }
  }
    
}


int main(){
   
    vector<int> nums={3,2,4};
    int target=7;
    vector<int> result=pairsum(nums,target);
    for (int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
    return 0;
}