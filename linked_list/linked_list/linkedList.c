//
//  linkedList.c
//  linked_list
//
//  Created by Gomi Dev on 2020/10/03.
//  Copyright © 2020 lee. All rights reserved.
//

#include "linkedList.h"

void linkedListExample()
{
  struct node head;
  struct node a;
  struct node b;

  head.next = &a;
  a.val = 10;
  b.val = 20;
  a.next = &b;
  b.next = NULL;

  struct node *start = &head;
  while (start->next != NULL)
  {
    start = start->next;
    printf("next node value : %d\n", start->val);
  }
  return 0;
}
