#pragma once

//functions
int ShowMenu(); //1. ����ڰ� �� �� �ִ� �޴� �����ֱ� menu
void HelpOption(); //2. ��ɾ� ��� �˷��ֱ� help
void ShowFiles(); //3. ���� list �����ֱ�
void ShowbyTable(); //4. �߰����� ������ �Բ� table�� �����ֱ�
void EXIT(); //5. Ȯ���ڴ�� �����ϱ�
void ChangeDirectory(); //6. �ð� ������� �����ϱ�
void MoveDir(); //7. mv
void CopyDir(char *origin, char *fnew); //8. cp
void RemoveDir(); //9. rm
void ChangeFileName(); //10. �̸� �����ϱ�
void MakeDir(); //11. Directory �����
void Writetxt(); //12. txt ���� �ۼ��ϱ�(write)
void Readtxt(); //13. txt ���� : ��� �����ֱ�(read)
void UserInput(); //14. ����� �Է� �޾ƿ���
void PrintOutStatus(); //15. ���� ���� ȭ�鿡 ����ϱ�