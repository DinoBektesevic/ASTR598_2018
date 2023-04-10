#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <chrono>
#include <thread>
using namespace std;

int main(int argc, char* argv[]){
  int n, m, sum=0;
  string k;
  string name = "out.";

  if (argc == 4){ 
    n = atoi(argv[1]); 
    m = atoi(argv[2]);
    k = argv[3];
  } else{
    cout << "Incorrect input! Expected start, stop and output file number." << endl;
  }

  name += k;
  ofstream outputfile(name.c_str());
  if (not outputfile.is_open()){
    cout << "File could not be opened!" << endl;
  }

  int wait = 1+rand()%5;
  for (int i=n; i<=m; i++){
    sum += i;
    this_thread::sleep_for(chrono::seconds(wait));
  }

  outputfile << sum << endl;
  outputfile.close();

  return 0;
}
