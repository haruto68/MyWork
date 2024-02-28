#pragma once

#include"Player.h"
#include"Enemy.h"

#define TARGET_FREAM_RATE	(60)						//固定化するフレームレート値
#define DELTA_SECOND	(1000000 / TARGET_FREAM_RATE)	//1フレーム当たりの時間（マイクロ秒）

class GameMainScene
{
private:
	Player* player;							//プレイヤー
	Enemy* enemy;							//エネミー
	int back_ground;						//背景

	bool IsHitCheck(Player* p, Enemy* e);	//当たり判定確認処理

public:
	GameMainScene();						//コンストラクタ
	~GameMainScene();						//デストラクタ

	void Initialize();						//初期化処理
	void Update();							//更新処理
	void Draw() const;						//描画処理
};