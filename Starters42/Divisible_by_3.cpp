#include<bits/stdc++.h>
using namespace std;

void sol(){
    int a,b;
    cin>>a>>b;
    if(a%3==0 or b%3==0) cout<<0<<endl;
    else if(abs(a-b)%3==0)cout<<1<<endl;
    else cout<<2<<endl;
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}