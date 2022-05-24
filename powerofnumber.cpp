#include<iostream>
using namespace std;

int main()
{
	int x ,sum,n;
    sum=1;
    cin>>x>>n;
    while(n>0)
    {
        sum = sum*x;
        n--;
    }
	cout<<sum<<endl;
}