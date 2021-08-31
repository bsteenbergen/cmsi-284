         global      _main
         extern      _NBO
         extern      _printf 
         default     rel              

         section     .text

_main:   
         add         rsp, 8          
         mov         rdi, 0x123456
         call        _NBO
         add         rsp, 4
         mov         rsi, rax
         lea         rdi, [format] 
         call        _printf
         add         rsp, 8
         ret 

         section     .data

format:  db          "%d", 0xA, 0