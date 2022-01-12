#include<iostream>
using namespace std;
int acces(int n)
{
    for(int i=0;i<n;i++)
    {
      if(i%2==0){
          
      }
        
      else{
          cout<<i<<endl;
      }
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<acces(n);
    return 0;

}