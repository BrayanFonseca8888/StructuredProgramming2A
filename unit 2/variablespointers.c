#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./folderTest/utils.h"

int myInt = 4;
float myFloat = 3.1416;

int * pointerInt = &myInt;

int main(){
        
        printf("addres myInt: %p,   myInt: %d  \n",  &myInt , myInt  );
        printf("addres myFloat: %p,  myFloat: %f  \n",  &myFloat , myFloat  );
        printf("address pointerInt: %p, pointerInt: %p\n", &pointerInt,   pointerInt  );
        *pointerInt = 6;
        printf("addres myInt: %p,   myInt: %d  \n",  &myInt , myInt  );

        // malloc(), realloc, calloc();
        
        return 0;
}
