//******************************************************************************
//
// This file is part of the OpenHoldem project
//    Source code:           https://github.com/OpenHoldem/openholdembot/
//    Forums:                http://www.maxinmontreal.com/forums/index.php
//    Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: main executable of the OpenHoldem program
//
//******************************************************************************

#include "..\DLLs\GUI_DLL\CGUI.h"
#include "..\DLLs\HeartbeatThread_DLL\CHeartbeatThread.h"

void main() {
  ///GUI()->Update();
  CHeartbeatThread heartbeat_thread;
  heartbeat_thread.StartThread();
}