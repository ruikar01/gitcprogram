#include<iostream>
using namespace std;
main()
{
	int angle1,angle2,angle3,sum;
	cout<<"input the three angle of traingle";
	cin>>angle1>>angle2>>angle3;
	sum=angle1+angle2+angle3;
	if(sum==180)
	{
		cout<<"the traingle is valid";
	}
	else
	{
		cout<<"the traingle is invalid";
	}
	cout<<"hello word";
}
