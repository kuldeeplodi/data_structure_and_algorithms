#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> sumarry(vector<int> arr,int target){
    int n=arr.size();
    vector <int> ans;
   
    bool found=false;
   
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
                 sum+=arr[j];
                 if(sum==target){
                   
                    ans.push_back(i);
                    ans.push_back(j);
                    
                      found=true;
                      return ans;
                }
               
                }
        }
                if(!found){
                    ans.push_back(-1);
                    return ans;
                }
    }
int main(){
    vector<int> arr={1,2,3,4};
    for (int i:sumarry(arr,11)){
        cout<<i<<" ";
    }


                
        
        
        
        
    
    return 0;
}