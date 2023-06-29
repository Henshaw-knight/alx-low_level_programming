#ifndef DOG_MACRO
#define DOG_MACRO
/**
 * struct dog - a struct to define a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: this structure gives information about a dog and who
 * its owner is.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_MACRO */
