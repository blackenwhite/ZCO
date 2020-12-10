#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005

ll arr[N];

int main(){
  ll n,h;
  cin>>n>>h;
  //vector<ll>v(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }

  ll pos=0;
  ll hold=0;

  // following the commands
  ll x;

  while(true){
    cin>>x;
    if(x==0){
      break;
    }

    if(x==1){
      // move left
      if(pos==0){
        continue;
      }
      pos--;
      continue;

    }

    if(x==2){
      // move right
      if(pos==n-1){
        continue;
      }
      pos++;
      continue;
    }

    if(x==3){
      // pick up box
      if(hold==0 && arr[pos]>0){
        hold=1;
        arr[pos]--;
        continue;
      }
    }

    if(x==4){
      // Drop box
      if(hold!=0 && arr[pos]<h){
        hold=0;
        arr[pos]++;
        continue;
      }
    }
  }

  for(ll i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
