#include<iostream>
using namespace std;
int acces(int n)
{
    if(n==0)
        return 1;
    cout<<n<<endl;
    acces(n-1);
    return n;
}
int main()
{
    int n;
    cin>>n;
    acces(n);
    return 0;

}