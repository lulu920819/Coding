#include<iostream>
using namespace std;
int i = 1;
class MyCls{
public:
MyCls():m_nFor(m_nThd),m_nSec(i++),m_nFri(i++),m_nThd(i++){
m_nThd = i;
}
void echo()
{
    cout << "result:"<<m_nFri+m_nSec+m_nThd+m_nFor<<endl;
    cout << "fri:"<<m_nFri<<endl;
    cout << "sec:"<<m_nSec<<endl;
    cout << "thd:"<<m_nThd<<endl;
    cout << "for:"<<m_nFor<<endl;
}
private:
int m_nFri;
int m_nSec;
int m_nThd;
int &m_nFor;
};

int main()
{
    MyCls ocls;
    ocls.echo();
    return 0;
//cout<<sizeof(struct A);
}

