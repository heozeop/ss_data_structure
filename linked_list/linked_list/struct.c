//
//  struct.c
//  linked_list
//
//  Created by Gomi Dev on 2020/10/03.
//  Copyright © 2020 lee. All rights reserved.
//

#include "struct.h"

void structExample1(){
    struct Person lee;
    lee.age = 23;
    strcpy(lee.name, "이승찬");

    printf("%s 님의 나이: %d\n", lee.name, lee.age);
    return;
}
void structExample2(){
    struct Person lee;
    lee.age = 23;
    strcpy(lee.name, "이승찬");
    struct Person* crispy = &lee;
    strcpy(crispy->name, "Crispy");

    printf("%s 님의 나이: %d\n", crispy->name, crispy->age);
    return;
}
