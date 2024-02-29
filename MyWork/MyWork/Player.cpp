#include"DxLib.h"
#include"InputControl.h"
#include"Player.h"

//�R���X�g���N�^
Player::Player() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f), acceleration(0.0f), jumppower(0.0f), jump(FALSE)
{

}

//�f�X�g���N�^
Player::~Player()
{

}

//����������
void Player::Initialize()
{
	location.x = 320.0f;
	location.y = 450.0f;
	box_size.x = 30.0f;
	box_size.y = 30.0f;
	jumppower = -22.0f;
}

//�X�V����
void Player::Update()
{
	Gravity();
	Move();
}

//�`�揈��
void Player::Draw()
{
	DrawCircle(location.x, location.y, 30, GetColor(255, 255, 255), TRUE);
}

//�ړ�����
void Player::Move()
{
	Vector2D move = Vector2D(0.0f);

	//�\���ړ�����
	if (InputControl::GetButton(XINPUT_BUTTON_DPAD_LEFT))
	{
		move.x += -MOVE;
	}
	if (InputControl::GetButton(XINPUT_BUTTON_DPAD_RIGHT))
	{
		move.x += MOVE;
	}
	//�X�e�B�b�N�ړ�����
	if (InputControl::GetLeftStick().x < -0.2)
	{
		move.x += -MOVE;
	}
	if (InputControl::GetLeftStick().x > 0.2)
	{
		move.x += MOVE;
	}

	//�W�����v����
	if (InputControl::GetButton(XINPUT_BUTTON_B) && location.y >= 480.0f - box_size.y)
	{
		jump = TRUE;
	}
	if (jump == TRUE)
	{
		move.y += jumppower + acceleration;
	}

	location += move;

	//��ʊO�ɍs���Ȃ��悤�ɐ�������
	if (location.x < box_size.x)
	{
		location.x = box_size.x;
	}
	if (location.x > 640.0f - box_size.x)
	{
		location.x = 640.0f - box_size.x;
	}
	if (location.y < box_size.y)
	{
		location.y = box_size.y;
	}
	if (location.y > 480.0f - box_size.y)
	{
		location.y = 480.0f - box_size.y;
	}
}

//�d�͏���
void Player::Gravity()
{
	if (location.y >= 480.0f - box_size.y)
	{
		acceleration = 0.0f;
		jump = FALSE;
	}

	acceleration += GRAVITY;
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