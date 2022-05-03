#include <stdio.h>
#include <stdlib.h>

typedef struct MyList MyList;

struct MyList {
    int value;
    MyList *next;
};


MyList * append(MyList *list, int data)
{
    MyList *new_item = malloc(sizeof(MyList));
    if (new_item)
    {
        new_item->next = list;
        new_item->value = data;
        return new_item;
    }
    return NULL;
}

MyList * delete(MyList *list)
{
    MyList *tmp = list->next;
    free(list);
    return tmp;
}

int main(void)
{
    printf("This is my list.\n");
    MyList *mylist = append(NULL, 42);
    mylist = append(mylist, 1);
    mylist = append(mylist, 2);
    mylist = append(mylist, 3);

    printf("Starting to delete items.\n");
    mylist = delete(mylist);
    mylist = delete(mylist);
    mylist = delete(mylist);
    mylist = delete(mylist);
}
