#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1 , y1 , x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        bool acc = 0;
        if(x1!=x2&&x1!=x3&&x2!=x3)
        {
            acc =1;
        }
        else if(y1!=y2&&y1!=y3&&y2!=y3)
        {
            acc = 1;
        }
        else
        {
            acc = 0;
        }
        if(acc)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}