#include <iostream>

// IGNORE THIS!!
 // std:: (standart) remover
 using namespace std;
 // typedef
 typedef string text;
 typedef int number;
 typedef double fractional;
 typedef bool turner;
 auto& output = std::cout;
 auto& input = std::cin;
 void test() {
	text textTest = "Hello";
	textTest.append(" World!");
	number numTest = 1;
	numTest += 1;
	fractional fracTest = 1.3;
	turner turnTest = true;
	output << "Hello world!" << endl;
	output << textTest <<  '\n';
	output << numTest << '\n';
	output << fracTest << '\n';
	output << turnTest << '\n';
 }


// WRITE YOUR CODE HERE!!
// if you want to test if everything is working correctly, type: test();
// Instructions are listed in a seperate file.
int main() {

	return 0;
}
