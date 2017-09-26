#pragma once

//functions
void ShowMenu(); //1. 사용자가 할 수 있는 메뉴 보여주기 menu
void HelpOption(); //2. 명령어 기능 알려주기 help
void ShowFiles(); //3. 파일 list 보여주기
void ShowbyTable(); //4. 추가적인 정보와 함께 table로 보여주기
void ManageDirbyExtension(); //5. 확장자대로 정리하기
void ManageDirbyTime(); //6. 시간 순서대로 정리하기
void MoveDir(); //7. mv
void CopyDir(); //8. cp
void RemoveDir(); //9. rm
void ChangeFileName(); //10. 이름 변경하기
void MakeDir(); //11. Directory 만들기
void Writetxt(); //12. txt 파일 작성하기(write)
void Readtxt(); //13. txt 파일 : 결과 보여주기(read)
void UserInput(); //14. 사용자 입력 받아오기
void PrintOutMonitor(); //15. 화면에 출력하기

//variables
int input_menu;

//1. 사용자가 할 수 있는 메뉴 보여주기 menu
void ShowMenu()
{
	printf("=============MENU=============");
	printf("=1=								 ShowMenu=");
	printf("=2=							   HelpOptions=");
	printf("=3=					 ManageDirectories=");
	printf("=4=										Usetxt=");
	printf("===============================");
	printf("Choose what you want to use by number: ");
	scanf("%d", &input_menu);

	switch (input_menu)
	{
	case 1: ShowMenu(); break;
	case 2: HelpOption(); break;
	case 3: 
	}

}
//2. 명령어 기능 알려주기 help
void HelpOption()
{
	printf("===========OPTIONS===========");
	printf("=mv=							MoveFiles=");
	printf("=cp=							    CopyFiles=");
	printf("=rm=						   RemoveFiles=");
	printf("=chg=				 ChangeFileName=");
	printf("=mkdir=				 MakeDirectory=");

}
//3. 파일 list 보여주기
void ShowFiles()
{
	DIR *dir;
	struct dirent *ent;

	if ((dir = opendir("D:\\2017-2")) != NULL)
	{
		while ((ent = readdir(dir)) != NULL)
		{
			printf("%s \n", ent->d_name);
		}
		closedir(dir);
	}
	else
	{
		perror("");;
		return 0;
	}
}
//4. 추가적인 정보와 함께 table로 보여주기
void ShowbyTable()
{

}
//5. 확장자대로 정리하기
void ManageDirbyExtension()
{

}
//6. 시간 순서대로 정리하기
void  ManageDirbyTime()
{

}
//7. mv
void MoveDir()
{

}
//8. cp
void CopyDir()
{

}
//9. rm
void RemoveDir()
{

}
//10. 이름 변경하기
void ChangeFileName()
{

}
//11. directory 만들기
void MakeDir()
{

}
//12. txt 파일 작성하기(write)
void Writetxt()
{

}
//13. txt 파일 : 결과 보여주기(read)
void Readtxt()
{

}
//14. 사용자 입력 받아오기
void UserInput()
{

}
//15. 화면에 출력하기
void PrintOutMonitor()
{

}