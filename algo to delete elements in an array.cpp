#include<iostream>
using namespace std;
int main()
{
int a[10],i,s,n,p, flag=0;
cout<<"enter no. of elements in the array ";
cin>>n;
cout<<"enter the values of "<<n<<" elements ";
for(i=0;i<n;i++)
    cin>>a[i];
cout<<"enter the element you wish to delete ";
cin>>s;
for(i=0;i<n;i++)
    if(a[i]==s)
    {
       flag=1;
       p==i;
       cout<<"Element is present in the array and is at "<<i+1<<" position";
      for(i=p;i<n;i++)
    a[i]==a[i+1];
    cout<<"\nElement deleted!";
    }
if(flag==0)
  {
      cout<<"\n element not found";
  }

    return 0;
}
