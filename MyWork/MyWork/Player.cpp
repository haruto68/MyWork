#include"DxLib.h"
#include"InputControl.h"
#include"Player.h"

//�R���X�g���N�^
Player::Player() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f)
{

}

//�f�X�g���N�^
Player::~Player()
{

}

//����������
void Player::Initialize()
{

}

//�X�V����
void Player::Update()
{

}

//�`�揈��
void Player::Draw()
{

}

//�ړ�����
void Player::Move()
{

}

//�ʒu���W�擾����
Vector2D Player::GetLocation() const
{
	return location;
}

//�����蔻��擾����
Vector2D Player::GetBoxSize() const
{
	return box_size;
}

//�̗͎擾����
float Player::GetHp() const
{
	return hp;
}

//�̗͌�������
void Player::DecreasHp(float value)
{

}