#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;



int main ()	{
	while(true)	{
		
	int choices, lineNumber, removeNumber;
	cout <<"\n\t\t*************** Hospital Line Management System ***************" << endl;
	cout <<"\n";
	cout <<"\t\tChoices:" << endl;
	cout <<"\t\t\t[1] Get a number" << endl;
	cout <<"\t\t\t[2] Remove a number" << endl;
	cout <<"\t\t\t[3] List of active numbers" << endl;
	cout <<"\t\t\t[4] Sort active numbers" << endl;
	cout <<"\t\t\t[5] List of skipped numbers" << endl;
	cout <<"\t\t\t[6] List of used numbers" << endl;
	cout <<"\t\t\t[7] Reset" << endl;
	cout <<"\t\t\t[8] Exit" << endl;
	
	cout <<"\n\n\t\tEnter choice: ";
	cin >> choices;

//Switch statement for the main menu
	switch(choices){
		case 1:
			cout <<"\t\t\tExcellent" << endl;
			break;
		case 2:
			cout <<"\t\t\tVery Good" << endl;
			break;
		case 3:
			cout <<"\t\t\tGood" << endl;
			break;
		case 4:
			cout <<"\t\t\tFair" << endl;
			break;
		case 5:
			cout <<"\t\t\tSatisfactory" << endl;
			break;
		case 6:
			cout <<"\t\t\tPassing" << endl;
			break;
		case 7:
			cout <<"\t\t\tThe numbers were reset";
			break;
		case 8:
			return 1;
			break;
		default: 
			cout <<"\t\t\tERROR!" << endl; 
	}
	getche();
	system("cls");
	main();
}
return 0;
}
