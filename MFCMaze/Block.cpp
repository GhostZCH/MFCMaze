#include "StdAfx.h"
#include "Block.h"
#include "MainFrm.h"

Block::Block(void)
{
	_canPass = true;
	_canReach = false;
	_nextJump = -1;
	_isWay = false;
	_jumpCount = CMainFrame::MAX_STEP;
}

Block::~Block(void)
{
}

