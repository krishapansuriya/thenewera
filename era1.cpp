#include<iostream>
using namespace std;
class Distance{
	public :
		int feet;
		int inch;
};
main()
{
	Distance d1,d2,d3;
	
	cout<<"Enter d1.feet :";
	cin>>d1.feet;
	cout<<"Enter d1.inch :";
	cin>>d1.inch;
	cout<<"Enter d2.feet :";
	cin>>d2.feet;
	cout<<"Enter d2.inch :";
	cin>>d2.inch;
	
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	
	while(d3.inch>=12)
	{
		d3.feet++;
		d3.inch=d3.inch-12;
	}
	cout<<"Total feet :- "<<d3.feet<<endl;
	cout<<"Total inch :- "<<d3.inch<<endl;
}
