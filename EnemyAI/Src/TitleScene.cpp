#include "TitleScene.h"
#include "enum.h"
#include "Engine/Engine.h"

void InitTitleScene();
void RunTitleScene();
void FinishTitleScene();
void EnemyAI();

void InitTitleScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	g_SceneStep = SceneStep::Run;
}

int feadAlpha = 0;
bool fadeout = false;

//int MoveCounter = 0;
//int EnemyStep = 0;
//
//Vec2 EnemyPos = Vec2(300.0f, 200.0f);

void RunTitleScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	//// ���s(���C������)
	//Engine::DrawTexture(EnemyPos.X, EnemyPos.Y, "Enemy", 128, 0.0f, 1.0f, 1.0f);

	//EnemyAI();


	











	//Engine::DrawFont(200.0f, 200.0f, "�^�C�g���V�[���̎��s����", Regular, White);
	//Engine::DrawFont(200.0f, 200.0f, "Title Scene", Regular, White);

	Engine::DrawRect(0, 0, 640, 480, 0x000000, feadAlpha);

	// �X�e�b�v��Finish�ɕύX => �V�[���̐؂�ւ��̏������������ꂽ��ύX
	if (Engine::IsKeyboardKeyHeld(DIK_Z))
	{
		fadeout = true;
	}

	if (fadeout == true)
	{
		feadAlpha++;

		if (feadAlpha == 255)
		{
			g_SceneStep = SceneStep::Finish;
		}
	}
}

void FinishTitleScene()
{
	// ���̓f�[�^�̍X�V
	Engine::Update();

	// ��n��

	// �X�e�b�v��Init�ɕύX(���̃V�[���̂��߂̏�����)
	g_SceneStep = SceneStep::Init;
	g_SceneKind = SceneKind::GameScene;
}

//void EnemyAI()
//{
//	MoveCounter++;
//
//	switch (EnemyStep)
//	{
//	case 1:
//		if (MoveCounter == 0)
//		{
//			EnemyPos.X -= 1.0f;
//		}
//		if (MoveCounter == 30)
//		{
//			EnemyPos.X += 1.0f;
//			EnemyStep = 1;
//		}
//		break;
//
//	case 2:
//		if (MoveCounter == 90)
//		{
//			EnemyPos.X -= 1.0f;
//			EnemyStep = 2;
//		}
//		break;
//
//	case 3:
//		if (MoveCounter > 120)
//		{
//			EnemyPos.X += 1.0f;
//		}
//		if (MoveCounter == 150)
//		{
//			MoveCounter = 0;
//			EnemyStep = 0;
//		}
//		break;
//	}
//
//
//}