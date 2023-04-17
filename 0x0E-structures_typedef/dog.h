#ifndef DOG_H
#define DOG_H
/*
 * struct dog - a dog s info.
 * @name: 1st information about the dog( it s name).
 * @age: 2nd info about the dog( it s age).
 * @owner: 3rd info about the dog(it s owner).
 *
 * Description: struct "dog" that contains name age and owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

