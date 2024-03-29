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
vector<pair<int,int>> dir{{1,1},{-1,1},{1,-1},{-1,-1}};
 
//functions:
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
 
bool check(pair<int,int> d,int i,int j,int n,int m)
{
    if(i+d.fi<n&&i+d.fi>=0&&j+d.se<m&&j+d.se>=0)
        return true;
    return false;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    boost;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char mat[n][m];
        int one = 0,Lshape = 5;
        forr(i,0,n-1)
        {
            forr(j,0,m-1)
            {
                cin>>mat[i][j];
                one+= mat[i][j]=='1';
            }
        }
        forr(i,0,n-1)
        {
            forr(j,0,m-1)
            {
                for(auto d:dir)
                {
                    int nb = 0;
                    nb+=mat[i][j]=='1';
                    if(check(d,i,j,n,m))
                    {
                        nb+=mat[i+d.fi][j]=='1';
                        nb+=mat[i][j+d.se]=='1';
                    }
                    else
                    {
                        continue;
                    }
                    if(nb!=0)
                    Lshape = min(Lshape,nb);
                }
            }
        }
        if(one!=0)
            cout<<one-Lshape+1<<nl;
        else
        {
            cout<<0<<nl;
        }
    }
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
 
 