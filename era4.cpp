#include<iostream>
#include<string.h>
using namespace std;
class House{
	public :
		int house_no,rooms;
		char soc[100];
};
int main()
{
	House h1;
	cout<<"Enter house no = ";
	cin>>h1.house_no;
	cout<<"Enter room = ";
	cin>>h1.rooms;
	cout<<"Enter soc = ";
	cin>>h1.soc;
	
	cout<<h1.house_no<<endl<<h1.rooms<<endl<<h1.soc<<endl;
}

