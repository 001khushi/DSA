#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int count[256]={0};
    int m=INT_MIN;
    vector<char> a;
    for(int i;i<a.size();i++)
    {
        a.push_back(i);
        count[a[i]]++;
        if(m<count[a[i]]){
            m=count[a[i]];
            cout<<a[i];
        }
    }
   cout<<m;

}