#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[3][3] = {{19,32,14},{51,47,21},{12,61,31}};
	int b[3][3] = {{12,25,31},{16,17,11},{26,44,54}};
	int c[3][3];
	for(int q=0;q<=2;q++){
		for(int s=0;s<=2;s++){
			c[q][s]=a[q][s]+b[q][s];
			cout<<"\t"<<c[q][s];
		}
		cout<<"\t"<<endl;
	}	
	cout<<"\n\t ALIZA NOOR";
	getch();
	return 0;
}

