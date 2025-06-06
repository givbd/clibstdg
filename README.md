# this is still in development
a lot of glib c stuff hasn't been added like functions and others and also there isn't support for many other 
kernels and architecture because of the assembly i used
# to build
the make file doesn't work so youll have to build by hand
```bash
cd src
cc -c ./* 
ld ./* -o idk
```
i also do not know how to have shared objects so you gotta do everything else for building library urself

## testing
there will be an testing directory containing all of the tests, and a makefile to build these testing environments.
