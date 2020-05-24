// Michael Skipper, N01162792 
// Operating Systems 
// Dr. Ahuja 
// Due: Thursday, February 13th, 2020 
/* reference for system: https://www.geeksforgeeks.org/system-call-in-c/ */
/* reference for strings in c: https://www.geeksforgeeks.org/strings-in-c-2/ */ 
#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
int main(void) {
  printf("Type Ctrl-C to exit.\n");
  printf("User, type in the DOS commands.\n");
  char command[50], arg1[50], arg2[50], actualcommand[50];
  while(1) {
    scanf("%s", command);
    // cd command 
    if(command[0] == 'c') {
      if(command[1] == 'd') {
        scanf("%s", arg1);
        strcpy(actualcommand, "cd ");
        strcat(actualcommand, arg1);
        system(actualcommand);
      }
    }
    // dir command 
    if(command[0] == 'd') {
      if(command[1] == 'i') {
        if(command[2] =='r') {
          strcpy(actualcommand, "ls ");
          system(actualcommand);
        }
      }
    }
    // type command 
    if(command[0] == 't') {
      if(command[1] == 'y') {
        if(command[2] =='p') {
          if(command[3] == 'e') {
            scanf("%s", arg1);
            strcpy(actualcommand, "cat ");
            strcat(actualcommand, arg1);
            system(actualcommand);
          }
        }
      }
    }
    // del command 
    if(command[0] == 'd') {
      if(command[1] == 'e') {
        if(command[2] =='l') {
          scanf("%s", arg1);
          strcpy(actualcommand, "rm ");
          strcat(actualcommand, arg1);
          system(actualcommand);
        }
      }
    }
    // ren command 
    if(command[0] == 'r') {
      if(command[1] == 'e') {
        if(command[2] =='n') {
          scanf("%s", arg1);
          scanf("%s", arg2);
          strcpy(actualcommand, "mv ");
          strcat(actualcommand, arg1);
          strcat(actualcommand, " ");
          strcat(actualcommand, arg2);
          system(actualcommand);
          //printf("%s", actualcommand);
        }
      }
    }
    // copy command 
    if(command[0] == 'c') {
      if(command[1] == 'o') {
        if(command[2] =='p') {
          if(command[3] == 'y') {
            scanf("%s", arg1);
            scanf("%s", arg2);
            strcpy(actualcommand, "cp ");
            strcat(actualcommand, arg1);
            strcat(actualcommand, " ");
            strcat(actualcommand, arg2);
            system(actualcommand);
            //printf("%s", actualcommand);
          }
        }
      }
    }
  }
  return 0;
}
