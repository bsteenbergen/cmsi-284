         global      _main
         extern      _printf  
         extern      _scanf                

         section     .text
_main:   
         push        rbx
         mov         rsi, in_format
         call        _scanf
         add         rsp, 4                 
         mov         r12, rax
         mov         rsi, in_format
         call        _scanf
         add         rsp, 4 
         mov         r13, rax  

         cmp         r12, r13
         je          done

l1:     
         cmp         r13, 0 
         je          done
         xor         rdx, rdx
         mov         rax, r12
         mov         rbx, r13
         div         rax
         mov         r12, r13
         mov         r13, rdx
         cmp         r13, 0
         je          done
         jmp         l1

done:
         mov         rax, r12
         push        rax
         mov         rdi, out_format
         call        _printf
         pop         rbx
         ret
in_format:
         db "%d", 0 
out_format:
         db "%d", 0xA, 0
