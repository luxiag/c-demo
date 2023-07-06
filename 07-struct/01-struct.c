#include "include/io_utils.h"

int main(){
 /*
  * struct <结构体名>{
  * <成员类型><成员名>;
  * ...
  *}<结构体变量>;
  * */
  struct Person {
    char *name;
    int age;
    char *id;
  };
  struct Person person = {.name="xiaoming",.age=18};
  PRINT_HEX(person.age);
  PRINT_HEX(&person);

  struct  Person *person_ptr = &person;
  puts(person_ptr->name);
  struct {
    char *name;
    int age;
    char *id;
  } anonymouse_person;

  typedef struct  Person Person;
  Person person1 = {.name="lili",.age = 20};
  PRINT_INT(person1.name);
  return 0;
}