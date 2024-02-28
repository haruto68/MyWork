#pragma once

#define TARGET_FREAM_RATE	(60)						//固定化するフレームレート値
#define DELTA_SECOND	(1000000 / TARGET_FREAM_RATE)	//1フレーム当たりの時間（マイクロ秒）

class SceneManager
{
private:
	void Draw() const;		//描画処理

public:
	SceneManager();			//コンストラクタ
	~SceneManager();		//デストラクタ

	void Initialize();		//初期化処理
	void Update();			//更新処理
};