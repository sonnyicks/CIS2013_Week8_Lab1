#include <fstream>
#include <iostream>
using namespace std;

int main(){
	
	int number;
	char cont = 'y';
	ifstream in_a;
	
	in_a.open("numbers.dat");
	if(in_a.fail()){
		cout << "Something really awful happened here with numbers.dat";
	exit(1);
	}
	
	int one, two, three, four;
	char five;
	
	in_a >> one >> two >> three; 
	in_a >> four;
	in_a >> five;
	
	cout << "Add our previous numbers are " << one << " to " << four << endl;
	cout << "Numbers total to: " << (one + two + three + four);
	cout << " and our character is " << five;
	
	in_a.close();
	
	return 0;
	
}