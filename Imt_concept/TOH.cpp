#include<iostream>
using namespace std;
void TOH(int n,char s,char a,char d){
    int count = 0 ;
    if(n==1){
        count++;
        cout<<count<<" Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return ;
    }
    TOH(n-1,s,d,a);
    count++;
    cout<<count<<" Move disk "<<n<<" from "<<s<<" to  "<<d<<endl;
    TOH(n-1,a,s,d);
}
int main()
{
    int n=3;
    TOH(n,'A','B','C');
    return 0;
}