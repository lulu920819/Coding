#include<string>
#include<iostream>
using namespace std;

int lengthoflastword(string s)
{
    size_t length= s.length();
    if(0==length) return 0;
    cout<<"length"<<length<<endl;
    size_t last = s.find_last_not_of(" ");
    cout<<"last"<<last<<endl;
    if(string::npos==last)
        return 0;
    size_t space = s.rfind(" ",last);
    cout<<"space"<<space<<endl;
    if(string::npos==space)
        return (last+1);
    return (last - space);
}

int main()
{
    string s = "Hello   world";
    string s1 = "              ";
    cout<<s<<lengthoflastword(s)<<endl;
    cout<<s1<<lengthoflastword(s1)<<endl;
}
