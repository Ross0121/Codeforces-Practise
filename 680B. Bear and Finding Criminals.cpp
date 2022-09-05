#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,a;
cin>>n>>a;
a--;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
int c=0;
for(int j=0;j<n;j++)
{
    if(a+j<n&&a-j>=0)
    {
        if(ar[a-j]==1&&ar[a+j]==1&&j!=0){c+=2;}
        else if(ar[a-j]==1&&ar[a+j]==1&&j==0){c+=1;}
    }
     else if(a-j<0&&a+j<n)
    {
        if(ar[a+j]==1)c++;
      
    }
    else if(a+j>=n&&a-j>=0)
    {
        if(ar[a-j]==1)c++;
       
    }
}
cout<<c<<"\n";
return 0;
}
