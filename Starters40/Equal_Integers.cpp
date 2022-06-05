#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else{
            if(a>b){
                if((a-b)%2==0){
                    cout<<(a-b)/2<<endl;
                }else{
                    cout<<2+(a-b)/2<<endl;
                }
            }else{
                cout<<b-a<<endl;
            }
        }
    }
}