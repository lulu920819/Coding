#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int a,b;
cin>>a>>b;
cout<<a+b<<" "<<a*b<<" "<<a-b<<" ";
if(b==0)
cout<<"-1 -1"<<endl;
else
cout<<a/b<<" "<<a%b<<endl;
}

return 0;
}
