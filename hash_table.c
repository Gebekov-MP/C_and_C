//implements hash table 

unsigned int hash(char *str)
{
    int sum = 0;
    for (int j = 0; str[j] != '\0'; j++)
    {
        sum += str[j];
    }
    return sum % HASH_MAX;
}

node *hashtable[10]; - hash of 10 singly-list array 