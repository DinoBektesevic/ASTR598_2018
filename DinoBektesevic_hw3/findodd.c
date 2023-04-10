#include <stdio.h>
#include <stdlib.h>

int main(){
  const int MAX=100000000;
  int i;
  int num;

  FILE *fp_input;
  FILE *fp_odd;
  FILE *fp_even;

  fp_input = fopen("data", "r");
  fp_odd = fopen("input.odd", "w");
  fp_even = fopen("input.even", "w");

  for(i=0; i<MAX; i++){
    fscanf(fp_input, "%d", &num);
    if( (num % 2) == 0){
      fprintf(fp_even, "%d\n", num);
    } else{
      fprintf(fp_odd, "%d\n", num);
    }
  }

  fclose(fp_input);
  fclose(fp_odd);
  fclose(fp_even);
}
