#include<iostream>
using namespace std;
int main()
{
    string p;
    int count[256]={0};
    cin>>p;
    int l1=p.length();
for(int i=0;i<l1;i++)
{
    count[p[i]]++;
    if(count[p[i]]==1)
     cout<<p[i];
}
return 0;
}