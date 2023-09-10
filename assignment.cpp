#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int odd_count = 0;
	int even_count = 0;
	int pos_count = 0;
	int neg_count = 0;
	int i;
	float sum = 0;
	float average = 0;
	int a[8];
	for(i=0; i<=7;i++){
		cout<<"Enter NUmber ";
		cin>>a[i]; }
	for(i=0; i<=7; i++) {
		if(a[i]>0) {
			pos_count++;
			sum+=a[i]; }
		else {
			neg_count++;
			sum=+a[i];	}	
		if(a[i]%2 == 0) {
			even_count++; }
		else if(a[i]%2 != 0) {
			odd_count++; } }
			cout<<"\n\n\t";
	cout<<"POSITIVE NUMBERS = "<<pos_count<<endl;
	cout<<"\t NEGATIVE NUMBERS = "<<neg_count<<endl;
	cout<<"\t SUM = "<<sum<<endl;
	average = sum/a[i];
	cout<<"\tAVERAGE = "<<average<<endl;
	cout<<"\t ODD NUMBERS = "<<odd_count<<endl;
	cout<<"\t EVEN NUMBERS = "<<even_count<<endl;
	cout<<"\n\n\t\t Muhammad Hamdan";		
 getch();
 return 0;
}


