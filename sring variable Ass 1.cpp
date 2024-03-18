
/*create a class named'Student' with a string variable 'name' and an integer variable'roll_no'.
 Assign the value of roll_no as '2' and that of name as "john" by 
 creating an object of the class student.*/

#include<iostream>
using namespace std;

class Student 
{
	public:
	int rollno;
	char name[10];
	
	
		void set_data()
		{
			cout<<"\n Enter student rollno,name";
			cin>>rollno>>name;
		}
       
	   void show_data()
	   {
	   	cout<<"\n ROLLNO ="<<rollno<<"\n NAME="<<name;
			   }		
};
main()

{
	Student S1;
	S1.set_data();
	S1.show_data();
}