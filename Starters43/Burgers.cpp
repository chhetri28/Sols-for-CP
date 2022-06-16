#include<bits/stdc++.h>
using namespace std;
void sol(){
    int a,b;
    cin>>a>>b;
    if(a==b)cout<<a<<endl;
    else{
        if(a<b)cout<<a<<endl;
        else cout<<b<<endl;
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}