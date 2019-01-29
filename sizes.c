#include <stdio.h>

int main() {

	
int integerType;
char charType;
long longType;
float floatType;
double doubleType;
unsigned int unintType;
unsigned char uncharType;
unsigned long unlongType;
int* intType;
char* CharType;
long* LongType;


printf("The size of int is %lu bytes \n",sizeof(integerType));
printf("The size of char is %lu bytes \n",sizeof(charType));
printf("The size of long is %lu bytes \n",sizeof(longType));
printf("The size of float is %lu bytes \n",sizeof(floatType));
printf("The size of double is %lu bytes \n",sizeof(doubleType));
printf("The size of Unsigned Int is %lu bytes \n",sizeof(unintType));
printf("The size of Unsigned Char is %lu bytes \n",sizeof(uncharType));
printf("The size of Unsigned Long is %lu bytes \n",sizeof(unlongType));
printf("The size of int* is %lu bytes \n",sizeof(intType));
printf("The size of char* is %lu bytes \n",sizeof(CharType));
printf("The size of Long* is %lu bytes \n",sizeof(LongType));

}
