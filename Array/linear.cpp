#include<stdio.h>
#include<climits>
using namespace std;

int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){

int arr[]={1,2,3,4,5,6,7,8,9};
int size=9;
int target=5;
int index=linear_search(arr,size,target);
if(index==-1){
    printf("Element not found\n");
}
else{
    printf("Element found at index %d\n",index);
}



return 0;
}