#ifndef DOG_H
#define DOG_H
int _putchar(char c);

/**
 *struct dog - Home pet and security
 *@name: Dog's name
 *@age: Dog's age
 *@owner: owner's name
 */

typedef struct dog
{
		char *name;
	        float age;
		char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
