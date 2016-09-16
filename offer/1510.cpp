#include<iostream>
#include<string>

using namespace std;
int main()
{
    string line;
    size_t len;
    getline(cin,line);
    cout<<line;
    len = line.length();
    cout<<endl<<len;

}
