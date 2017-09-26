/**
21300425 Sehwi_An
Handong University

project name: my COMPUTER manager
project description: This project does managing the computer files. The functions of project is showing the directories, making a directory and clear the directories
by time order. following list is about the functions ;

		1. ���ɾ� �޴� �����ֱ� menu
		2. ���ɾ� ���� �˷��ֱ� help
		3. ���� list �����ֱ�
		4. �߰����� ������ �Բ� DB�� �����ֱ�
		5. Ȯ���ڴ��� �����ϱ�
		6. �ð� �������� �����ϱ�
		7. mv
		8. cp
		9. rm
		10. �̸� �����ϱ�
		11. ���� ������
		12. txt ���� �ۼ��ϱ�(write)
		13. txt ����: ���� �����ֱ�(read)
		14. ������ �Է� �޾ƿ���
		15. ȭ�鿡 �����ϱ�
**/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "sehwi_l.h"

int main()
{
	int flag=1;

	while(ShowMenu());

	return 0;
}
