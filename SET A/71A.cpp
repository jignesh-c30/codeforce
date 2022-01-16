#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    string s;
	    std::cin >> s;
	    if(s.length()>4)
	    std::cout << s[0]<<(s.length()-2)<<s[s.length()-1] << std::endl;
	    else
	    std::cout << s << std::endl;
	}
	
	return 0;
}