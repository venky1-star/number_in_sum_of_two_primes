#include<iostream>
using namespace std;
int prime2(int i,int num)
{
	for(int j=2;j<=(num-i)/2;j++)
	{
		if((num-i)%j==0)
		return 1;
	}
	return 0;
}
int prime1(int i)
{
	for(int j=2;j<=i/2;j++)
	{
		if(i%j==0)
		return 0;
	}
	return 1;
}
main()
{
	int num,i,j;
	cout<<"Enter the number : ";
	cin>>num;
	i=2;
	if(prime2(i,num)==0)
	cout<<num<<" = "<<i<<" + "<<num-i<<endl;
	i=3;
	while(i<=num/2)
	{
		if(prime2(i,num)==0)
		cout<<num<<" = "<<i<<" + "<<num-i<<endl;
		i=i+2;
		while(prime1(i)==0)
		i=i+2;
	}
}
