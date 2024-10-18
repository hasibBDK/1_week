#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         int cnt=0;
         if((a>=c&&b>d)||(a>c&&b>=d))
         cnt++;
         if((a>=d&&b>c)||(a>d&&b>=c))
         cnt++;
         
         cout<<cnt*2<<'\n';
    }
    return 0;
}