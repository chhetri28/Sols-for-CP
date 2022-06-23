#include<bits/stdc++.h>
using namespace std;
void sol(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<(7-a)<<endl;
    }else{
        cout<<(7-b)<<endl;
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}