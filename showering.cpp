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
        int n,s,m;
        cin>>n>>s>>m;
        int aa=0,bb=0,cc=0;
        int diff=-1e9;
        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            aa=l-bb;
            bb=r;
            diff =max(diff,aa);

        }
        cc=(m-bb);
        diff = max(diff,cc);
        if(diff>=s)
        {
            cout<<"YES"<<'\n';
        }
        else
        cout<<"NO"<<'\n';
    }
    return 0;
}