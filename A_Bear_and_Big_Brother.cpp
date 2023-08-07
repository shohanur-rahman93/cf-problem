#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,year=0;
    cin>>l>>b;

for (;;)
{
    if (l<=b)
    {
        l=l*3;
        b=b*2;
        year++;

    }
    else
    break;
}

cout<<year;
}