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
    ll t,i,n,ans,j,a,b,c,p=1,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        ans=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        for(i=0; i<n-2; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                a=v[i];
                b=v[j];
                sum=a+b;
                c=lower_bound(v.begin()+j+1,v.end(),sum)-v.begin();
                ans+=c-j-1;
            }
        }
        cout<<"Case "<<p<<": "<<ans<<endl;
        p++;

    }
return 0;
}
