all:
	cc -c printers.c twosum.c unistd.s memset.c -fno-stack-protector  
	ld printers.o twosum.o unistd.o memset.o -o twosum.out -z noexecstack
clean:
	rm *.o *.out
debug:
	cc -c printers.c twosum.c unistd.s memset.c -fno-stack-protector -g  
	ld printers.o twosum.o unistd.o memset.o -o twosum.out -z noexecstack
