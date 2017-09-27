#pragma once

//functions
int ShowMenu(); //1. 사용자가 할 수 있는 메뉴 보여주기 menu
void HelpOption(); //2. 명령어 기능 알려주기 help
void ShowFiles(); //3. 파일 list 보여주기
void ShowbyTable(); //4. 추가적인 정보와 함께 table로 보여주기
void EXIT(); //5. 확장자대로 정리하기
void ChangeDirectory(); //6. 시간 순서대로 정리하기
void MoveDir(); //7. mv
void CopyDir(char *origin, char *fnew); //8. cp
void RemoveDir(); //9. rm
void ChangeFileName(); //10. 이름 변경하기
void MakeDir(); //11. Directory 만들기
void Writetxt(); //12. txt 파일 작성하기(write)
void Readtxt(); //13. txt 파일 : 결과 보여주기(read)
void UserInput(); //14. 사용자 입력 받아오기
void PrintOutStatus(); //15. 현재 상태 화면에 출력하기