#pragma once

//functions
int ShowMenu(); //1. �����ڰ� �� �� �ִ� �޴� �����ֱ� menu
void HelpOption(); //2. ���ɾ� ���� �˷��ֱ� help
void ShowFiles(); //3. ���� list �����ֱ�
/////
void ShowbyTable(); //4. �߰����� ������ �Բ� table�� �����ֱ�
void ManageDirbyExtension(); //5. Ȯ���ڴ��� �����ϱ�
void ManageDirbyTime(); //6. �ð� �������� �����ϱ�
void MoveDir(); //7. mv
void CopyDir(); //8. cp
void RemoveDir(); //9. rm
void ChangeFileName(); //10. �̸� �����ϱ�
void MakeDir(); //11. Directory ������
void Writetxt(); //12. txt ���� �ۼ��ϱ�(write)
void Readtxt(); //13. txt ���� : ���� �����ֱ�(read)

//My version//
void UserInput(); //14. ������ �Է� �޾ƿ���
//Show user's input using scanf

void PrintOutMonitor(); //15. ȭ�鿡 �����ϱ�

//variables
int input_menu, input_list, input_mng, input_txt;

//1. �����ڰ� �� �� �ִ� �޴� �����ֱ� menu
int ShowMenu()
{
	printf("\n\n*******************WELCOME*****************\n\n");

	printf("=============MENU=============\n");
	printf("1: ShowFiles=\n");
	printf("2: HelpOptions=\n");
	printf("3: ManageDirectories=\n");
	printf("4: Usetxt=\n");
	printf("5: MANUAL MODE=\n");
	printf("===============================\n");
	printf("Choose what do you want to use(ex. 1, 2 ..) : ");
	scanf("%d", &input_menu);

	switch (input_menu)
	{
	case 1:
		//printf("\n===============================");
		printf("\n======List of Files OPTIONS======");
		printf("\n=    There are two options that     =");
		printf("\n=     user can choose     =");
		printf("\n1: List form =");
		printf("\n2: Table form =");
		printf("\n===============================");
		printf("Choose how do you want manage(ex. 1, 2 ..) : ");
		scanf("%d", &input_list);
		if (input_list == 1) { ShowFiles(); return 1; }
		else if (input_list == 2) { ShowbyTable(); return 1; }
		else { printf("WRONG answer"); return 0; }

	case 2: HelpOption(); break;
	case 3:
		printf("\n===============================");
		printf("\n=====Management OPTIONS======");
		printf("\n=    There are two options that     =");
		printf("\n=      user can choose         =");
		printf("\n1: by Extension =");
		printf("\n2: by Time =");
		printf("\n===============================");
		printf("Choose how do you want manage(ex. 1, 2 ..) : ");
		scanf("%d", &input_mng);
			if (input_mng == 1) { ManageDirbyExtension(); return 1; }
			else if (input_mng == 2) { ManageDirbyTime(); return 1; }
			else { printf("WRONG answer"); return 0; }

	case 4:
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
	}

	case 5:
		UserInput();
		return 1;

}
//2. ���ɾ� ���� �˷��ֱ� help
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
//3. ���� list �����ֱ�
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
//4. �߰����� ������ �Բ� table�� �����ֱ�
void ShowbyTable()
{

}
//5. Ȯ���ڴ��� �����ϱ�
void ManageDirbyExtension()
{

}
//6. �ð� �������� �����ϱ�
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
//11. directory ������
void MakeDir()
{

}
//12. txt ���� �ۼ��ϱ�(write)
void Writetxt()
{

}
//13. txt ���� : ���� �����ֱ�(read)
void Readtxt()
{

}
//14. ������ �Է� �޾ƿ���
void UserInput()
{
	// char[] temp;
	// scanf("%s", temp);
	// return temp;
}
//15. ȭ�鿡 �����ϱ�
void PrintOutMonitor()
{

}
