#include"DxLib.h"
#include"InputControl.h"
#include"Enemy.h"

//�R���X�g���N�^
Enemy::Enemy() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f)
{

}

//�f�X�g���N�^
Enemy::~Enemy()
{

}

//����������
void Enemy::Initialize()
{

}

//�X�V����
void Enemy::Update()
{

}

//�`�揈��
void Enemy::Draw()
{

}

//�ړ�����
void Enemy::Move()
{

}

//�ʒu���W�擾����
Vector2D Enemy::GetLocation() const
{
	return location;
}

//�����蔻��擾����
Vector2D Enemy::GetBoxSize() const
{
	return box_size;
}

//�̗͎擾����
float Enemy::GetHp() const
{
	return hp;
}

//�̗͌�������
void Enemy::DecreasHp(float value)
{

}