#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int fd = 0;

    // 이렇게 연다면 read only 기능으로 열어진다.
    // 함수는 file descriptor를 반환한다.
    fd = open("/mnt/c/Users/user/Desktop/Study/linux-system-programming/test.txt", O_RDONLY);

    if(fd == -1) {
        // 에러가 발생한 경우 여기로 온다.
        return -1;
    } 

    close();

    return 0;   
}
