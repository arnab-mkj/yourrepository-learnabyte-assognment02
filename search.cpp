#include <bits/stdc++.h>
using namespace std;
//#define int long long;
//#define vec vector<int>;

void rotateArr(vector<int> v,int n){
       int temp=v[n-1];
       for(int i=n-1;i>0;i--)
           v[i]=v[i-1];
    
    v[0]=temp;
}
   
void rightRotate(vector<int> v,int p,int n){
    for (int i=0;i<p;i++)
        rotateArr(v,n);
}

int main(){
    vector<int> v={4,5,6,7,9,10,1,2,3};
    int n=sizeof(v)/sizeof(v[0]);
    sort(v.begin(),v.end());
    for(auto it:v)
        cout<<it<<" ";
    int p;cin>>p;//pivot from which to be rotated
    
    rightRotate(v,p,n);
    for(auto it:v)
        cout<<it<<" ";
    int s; cin>>s;//number to be searched
    
    if(binary_search(v.begin(),v.end(),s)){
        cout<<"exsits"<<endl;
        auto it=lower_bound(v.begin(),v.end(),s);
        cout<<it-v.begin();
    }
        else
            cout<<"does not exist"<<endl;
    
    return 0;
}