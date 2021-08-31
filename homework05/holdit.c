#include <stdio.h> 
#include <time.h> 

void take_enter() {
    while(1){
        if (getchar()) 
        break;
    }
}

int main() 
{ 
    int start, end;
    printf("Press enter to start the clock:"); 
    take_enter();
    start = time(0);
    printf("Press enter to stop the clock:");
    take_enter();
    end = time(0);
    int time_taken = end - start;
    printf("it took %d seconds to execute \n", time_taken); 
    return 0; 
} 