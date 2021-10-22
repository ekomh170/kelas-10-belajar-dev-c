//EkoMH
//ContohLainFungsi
#include<iostream>
using namespace std;
int kurang(int a,int b)
{
	int r;
	r=a-b;
	return(r);
}
int main()
{
	int x=5,y=3,z;
	z=kurang(7,2)
	cout<<"pertama:"<<z<<endl;
	cout<<"kedua:"<<kurang(7,2)<<endl;
	cout<<"ketiga"<<kurang(x,y)<<endl;
	z=4+kurang(x,y);
	cout<<"Keempat:"<<z<<endl;
	return 0;
}
