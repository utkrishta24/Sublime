#include <iostream>
using namespace std;
#define ll long long int
#include<math.h>
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
       ll n,k=0;
       cin>>n;
       n-=1;
        for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
               k+=1;
  
            else // Otherwise print both
                k+=2;
        }
    }
       
       cout<<k<<endl;
      
    }
    return 0;
}
