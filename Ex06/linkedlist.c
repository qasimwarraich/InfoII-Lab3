#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};
//Initilise list with head
struct node *head = NULL;

void printlist(struct node *head)
{
    struct node *curr = head;
    while (curr != NULL) {
	printf("%d -> ", curr->val);
	curr = curr->next;
    }
    printf("\n");
}

void insertat(int pos, int val)
{
    struct node *new = malloc(sizeof(struct node));
    new->val = val;
    new->next = NULL;
    //Empty list 
    if (head == NULL) {
	head = new;
	return;
    }
    //Position finding index
    int index = 0;
    //Curr will walk the list and prev is a helper for cases 2 and 3
    struct node *prev = NULL;
    struct node *curr = head;
    //Loop walks the list with curr at current index node and prev one behind. 
    while (curr != NULL && index != pos) {
	index++;
	prev = curr;
	curr = curr->next;
    }
    //Case 1: head of List
    if (index == 0) {
	head = new;
	new->next = curr;
	return;
    }
    //Case 2: tail of List
    if (curr == NULL) {
	prev->next = new;
	return;
    }
    //Case 3: middle of list
    prev->next = new;
    new->next = curr;
}

void add_beg(int val)
{
    insertat(0, val);
}

void add_end(int val)
{
    insertat(-1, val);
}

void delete_val(int val)
{
    struct node *prev = NULL;
    struct node *curr = head;

    while (curr != NULL && curr->val != val) {
	prev = curr;
	curr = curr->next;
    }
    if (curr == NULL) {
	return;
    }

    if (prev == NULL) {
	if (curr->next == NULL) {
	    head = NULL;
	} else {
	    head = curr->next;
	}
	free(curr);
	return;
    }
    if (curr->next == NULL) {
	prev->next = NULL;
	free(curr);
	return;
    }
    if (prev->next != NULL && curr->next != NULL) {
	prev->next = curr->next;
	free(curr);
	return;
    }
}

int main()
{

    add_beg(5);
    add_beg(4);

    printlist(head);

    delete_val(6);
    delete_val(5);
    insertat(1, 69);
    printlist(head);


    return 0;
}
