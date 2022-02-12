#include<iostream>
using namespace std;
int main()
{
    string p,r;
    cin>>p>>r;
    int a=0;
    int count[256]={0};
    int l1=p.length();
    int l2=r.length();
    if(l1!=l2){
       cout<<"No Anagram";
    }
    else{
         for(int i=0;i<l1;i++)
         {
             count[p[i]]++;
         }
         for(int i=0;i<l2;i++)
         {
             count[r[i]]--;
         }
        for(int i=0;i<256;i++)
        {
            if(count[i]!=0)
            {
                a=1;
            }
        }
    }
    if(a==1){
        cout<<"No Anagram";
    }
    else{
        cout<<"Anagram";
    }
    return 0;
}
