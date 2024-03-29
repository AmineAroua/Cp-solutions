#include <bits/stdc++.h>
 
using namespace std;
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
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
#define fore(i, y) for(ll i = 0; i < y; i++)
#define forr(i,x,y) for(int i = x;i<=y;i++)
#define forn(i,y,x) for(ll i = y; i >= x; i--)
#define all(v) v.begin(),v.end()
#define sz(v) v.size()
#define clr(v,k) memset(v,k,sizeof(v))
#define ub upper_bound
#define lb lower_bound
 
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
        int n,m,k;
        cin>>n>>m>>k;
        vi p(n);
        vi pos(n+1);
        fore(i , n)
        {
            cin>>p[i];
            pos[p[i]] = i+1;
        }
        vi a(m);
        fore(i, m)
        {
            cin>>a[i];
        }
        int ans = 1e8;
        forr(i , 0 , m-2)
        {
            if(!(pos[a[i]]<pos[a[i+1]]&&pos[a[i+1]]<=pos[a[i]]+k))
            {
                ans = 0;
                break;
            }
            ans = min(ans , pos[a[i+1]]-pos[a[i]]);
            if(!(n<=k+1&&n>1))
            {
                ans = min(pos[a[i]] + k - pos[a[i+1]] +1, ans);
            }
        }
        if(ans==1e8)ans = 0;
        cout<<ans<<nl;
    }
}
 