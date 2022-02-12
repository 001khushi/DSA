#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    string p;
    
    cin>>p;
    int last=p.length()-1;
    for(int i=0;i<=last;i++)
    {
        char temp=p[i];
        p[i]=p[last];
        p[last]=temp;
        last--;
    }
    cout<<p;
}