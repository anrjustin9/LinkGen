#include <iostream>
#include <fstream>
using namespace std;
	string a, b;
	int x, y, z;
int main(void) {
	cout << "Outputs to default: output.txt" << endl;
	cout << "Input URL Eg: http://www.youtube.com/" << endl;
	cin  >> a;
	cout << "Input File Exension Eg: .png" << endl;
	cin  >> b;	
	cout << "Input the loop counter's lower limit:" << endl;
	cin  >> x;
	cout << "Input the loop counter's upper limit:" << endl;
	cin  >> y;
	cout << "Input the increment of the file names" << endl;
	cin  >> z;
	std::ofstream outfile;
	outfile.open("output.txt", std::ios_base::app);
		for(int c=x;c<=y;c=c+z){
		outfile << a << c << b << endl;
		}
	cout << "Links successfully created! Press enter to terminate." << endl;
	cin;
}
