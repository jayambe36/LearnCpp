#include<iostream>//input output stream
#include"fstream" // file stream for file handling

using namespace std;

int main()
{
  
	ofstream file;//ofstream means output file stream
  
	file.open("details.txt", ios::app);//ios::app which is enable to file in append mode
  
	file << "\nthis is my third new program" ;// file as cout but we can't use cout here

	file.close();
  
	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}

/*

#include<iostream>
#include"fstream"

using namespace std;

int main()
{
	ofstream file("details.txt", ios::app);//ios::app which is enable to file in append mode
  
	file << "\nthis is my third new program" ;

	file.close();
  
	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}

*/