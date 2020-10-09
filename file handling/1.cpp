#include <iostream>
#include"fstream"

using namespace std;


int main() {

	ofstream file;
  
	file.open("test.txt");

	file.close();

	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}



/*

#include<iostream>
#include"fstream"

using namespace std;

int main()
{
	ofstream file("2.txt");

	file.close();
  
	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}

*/