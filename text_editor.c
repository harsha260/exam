#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char src[MAX], cmd, target[MAX], insert[MAX];
    int idx;

    printf("Enter source: ");
    fgets(src, MAX, stdin);
    src[strcspn(src, "\n")] = '\0'; // Trim newline

    printf("Command (f/d/i): ");
    cmd = getchar();
    while(getchar() != '\n'); // Clear input buffer

    switch(cmd) {
        case 'f':
            printf("Target: ");
            fgets(target, MAX, stdin);
            target[strcspn(target, "\n")] = '\0';
            char *p = strstr(src, target);
            printf(p ? "Found at %ld\n" : "Not found\n", p - src);
            break;

        case 'd':
            printf("Target: ");
            fgets(target, MAX, stdin);
            target[strcspn(target, "\n")] = '\0';
            if((p = strstr(src, target))) 
                memmove(p, p + strlen(target), strlen(p + strlen(target)) + 1);
            break;

        case 'i':
            printf("Insert at: ");
            scanf("%d", &idx);
            while(getchar() != '\n'); // Clear buffer
            printf("String: ");
            fgets(insert, MAX, stdin);
            insert[strcspn(insert, "\n")] = '\0';
            
            if(idx >= strlen(src)) strcat(src, insert);
            else if(strlen(src) + strlen(insert) < MAX) {
                memmove(src + idx + strlen(insert), src + idx, strlen(src) - idx + 1);
                memcpy(src + idx, insert, strlen(insert));
            }
            break;
    }
    
    printf("Result: %s\n", src);
    return 0;
}
