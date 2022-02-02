#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a=n%7;
        if (a<=n%10)
        n=n-a;
        else
        n=n+7-a;
        cout<<n<<endl;
    }
    
}