#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int fd = 0;
    char filename[] = "/mnt/c/Users/user/Desktop/Study/linux-system-programming/ch02/test.txt";

    // creat 함수는
    // 파일의 이름과 동시에
    // umask 값을 부여한다.
    // 구현 방식은 다음과 같다.
    // int creat(const char * filename, int mode)
    // {
    //      return open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
    // }
    fd = creat(filename, 0644);

    if(fd == -1) {
        // 에러가 발생한 경우 여기로 온다.
        return -1;
    } 

    close();

    return 0;   
}
