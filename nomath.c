#include "nomath.h" 
int ipow(int first, int second) {
  for (int i = 0; i<second; i++) {
    first = first*first;
  }
  return first;
}
