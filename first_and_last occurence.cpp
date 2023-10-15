#include<iostream>
using namespace std;
int main()
{
int n,num,flag=0;
cout<<"Enter n number of elements in array ";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cout<<"Enter array"<<i<<" ";
cin>>arr[i];
}

cout<<"Enter num for check first_and_last occurence "<<num;
cin>>num;

for(int i=0;i<n;i++)
{
if(arr[i]==num)
{
flag=1;
cout<<"first index= "i;
break;
}
}

for(int i=n-1;i>=0;i--)
{       
if(arr[i]==num)
{
cout<<"last index= "i;
break;
}
}

if(flag==0)
{
cout<<<"num not found -1";
}
return 0;
}
