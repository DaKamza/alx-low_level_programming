#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key
 * @value: The value corresponding to a key
 * @next: next node of the List
 */
typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array
 */
typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;

/*functions*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key
 * @value: The value corresponding to a key
 * @next: next node of the List
 * @sprev: previous element of the sorted linked list
 * @snext: next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
#endif /*_HASH_TABLES_H_*/
