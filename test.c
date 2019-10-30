#include <stdio.h>
#include "parser_util.h"

int main(){
    str_node* head = make_node("AAA");
    first_add(head, "BBB");
    last_add(head,  "CCC");
    first_add(head, "BBB");
    last_add(head,  "CCC");
    print_list(head);
    return 0;
}
