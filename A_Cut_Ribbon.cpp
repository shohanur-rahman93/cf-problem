#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i<=n;i++) // trying all possible ribbon lengths
    {
        for(int j=0;j<=n;j++)
        {
            int k = (n-i*a-j*b); // calculating third length using first two
            if(k>=0 && k%c==0) // checking if third length is valid
            {
                ans = max(ans,i+j+k/c); // updating answer
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
