    #include<string.h>
    #include<iostream>
#include<math.h>
    using namespace std;

    void convertToTitle(int n)
    {
        string title;
        while(n>=1)
        {

            int x = (n-1)%26;
            char s = 'A'+x;
//            title.push_back('A'+x);
//title = title+('A'+x);
title.insert(0,1,s);
            n = (n-1)/26;
        }
        cout<<title<<endl;
    }

    void titleToNumber(string s) {
        int number=0;
        int i=0;
        for(string::reverse_iterator  iter = s.rbegin(); iter != s.rend();iter++)
        {
            int x = (*iter)-'A'+1;
            cout<<"i:"<<i<<"x:"<<x<<endl;
            number+=(x*pow(26,i));
            i++;
        }
        cout<<number;

    }

    void convert(string s, int numRows) {
        string t[numRows];
        string new_s;
        int i=0;
        for(string::iterator iter = s.begin();iter!=s.end();iter++)
        {
            int rows = i%(2*numRows-2);
            cout<<i;
            if(rows<numRows)
                t[rows].push_back(*iter);
            else
               t[2*numRows-rows-2].push_back(*iter);

            i++;
        }

        for(int i = 0;i<numRows;i++)
        {
            cout<<"tt::"<<t[i]<<endl;
            new_s += t[i];
        }


       // return new_s;
       cout<<new_s;

    }

    int main()
    {
        convert("ABCD", 3);
//       convertToTitle(26);
//titleToNumber("A");
    }
