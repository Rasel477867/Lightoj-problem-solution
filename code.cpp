#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
vector<ll>v;
ll n,k;
bool cheak(ll m)
{
    ll sum=0,i,c=0;
    for(i=0; i<n; i++)
    {

        if(v[i]>m)
            return false;
        if(sum+v[i]<=m)
        {
            sum+=v[i];
            if(i==n-1)
                c++;
        }
        else{
            c++;
            sum=v[i];
            if(i==n-1)
                c++;
        }

    }
    if(c<=k)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,a,ans,mid,r,l,sum,p=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        v.clear();
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            sum+=a;
        }
        l=1,r=sum;
        while(r>=l)
        {
            mid=(l+r)/2;

            if(cheak(mid))
            {
                ans=mid;
                r=mid-1;

            }
            else
                l=mid+1;
        }
        cout<<"Case "<<p<<": "<<ans<<endl;
        p++;
    }

return 0;
}
