//
//  pointer.c
//  linked_list
//
//  Created by Gomi Dev on 2020/10/03.
//  Copyright © 2020 lee. All rights reserved.
//

#include "pointer.h"

void pointerExample() {
    int exampleVal = 30;
    int* valPointer = &exampleVal;

    printf("valPointer가 가리키는 메모리 주소의 값은 무엇인가요? %i\n", *valPointer);
    printf("val의 주로를 valPointer가 가리키고 있나요? %s\n", &exampleVal == valPointer ? "true" : "false");
    return;
}
