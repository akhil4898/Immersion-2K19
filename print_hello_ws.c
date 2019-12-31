//Print hello world without semi colon using if block.

/**#include<stdio.h>
void main(){
	if(printf("Hello world!\n") && printf("hii Akhil\n")){
	}
	
}**/


//program to print hello world without semi colon using switch.
/**#include <stdio.h>
void main()
{
	switch(printf("Hello world!\n")){}
}**/


//Print the Hello world without semicolon using while loop.
/**#include <stdio.h>
void main(){
	while(!printf("Hello world!\n")){}
}**/

//Print the hello world without semicolon using macros.

#include<stdio.h>
#define Akhil printf("Hello world!")
int main(void){
	if(Akhil){
	}
 	return 0;
}
