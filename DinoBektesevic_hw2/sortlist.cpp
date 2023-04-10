#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){
  int x;
  vector<int> data;

  while (cin >> x){
    data.push_back(x);
  }	

  sort(data.begin(), data.end());
  for (int i=0; i<data.size(); i++){
    printf("%d\n", data[i]);
  }

  return 0;
}
