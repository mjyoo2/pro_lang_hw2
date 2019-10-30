#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct parse_tree{
		char str[20];
		struct parse_tree *child;
    struct parse_tree *next;
    struct parse_tree *prev;
		struct parse_tree *parent;
}parse_node;

parse_node* make_node(char* new_data){
	  parse_node *new_node = (str_node *) malloc(sizeof(parse_node));
	  strcpy(new_node->str, new_data);
	  new_node->parent = NULL;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->child = make_node("DUMMY");
	  return new_node;
}

parse_node* add_child(parse_node* parent, parse_node* child){
    last_add(parse_node->child, child);
    child->parent = parent;
    return parent;
}

void last_add(pasre_node *temp, parse_node *new_node){
    parse_node *last_node = temp;
    while (last_node->next != NULL){
      last_node = last_node->next;
    }
    last_node -> next = new_node;
    new_node -> prev = last_node;
    return;
}
