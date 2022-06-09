#include<bits/stdc++.h>
using namespace std;
void sol(){
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    if(sum%2==0)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}