#include<iostream>
using namespace std;
int main()
{
   string p;
   cin>>p;
   int l1=p.length();

   int i,count[256]={0};
   for(i=0;i<l1;i++)
   {
       count[p[i]]++;
   }
   for(i=0;i<l1;i++){
    if(count[p[i]]==1){
        cout<<p[i];
        break;
    }
   }
   
   return 0;
}