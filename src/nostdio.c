#include "../include/nostdarg.h"
#include "../include/nostdio.h"
#include "../include/nounistd.h"
#include "../include/nostring.h"
void putc(char charr) {
  write(1, &charr, 1);

}
void puts(char* string) {
  int jj = strlen(string);
  write(1, string, jj);
} 

void 
putd(long what) {
  char longbuff[19] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  unsigned long poweds[20] = {
    10000000000000000000, 
    1000000000000000000, 
    100000000000000000, 
    10000000000000000, 
    1000000000000000,
    100000000000000,
    10000000000000,
    1000000000000,
    100000000000,
    10000000000,
    1000000000,
    100000000,
    10000000,
    1000000,
    100000,
    10000,
    1000,
    100,
    10,1 
  };
  int seccounter = 1;
  for (int i = 18; i>=0; i--) {
    longbuff[i] = what % poweds[i] / poweds[i+1];    
    what -= longbuff[i] * poweds[i+1];
    seccounter++;
  }
  int firstnum = 0;
  for (int i = 0; i< 19; i++) {
    if (firstnum) {
    int vvvdd = longbuff[i] +48;
    write(1, &vvvdd, 1);
    } else {
      if (longbuff[i] != 0) {
        firstnum = 1;
        int vvvdd = longbuff[i] +48;
        write(1, &vvvdd, 1);
      }
    }
  }
}


void putp(void* edd) {
  putd((long)edd);
}
void
printf(char* item, ...) {
  
  long inputbuff[5];
  getargs(inputbuff);
  int seccounter = 0;
  for (int i = 0; 1; i++) {
    if (item[i] =='\0') {
      break
    } else if (item[i] =='%') {
      switch (item[i+1]) {
        case '\0':
        break;
        case 'd':
          putd(inputbuff[seccounter]); seccounter++;
          break;
        case 'c':
        putc((char)inputbuff[seccounter]); seccounter++; break;
        case 's':
        puts((char*)inputbuff[seccounter]); seccounter++; break;


      }
    } else {
      putc(item[i]);
    }
  }

}
