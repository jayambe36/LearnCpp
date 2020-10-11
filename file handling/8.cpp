#include"iostream"
#include"fstream"
using namespace std;
int main()
{

  char arr[100];
  cout << "Enter your name and age " <<endl;

  //cin>>arr;
  cin.getline(arr,100);
  //ofstream means output file stream
  ofstream myfile("Smit.txt",ios::out|ios::app);//ios:app means file can open(enable) in append mode
  //myfile.open("Smit.txt");
  myfile<<arr;
  myfile.close();
  cout << "file Write operation successfull" << endl << endl ;

  cout << "reading file ooperation started" << endl;
  char arr1[100];
  ifstream obj("Smit.txt");//input file stream
  obj.getline(arr1,100);
  cout << "array content:"<< arr1 << endl;
  obj.close();
  cout << "file Read operation successfull" << endl;

  return 0;
}