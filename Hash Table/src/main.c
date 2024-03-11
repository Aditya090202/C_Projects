#include <stdio.h>
#include "hash_table.c"

int main(void)
{
    ht_hash_table *ht = ht_new();
    printf("hello this is an empty hash table pointer: %p\n", ht);
    printf("size of the hash table is %d\n", ht->size);
}
