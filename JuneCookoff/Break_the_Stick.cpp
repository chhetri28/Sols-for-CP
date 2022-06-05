#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n,x;
    cin>>n>>x;
    if(n%2==0)cout<<"YES\n";
    else{
        if(x%2==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}