// 소스파일
/*
* 
Ctrl + D : 한줄 복제하기
Shift+Delete: 한줄 삭제하기 
Shift+화살표 : 블럭잡기
Alt+Shift+화살표 : 세로로 블럭잡기 
Ctrl + Space : 자동완성기능(인텔리센스)창띄우기
Alt + 화살표 위 아래: 줄바꿈
Ctrl+Shift+B: 프로젝트 빌드
빌드: 실행파일 생성하기
리빌드 : 컨트롤 B R : (정리+빌드)

*/
// 컴파일러 : 번역기(사람이 써 놓은 코드를 기계가 알아듣게 번역해줌) -> 목적 코드 생성 -> 링커가 연결해서 실행파일 생성 
  
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cstdio> //stdio.h 에 네임스페이스 추가한 래퍼 
#include "header.h"

using namespace std;
int main() {
   //c= 섭씨 , h= 화씨

    double c;
    cin >> c;
    int h;
    h = 1.8 *c + 32;
    printf("화씨온도는=%d", h);
    return 0;
}
        