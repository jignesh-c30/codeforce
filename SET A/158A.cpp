#include <iostream>
using namespace std;

int main() {
	int k,n, a[100],cnt=0;
	std::cin >> n>>k;
	for(int i=0;i<n;i++)
	{
	std::cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>=a[k]&&a[i]>0)
	    cnt++;
	}
	std::cout << cnt << std::endl;
	
	
	return 0;
}