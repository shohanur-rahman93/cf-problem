#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        if(n%x==y)
            cout<<n<<"\n";
        else if(n%x<y)
            cout<<n-(x-y)<<"\n";
        else
            cout<<n-(n%x-y)<<"\n";
    }
    return 0;
}
