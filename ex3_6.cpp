#include<iostream.h>
void main()
{
	float l,s,r,pi;
	int k;
	cout<<"ÇëÊäÈër,k";
	cin>>r>>k;
	pi=3.14159;
	l=2*pi*r,s=pi*r*r;
	switch(k)
	{
     case 1:cout<<"l="<<l<<endl;break;
     case 2:cout<<"s="<<s<<endl;break;
     case 3:cout<<"s="<<s<<","<<"l="<<l<<endl;break;
	}
}
