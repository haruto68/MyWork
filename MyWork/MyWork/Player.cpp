#include"DxLib.h"
#include"InputControl.h"
#include"Player.h"

//�R���X�g���N�^
Player::Player() : location(180.0f,240.0f), box_size(0.0f), image(NULL), hp(0.0f)
{
	location = (180.0f, 240.0f);
}

//�f�X�g���N�^
Player::~Player()
{

}

//����������
void Player::Initialize()
{
	//location.x = 180.0f;
	//location.y = 240.0f;
}

//�X�V����
void Player::Update()
{

}

//�`�揈��
void Player::Draw()
{
	//DrawBoxAA(this->location.x, this->location.y, 300, 300, GetColor(255, 0, 0), TRUE);
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