#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// time complexity O(n^3)
// int maxsubarr(vector<int> &arr){
//     int n =arr.size();
//     int max_sum = INT_MIN;
//     for (int st=0;st<n;st++){
//         for (int end=st;end<n;end++){
//             int currsum=0;
//             for (int i =st;i<=end;i++){
//                   currsum += arr[i];
//                   max_sum=max(currsum,max_sum);
//             }
            
//         }
        
//     }
//     return max_sum;
// }

// brute force approach
// time complexity O(n^2)
int maxsubarr(vector<int> &arr){
    int n =arr.size();
    int max_sum = INT_MIN;
    for (int st=0;st<n;st++){
        int currsum=0;
        for (int end=st;end<n;end++){
              currsum += arr[end];
              max_sum=max(currsum,max_sum);
        }
        
    }
    return max_sum;
}

// kadane's algorithm
// time complexity O(n)
int maxsubarr(vector<int> &arr){
    int n =arr.size();
    int maxsum=INT_MIN;
    
        int currsum=0;
        for(int i=0;i<n;i++){
              currsum += arr[i];
              maxsum=max(currsum,maxsum);
              if (currsum<0){
                currsum=0;
              }
        }
    
    return maxsum;
}



int main (){

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxsubarr(arr);   
    return 0;
}