#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,x[N],mini,maxi;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>x[i];
    for(int i=1;i<=n;i++){
        if(i==1) mini=abs(x[i]-x[i+1]),maxi=abs(x[i]-x[n]);//分别求最小和最大值
        else if(i==n) mini=abs(x[i]-x[i-1]),maxi=abs(x[i]-x[1]);
        else mini=min(abs(x[i]-x[i-1]),abs(x[i]-x[i+1])),maxi=max(abs(x[i]-x[1]),abs(x[i]-x[n]));
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
