#include<iostream>
using namespace std;
int acces(int n)
{
    if(n==0)
        return 1;
    acces(n-1);
    cout<<n<<endl;
    return n;
}
int main()
{
    int n;
    cin>>n;
    acces(n);
    return 0;

}