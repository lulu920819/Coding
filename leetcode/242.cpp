#include<string>
#include<iostream>
using namespace std;

bool isanagram(string s,string t)
{
    string tmp(t);
    for(string::iterator iter = s.begin();iter!=s.end();iter++)
    {
        cout<<tmp<<endl;
        size_t pos = tmp.find(*iter);
        if(string::npos == pos)
            return false;
        else
            tmp.erase(pos,1);
        cout<<tmp<<endl;
    }
    if
    return true;
}

int main()
{
    string s = "a";
    string t = "ab";
    cout<<isanagram(s,t);
}

