#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = 0;
    char filename[] = "/mnt/c/Users/user/Desktop/Study/linux-system-programming/ch02/test.txt";

    unsigned long word;
    ssize_t nr;

    /* fd에서 몇 바이트를 읽어서 word에 저장한다. */
    nr = read(fd, &word, sizeof(unsigned long));

    if(fd == -1) {
        // 에러가 발생한 경우 여기로 온다.
        return -1;
    } 

    close();

    return 0;   
}
