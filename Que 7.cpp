/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard*/

#include<iostream>
using namespace std;
class recta
{
	private : 
	int l,b;
	public :
		
			recta (int x, int y)
			{
				l = x;
			    b = y;
			    
			}
			
			
		
		int returnarea()
		{
			return l*b;
			
		}
		
		
};
main()
{
	recta r1(6,5);
	int p,q;
	
	p =r1.returnarea();
    
	recta r2(7,8);
     q=r2.returnarea();
     cout<<"\n Area ="<<p;
     cout<<"\n Area ="<<q;	
}

