#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n,k;
    cin>>n>>k;
    if(n==k) cout<<0<<endl;
    else{
    int x=n-1;
    cout<<floor(x/5)<<endl;
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}