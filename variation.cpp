#include<bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007
#define pd push_back
#define f(a,b,c) for(int i=a;i<b;i+=c)


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(v[i]-v[j]) >= k)
                {cnt += (n-j); break;}
            }
        }
        cout<<cnt;
    }
    return 0;
}
