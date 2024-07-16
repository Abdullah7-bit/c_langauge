#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int inp_array[10] = {5,6,2,7,9,3,0,1,4,8};
//	srand((unsigned) time(NULL));
//	int randomNumber = rand();

// Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random value between 1 and 10
    int randomNumber = rand() % 10 + 1;
	cout << randomNumber;
//	for(int i =0;i<10;i++){
//		cout << inp_array[i] << "\n";
//		
//	}
//	float f,m,a;
//	cout << "Type value of M: ";
//	cin >> m;
//	
//	cout << "Type value of A: ";
//	cin >> a;
//	
//	f= m*a;
//	cout << "Here is Your F: " << f;
//	
	return randomNumber;
}


