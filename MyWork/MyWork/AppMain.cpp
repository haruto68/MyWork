#include"DxLib.h"
#include"GameMainScene.h"


//���C���֐�
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	//��O����(�ُ킪����������Acatch����)
	try
	{
		//���C���@�\�̐���
		GameMainScene main;

		//���C���@�\�̏���������
		main.Initialize();

		//���C���@�\�̍X�V����
		main.Update();
	}
	catch (const char* err_log)
	{
		//�G���[�������e�̏o��
		OutputDebugString(err_log);

		//�G���[�I����ʒm
		return -1;
	}

	//����I����ʒm
	return 0;
}