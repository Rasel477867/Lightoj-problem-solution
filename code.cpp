
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
map<ll,vector<ll> >m1;
map<ll,ll>m;



vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,a,b,n,c,k,t,j=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        v.clear();
        for(i=0;i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        cout<<"Case "<<j<<":"<<endl;

        j++;
        while(k--)
        {
            cin>>a>>b;
            c=upper_bound(v.begin(),v.end(),b)-lower_bound(v.begin(),v.end(),a);
            cout<<c<<endl;

        }
    }


return 0;
}
