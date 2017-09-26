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
int input_menu;

//1. ����ڰ� �� �� �ִ� �޴� �����ֱ� menu
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
//2. ��ɾ� ��� �˷��ֱ� help
void HelpOption()
{
	printf("===========OPTIONS===========");
	printf("=mv=							MoveFiles=");
	printf("=cp=							    CopyFiles=");
	printf("=rm=						   RemoveFiles=");
	printf("=chg=				 ChangeFileName=");
	printf("=mkdir=				 MakeDirectory=");

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
		perror("");;
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