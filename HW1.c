/**
21300425 Sehwi_An
Handong University

project name: my COMPUTER manager
project description: This project does managing the computer files. The functions of project is showing the directories, making a directory and clear the directories
by time order. following list is about the functions ;
		
		1. 명령어 메뉴 보여주기 menu
		2. 명령어 기능 알려주기 help
		3. 파일 list 보여주기
		4. 추가적인 정보와 함께 DB로 보여주기
		5. 확장자대로 정리하기
		6. 시간 순서대로 정리하기
		7. mv
		8. cp
		9. rm
		10. 이름 변경하기
		11. 파일 만들기
		12. txt 파일 작성하기(write)
		13. txt 파일: 결과 보여주기(read)
		14. 사용자 입력 받아오기
		15. 화면에 출력하기
**/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <dirent.h>
#include "sehwi_l.h"

void main()
{
	ShowFiles();

	system("PAUSE");
	return;
}