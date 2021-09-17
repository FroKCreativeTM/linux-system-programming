#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int fd = 0;

    // O_CREAT를 사용할 때 주의해야 될 점은
    // 파일의 소유권이 누가 될 것인가를 정해줄 필요가 있다.
    // 파일 생성은 mode를 확인할 필요가 있다.
    // 보통 0644로 되어있으며 
    // 파일 옵션 뒤에 |를 붙여 같이 설정할 수 있다.
    fd = open("/mnt/c/Users/user/Desktop/Study/linux-system-programming/test.txt", O_WRONLY | O_CREAT
        | S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);

    if(fd == -1) {
        // 에러가 발생한 경우 여기로 온다.
        return -1;
    } 

    close();

    return 0;   
}
