#include<iostream>
#include"fstream"

using namespace std;

int main()
{
	ofstream file("2.txt");
  
	cout << "this is second program same as main.cpp\n" ;

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
  
	file << "this is second program same as main.cpp\n" ;

	file.close();
  
	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}

*/