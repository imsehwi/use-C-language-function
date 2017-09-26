#pragma once

//functions
void ShowMenu(); //1. ����ڰ� �� �� �ִ� �޴� �����ֱ� menu
void HelpOption(); //2. ��ɾ� ��� �˷��ֱ� help
void ShowFiles(); //3. ���� list �����ֱ�
void ShowbyTable(); //4. �߰����� ������ �Բ� table�� �����ֱ�
void ManageDirbyExtension(); //5. Ȯ���ڴ�� �����ϱ�
void ManageDirbyTime(); //6. �ð� ������� �����ϱ�
void MoveDir(); //7. mv
void CopyDir(); //8. cp
void RemoveDir(); //9. rm
void ChangeFileName(); //10. �̸� �����ϱ�
void MakeDir(); //11. Directory �����
void Writetxt(); //12. txt ���� �ۼ��ϱ�(write)
void Readtxt(); //13. txt ���� : ��� �����ֱ�(read)
void UserInput(); //14. ����� �Է� �޾ƿ���
void PrintOutMonitor(); //15. ȭ�鿡 ����ϱ�

//variables
int input_menu, input_list, input_mng, input_txt;

//1. ����ڰ� �� �� �ִ� �޴� �����ֱ� menu
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
//2. ��ɾ� ��� �˷��ֱ� help
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
//3. ���� list �����ֱ�
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
//4. �߰����� ������ �Բ� table�� �����ֱ�
void ShowbyTable()
{

}
//5. Ȯ���ڴ�� �����ϱ�
void ManageDirbyExtension()
{

}
//6. �ð� ������� �����ϱ�
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
//10. �̸� �����ϱ�
void ChangeFileName()
{

}
//11. directory �����
void MakeDir()
{

}
//12. txt ���� �ۼ��ϱ�(write)
void Writetxt()
{

}
//13. txt ���� : ��� �����ֱ�(read)
void Readtxt()
{

}
//14. ����� �Է� �޾ƿ���
void UserInput()
{

}
//15. ȭ�鿡 ����ϱ�
void PrintOutMonitor()
{

}