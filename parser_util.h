#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct string_list{
		char str[20];
		struct string_list *next;
		struct string_list *prev;
}str_node;

str_node* make_node(char* new_data);
str_node* get_first_node(str_node *temp);
str_node* get_last_node(str_node *temp);
void first_add(str_node *temp, char* new_data);
void last_add(str_node *temp, char* new_data);
void print_list(str_node *temp);

str_node* make_node(char* new_data){
	  str_node *new_node = (str_node *) malloc(sizeof(str_node));
	  strcpy(new_node->str, new_data);
	  new_node->next = NULL;
	  new_node->prev = NULL;
	  return new_node;
}

str_node* get_first_node(str_node *temp){
    str_node *first = temp;
    while (first->prev != NULL){
      first = first->prev;
    }
    return first;
}

str_node* get_last_node(str_node *temp){
    str_node *last = temp;
    while (last->next != NULL){
      last = last->next;
    }
    return last;
}

void last_add(str_node *temp, char *new_data){
    str_node *new_node = make_node(new_data);
    str_node *last_node = get_last_node(temp);
    last_node -> next = new_node;
    new_node -> prev = last_node;
    return;
}

void first_add(str_node *temp, char *new_data){
    str_node *new_node = make_node(new_data);
    str_node *first_node = get_first_node(temp);
    first_node -> prev = new_node;
    new_node -> next = first_node;
    return;
}

void print_list(str_node *temp){
		FILE *file_pointer;
		file_pointer = fopen("output.txt", "w");
    str_node *first_node = get_first_node(temp);
    for (str_node *temp_node = first_node; temp_node != NULL; temp_node = temp_node -> next){
      fprintf(file_pointer, "%s", temp_node->str);
    }
		fclose(file_pointer);
}
