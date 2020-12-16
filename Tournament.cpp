#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(int& a,int& b){
  return a>b;
}

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  sort(v.begin(),v.end(),cmp);


  vector<int>pos(n);
  pos[n-1]=v[n-1];
  for(int i=n-2;i>=0;i--){
    pos[i]=pos[i+1]+v[i];
  }

  /*for(int i=0;i<n;i++){
    cout<<pos[i]<<" ";
  }*/

  ll sum=0;
  ll j=n-1;
  for(int i=0;i<n-1;i++){

    sum+=j*(v[i])-pos[i+1];
    j--;
  }
  cout<<sum<<endl;

}
