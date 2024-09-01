#include<iostream>
using namespace std;
int main()
{
    int flag =0;
int a[10],i,s,n;
cout<<"enter no. of elements in the array ";
cin>>n;
cout<<"enter the values of "<<n<<" elements";
for(i=0;i<n;i++)
    cin>>a[i];
cout<<"enter the element you wish to search and find the position ";
cin>>s;
for(i=0;i<n;i++)
    {if(a[i]==s)
    {
       flag=1;
       cout<<"Element is present in the array and is at "<<i+1<<"position";
}
}
   if(flag==0)
    {cout<<"Element not found in the array";}

return 0;
}
