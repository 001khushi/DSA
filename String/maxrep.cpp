#include<iostream>
using namespace std;
char maxrep(string p)
{
    int m= INT_MIN;
    int r;
    int count[256]={0};
    int l1=p.length();
    for(int i=0;i<l1;i++)
    {
        count[p[i]]++;
        if(m<count[p[i]]){
            m=count[p[i]];
            cout<<p[i];
        }
      }
    return m;
}
int main(){
string p;
cin>>p;
cout<<maxrep(p);
return 0;
}