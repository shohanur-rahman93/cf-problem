#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            if(ele%2==0) even++;
            else odd++;
        }
        bool ans=false;
        for(int i=1;i<=odd&&i<=x;i+=2){
            if((x-i)<=even) ans=true;
        }
        cout<<(ans?"Yes":"No")<<endl;
    }
    return 0;
}
