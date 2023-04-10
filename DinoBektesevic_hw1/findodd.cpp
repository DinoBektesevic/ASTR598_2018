#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    int number;
    string line;
    ifstream infile("data");
    ofstream evenfile("data.even");
    ofstream oddfile("data.odd");

    if (infile.is_open() && evenfile.is_open() && oddfile.is_open()){
        while(getline(infile,line)){
	    number = stoi(line);
	    if(number % 2 == 0)
	        { evenfile<<line<<"\n"; } 
	    else
      	        { oddfile<<line<<"\n"; }
        }
	infile.close();
	evenfile.close();
	oddfile.close();
    } 
    else cout<<"Unable to open file\n";
    return 0;
}
