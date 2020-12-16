#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  stack<int>st;

  int x;
  int ans=-1;
  int first=-1;
  int len=-1;
  int se=-1;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x==1){
      st.push(i);
      int sz=st.size();
      if(sz>ans){
      //  cout<<"yes"<<endl;
        ans=st.size();
        first=i+1;
      }
    }else{
      int j=st.top();
      st.pop();
      int temp=i-j+1;
      if(temp>len){
        len=temp;
        se=j;
      }
    }
  }

  cout<<ans<<" "<<first<<" "<<len<<" "<<se+1<<endl;
}
