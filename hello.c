#include <stdio.h>

int main() {
    char FIRST_NAME[] = "Jone"; 
    char LAST_NAME[] = "Doe";
    char name[]; 

    name = strncat(name, FIRST_NAME, 20); 
    name = strncat(name, LAST_NAME, 20); 
    
    printf("$s\n", name);
    return 0; 
}
