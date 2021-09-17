#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int fd = 0;

    // 만약 2가지 기능 이상을 쓰려고 한다면 FLAG 사이에 |를 넣어주면 된다.  
    // O_CREAT가 없기 때문에 파일이 없다면 불러오기가 실패가 된다.
    // 쓰기 전용 모드이며
    // 동시에 파일이 존재하고 일반 파일이면서 flags 인자에 쓰기가 가능하도록 명시가 되어있다면
    // 길이를 0으로 변경한다.(O_TRUNC)
    fd = open("/mnt/c/Users/user/Desktop/Study/linux-system-programming/test.txt", O_WRONLY | O_TRUNC);

    if(fd == -1) {
        // 에러가 발생한 경우 여기로 온다.
        return -1;
    } 

    close();

    return 0;   
}
