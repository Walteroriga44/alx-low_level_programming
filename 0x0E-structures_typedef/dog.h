#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: first member
 * @age: second member
 * @owner: 3rd member
 * Description: long
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typdef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
