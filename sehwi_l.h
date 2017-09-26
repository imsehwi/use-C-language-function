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
int input_menu, input_list, input_mng, input_txt;

//1. 사용자가 할 수 있는 메뉴 보여주기 menu
void ShowMenu()
{
	printf("=============MENU=============\n");
	printf("=1=								  ShowFiles=\n");
	printf("=2=							   HelpOptions=\n");
	printf("=3=					 ManageDirectories=\n");
	printf("=4=										Usetxt=\n");
	printf("===============================\n");
	printf("Choose what do you want to use(ex. 1, 2 ..) : ");
	scanf("%d", &input_menu);

	switch (input_menu)
	{
	case 1:
		printf("\n===============================");
		printf("\n======List of Files OPTIONS======");
		printf("\n=    There are two options that     =");
		printf("\n=              user can choose            =");
		printf("\n=1=                                List form =");
		printf("\n=2=                              Table form =");
		printf("\n===============================");
		printf("Choose how do you want manage(ex. 1, 2 ..) : ");
		scanf("%d", &input_list);
		if (input_list == 1) { ShowFiles(); break; }
		else if (input_list == 2) { ShowbyTable(); break; }
		else { printf("WRONG answer"); break; }

	case 2: HelpOption(); break;
	case 3: 
		printf("\n===============================");
		printf("\n=====Management OPTIONS======");
		printf("\n=    There are two options that     =");
		printf("\n=              user can choose            =");
		printf("\n=1=                           by Extension =");
		printf("\n=2=                                  by Time =");
		printf("\n===============================");
		printf("Choose how do you want manage(ex. 1, 2 ..) : ");
		scanf("%d", &input_mng);
			if (input_mng == 1) { ManageDirbyExtension(); break; }
			else if (input_mng == 2) { ManageDirbyTime(); break; }
			else { printf("WRONG answer"); break; }

	case 4: 
		printf("\n===============================");
		printf("\n=======Text File OPTIONS========");
		printf("\n=    There are two options that      =");
		printf("\n=              user can choose             =");
		printf("\n=1=								 WRITE txt =");
		printf("\n=2=                                   READ txt =");
		printf("\n===============================");
		printf("Choose how do you want manage(ex. 1, 2 ..) : ");
		scanf("%d", &input_txt);
			if (input_txt == 1) { Writetxt(); break; }
			else if (input_txt == 2) { Readtxt(); break; }
			else { printf("WRONG answer"); break; }
	}

}
//2. 명령어 기능 알려주기 help
void HelpOption()
{
	printf("===========OPTIONS===========\n");
	printf("=mv=							MoveFiles=\n");
	printf("=cp=							    CopyFiles=\n");
	printf("=rm=						   RemoveFiles=\n");
	printf("=chg=				 ChangeFileName=\n");
	printf("=mkdir=				 MakeDirectory=\n");
	printf("==============================\n");

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
		perror("Directory Open Error");;
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