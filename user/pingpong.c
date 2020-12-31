#include<kernel/types.h>
#include<user/user.h>

int main(int argc, char const *argv[])
{
    write(1, "pingpong", 8);    
    exit(0);
}
