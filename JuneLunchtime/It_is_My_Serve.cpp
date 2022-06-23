#include<bits/stdc++.h>
using namespace std;
void sol(){
    int p,q;
    cin>>p>>q;
    int sc=p+q+1;
    vector<int>a{1,2,5,6,9,10,13,14,17,18,21,22};
    std::vector<int>::iterator res;
    res=find(a.begin(),a.end(),sc);
    if(res!= a.end()){
        cout<<"Alice\n";
    }else{
        cout<<"Bob\n";
    }


}
int main(){
int t;cin>>t;
while(t--) sol();
return 0;
}