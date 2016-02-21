#include "my_functions.h"

void print_square(int n){
  
  int p;
  int i;
  int j;
  
  for(p = 0 ; n > p; p++){
    
    if(p == 0 || p == n - 1){
      
      for(i = 0 ; n > i; i++){
	
	if(i == 0 || i == n - 1){
	  
	  print_char('o');
	  
	} else {
	  
	  print_char('-');
	}
	
      }
      
    } else {
      
      for(i = 0 ; n > i; i++){

	if(i == 0 || i == n - 1){
	  
	  print_char('|');
	  
	} else {

	  print_char(' ');

	}
     
      }
      
    }
    print_char('\n');
  }
  
}

  
