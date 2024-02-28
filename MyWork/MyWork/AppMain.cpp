#include"DxLib.h"
#include"GameMainScene.h"


//メイン関数
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	//例外処理(異常が発生したら、catch文へ)
	try
	{
		//メイン機能の生成
		GameMainScene main;

		//メイン機能の初期化処理
		main.Initialize();

		//メイン機能の更新処理
		main.Update();
	}
	catch (const char* err_log)
	{
		//エラー発生内容の出力
		OutputDebugString(err_log);

		//エラー終了を通知
		return -1;
	}

	//正常終了を通知
	return 0;
}