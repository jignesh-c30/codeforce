#include <iostream>
using namespace std;

int main() {
	int t,cnt=0;
	std::cin >> t;
	int a,b,c;
	while(t--)
	{
	    std::cin >> a>>b>>c;
	    if(a&b||b&c||c&a)
	    cnt++;
	}
	    std::cout << cnt << std::endl;
	
	return 0;
}