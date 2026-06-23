#include <string.h>
void fakeBin(const char *digits, char *binary) {
  // Please place result in the memory pointed to by
  // the binary parameter. binary has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
​
  int len = strlen(digits);
  for(int i = 0; i < len; i++){
    if(digits[i] < '5'){
      binary[i] = '0';
    }
    else{
      binary[i] = '1';
    }
    binary[len] = '\0';
  }
  
  
}