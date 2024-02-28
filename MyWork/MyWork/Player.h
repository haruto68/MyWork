#pragma once

#include"Vector2D.h"

class Player
{
private:
	Vector2D location;				//位置座標
	Vector2D box_size;				//当たり判定
	int image;						//画像
	float hp;						//体力

	void Move();					//移動処理

public:
	Player();						//コンストラクタ
	~Player();						//デストラクタ

	void Initialize();				//初期化処理
	void Update();					//更新処理
	void Draw();					//描画処理
	
	Vector2D GetLocation() const;	//位置座標取得処理
	Vector2D GetBoxSize() const;	//当たり判定取得処理
	float GetHp() const;			//体力取得処理
	void DecreasHp(float value);	//体力減少処理
};