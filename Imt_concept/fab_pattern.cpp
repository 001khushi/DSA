#include<iostream>
using namespace std;
int main(){
   int i,n=9;
   int t1=0,t2=1;
   int nexterm=t1+t2;
   cout<<t1<<" "<<t2<<" ";
   for(i=3;i<=n;i++)
   {
       cout<<nexterm<<" ";
       t1=t2;
       t2=nexterm;
       nexterm=t1+t2;
   }
   return 0;
}


