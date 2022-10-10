#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int sumofn(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	int N;
	printf("Enter The numbers of natural number:");
	scanf("%d",&N);
	
	cout<<"Sum of first "<<N<<" natural numbers is: "<<"0";
	
	for (int i=1;i<=N;i++)
	{
		cout<<"+"<<i;
	}
	cout<<" = "<<sumofn(N);
	
	getch();
	return 0;
}
