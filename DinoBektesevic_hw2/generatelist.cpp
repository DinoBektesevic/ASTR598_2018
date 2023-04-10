#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  int n=1;
  if (argc>1){ n=atoi(argv[1]); }
  
  for (int i=0; i<n; i++){
    printf("%d\n", (rand() % 100));
  }	
  return 0;
}
