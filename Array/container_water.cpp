#include<iostream>
#include<vector>
using namespace std;

// brute force approch O(n^2)
int mostwater(vector<int>height){
    int maxwater=0;
    int n=height.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
               int width=j-i;
               int ht=min(height[i],height[j]);
               int currentwater=width*ht;
               maxwater=max(maxwater,currentwater);

        }
    }
    return maxwater;
}


// optimal approach (2 pointer)
int containMostWater(vector<int> height){
    int n=height.size();
    int left=0;
    int right=n-1;
    int maxwater=0;
    while(left<right){
        int width=right-left;
        int ht=min(height[left],height[right]);
        int currentwater=width*ht;
        maxwater=max(maxwater,currentwater);
        height[left]<height[right]?left++:right--;
    }
    return maxwater;
}

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int most1=mostwater(height);
    cout<<most1;

    int most2=containMostWater(height);
    cout<<most2;

    return 0;
}