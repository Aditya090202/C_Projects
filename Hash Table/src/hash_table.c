#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_table.h"

static ht_item *ht_newItem(const char *key, const char *value)
{
    ht_item *item = malloc(sizeof(ht_item));
    item->key = strdup(key);
    item->value = strdup(value);
    return item;
}
ht_hash_table *ht_new()
{
    ht_hash_table *ht = malloc(sizeof(ht_hash_table));
    ht->count = 0;
    ht->size = 53;
    ht->items = calloc((size_t)ht->count, sizeof(ht_item *));
    return ht;
}
static void ht_del_item(ht_item *item)
{
    free(item->key);
    free(item->value);
    free(item);
}
static void ht_del_hashTable(ht_hash_table *ht)
{
    for (int i = 0; i < ht->size; i++)
    {
        ht_item *item = ht->items[i];
        if (item != NULL)
        {
            ht_del_item(item);
        }
    }
    free(ht->items);
    free(ht);
}
