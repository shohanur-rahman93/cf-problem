#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t; cin>>t;
    while(t--)
    {
        ll a, b; cin>>a>>b;
        if(!b || !a) cout<<0<<endl;
        else if(a<=1 || b<=1) cout<<0<<endl;
        else
        {
            ll ans=min(a, b);
            ll c=min(a-ans, b-ans);
            ans+=c/3;
            cout<<ans<<endl;
        }
    }
    return 0;
}
