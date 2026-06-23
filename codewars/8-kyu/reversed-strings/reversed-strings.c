//#include <string.h>
​
char *strrev (char *string)
​
​
  
{
  int len = strlen(string);
    int i = 0;
    int j = len - 1;
    
    while (i < j) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
  return string; // reverse the string in place and return it
}