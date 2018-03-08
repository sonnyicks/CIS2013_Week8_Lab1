#include <fstream>
#include <iostream>
using namespace std;

int main(){
	
	int number;
	ofstream out_a;
	char cont = 'y';
	
	out_a.open("numbers.dat");
	if(out_a.fail()){
		cout << "Unable to open file numbers.dat" << endl;
		exit(1);
	}
	
	while (cont == 'y'){
		cout << "Type a number to save to the file: ";
		cin >> number;
		
		out_a << number;
		
		cout << "Type another number (y/n): ";
		cin >> cont;
	}
	return 0;
}