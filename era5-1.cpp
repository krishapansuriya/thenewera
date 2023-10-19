#include<iostream>
#include<string.h>
using namespace std;
class Student{
	public :
		int id,mobaile_no,std;
		char name[100];
		char school_name[100];
};
int main()
{
	Student s1,s2;
	cout<<"Enter ID =";
	cin>>s1.id;
	cout<<"Enter Name =";
	cin>>s1.name;
	cout<<"Enter Mobile_no =";
	cin>>s1.mobaile_no;
	cout<<"Enter std =";
	cin>>s1.std;
	cout<<"Enter School_name =";
	cin>>s1.school_name;
	
	cout<<"ID ="<<s1.id<<endl;
	cout<<"Name ="<<s1.name<<endl;
	cout<<"Mobile_no ="<<s1.mobaile_no<<endl;
	cout<<"Std ="<<s1.std<<endl;
	cout<<"School_name ="<<s1.school_name<<endl;
	
	cout<<"Enter ID =";
	cin>>s2.id;
	cout<<"Enter Name =";
	cin>>s2.name;
	cout<<"Enter Mobile_no =";
	cin>>s2.mobaile_no;
	cout<<"Enter std =";
	cin>>s2.std;
	cout<<"Enter School_name =";
	cin>>s2.school_name;
	
	cout<<"ID ="<<s2.id<<endl;
	cout<<"Name ="<<s2.name<<endl;
	cout<<"Mobile_no ="<<s2.mobaile_no<<endl;
	cout<<"Std ="<<s2.std<<endl;
	cout<<"School_name ="<<s2.school_name<<endl;
	
}

