#pragma once

#define TARGET_FREAM_RATE	(60)						//�Œ艻����t���[�����[�g�l
#define DELTA_SECOND	(1000000 / TARGET_FREAM_RATE)	//1�t���[��������̎��ԁi�}�C�N���b�j

class SceneManager
{
private:
	void Draw() const;		//�`�揈��

public:
	SceneManager();			//�R���X�g���N�^
	~SceneManager();		//�f�X�g���N�^

	void Initialize();		//����������
	void Update();			//�X�V����
};