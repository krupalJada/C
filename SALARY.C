// a= salary ,h = hra,d =da,t =total salary 
#include<iostream>
using namespace std;
int main()
{
	float a,h,d,t;
	cout<<"Enter value of salary :";
	cin>>a;

	if(a<=5000)
	{
		h=(a*0.08);
		d=(a*0.20);
		t=(a+h+d);
		cout<<"\n gross salary by hra : "<<h;
		cout<<"\n gross salary by da : "<<d;
		cout<<"\n total salary : "<<t;

	}
	else if(a>5000 && a<=10000)
	{
		h=(a*0.12);
		d=(a*0.30);
		t=(a+h+d);
		cout<<"\n gross salary by hra : "<<h;
		cout<<"\n gross salary by da : "<<d;
		cout<<"\n total salary : "<<t;

	}
	else if(a>10000 && a<=15000)
	{
		h=(a*0.15);
		d=(a*0.40);
		t=(a+h+d);
		cout<<"\n gross salary by hra : "<<h;
		cout<<"\n gross salary by da : "<<d;
		cout<<"\n total salary : "<<t;

	}
	else
	{
		h=(a*0.20);
		d=(a*0.50);
		t=(a+h+d);
		cout<<"\n gross salary by hra : "<<h;
		cout<<"\n gross salary by da : "<<d;
		cout<<"\n total salary : "<<t;

	}
}
