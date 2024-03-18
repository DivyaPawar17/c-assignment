/*Write a program to calculate the average height of all the students of a class. The number of students
and their heights are entered by the user*/

#include<iostream>
using namespace std;
class students
{
	
		public:
			 int calaverage(int a,int b,int c)
			{
			
			
			
			return (a+b+c)/3;
		}
		
			
		

};
 int main()
{
	students h;
	cout<<"\n Enter height=";
	int h1,h2,h3;
	cin>>h1;
	cin>>h2;
	cin>>h3;
    float avg;
    
	avg=h.calaverage(h1,h2,h3);
	cout<<"\n Students average height="<<avg;
    
}


