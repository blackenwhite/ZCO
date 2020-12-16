#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  sort(v.begin(),v.end());

  ll ans=0;
  int i=0,j=n-1;
  while(i<j){
    if(v[i]+v[j]<k){
      ans+=(j-i);
      i++;
    }else {
      j--;
    }
  }
  cout<<ans<<endl;
}
