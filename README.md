# 심화 프로그래밍
IoT 시스템 개발자 심화 프로그래밍 언어 학습 리포지토리

## 0일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실습
	
## 1일차
- C++ 기초
	- 변수
		- 변수 선언
	- 함수
		- 함수 선언(함수 정의)
	- 제어문
		- 선택 제어문
			- if
			- switch
		- 반복 제어문
			- for
			- while
	- 다중정의, 재정의
		- overloading (다중정의)
		- overriding (재정의)
			- 상속일때 사용
	- 퀴즈(계산기 만들기)

## 2일차
- C++ 기초
	- 매개변수
	- 인라인 함수
	- 이름공간
	- 전역변수, 지역변수
	- 포인터 함수, 참조자 함수
		- 포인터 함수
		- 참조자 함수
		- 잘못된 참조
		
## 3일차
- C++ 기초
	- Class
		- 멤버변수와 멤버함수(매서드)로 구성된다.
		- 클래스 내부에는 멤버들의 선언으로 작성된다.
		- 멤버함수의 정의를 외부로 빼낸다.(스코프 연산자 사용)
		- 일반적으로 멤버변수는 private, 멤버함수는 public의 접근제한을 사용한다.
	- new 연산자
		- heap 영역에 메모리를 할당받아, 객체를 생성한다.

## 4일차
- C++ 기초
	- 객체 지향 프로그래밍의 이해
	- 정보 은닉
	- 생성자
		- 클래스와 이름이 같고, 출력이 없는 형태
		- 객체 생성시 자동으로 호출되는 멤버함수
		- 모든 클래스는 디폴트 생성자를 가지고 있다.
		- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하다.
		- 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
		- 멤버변수들의 초기화를 담당한다.
		- 오버로딩 가능하다.
	- 멤버 이니셜라이즈
		- 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
		- const 변수와 참조변수의 초기화에 사용한다.

## 5일차
- C++ 기초
	- 소멸자
		- '~생성자' 형태로 자동으로 호출된다.
	- 포인터 배열 : 포인터를 저장하는 배열
	- 배열 포인터 : 배열을 가리키는 포인터
	- pointer this : 객체 자기 자신을 가리킨다
	- 복사 생성자
		- 객체를 복사할 때 자동으로 호출되어 동작하는 멤버함수
		- 입력이 참조(&)의 형태
			- 객체를 복사하는데 입력을 객체로 받을 수 없는 이유는? 
			- 객체를 받게 되면 객체를 복사하는 과정에서 복사 생성자가 무한히 호출되기 때문이다.
		
	
## 6일차
- C++ 기초
	- 얕은 복사, 깊은 복사 
		- 얕은 복사
			- 복사 생성자의 문제점
		- 깊은 복사
			- 깊은 복사를 통해서 얕은 복사의 문제점을 해결 가능하다.
	- 임시 객체
	- const 객체
	- 클래스 함수에 대한 Friend 선언
	- Static
		- 지역변수에 스태틱을 붙이면 전역변수처럼 사용 가능 (범위는 그 함수 안까지)

## 7일차
- C++ 기초
	- 스태틱
		- const static 멤버
	- 키워드 mutable
	- 상속(확장)
		- 상속관계에서는 재정의 발생
	- protected 선언

## 8일차
- C++ 기초
	- 객체 포인터 참조 관계
	- 가상 함수(virtual function)
		- 순수 가상함수: 가상함수에 실행부가 없음
			- 추상클래스 (순수 가상함수를 가진 클래스)는 객체를 생성할 수 없다.
		- 다형성
	- 멤버함수와 가상함수의 동작원리

## 9일차
- C++ 기초


## 10일차
- C++ 기초
	- 디폴트 대입연산자의 문제점
	- 상속 구조에서의 대입연산자 호출
	- 배열의 인덱스 연산자 오버로딩
		- 배열보다 나은 클래스
	- 그 이외의 연산자 오버로딩
		- delete 연산자 오버로딩
		- 포인터 연산자 오버로딩
	- 스마트 포인터
	- 연산자의 오버로딩과 펑터
	
## 11일차
- C++ 기초

## 12일차
- C++ 기초
	- 함수 템플릿
	- 클래스 템플릿
	