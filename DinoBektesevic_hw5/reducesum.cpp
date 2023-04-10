#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
  int n, sum=0, tmpx=0;
  string name="out.", line;
  ofstream outputfile("out.final");

  if (argc == 2){ 
    n = atoi(argv[1]); 
  } else{
    cout << "Incorrect input! Expected maximal index of file." << endl;
  }

  for(int i=0; i<=n; i++){
    string tmpname = name+to_string(i);
    ifstream tmpfile(tmpname.c_str());
    if (tmpfile.is_open()){
      getline(tmpfile, line);
      tmpx = stoi(line);
      sum += tmpx;
    }
  }

  if(outputfile.is_open()){
  outputfile << sum << endl;
  } else
    cout << "Could not create out.final!" << endl;
  return 0;
}
