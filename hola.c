#include <unistd.h>
#include <stdio.h>
#include <time.h>

#define S_TO_MS(x) (x*1000000)

int main() {
    int inicial = 2;
    int velocidad = 0.1;
    int interval = S_TO_MS(inicial); // 0.5 seconds
    
    for (int i = 0; i < 10; i++) {
        printf("\a%d ", i);
        usleep(interval);
        
        interval = S_TO_MS((float) inicial - (float) velocidad*i);
    }
    return 0;
}
