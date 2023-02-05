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
 
const ll MOD = 1e9 + 7;
 
//variables:
 
 
//functions:
 
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
 
 
int main()
{
    boost;
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        map<ll, int> mpp;
        vl v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
        {
            mpp[v[i]]++;
        }
        if(n==1)cout<<v[0]<<" "<<v[0]<<nl;
        else{
        sort(v.begin(),v.end());
        ll l = -1,r=-1;
        vll res;
        res.pb(mp(-1,-1));
        bool acc = true;
        for(int i=0;i<n-1;i++)
        {
            if(mpp[v[i]]>=k&&mpp[v[i+1]]>=k&&(v[i]==v[i+1]||v[i]==v[i+1]-1))
            {
                if(acc)
                {
                    r=v[i];
                    acc=false;
                }
                l=v[i+1];
                res.pb(mp(r,l));
            }
            else
            {
                r=-1;l=-1;
                acc=true;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mpp[v[i]]>=k)
                res.pb(mp(v[i],v[i]));
        }
        ll diff = 0;
        bool flag = true;
        for(int i=0;i<res.size();i++)
        {
            diff = max(diff,res[i].second - res[i].first);
        }
        for(int i=0;i<res.size();i++)
        {
            if(res[i].second-res[i].first == diff&&res[i].second!=-1&&res[i].first!=-1)
            {
                cout<<res[i].first<<" "<<res[i].second;
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<-1;
        cout<<nl;}
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
 
 