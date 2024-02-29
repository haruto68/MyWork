#include"DxLib.h"
#include"GameMainScene.h"
#include"Player.h"
#include"Enemy.h"
#include"InputControl.h"

//
GameMainScene::GameMainScene() : player(nullptr), enemy(nullptr), back_ground(NULL)
{

}

//
GameMainScene::~GameMainScene()
{

}

//
void GameMainScene::Initialize()
{
	//�E�B���h�E�̃^�C�g���ݒ�
	SetMainWindowText("MyWork");

	//�E�B���h�E���[�h�ŋN��
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		throw("�E�B���h�E���[�h�ŋN���ł��܂���ł���\n");
	}

	//DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		throw("DX���C�u�������������ł��܂���ł���\n");
	}

	//�`���w�菈��
	if (SetDrawScreen(DX_SCREEN_BACK) == -1)
	{
		throw("�`���̎w�肪�ł��܂���ł���\n");
	}

	//�I�u�W�F�N�g�̐���
	player = new Player;
	enemy = new Enemy;

	//�I�u�W�F�N�g�̏�����
	player->Initialize();
	enemy->Initialize();
}

//
void GameMainScene::Update()
{
	//�t���[���J�n����(�}�C�N���b)���擾
	LONGLONG start_time = GetNowHiPerformanceCount();

	//���C�����[�v
	while (ProcessMessage() != -1)
	{
		//���ݎ��Ԃ��擾
		LONGLONG now_time = GetNowHiPerformanceCount();

		//1�t���[��������̎��Ԃɓ��B������A�X�V�y�ѕ`�揈�����s��
		if ((now_time - start_time) > DELTA_SECOND)
		{
			//�t���[���J�n���Ԃ��X�V����
			start_time = now_time;

			//���͋@�\�X�V����
			InputControl::Update();

			//�`�揈��
			Draw();

		}

		//ESCAPE�L�[�������ꂽ��A�Q�[�����I������
		if (CheckHitKey(KEY_INPUT_ESCAPE) || InputControl::GetButtonUp(XINPUT_BUTTON_BACK))
		{
			DxLib_End();
			break;
		}
	}
}

//
void GameMainScene::Draw() const
{
	//��ʂ̏�����
	//ClearDrawScreen();

	//�`�揈��
	player->Draw();
	enemy->Draw();
	

	//����ʂ̓��e��\��ʂɔ��f
	ScreenFlip();
}

//
bool GameMainScene::IsHitCheck(Player* p, Enemy* e)
{
	return FALSE;
}