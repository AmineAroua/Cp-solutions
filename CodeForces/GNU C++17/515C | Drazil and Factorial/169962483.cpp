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
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18 + 1;
 
//variables:
 
 
//functions:
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
 
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    boost;
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v;
    for(auto c:s)
    {
        if(c=='2'||c=='3'||c=='5'||c=='7')
            v.pb(c-'0');
        if(c=='4')
        {
            v.pb(2);
            v.pb(2);
            v.pb(3);
        }
        if(c=='6')
        {
            v.pb(3);
            v.pb(5);
        }
        if(c=='8')
        {
            v.pb(2);
            v.pb(2);
            v.pb(2);
            v.pb(7);
        }
        if(c=='9')
        {
            v.pb(3);
            v.pb(3);
            v.pb(2);
            v.pb(7);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:v)
        cout<<i;
    cout<<nl;
}
 
 
 
 
/*
 
1/2 half of the contest:
 Read the subject in ~2 min
 Reformulate the topic
 solve examples
 Think of the solution 3 min
 Implement the solution for 20 min
 Pseudo-code your algorithm
 Verify your solution
 Code your solution
 Test your solution
 Debug your code
2/2 half of the contest:
 find the easiest subtasks and try to solve them or give up
 if there are many subtasks, the problem is easy
 if the first subtask is difficult with no much points, the problem is difficult
----------------------------
!(: remember, you are the king of competitive programming
*/
 
 