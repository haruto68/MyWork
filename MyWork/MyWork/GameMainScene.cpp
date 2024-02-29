#include"DxLib.h"
#include"GameMainScene.h"
#include"Player.h"
#include"Enemy.h"
#include"InputControl.h"

//
GameMainScene::GameMainScene() : player(nullptr), enemy(nullptr), back_ground(NULL)
{

}

//
GameMainScene::~GameMainScene()
{

}

//
void GameMainScene::Initialize()
{
	//ウィンドウのタイトル設定
	SetMainWindowText("MyWork");

	//ウィンドウモードで起動
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		throw("ウィンドウモードで起動できませんでした\n");
	}

	//DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		throw("DXライブラリが初期化できませんでした\n");
	}

	//描画先指定処理
	if (SetDrawScreen(DX_SCREEN_BACK) == -1)
	{
		throw("描画先の指定ができませんでした\n");
	}

	//オブジェクトの生成
	player = new Player;
	enemy = new Enemy;

	//オブジェクトの初期化
	player->Initialize();
	enemy->Initialize();
}

//
void GameMainScene::Update()
{
	//フレーム開始時間(マイクロ秒)を取得
	LONGLONG start_time = GetNowHiPerformanceCount();

	//メインループ
	while (ProcessMessage() != -1)
	{
		//現在時間を取得
		LONGLONG now_time = GetNowHiPerformanceCount();

		//1フレーム当たりの時間に到達したら、更新及び描画処理を行う
		if ((now_time - start_time) > DELTA_SECOND)
		{
			//フレーム開始時間を更新する
			start_time = now_time;

			//入力機能更新処理
			InputControl::Update();

			//描画処理
			Draw();

		}

		//ESCAPEキーが押されたら、ゲームを終了する
		if (CheckHitKey(KEY_INPUT_ESCAPE) || InputControl::GetButtonUp(XINPUT_BUTTON_BACK))
		{
			DxLib_End();
			break;
		}
	}
}

//
void GameMainScene::Draw() const
{
	//画面の初期化
	//ClearDrawScreen();

	//描画処理
	player->Draw();
	enemy->Draw();
	

	//裏画面の内容を表画面に反映
	ScreenFlip();
}

//
bool GameMainScene::IsHitCheck(Player* p, Enemy* e)
{
	return FALSE;
}