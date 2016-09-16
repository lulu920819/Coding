#include<iostream>
#include<string>
using namespace std;
int main()
{
     string a,b;
      int i,j,c,n1,n2;
      while(1)
      {
             getline(cin,a);
             if(a=="#")
                break;
             getline(cin,b);
             n1=a.size();
             n2=b.size();
             for(i=0;i<n1;i++)
             {
                 c=0;
                 for(j=0;j<n2;j++)
                    if(b[j]==a[i])
                         c++;
                  cout<<a[i]<<' '<<c<<endl;
            }
     }
 return 0;
}
