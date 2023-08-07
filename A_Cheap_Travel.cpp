#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cnt1=n*a; //Buy single tickets all the time
    int cnt2=(n/m)*b+min((n%m)*a, b); //Buy m tickets as much as possible and then buy single tickets
    cout<<min(cnt1,cnt2)<<endl; //Print the minimum value
    return 0;
}
