.intel_syntax noprefix 
.section .text 
.global getargs

getargs:
  mov QWORD PTR [rdi], rsi 
  mov QWORD PTR [rdi+8], rdx 
  mov QWORD PTR [rdi+16], rcx
  mov QWORD PTR [rdi+24], r8 
  mov QWORD PTR [rdi+32], r9
  ret
  



