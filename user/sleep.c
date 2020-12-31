#include <kernel/types.h>
#include <user/user.h>

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        char* error_info = "";
        write(1, error_info, strlen(error_info));
    }
    int time_to_sleep = atoi(argv[1]);
    sleep(time_to_sleep);
    exit(0);
}
