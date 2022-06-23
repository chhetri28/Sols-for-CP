#include<bits/stdc++.h>
using namespace std;
void sol(){
    int x,y;
    cin>>x>>y;
    int q=x/10 +(x%10 !=0);
    int w=y/10 +(y%10 !=0);
    cout<<abs(q-w)<<endl;
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}