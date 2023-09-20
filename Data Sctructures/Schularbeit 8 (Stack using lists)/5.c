#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pilhas.h"

int main(){
    Stack* pile = create_stack();
    bool hiha;

    pile = push(pile, 1);
    pile = push(pile, 2);
    pile = push(pile, 3);
    pile = push(pile, 3);
    pile = push(pile, 2);
    pile = push(pile, 1);

    print_stack(pile);

    hiha = is_palindrome(pile);

    if(hiha == false){
        printf("Nao eh um palindromo. \n");
    }
    else{
        printf("Eh um palindromo. \n");
    }


    return 0;
}
