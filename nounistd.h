#ifndef NOUNISTD_H
#define NOUNISTD_H

void read(unsigned int fd, char* buf, unsigned int count);
void write(unsigned int fd, char* buf, unsigned int count);
void exit(int error_code);



#endif
