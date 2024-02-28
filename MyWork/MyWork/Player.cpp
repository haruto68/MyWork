#include"DxLib.h"
#include"InputControl.h"
#include"Player.h"

//コンストラクタ
Player::Player() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f)
{

}

//デストラクタ
Player::~Player()
{

}

//初期化処理
void Player::Initialize()
{

}

//更新処理
void Player::Update()
{

}

//描画処理
void Player::Draw()
{

}

//移動処理
void Player::Move()
{

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