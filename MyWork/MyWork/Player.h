#pragma once

#include"Vector2D.h"

class Player
{
private:
	Vector2D location;				//�ʒu���W
	Vector2D box_size;				//�����蔻��
	int image;						//�摜
	float hp;						//�̗�

	void Move();					//�ړ�����

public:
	Player();						//�R���X�g���N�^
	~Player();						//�f�X�g���N�^

	void Initialize();				//����������
	void Update();					//�X�V����
	void Draw();					//�`�揈��
	
	Vector2D GetLocation() const;	//�ʒu���W�擾����
	Vector2D GetBoxSize() const;	//�����蔻��擾����
	float GetHp() const;			//�̗͎擾����
	void DecreasHp(float value);	//�̗͌�������
};