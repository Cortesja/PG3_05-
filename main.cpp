#include "GameManager.h"

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	GameManager* gameManager = new GameManager("GC2B_コーテスジャレッドアレン");

	gameManager->Run();

	delete gameManager;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}