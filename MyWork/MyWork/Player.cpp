#include"DxLib.h"
#include"InputControl.h"
#include"Player.h"

//コンストラクタ
Player::Player() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f), acceleration(0.0f), jumppower(0.0f), jump(FALSE)
{

}

//デストラクタ
Player::~Player()
{

}

//初期化処理
void Player::Initialize()
{
	location.x = 320.0f;
	location.y = 450.0f;
	box_size.x = 30.0f;
	box_size.y = 30.0f;
	jumppower = -22.0f;
}

//更新処理
void Player::Update()
{
	Gravity();
	Move();
}

//描画処理
void Player::Draw()
{
	DrawCircle(location.x, location.y, 30, GetColor(255, 255, 255), TRUE);
}

//移動処理
void Player::Move()
{
	Vector2D move = Vector2D(0.0f);

	//十字移動処理
	if (InputControl::GetButton(XINPUT_BUTTON_DPAD_LEFT))
	{
		move.x += -MOVE;
	}
	if (InputControl::GetButton(XINPUT_BUTTON_DPAD_RIGHT))
	{
		move.x += MOVE;
	}
	//スティック移動処理
	if (InputControl::GetLeftStick().x < -0.2)
	{
		move.x += -MOVE;
	}
	if (InputControl::GetLeftStick().x > 0.2)
	{
		move.x += MOVE;
	}

	//ジャンプ処理
	if (InputControl::GetButton(XINPUT_BUTTON_B) && location.y >= 480.0f - box_size.y)
	{
		jump = TRUE;
	}
	if (jump == TRUE)
	{
		move.y += jumppower + acceleration;
	}

	location += move;

	//画面外に行かないように制限する
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

//重力処理
void Player::Gravity()
{
	if (location.y >= 480.0f - box_size.y)
	{
		acceleration = 0.0f;
		jump = FALSE;
	}

	acceleration += GRAVITY;
}


//位置座標取得処理
Vector2D Player::GetLocation() const
{
	return location;
}

//当たり判定取得処理
Vector2D Player::GetBoxSize() const
{
	return box_size;
}

//体力取得処理
float Player::GetHp() const
{
	return hp;
}

//体力減少処理
void Player::DecreasHp(float value)
{

}