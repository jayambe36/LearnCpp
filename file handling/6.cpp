#include"iostream"
#include"fstream"

using namespace std;

int main()
{

	ifstream file;

	file.open("steve.txt");

	string s;

	while(getline(file,  s))//here we can  write as :- while(getline(file,  s ,'|'))
	{

		cout << s << endl;

	}
	
	file.close();

	cout << "\n Congratulations your program succesfully run by computer.\n" ;

}
