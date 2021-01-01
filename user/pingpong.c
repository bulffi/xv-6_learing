#include<kernel/types.h>
#include<user/user.h>

int main(int argc, char const *argv[])
{
    int pipes[2];
    pipe(pipes);
    printf("%d %d\n", pipes[0], pipes[1]);
    int pid = fork();
    if (pid > 0) {
        // int father_pid = getpid();
        write(pipes[1], "HELLO", 5);
        printf("Write is done");
        wait(&pid);
        printf("In father\n");
        exit(0);
    } else if (pid == 0) {
        // int child_pid = getpid();
        printf("In child\n");
        char buf;
        while (read(pipes[0], &buf, 1)) {
            printf("%c", buf);
        }
        exit(0);
    } else {
        printf("Error in fork\n");
    }
    exit(0);
}
