#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int c;
    int out=0;
    if(a<b||a==b)
    {
        c=a;
        out=(a-c)+(b-c);
    }
    else{
        c=b;
        out=(a-c)+(b-c);
    }
    cout<<out<<endl;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
         solve();
    }
    return 0;
}