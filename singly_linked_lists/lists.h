#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * description
 */
typedef struct lists_s
{
char *str;
unsigned int len;
struct lists_s *next;
} lists_t

size_t print_list(const lists_t *h);
size_t lists_hen(const lists_t *h);
lists_t *add_node(lists_t **head, const char *str);
lists_t *add_node_end(lists_t **head, const char *str);
void free_lists(lists_t *head);

#endif /*LINKED*/
