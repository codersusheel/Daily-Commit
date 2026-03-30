#include <stdio.h>
#include <time.h>
#include <unistd.h> // Windows ke liye <windows.h> use karein
#include <stdlib.h>

int main() {
    while (1) {
        time_t raw_time;
        struct tm *current_time;

        // System time lena
        time(&raw_time);
        current_time = localtime(&raw_time);

        // Screen clear karna (Linux/Mac ke liye "clear", Windows ke liye "cls")
        system("clear"); 

        // Time print karna
        printf("\n=========================\n");
        printf("    DIGITAL CLOCK 🕒    \n");
        printf("=========================\n");
        printf("      %02d:%02d:%02d\n", 
                current_time->tm_hour, 
                current_time->tm_min, 
                current_time->tm_sec);
        printf("=========================\n");
        printf("Press Ctrl+C to stop\n");

        // 1 second ka wait
        sleep(1); 
    }
    return 0;
}
