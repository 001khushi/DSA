#include<iostream>
using namespace std;
void permutation(string p,int l,int r)
{
    if(l==r){
        cout<<p<<endl;
    }
    else{
        for(int i=l;i<=r;i++)
        {
            swap(p[l],p[i]);
            permutation(p,l+1,r);
            swap(p[l],p[i]);
        }
    }
     
}
int main()
{
string p;
cin>>p;
int l1=p.length();
permutation(p,0,l1-1);
return 0;
}