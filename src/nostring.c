
#include "../include/string.h"
int strlen(char* string) {
  
  for (int i = 0; 1; i++) {
    if (string[i] == '\0') {
      return i-1;
      break;
    }
  }

}
int strcpy(char* dest, char* src) {
  for (int i =0; i< strlen(src); i++) {
    dest[i] = src[i];
  }
  return 0;
}
int sstrcpy(char* dest, char* src, int amount) {
  for (int i =0; i<amount; i++) {
    dest[i] = src[i]
  }
  return 0;
}


