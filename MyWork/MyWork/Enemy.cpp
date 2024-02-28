#include"DxLib.h"
#include"InputControl.h"
#include"Enemy.h"

//コンストラクタ
Enemy::Enemy() : location(0.0f), box_size(0.0f), image(NULL), hp(0.0f)
{

}

//デストラクタ
Enemy::~Enemy()
{

}

//初期化処理
void Enemy::Initialize()
{

}

//更新処理
void Enemy::Update()
{

}

//描画処理
void Enemy::Draw()
{

}

//移動処理
void Enemy::Move()
{

}

//位置座標取得処理
Vector2D Enemy::GetLocation() const
{
	return location;
}

//当たり判定取得処理
Vector2D Enemy::GetBoxSize() const
{
	return box_size;
}

//体力取得処理
float Enemy::GetHp() const
{
	return hp;
}

//体力減少処理
void Enemy::DecreasHp(float value)
{

}