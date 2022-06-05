#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int z=x+200;
        if(x<=y and y<=z){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}