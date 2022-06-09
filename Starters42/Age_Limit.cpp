#include<bits/stdc++.h>
using namespace std;
void sol(){
    int x,y,a;
    cin>>x>>y>>a;
    if(a>=x and a<y){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}