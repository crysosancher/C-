#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//ofstream ofs("MyFirst.txt",ios::trunc);//for over overWritting or creating a file
	ofstream ofs("MyFirst.txt",ios::app);//for adding something to a file
	ofs<<"John is my  girly-boy2"<<endl;
	ofs.close();
	//reading stream
	ifstream ifs("MyFirst.txt");
	string name;
	string name2;
	// ifs>>name>>name2;
	// cout<<name<<endl<<name2<<endl;
	while (getline (ifs, name)) {
  // Output the text from the file
  cout << ifs;}
	ifs.close();
}