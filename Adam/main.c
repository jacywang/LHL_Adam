//
//  main.c
//  Adam
//
//  Created by JIAN WANG on 5/5/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

/*
 You are building a computer program called Adam. Adam is a lackadaisical teenager. In conversation, his responses are very limited.
 
 Adam answers 'Sure' if you ask him a question.
 He answers 'Woah, chill out!' if you yell at him.
 He says 'Fine. Be that way!' if you address him without actually saying anything.
 He answers 'Whatever.' to anything else.
 */

#include <stdio.h>
#include "string.h"
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    char input[100];

    while (1) {
        fpurge(stdin);
        printf("Hi Adam!\n");
        scanf("%[^\n]s", input);
        
        if (strcmp(input, "exit") == 0) {
            break;
        } else if (strcmp(input, "\270\370\277_\377") == 0){
            printf("You address Adam without actually saying anything.\n");
            printf("Adam answers, \"Fine. Be that way.\"\n");
            continue;
        }
        
        printf("You said, \"%s\"\n", input);
        
        if (strpbrk(input, "\?")) {
            printf("Adam answers, \"Sure!\"\n");
            continue;
        }
        
        for (int i = 0; i < strlen(input); i++) {
            if (islower(input[i]) != 0) {
                    printf("Adam answers, \"Whatever.\"\n");
                break;
            }
            if (i == strlen(input) - 1) {
                printf("Woah, chill out!\n");
            }
        }
    }
    
    return 0;
}
