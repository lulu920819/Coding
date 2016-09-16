    #include<vector>
    #include <iostream>
    #include<string>
    #include<stdio.h>
    using namespace std;
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> range;
        int s=nums.front();
        int e=nums.back();
        for(vector<int>::iterator it= nums.begin()+1;it<nums.end();it++)
        {
            int diff = (*it)-*(it-1);
            if(diff!=1)
            {
                e = *(it-1);
                string t;
                if(s!=e)
                    //sprintf(&t,"%d->%d",s,e);
                    t = itoa(s)+"->"+itoa(e);
                else //sprintf(&t,"%d",e);
                    t = itoa(e);
                range.push_back(t);
                s = *it;
                e = nums.back();
            }
            if(it==nums.end()-1)
            {
                e = (*Iter)
                if(s!=e)
                    sprintf(t,"%d->%d",s,e);
                else sprintf(t,"%d",e);
                range.push_back(t);
            }

        }
    }
int main()
{
    vecter<int> s= {1,2,3,4,5,7}
    summaryRanges(s);
}
