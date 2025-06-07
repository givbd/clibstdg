#include "../include/nomath.h" 
int 
ipow(int first, int second) {
  if (second == 1) {
    return 1;
  }
  else if (second < 0) {
    for (int i = 0; i<-second; i++) {
      first = first / first;
    }
    return first;
  }

  for (int i = 0; i<second; i++) {
    first = first*first;
  }
  return first;
}

float 
pow(float first, float second) {
  if (second >= 1.0) {
    for (float i = 0.0; i<second; i+=1.0) {
      first = first*first;
    }
  } else if (second < 0) {
    for (float i = 0.0; i<-second; i+=1.0) {
      first = first/first;
    }
    

    
  } else if (second == 0.5) {
    return sqrt(first);
  } else {
    // failed to power, return negative for error
    return -1;
  }

}

float
sqrt(float first) {
 
if (first >0) {
  for (float i=pow(10,-37); 1; i+=pow(10, -37)) {
  if (first/i == i) {

        return i;
        
      }
      if (i < 0) {
        // error overflow, no value found
        return -1;
        break;
      }
  }
  } else if (first == 0) {
    return 0;
  } else if (first < 0) {
    // error imaginary number

    return -2
  }
} 
float
nsqrt(float first) {
if (first >0) {
  for (float i=pow(10,-37); 1; i+=pow(10, -37)) {
  if (first/i == i) {

        return -i;
        
      }
      if (i < 0) {
        // error overflow, no value found
        return 1;
        break;
      }
  }
  } else if (first == 0) {
    return 0;
  } else if (first < 0) {
    // error imaginary number

    return 2
  }
}
