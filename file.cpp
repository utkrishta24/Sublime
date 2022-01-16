#include <bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       while (t--)
       {
              int n;
              cin>>n;
              int red[3];
              for(int i=0;i<3;i++)
              {
                     cin>>red[i];
              }
              int green[3];
              for(int i=0;i<3;i++)
              {
                     cin>>green[i];
              }
              int blue[3];
              for(int i=0;i<3;i++)
              {
                     cin>> blue[i];
              }
              int ans=0; 
              if(red[0]==n && green[1]==n && blue[2]==n)
              {
                     ans=0;
              }
              while(red[0]!=n)
              {
                     if(blue[0]!=0)
                     {
                            red[0]++;
                            red[2]--;
                            blue[2]++;
                            blue[0]--;
                            ans++;
                            
                     }
                     if(green[0]!=0)
                     {
                            red[0]++;
                            red[1]--;
                            green[1]++;
                            green[0]--;
                            ans++;
                     }



              }
              while(blue[2]!=n)
              {
                     if(red[2]!=0)
                     {
                            red[0]++;
                            red[2]--;
                            blue[2]++;
                            blue[0]--;
                            ans++;
                            
                     }
                     if(green[2]!=0)
                     {
                            blue[2]++;
                            blue[1]--;
                            green[2]++;
                            green[1]--;
                            ans++;
                     }



              }


              cout<<ans<<"\n";
              

              
       }
       return 0;
}

