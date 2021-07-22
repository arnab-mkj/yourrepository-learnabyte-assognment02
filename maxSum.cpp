#include <bits/stdc++.h>

using namespace std;
 
int maxSubArraySum(int a[], int n,int p,int k)
{
    int max = INT_MIN; 
    int e = 0;
    for (int i=k;i<n;i++){
                e+=a[i];
          
             if (max<p)
                max=e;
                
         if(max==p){
             max=e;
             return max;
              break;
         }
        if (max > p){
               maxSubArraySum(a,n,p,k++);
               
        }
    }

}
 
int main(){
    int a[] = {2,3,5,9,12};
    int n = sizeof(a)/sizeof(a[0]);
    int p=12;
    int max_sum = maxSubArraySum(a,n,p,0);
    cout << "Maximum sum is " << max_sum;
    return 0;
}