// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int fab=1;
//     for(int i=0;i<n;i++)
//     {
//         fab+=(i);
//         cout<<fab<<" ";
//     }
// return 0;

// }
#include<iostream>
using namespace std;
int fab(int n)
{
    if(n<=1)
      return n;
    return fab(n-1)+fab(n-2);
}
int main()
{
    int n=9;
    cout<<fab(n);
    return 0;
}