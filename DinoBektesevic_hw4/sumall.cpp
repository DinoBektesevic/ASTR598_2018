#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <string>
#include <sstream>
using namespace std;

int main(void){
  const int MAX=6000, NPRINT=2;
  int i;
  int sum;

  ifstream checkpointfile("checkpoint.out");
  if (checkpointfile.good()){
    char ch;
    checkpointfile.seekg(-1, ios::end);
    checkpointfile.get(ch);
    if (ch == '\n')
      {
	checkpointfile.seekg(-2, ios::cur);
	checkpointfile.seekg(-1, ios::cur);
	checkpointfile.get(ch);
	while(ch != '\n')
	  {
	    checkpointfile.seekg(-2, ios::cur);    
	    checkpointfile.get(ch);
	  }
	string lastLine, tmpi, tmpsum;
	std::getline(checkpointfile,lastLine);

	stringstream ss(lastLine);
	ss >> tmpi >> tmpsum;

	i = stoi(tmpi)+1;
	sum = stoi(tmpsum);
      }
  } else{
    i=1;
    sum=0;
  }
  checkpointfile.close();

  ofstream newcheckpointfile("checkpoint.out", ios::out | ios::app);

  if (newcheckpointfile.is_open()){
    while(i<MAX+1){
      sum=sum+i;

      if (i % NPRINT == 0){
	cout << sum << endl;
	newcheckpointfile << i << " " << sum << endl;
	newcheckpointfile.flush();
      }

      this_thread::sleep_for(chrono::seconds(1));
      i=i+1;
    }
  } else{
    cout << "File could not be opened." << endl;
  }

  cout << "final sum: " << sum << endl;
  checkpointfile.close();
  newcheckpointfile.close();

  return 0;
}
