#include <iostream>
#include <iomanip>

using namespace std;


int main (void)
{
	
	int td , lk,i;
	int array[10];
	
	
	cout << "Enter 5 integers:";
	for(i=0;i<5;i++){
	
		cin >> array[i];

	}

	

	cout << setw(5) << "Number" << setw(15) << "Octal" << setw(15) << "Hex"  << endl;
	
	for(i=0;i<5;i++){
	cout << setw(5) << dec << array[i] ;
	cout << setw(15) << oct << array[i];
	 cout << setw(15) << hex << array[i] ;
	 cout << endl;
	}
	
	
	

	return(0);
}
