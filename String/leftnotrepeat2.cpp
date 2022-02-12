#include<iostream>
using namespace std;
int left(string p){
    int l1=p.length();
    int count[256]={-1};
    int temp=INT_MAX;
    for(int i=0;i<l1;i++){
        if(count[p[i]]==-1){
        count[p[i]]=i;
        }
        else{
            count[p[i]]=-2;
        }
    }
    for(int i=0;i<256;i++){
        if(count[i]>=0)
        {
            temp=min(temp,count[i]);
        }
    }
    int c=(temp==INT_MAX)?-1:temp;
    return c;
};
int main()
{
   string p;
   cin>>p;
   cout<<left(p);
   return 0;

}