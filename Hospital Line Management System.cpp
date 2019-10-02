#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;



int main ()	{
	system("color D");
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
			cout <<"\t\t\tGet a number: " << endl;
			break;
		case 2:
			cout <<"\t\t\tRemove number: " << endl;
			break;
		case 3:
			cout <<"\t\t\tActive numbers: " << endl;
			break;
		case 4:
			cout <<"\t\t\tSorted active numbers:" << endl;
			break;
		case 5:
			cout <<"\t\t\tSkipped Numbers:" << endl;
			break;
		case 6:
			cout <<"\t\t\tUsed Numbers:" << endl;
			break;
		case 7:
			cout <<"\t\t\tThe numbers were reset";
			break;
		case 8:
			cout <<"\t\t\tThank you for using the system!";
			return 1;
			break;
		default: 
			system("color 47");
			cout <<"\t\t\tERROR! Not in the choices" << endl;
	}
	getche();
	system("cls");
	main();
}
return 0;
}
