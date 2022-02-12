#include<iostream>
using namespace std;
int rotation(string p,string r){
    int i;
    p=p+p;
    if(p.find(r))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
int main()
{
    string p,r;
    cin>>p>>r;
    cout<<rotation(p,r);
    return 0;
}