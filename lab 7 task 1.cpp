#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10] = {25,28,46,12,38,15,41,8,16,25};
	int b[10] = {31,21,93,14,34,61,7,5,16,26};
	int c[10];
	for(int i=0;i<=9;i++)
	{
		if(a[i]>b[i]){
			c[i]=a[i]+b[i];
		cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl;}
		else if(a[i]<b[i]){
			c[i]=a[i]*b[i];
		cout<<a[i]<<" * "<<b[i]<<" = "<<c[i]<<endl;}
		else if(a[i]==b[i]){
			c[i]=a[i]-b[i];
		cout<<a[i]<<" - "<<b[i]<<" = "<<c[i]<<endl;	}
	}
	cout<<"\n ALIZA NOOR";
	}
	
