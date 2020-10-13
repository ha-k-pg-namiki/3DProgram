#include "GameScene.h"
#include "enum.h"
#include "Engine/Engine.h"

void InitGameScene();
void RunGameScene();
void FinishGameScene();

int feadinAlpha = 255;

void InitGameScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	Engine::DrawFont(200.0f, 200.0f, "InitGameScene", Regular, White);

	Engine::DrawRect(0, 0, 640, 480, 0x000000, feadinAlpha);

	feadinAlpha--;

	if (feadinAlpha == 0)
	{
		g_SceneStep = SceneStep::Run;
	}
}

void RunGameScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	// ���s(���C������)
	Engine::DrawFont(200.0f, 200.0f, "Game Scene", Regular, White);

	int feadAlpha = 255;

	if (Engine::IsKeyboardKeyHeld(DIK_RETURN))
	{
		g_SceneStep = SceneStep::Finish;
	}
}

void FinishGameScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	// ��n��

	// �X�e�b�v��Init�ɕύX(���̃V�[���̂��߂̏�����)
	g_SceneStep = SceneStep::Init;
	g_SceneKind = SceneKind::GameScene;
}
