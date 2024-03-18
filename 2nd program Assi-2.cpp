/*Assign and print the roll no, phone number and address of two student having names "sam"
and "john" respectively by creating two objects of the class Student.*/


#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		long int phoneno;
		char name[10];
		char address[40];
		
		public:
		void get()
		{
			cout<<"\n Enter the rollno";
			cin>>rollno;
			cout<<"\n Enter the phoneno";
			cin>>phoneno;
			cout<<"\n Enter the name";
			cin>>name;
			cout<<"\n Enter the address";
			cin>>address;
				
		}
		void show()
		{
		
		cout<<"\n Rollno="<<rollno;
		cout<<"\n Phoneno="<<phoneno;
		cout<<"\n Name="<<name;
		cout<<"\n Address="<<address;
	}
		
		
};

main()
{
	student s1;
	student s2;
	s1.get();
	s1.show();
	s2.get();
	s2.show();
}