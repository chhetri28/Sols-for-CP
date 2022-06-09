#include<bits/stdc++.h>
using namespace std;
void sol(){
    int n;cin>>n;
    vector<int>a;
    int temp;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp==1) c1++;
        else c2++;
        a.push_back(temp);
    }
    if(n%2!=0) cout<<-1<<endl;
    else{
        if(c1==c2) cout<<0<<endl;
        else{
        cout<<abs((c1-c2)/2)<<endl;
        }
    }
}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}