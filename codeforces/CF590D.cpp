// https://codeforces.com/contest/1234

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define ppi pair< pair<int,int>,int >
#define bs binary_search
#define gcd _gcd
#define fs first
#define sc second
int ABS(int a){return max(a,-a);}
ll ABS(ll a){return max(a,-a);}
double ABS(double a){return max(a,-a);}
int gif(int x,int a){return (x%a==0)?(x/a):((x/a)+1);}
ll gif(ll x,ll a){return (x%a==0LL)?(x/a):((x/a)+1LL);}
int lif(int x,int a){return (x/a);}
ll lif(ll x,ll a){return (x/a);}

struct fenwick
{
    vector<ll> t;

    void reset(int n)
    {
        t.assign(n+1, 0);
    }

    void update(int p, ll v)
    {
        for (; p < (int)t.size(); p += (p&(-p))) t[p] += v;
    }

    ll query(int r) //finds [1, r] sum
    {                     
        ll sum = 0;
        for (; r; r -= (r&(-r))) sum += t[r];
        return sum;
    }

    ll query(int l, int r) //finds [l, r] sum
    {
        if(l == 0) return query(r);
        return query(r) - query(l-1);
    }
};

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    s="."+s; // for 1-based indexing
    int n = s.size();

     // fenwick tree for all characters
    fenwick fen[26];
    for(int i=0;i<26;i++)
        fen[i].reset(n+1);
    
    //updates count of s[i] in the respective fenwick tree
    for(int i=1;i<=n;i++)
        fen[s[i]-'a'].update(i,1LL);
        
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        
        if(x==1)
        {
            int pos;char c;
            cin>>pos>>c;
            
            // to remove its freq from the fenwick tree
            fen[s[pos]-'a'].update(pos,-1LL);
            s[pos]=c;
            // to add its freq in the fenwick tree
            fen[s[pos]-'a'].update(pos,1LL);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            int ans=0;

            // number of distinct characters count
            for(int i=0;i<26;i++)
                if(fen[i].query(l,r)>0)
                    ans++;
            cout<<ans<<"\n";
        }
    }
    

}
