#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        int maxi=INT_MIN;
        int add=0;
        for(int i=0;i<n;i++){
            add=arr[i]+arr[(i+1)%n];
            if(add>maxi){
                maxi=add;
            }
        }
        cout<<maxi<<endl;
    }
}