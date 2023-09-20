#ifndef DOG_H_
#define DOG_H_
/**
  * struct dog - a new type describing a dog
  * @age: age of dog
  * @name: name of dog
  * @owner: owner of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef of struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
