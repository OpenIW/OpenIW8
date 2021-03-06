/*
==============
IN_Init
==============
*/

void IN_Init(void)
{
  ?IN_Init@@YAXXZ();
}

/*
==============
IN_Shutdown
==============
*/

void IN_Shutdown(void)
{
  ?IN_Shutdown@@YAXXZ();
}

/*
==============
IN_Frame
==============
*/

void IN_Frame(void)
{
  ?IN_Frame@@YAXXZ();
}

/*
==============
Xb3_Input_GetKeyboardController
==============
*/

int __fastcall Xb3_Input_GetKeyboardController()
{
  return ?Xb3_Input_GetKeyboardController@@YAHXZ();
}

/*
==============
IN_Frame_Mouse
==============
*/

void IN_Frame_Mouse(void)
{
  ?IN_Frame_Mouse@@YAXXZ();
}

/*
==============
IN_IsControllerActiveInApplication
==============
*/

bool __fastcall IN_IsControllerActiveInApplication(int controllerIndex)
{
  return ?IN_IsControllerActiveInApplication@@YA_NH@Z(controllerIndex);
}

/*
==============
IN_GamepadsReset
==============
*/

void __fastcall IN_GamepadsReset(int controllerIndex)
{
  ?IN_GamepadsReset@@YAXH@Z(controllerIndex);
}

/*
==============
IN_Frame
==============
*/
void IN_Frame(void)
{
  Sys_ProfBeginNamedEvent(0xFF800080, "IN_Frame");
  Sys_ProfBeginNamedEvent(0xFF9400D3, "UpdateControllers");
  if ( j_GetManualControllerUpdate() != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_input.cpp", 178, ASSERT_TYPE_ASSERT, "(GetManualControllerUpdate() == 1)", (const char *)&queryFormat, "GetManualControllerUpdate() == TRUE") )
    __debugbreak();
  j_UpdateControllers();
  Sys_ProfEndNamedEvent();
  IN_MouseMove();
  IN_GamepadsMove();
  Sys_ProfEndNamedEvent();
}

/*
==============
IN_Frame_Mouse
==============
*/
void IN_Frame_Mouse(void)
{
  ;
}

/*
==============
IN_GamepadsMove
==============
*/
void IN_GamepadsMove()
{
  int v0; 
  int i; 
  double Stick; 
  int v3; 
  double v4; 
  int v5; 
  double v6; 
  int v7; 
  double v8; 
  int v9; 
  double Button; 
  int v11; 
  double v12; 
  int *p_code; 
  __int64 v14; 
  bool IsButtonPressed; 
  int v16; 
  int v17; 

  GPad_UpdateAll();
  v0 = Sys_Milliseconds();
  for ( i = 0; i < 8; ++i )
  {
    if ( GPad_IsActive(i) )
    {
      Stick = GPad_GetStick(i, GPAD_LX);
      v3 = (int)(float)(*(float *)&Stick * 65535.0);
      v4 = GPad_GetStick(i, GPAD_LY);
      v5 = (int)(float)(*(float *)&v4 * 65535.0);
      v6 = GPad_GetStick(i, GPAD_RX);
      v7 = (int)(float)(*(float *)&v6 * 65535.0);
      v8 = GPad_GetStick(i, GPAD_RY);
      v9 = (int)(float)(*(float *)&v8 * 65535.0);
      Button = GPad_GetButton(i, GPAD_L_TRIG);
      v11 = (int)(float)(*(float *)&Button * 65535.0);
      v12 = GPad_GetButton(i, GPAD_R_TRIG);
      CL_GamepadEvent(i, 0, v7, v0);
      CL_GamepadEvent(i, 1, v9, v0);
      CL_GamepadEvent(i, 2, v3, v0);
      CL_GamepadEvent(i, 3, v5, v0);
      CL_GamepadEvent(i, 5, v11, v0);
      CL_GamepadEvent(i, 4, (int)(float)(*(float *)&v12 * 65535.0), v0);
      p_code = &buttonList[0].code;
      v14 = 16i64;
      while ( 1 )
      {
        IsButtonPressed = GPad_IsButtonPressed(i, (GamePadButton)*(p_code - 1));
        v16 = i;
        if ( IsButtonPressed )
          break;
        if ( GPad_IsButtonReleased(i, (GamePadButton)*(p_code - 1)) )
        {
          v17 = 0;
          v16 = i;
          goto LABEL_8;
        }
LABEL_9:
        p_code += 2;
        if ( !--v14 )
          goto LABEL_10;
      }
      v17 = 1;
LABEL_8:
      CL_GamepadButtonEventForPort(v16, *p_code, v17, v0, 0);
      goto LABEL_9;
    }
LABEL_10:
    ;
  }
}

/*
==============
IN_GamepadsReset
==============
*/
void IN_GamepadsReset(int controllerIndex)
{
  int v2; 
  int *p_code; 
  __int64 v4; 

  v2 = Sys_Milliseconds();
  CL_GamepadEvent(controllerIndex, 0, 0, v2);
  CL_GamepadEvent(controllerIndex, 1, 0, v2);
  CL_GamepadEvent(controllerIndex, 2, 0, v2);
  CL_GamepadEvent(controllerIndex, 3, 0, v2);
  CL_GamepadEvent(controllerIndex, 5, 0, v2);
  CL_GamepadEvent(controllerIndex, 4, 0, v2);
  p_code = &buttonList[0].code;
  v4 = 16i64;
  do
  {
    CL_GamepadButtonEventForPort(controllerIndex, *p_code, 0, v2, 1);
    p_code += 2;
    --v4;
  }
  while ( v4 );
  GPad_InvalidatePortMapping();
}

/*
==============
IN_Init
==============
*/
void IN_Init(void)
{
  XB3NotificationHandler *Instance; 

  GPad_InitAll();
  GPad_SetInsertedCB(CL_Main_ControllerInserted);
  GPad_SetRemovedCB(CL_Main_ControllerRemoved);
  GPad_SetGetIsActiveCB(IN_IsControllerActiveInApplication);
  Instance = XB3NotificationHandler::GetInstance();
  XB3NotificationHandler::InitializeControllerNotificationHandlers(Instance);
  if ( Instance )
    Instance->__abi_Release(Instance);
  IN_StartupKeyboard();
  IN_StartupMouse();
}

/*
==============
IN_IsControllerActiveInApplication
==============
*/

bool __fastcall IN_IsControllerActiveInApplication(int controllerIndex)
{
  return CL_Mgr_IsControllerActive(controllerIndex);
}

/*
==============
IN_Shutdown
==============
*/
void IN_Shutdown(void)
{
  int i; 

  for ( i = 0; i < 8; ++i )
    GPad_StopRumbles(i, 1);
}

/*
==============
Xb3_Input_GetKeyboardController
==============
*/
int Xb3_Input_GetKeyboardController()
{
  int v0; 

  v0 = 0;
  while ( !CL_Mgr_IsControllerActive(v0) || GamerProfile_GetGamepadEnabled(v0) )
  {
    if ( ++v0 >= 8 )
      return CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  }
  return v0;
}

