#include <stdlib.h>
​
char *number_to_string(int number) {
​
    //  <----  hajime!
​
  char *dynamisch = malloc(12 * sizeof(char));
  sprintf(dynamisch, "%d", number);
    
    
    //  return a dynamically allocated C-string,
    //  which will be freed by the tests suite
    return dynamisch;
}