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
         string a,b;
         cin>>a>>b;
         swap(a[0],b[0]);
         cout<<a<<" "<<b<<'\n';
    }
    return 0;
}