#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop

vector<ll>v;
vector<ll>:: iterator it;

ll zero(ll n)
{
    ll i,c=0,pw=5;
    while(n>=pw)
    {
       c+=n/pw;
       pw=pw*5;
    }
    return  c;
}
ll bsearch(ll q)
{
    ll l=0,r=1e9,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(zero(mid)>q)
            r=mid-1;
        else if(zero(mid)<q)
            l=mid+1;
        else
            return mid;
    }
    return -1;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,c=1,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(bsearch(n)==-1)
            cout<<"Case "<<c<<": impossible"<<endl;
        else
        {
            a=bsearch(n);
            for(i=a; i>=1; i--)
            {
                if(zero(i)!=n)
                    break;
            }
            cout<<"Case "<<c<<": "<<i+1<<endl;

        }
        c++;

    }


    return 0;
}
