#include "stdio.h"
#include "string.h"
#include "pointer.h"
#include "struct.h"

int main(void) {
    int mode;
    scanf("%d", &mode);
    
    switch(mode) {
        case 0:
            pointerExample();
            break;
        case 1:
            structExample1();
            break;
        case 2:
            structExample2();
            break;
        case 3:
            linkedListExample();
            break;
    }

    return 0;
}
