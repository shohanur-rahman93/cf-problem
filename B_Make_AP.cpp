#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t; cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if(a>b) swap(a,b);  //sorting the given numbers

        if(c-b==b-a) cout<<"YES\n";  //checking for arithmetic progression
        else if(a*2==b+c) cout<<"YES\n";  //checking if first number has to be multiplied by 2
        else cout<<"NO\n";   //if none of the above conditions hold, answer is NO
    }
    return 0;
}
