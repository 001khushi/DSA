#include<iostream>
using namespace std;
int acces(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n==1 || n==0)
        {
            return 1;
        }
      if( n%i==0 )
        cout<<i<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<acces(n);
    return 0;

}