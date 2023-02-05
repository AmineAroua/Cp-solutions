#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vl vector<long long>
#define vii vector<pair<int,int>>
#define vll vector<pair<long long,long long>>
#define pb push_back
#define ll long long
#define ld long double
#define nl '\n'
#define boost ios::sync_with_stdio(false)
#define mp make_pair
#define se second
#define fi first
#define forr(i, x, y) for(ll i = x; i <= y; i++)
#define forn(i, x, y) for(ll i = x; i >= y; i--)
#define all(v) (v.begin(),v.end())
#define sz(v) v.size()
#define clr(v,k) memset(v,k,sizeof(v))
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18 + 1;
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
 
// HERE IS THE SOLUTION
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    boost;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n%x!=0)
        {
            cout<<-1<<nl;
            continue;
        }
        vector<bool> used(n+1,0);
        used[x] = 1;
        vi ans;
        bool acc = 1;
        for(int i = 1;i<n-1;i++)
        {
            int j = i+1;
            int k = j;
            if(!used[j])
            {
                used[j] = 1;
                ans.pb(j);
                continue;
            }
            while((used[j]||n%j!=0)&&j<=n)
            {
                j+=k;
            }
            if(j<=n&&!used[j]&&n%j==0)
            {
                used[j] = 1;
                ans.pb(j);
            }
            else
            {
                acc = 0;
                break;
            }
        }
        if(!acc)
        {
            cout<<-1<<nl;
        }
        else
        {
            cout<<x<<" ";
            for(auto k:ans)cout<<k<<" ";
            cout<<"1 "<<nl;
        }
    }
}
 
 