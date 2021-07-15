#include <iostream>
using namespace std;

int main(){
	int nums[5] = {1,2,3,4,5};
	string name[4] = {"Johns", "Marrie", "Zoya", "auntie"};
	cout << nums[0] << endl;
	name[3] = "Auntie";// Changing the name of the element
	cout << name[3] << endl;
	
	// loops in arrays
	string lang[4] = {"Python", "Java", "Ruby", "JavaScript"};
	for(int z = 0; z < 4; z++){
		cout << lang[z] << endl;
	}
	
string food[5] = {"mutton", "beef", "mutton", "biryani", "chicken"};
	for(int x = 0; x < 5; x++){
		cout << x << ": " << food[x] << "\n";/* This example outputs the index of 
		each element together with its value */
	}
}
