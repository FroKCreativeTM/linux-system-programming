# 시스템 프로그래밍이란
시스템 프로그래밍은 커널 및 핵심 라이브러리를 직접 사용하면서 하위 레벨에 동작하는 시스템 소프트웨어를 개발자가 직접 작성하는 것이다.<br/>
쉘, 컴파일러, 디버거, 시스템 데몬, 네트워크 서버, 웹 서버, 데이터베이스 등등이 이러한 시스템 소프트웨어라고 할 수 있다.<br/>

### 시스템 프로그래밍
유닉스 프로그래밍 == 시스템 프로그래밍이라고 봐도 무방하다.<br/>
사실 유닉스 시스템은 추상화가 잘 되어있는 시스템은 아니다. 즉 X 윈도우같은 환경에서도 유닉스의 핵심 시스템 API에는 접근이 가능하다.<br/>

### 시스템 프로그래밍 VS 응용 프로그래밍 
시스템 프로그래밍의 경우 하드웨어와 운영체제에 대해서 제대로 알고 난 뒤 할 필요가 있다.<br/>
하지만 응용 프로그래밍의 경우에는 고급 라이브러리를 사용하는데, 이 라이브러리들은 하드웨어나 운영체제에 대한 추상화를 진행한 경우가 많다.<br/>
즉 시스템 프로그래밍은 그 하드웨어에 종속적인 코드가 나올 수 있지만 응용 프로그래밍의 경우 결과물로 범 플랫폼적인 산출물이 나올 수 있다는 점이 차이다.<br/>
하지만 상위 레벨에서 동작하는 소프트웨어의 경우에도 시스템 프로그래밍에 대해 알고나서 진행한다면 충분히 좋은 어플리케이션 개발을 할 수 있다.<br/>

### 시스템 콜
시스템 프로그래밍은 시스템 콜에서 시작해서 시스템 콜로 끝난다고 해도 무방하다.<br/>
syscall이라고도 불리는 이것은 운영체제에 리소스나 서비스를 요청하려고 사용자 영역에서 시작해서 커널 내부로 들어가는 함수 호출이다. 예로 들어  따지면 게임이 실행되는 도중 리소스 불러오기 등등의 과정에서 최적화를 통해 하드웨어의 자원 관리를 어떻게 하게 할 것인가를 개발자가 직접 코드를 짜서 명령을 내릴 수 있다. <br/>
시스템 콜에는 read(), write()같은 함수부터 set_tid_address()같은 생소한 함수까지 존재한다.<br/>
리눅스의 경우는 다른 운영체제보다 시스템 콜이 더 적다.

### API(Application Programming Interface)
API는 소스 코드 레벨에서 서로 인터페이스하는 방식이다. API는 상호 소프트웨어 간 API를 준수한 경우 코드 수준에서 호환된다고 볼 수 있다.<br/>
즉 그 API를 따르기만 한다면 성공적으로 컴파일될 수 있는 것이다.<br/>

### ABI(Application Binary Interface)
ABI는 특정 아키텍처 간에 동작하는 소프트웨어 간의 바이너리 인터페이스이다.<br/>
ABI는 어플리케이션 간 상호 동적, 커널과 어플리케이션, 어플리케이션-라이브러리 간의 상호 동작에 대해 정의한다.<br/>
ABI는 컬링 컨벤션, 바이트 순서, 레지스터 활용, 시스템 콜 실행 등 많은 시스템 요소적인 부분에서 관련이 있으며, 리눅스는 각각의 요구사항에 맞는 고유의 ABI를 정의하려는 경향이 있는 OS이다. 즉 리눅스는 아키텍처마다 각기 다른 고유의 ABI를 가지고 있다고 볼 수 있다.<br/>

### 리눅스의 표준
리눅스는 POSIX와 SUS 호환을 지향한다. 그러다보니 리눅스는 프로그래밍 언어 표준을 굉장히 잘 따르고 있는 편이며, gcc C컴파일러의 경우 C11도 지원을 한다.<br/>
다만 리눅스의 경우 상위 호환성이 썩 훌륭하지 못하다. 하지만 표준 C 라이브러리같은 표준에 기술된 인터페이스는 소스 코드 호환성을 명확하게 지킨다.<br/>

