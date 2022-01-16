#include <bits/stdc++.h>
using namespace std;
int main() {
  int t; cin>>t;
  while(t--){
string s,s1 ; cin>>s>>s1;
int sum=0;
for(int i=0;i<s1.size()-1;i++)
{
sum+=abs(int((s.find(s1[i])-s.find(s1[i+1]))));
}
cout<<sum<<endl;
}
    return 0;
}