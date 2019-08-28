#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,j,i1,j1,diff,a,q;
	cout<<"enter the integer value for i"<<endl;
	cin>>i;
	cout<<"enter the possition for i"<<endl;
	cin>>i1;
	cout<<"enter the integer value for j"<<endl;
	cin>>j;
	cout<<"enter the possition for j1"<<endl;
	cin>>j1;
	diff=(i-j)/(i1-j1);
	a=i-(i1-1)*diff;
	cout<<"diffrence is :"<<diff<<endl;
	cout<<"first value is :"<<a<<endl;
	for(q=1;q<=10;q++)
	{
		cout<<a+(q-1)*diff<<endl;
	}
	
	return 0;
}
