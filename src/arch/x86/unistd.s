.intel_syntax noprefix
.section .text 
.global write 
.global read 
.global exit 

write:
  mov rax, 1
  syscall
  ret
read:
  mov rax, 0 
  syscall
  ret
exit:
  mov rax, 60
  syscall
  ret






