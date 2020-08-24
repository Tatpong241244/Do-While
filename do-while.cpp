#include<iostream>
#include<string>
using namespace std;
int main()
{
	char grade;
	int i = 0 , total = 0 ;
	float GPA = 0 ;
	do
	{
		cout << "Enter the letter grade ( Enter 'X' to exit ) \n ";
		cin >> grade;
		if ( grade == 'A' || grade == 'a' ) total += 4 ;
		else if ( grade == 'B'  || grade == 'b' ) total += 3 ;
		else if ( grade == 'C'  || grade == 'c' ) total += 2;
		else if ( grade == 'D'  || grade == 'd' ) total += 1;
		else if ( grade == 'F'  || grade == 'f' )  total += 0;
		else if ( grade == 'X'  || grade == 'x' )  break ;
		i++;
	}
	while ( grade != 'X' && grade != 'x') ;
	GPA = ( (float)total / i );
	cout << " Total  Grade Points : " << total << endl;
	cout << " GPA : " << GPA << endl ;
	system ("pasue");
	return 0;
}
