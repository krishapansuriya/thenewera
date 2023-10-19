#include <iostream>
using namespace std;
class Time{
	public :
		int h,m,s;
};

int main()
{
	Time t;
	cout<<"Enter hours :";
	cin>>t.h;
	cout<<"Enter minitues :";
	cin>>t.m;
	cout<<"Enter second :";
	cin>>t.s;
	
	while(t.s>60)
	{
		t.m++;
		t.s-=60;
    } 
    while(t.m>60)
    {
    	t.h++;
    	t.m-=60;
	}
	cout<<"sum: "<<t.h<<" "<<t.m<<" "<<t.s<<endl;
}
