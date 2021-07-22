#include <bits/stdc++.h>
using namespace std;
 
int maxSubarrayProduct(int arr[], int n){
    int result=arr[0];
    for(int i=0;i<n;i++){
        int mul=arr[i];
            for(int j=i+1;j<n;j++){
                  result = max(result, mul);
                   mul*=arr[j];
        }
        result = max(result, mul);//for (n-1)th index
    }
    return result;
}
 
int main(){
    int arr[]={7,-3,-12,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout <<"Maximum Sub array product is "<<maxSubarrayProduct(arr, n);
    return 0;
}