#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }

  sort(v.begin(),v.end());
  ll ans=INT_MIN;
  for(ll i=n-1;i>=0;i--){
    ll rev=v[i]*(n-i);
    ans=max(ans,rev);
  }
  cout<<ans<<endl;
}
