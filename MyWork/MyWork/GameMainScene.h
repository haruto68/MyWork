#pragma once

#include"Player.h"
#include"Enemy.h"

#define TARGET_FREAM_RATE	(60)						//�Œ艻����t���[�����[�g�l
#define DELTA_SECOND	(1000000 / TARGET_FREAM_RATE)	//1�t���[��������̎��ԁi�}�C�N���b�j

class GameMainScene
{
private:
	Player* player;							//�v���C���[
	Enemy* enemy;							//�G�l�~�[
	int back_ground;						//�w�i

	bool IsHitCheck(Player* p, Enemy* e);	//�����蔻��m�F����

public:
	GameMainScene();						//�R���X�g���N�^
	~GameMainScene();						//�f�X�g���N�^

	void Initialize();						//����������
	void Update();							//�X�V����
	void Draw() const;						//�`�揈��
};