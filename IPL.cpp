#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  vector<vector<ll>>dp(n,vector<ll>(3));
  dp[0][0]=0;
  dp[0][1]=v[0];
  dp[0][2]=v[0];

  for(int i=1;i<n;i++){
    dp[i][0]=max(max(dp[i-1][1],dp[i-1][2]),dp[i-1][0]);
    dp[i][1]=v[i]+dp[i-1][0];
    dp[i][2]=v[i]+dp[i-1][1];
    //else dp[i][2]=v[i]+dp[i-2][0];


  }

  /*for(int i=0;i<n;i++){
    cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
  }*/

  ll ans=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
  cout<<ans<<endl;

}
