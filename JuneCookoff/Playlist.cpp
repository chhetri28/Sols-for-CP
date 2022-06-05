#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int temp;
        if(n/x==0) cout<<0<<endl;
        else{
            temp=floor(n/x);
            cout<<floor(temp/3)<<endl;
        }
    }
    
}