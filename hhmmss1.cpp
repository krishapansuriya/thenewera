#include<iostream>
#include<string.h>
using namespace std;
class second{
	public :
		int input_second;
};
int main()
{
	second s;
	cout<<"Enter the time in second :-";
	cin>>s.input_second;
	cout<<endl;
	
	int hours = s.input_second/3600;
	int minutes = (s.input_second%3600)/60;
	int seconds = s.input_second%60;
	
	cout<<"Time in (HH:MM:SS) formet :- "<<hours<<":"<<minutes<<":"<<seconds <<endl;
}
