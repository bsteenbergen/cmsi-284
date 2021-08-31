         global      _main
         extern      _printf               
         default     rel 
         section     .text

_main:   
         sub         rsp, 8

top1:         
         mov         rax, [number]
         mov         rbx, 0x00000001
         mov         rcx, 0x00000008
         xor         rdx, rdx
         and         rax, rbx
         cmp         rax, 0x00000000
         jne         count

top2:         
         mov         rax, [number]
         shl         rbx, 1
         and         rax, rbx
         cmp         rax, 0x00000000
         jne         count
         dec         rcx
         cmp         rcx, 0x00000000
         jne         top2
         jmp         result

count:
         inc         rdx
         dec         rcx
         cmp         rcx, 0x00000000
         jne         top2

result:
         and         rdx, 0x00000001
         cmp         rdx, 0x00000001
         jne         print1

print0:
         lea         rdi, [format0]
         call        _printf
         add         rsp, 8
         ret

print1:
         lea         rdi, [format1]
         call        _printf
         add         rsp, 8
         ret         

         section     .data

number:  db          84

format0: db          0xA, 0xA, ' Parity bit: 0', 0xA, 0xA, 0
format1: db          0xA, 0xA, ' Parity bit: 1', 0xA, 0xA, 0