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
#include <direct.h>
#include "sehwi_l.h"

#ifndef MAX_PATH
#define MAX_PATH 260
#endif // !MAX_PATH



//variables
int input_menu, input_list, input_mng, input_txt;

int main()
{
	int flag = 1;

	while (ShowMenu());

	return 0;
}

//1. 사용자가 할 수 있는 메뉴 보여주기 menu
int ShowMenu()
{
	printf("\n\n*******************WELCOME*****************\n\n");

	printf("=============MENU=============\n");
	printf("1: Help Options\n");
	printf("2: Show Files\n");
	printf("3: Use txt\n");
	printf("4: MANUAL MODE\n");
	printf("5: EXIT");
	printf("===============================\n");
	printf("Choose what do you want to use(ex. 1, 2 ..) : ");
	scanf("%d", &input_menu);

	switch (input_menu)
	{
	
	case 1: HelpOption(); break;
	
	case 2:
			//printf("\n===============================");
			printf("\n======List of Files OPTIONS======");
			printf("\n=    There are two options that ");
			printf("\n=     user can choose ");
			printf("\n1: List form");
			printf("\n2: Table form");
			printf("\n===============================");
			printf("Choose how do you want manage(ex. 1, 2 ..) : ");
			scanf("%d", &input_list);
			if (input_list == 1) { ShowFiles(); return 1; }
			else if (input_list == 2) { ShowbyTable(); return 1; }
			else { printf("WRONG answer"); return 0; }
	
		case 3:
			printf("\n===============================");
			printf("\n=======Text File OPTIONS========");
			printf("\n=    There are two options that      =");
			printf("\n=      user can choose     =");
			printf("\n1: WRITE txt =");
			printf("\n2: READ txt =");
			printf("\n===============================");
			printf("Choose how do you want manage(ex. 1, 2 ..) : ");
			scanf("%d", &input_txt);
			if (input_txt == 1) { Writetxt(); return 1; }
			else if (input_txt == 2) { Readtxt(); return 1; }
			else { printf("WRONG answer"); return 0; }

		case 4:
			PrintOutStatus();
			UserInput();
			return 1;

		case 5: EXIT();

	}
}
//2. 명령어 기능 알려주기 help
void HelpOption()
{
	printf("===========OPTIONS===========\n");
	printf("mv: MoveFiles=\n");
	printf("cp: CopyFiles=\n");
	printf("rm: RemoveFiles=\n");
	printf("chg: ChangeFileName=\n");
	printf("mkdir: MakeDirectory=\n");
	printf("==============================\n");

}
//3. 파일 list 보여주기
void ShowFiles()
{
	DIR *dir;
	struct dirent *ent;

	if ((dir = opendir("./")) != NULL)
	{
		while ((ent = readdir(dir)) != NULL)
		{
			printf("%s \n", ent->d_name);
		}
		closedir(dir);
	}
	else
	{
		perror("Directory Open Error");
	}
}
//4. 추가적인 정보와 함께 table로 보여주기
void ShowbyTable()
{
	DIR *dir;
	struct dirent *ent;

	if ((dir = opendir("./")) != NULL)
	{
		while ((ent = readdir(dir)) != NULL)
		{
			printf("\n||  %s  ||", ent->d_name);
			printf("\n============");
		}
		closedir(dir);
	}
	else
	{
		perror("Directory Open Error");
	}
}
//6. 시간 순서대로 정리하기
void  EXIT()
{
	printf("Good Bye!");
	return 0;
}
//5. 파일 경로 지정하기
void ChangeDirectory()
{
	char strBuffer[MAX_PATH] = { 0, };
	char strChangeDir[MAX_PATH] = NULL;

	printf("\n$ ");
	scanf("%s", &strChangeDir);

	int nResult = chdir(strChangeDir);

	if (nResult == -1)
	{
		perror("이동 실패 - ");
	}

}
//7. mv
void MoveDir()
{

}
//8. cp
void CopyDir(char *origin, char *copy)
{
	FILE *forigin, *fnew;
	int temp;
	
	if ((forigin = fopen(origin, "rb")) == NULL)
	{
		printf("Can NOT find a file!");
		return;
	}
	if ((fnew = fopen(copy, "wb")) == NULL)
	{
		fclose(forigin);
		printf("Can NOT find a file!");
		return;
	}

	while (1)
	{
		temp = fgetc(forigin);

		if (!feof(forigin)) fputc(temp, fnew);
		else break;
	}

	fclose(forigin);
	fclose(fnew);

	return;
}
//9. rm
void RemoveDir()
{
	char strFolderPath[] = { "D:\\TestFolder2" };

	int nResult = rmdir(strFolderPath);

	if (nResult == 0)
	{
		printf("폴더 삭제 성공");
	}
	else if (nResult == -1)
	{
		perror("폴더 삭제 실패 - 폴더 안에 파일이 있거나 사용중\n");
		printf("errorno : %d", errno);
	}
}
//10. 이름 변경하기
void ChangeFileName()
{
	char strOldFolder[] = "d:\\TestOldFolder";
	char strNewFolder[] = "d:\\TestNewFolder";

	//테스트 폴더를 만든다.
	mkdir(strOldFolder);

	//이름을 바꾸고 결과를 리턴 받는다.
	int nResult = rename(strOldFolder, strNewFolder);

	if (nResult == 0)
	{
		printf("이름 변경 성공");
	}
	else if (nResult == -1)
	{
		perror("이름 변경 실패 - ");
	}
}
//11. directory 만들기
void MakeDir()
{
	char strFolderPath[] = { "D:\\CreateFolder" };

	int nResult = mkdir(strFolderPath);

	if (nResult == 0)
	{
		printf("폴더 생성 성공");
	}
	else if (nResult == -1)
	{
		perror("폴더 생성 실패 - 폴더가 이미 있거나 부정확함\n");
		printf("errorno : %d", errno);
	}

}
//12. txt 파일 작성하기(write)
void Writetxt()
{
	FILE *pFile = NULL;

	pFile = fopen("d:\\Text.txt", "w+");
	if (pFile != NULL)
	{
		for (int i = 0; i<5; ++i)
		{
			int nResult = fputs("라인 단위 파일 쓰기 fputs\n", pFile);
			printf("%d번째 라인 쓰기 %s\n", i + 1, nResult != -1 ? "성공" : "실패");
		}
		fclose(pFile);
	}
	else
	{
	}
}
//13. txt 파일 : 결과 보여주기(read)
void Readtxt()
{
	FILE *pFile = NULL;

	pFile = fopen("d:\\Text.txt", "r");
	if (pFile != NULL)
	{
		char strTemp[255];
		char *pStr;

		while (!feof(pFile))
		{
			pStr = fgets(strTemp, sizeof(strTemp), pFile);
			printf("%s", strTemp);
			printf("%s", pStr);
		}
		fclose(pFile);
	}
	else
	{
		//에러 처리
	}

}
//14. 사용자 입력 받아오기
void UserInput()
{
	getchar();
	char temp_char[5];
	gets(temp_char);

	int char_type;

	if (strcmp(temp_char, "mv") == 0) {
		char_type = 1;
	}
	else if (strcmp(temp_char, "cd") == 0) {
		char_type = 2;
	}
	else if (strcmp(temp_char, "rm") == 0) {
		char_type = 3;
	}
	else if (strcmp(temp_char, "chg") == 0) {
		char_type = 4;
	}
	else if (strcmp(temp_char, "mkdir") == 0) {
		char_type = 5;
	}
	else {
		char_type = 6;
		printf("Wrong type\n");
	}

	switch (char_type) {
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 3:
		printf("3\n");
		break;
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 6:
		printf("6\n");
		break;
	}
}
//15. 현재 상태 화면에 출력하기
void PrintOutStatus()
{
	char strBuffer[MAX_PATH] = { 0, };
	char *pstrBuffer = NULL;
	
	pstrBuffer = getcwd(strBuffer, MAX_PATH);

	printf("%s", pstrBuffer);
}