         global      _findGCDfunc              

         section     .text
_findGCDfunc:   
         mov         rax, rdi               
         mov         r12, rax
         mov         rax, rdi
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
         pop         rbx
         ret
         