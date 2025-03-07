// return pair in sorted array with target sum

#include<stdio.h>
#include<climits>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums,int target){
    vector<int> result;
    int n =nums.size();
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
}
int main(){
   
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    int target=5;
    vector<int> result=pairsum(nums,target);
    for (int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
    return 0;
}