#include "include/io_utils.h"

#define OP_PRINT_INT 0
#define OP_PRINT_DOUBLE 1
#define OP_PRINT_STRING 2

union Operand {
  int int_operand;       // 4
  double double_operand; // 8
  char *string_operand;  // 8
};

typedef union Operand Operand;

typedef struct Instruction {
  int operator;
  Operand operand;
} Instruction;

void Process(Instruction *instruction) {
  switch (instruction->operator) {
  case OP_PRINT_INT:
    PRINT_INT(instruction->operand.int_operand);
    break;
  case OP_PRINT_DOUBLE:
    PRINT_DOUBLE(instruction->operand.double_operand);
    break ;
  case OP_PRINT_STRING: puts(instruction->operand.string_operand);
    break ;
  }
}
int main() {
  PRINT_INT(sizeof(union Operand));

//  union Operand operand = {.int_operand = 5, .double_operand = 2.0};
  Operand operand;
  operand.int_operand = 5;
  operand.double_operand = 2.0;
  PRINT_INT(operand.int_operand);
  PRINT_DOUBLE(operand.double_operand);

  Instruction instruction = {
      .operator = OP_PRINT_STRING,
      .operand = {
          .string_operand = "Hello World"
      }
  };
  return 0;
}