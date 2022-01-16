#include<iostream>
using namespace std;

int main()
{
    int a, count = 0;
    std::cin >> a;
    if (a % 5 != 0)
        count = 1;
    std::cout << a / 5 + count << std::endl;

}