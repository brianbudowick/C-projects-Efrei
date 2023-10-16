#include <stdio.h>

#include <unistd.h>



int main() {

    int i = 5;

    if (fork() == 0) { // I’m the ... child

        printf("I'm the child. My pid is %d. My parent's pid is %d.\n", getpid(), getppid());

        i++;

        printf("%d\n", i);

        } 

    else { //I’m the ... parent

        sleep(3); // sleep for 3 seconds

        printf("I'm the parent. My pid is %d. My child's pid is %d.\n", getppid(), getpid());

        printf("%d\n", i); 

        }

    return 0;

}
Collapse