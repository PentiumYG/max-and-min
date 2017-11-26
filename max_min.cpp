#include<iostream>
using namespace std;

 int main()
 {
 int i,a[5],temp,j,sum=0;
 for(i=0;i<5;i++)
 {
 cin>>a[i];
 }
 for(i=0;i<5;i++)
 {
 for(j=0;j<5-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 for ( int p=0; p<5;p++)
 cout << a[p]<<" ";
 for ( int k=0; k<5;k++)
 {
     sum = sum+a[k];
 }
 	 cout <<"\n"<<sum;
     cout<<"\n"<<sum -a[4]<<" ";
     cout<< sum-a[0]<<endl;
     return 0;
 }
