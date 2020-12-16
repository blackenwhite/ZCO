#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  if(n<3){
    cout<<min({v[0],v[1],v[2]})<<endl;
    return 0;
  }

  vector<int>dp(n);
  dp[0]=v[0];
  dp[1]=v[1];
  dp[2]=v[2];
  for(int i=3;i<n;i++){
    dp[i]=min(dp[i-1],min(dp[i-2],dp[i-3]))+v[i];
  }

  cout<<min({dp[n-1],dp[n-2],dp[n-3]})<<endl;

}
