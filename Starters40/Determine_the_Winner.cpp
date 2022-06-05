#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int maxi1=max(a,b);
        int maxi2=max(c,d);
        if(maxi1==maxi2){
            cout<<"TIE\n";
        }else if(maxi1>maxi2){
            cout<<"Q\n";
        }else{
            cout<<"P\n";
        }
    }
}