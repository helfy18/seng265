#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#define MAX_WORD_LEN  50

typedef struct node_t {
    char            word[MAX_WORD_LEN];
    struct node_t  *next;
} node_t;

node_t *new_node(char *val);
node_t *add_front(node_t *, node_t *);
node_t *add_end(node_t *, node_t *);
node_t *peek_front(node_t *);
node_t *remove_front(node_t *);
int compare(node_t *, char *, int);
int print_the_words(node_t *list, int width, int indent, int num_chars);
void    apply(node_t *, void(*fn)(node_t *, void *), void *arg);

#endif
