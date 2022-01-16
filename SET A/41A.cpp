#include<bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
 cin>>s1;
 cin>>s2;
 reverse(s1.begin(), s1.end());
 if(s1==s2)
 std::cout << "YES" << std::endl;
 else
 std::cout << "NO" << std::endl;
 return 0;
}