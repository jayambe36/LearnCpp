#include<iostream>
#include"fstream"

using namespace std;

int main()
{
	
	ifstream file("details.txt"); // ifstream means input file stream
  
	char s;//use string for first word of first line in details.txt
	/*if we string replace char then computer show first spelling of first word of line in details.txt*/
    
	file >> s; // file as cin but we can't use cin here
  
	cout << s; // here must we use cout 
  
	file.close();
  
	cout << "\n Congratulations your program succesfully run by computer.\n" ;
}
