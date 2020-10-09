#include"iostream"
#include"fstream"

using namespace std;

int main()
{


	cout << "enter your name : ";

	string name;

	cin >> name;

	cout << "enter your age : ";

	int age;

	cin >> age;

	ofstream file("details.txt");

	file << "name : " << name << '\n' << "age : " << age; 

	file.close();

	cout << "\n Congratulations your program succesfully run by computer.\n" ;

}




