/*
==============
SV_SaveSP_AddPendingSave
==============
*/

int __fastcall SV_SaveSP_AddPendingSave(const char *filename, const char *description, const char *screenshot, SaveType saveType, unsigned int commitLevel, bool suppressPlayerNotify)
{
  return ?SV_SaveSP_AddPendingSave@@YAHPEBD00W4SaveType@@I_N@Z(filename, description, screenshot, saveType, commitLevel, suppressPlayerNotify);
}

/*
==============
SV_SaveSP_AddLoadGameContinue
==============
*/

void SV_SaveSP_AddLoadGameContinue(void)
{
  ?SV_SaveSP_AddLoadGameContinue@@YAXXZ();
}

/*
==============
PendingSaveList_WriteInfoToBuffer
==============
*/

int __fastcall PendingSaveList_WriteInfoToBuffer(char *buffer, int bufferSize)
{
  return ?PendingSaveList_WriteInfoToBuffer@@YAHPEADH@Z(buffer, bufferSize);
}

/*
==============
SV_MainSP_ClearClientSaveGameRequest
==============
*/

void SV_MainSP_ClearClientSaveGameRequest(void)
{
  ?SV_MainSP_ClearClientSaveGameRequest@@YAXXZ();
}

/*
==============
SV_SaveSP_LoadServerCommands
==============
*/

void __fastcall SV_SaveSP_LoadServerCommands(SaveGame *save)
{
  ?SV_SaveSP_LoadServerCommands@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
SvGameModeAppSP::WaitStartServer
==============
*/

bool __fastcall SvGameModeAppSP::WaitStartServer(SvGameModeAppSP *this)
{
  return ?WaitStartServer@SvGameModeAppSP@@AEAA_NXZ(this);
}

/*
==============
SV_MainSP_AddServerCommand
==============
*/

void __fastcall SV_MainSP_AddServerCommand(SvClientSP *client, const char *cmd)
{
  ?SV_MainSP_AddServerCommand@@YAXPEAVSvClientSP@@PEBD@Z(client, cmd);
}

/*
==============
SV_MainSP_EndSaveGame
==============
*/

void SV_MainSP_EndSaveGame(void)
{
  ?SV_MainSP_EndSaveGame@@YAXXZ();
}

/*
==============
SV_MainSP_InitSnapshot
==============
*/

void SV_MainSP_InitSnapshot(void)
{
  ?SV_MainSP_InitSnapshot@@YAXXZ();
}

/*
==============
SV_SaveSP_ShouldPreventSavingToDisk
==============
*/

bool __fastcall SV_SaveSP_ShouldPreventSavingToDisk(const char *filename)
{
  return ?SV_SaveSP_ShouldPreventSavingToDisk@@YA_NPEBD@Z(filename);
}

/*
==============
SV_MainSP_DemoSetAnimTime
==============
*/

void SV_MainSP_DemoSetAnimTime(void)
{
  ?SV_MainSP_DemoSetAnimTime@@YAXXZ();
}

/*
==============
SV_MainSP_SignalClientToSaveGame
==============
*/

void SV_MainSP_SignalClientToSaveGame(void)
{
  ?SV_MainSP_SignalClientToSaveGame@@YAXXZ();
}

/*
==============
SvGameModeAppSP::RunFrame
==============
*/

void __fastcall SvGameModeAppSP::RunFrame(SvGameModeAppSP *this, int msec)
{
  ?RunFrame@SvGameModeAppSP@@UEAAXH@Z(this, msec);
}

/*
==============
SvGameModeAppSP::PacketEvent
==============
*/

void __fastcall SvGameModeAppSP::PacketEvent(SvGameModeAppSP *this)
{
  ?PacketEvent@SvGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
SvGameModeAppSP::SvGameModeAppSP
==============
*/

void __fastcall SvGameModeAppSP::SvGameModeAppSP(SvGameModeAppSP *this)
{
  ??0SvGameModeAppSP@@QEAA@XZ(this);
}

/*
==============
SvGameModeAppSP::UpdateServerTime
==============
*/

void __fastcall SvGameModeAppSP::UpdateServerTime(SvGameModeAppSP *this, int msec)
{
  ?UpdateServerTime@SvGameModeAppSP@@AEAAXH@Z(this, msec);
}

/*
==============
SvGameModeAppSP::ServerThreadLoop
==============
*/

void __fastcall SvGameModeAppSP::ServerThreadLoop(SvGameModeAppSP *this)
{
  ?ServerThreadLoop@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SV_MainSP_CheckForClientSaveGame
==============
*/

void __fastcall SV_MainSP_CheckForClientSaveGame(bool checkForSnapShot)
{
  ?SV_MainSP_CheckForClientSaveGame@@YAX_N@Z(checkForSnapShot);
}

/*
==============
SV_MainSP_BeginSaveGame
==============
*/

void SV_MainSP_BeginSaveGame(void)
{
  ?SV_MainSP_BeginSaveGame@@YAXXZ();
}

/*
==============
SV_SaveSP_SetLastSaveName
==============
*/

void __fastcall SV_SaveSP_SetLastSaveName(const char *filename)
{
  ?SV_SaveSP_SetLastSaveName@@YAXPEBD@Z(filename);
}

/*
==============
SV_MainSP_WaitSaveGame
==============
*/

void SV_MainSP_WaitSaveGame(void)
{
  ?SV_MainSP_WaitSaveGame@@YAXXZ();
}

/*
==============
SV_SaveSP_SaveServerCommands
==============
*/

void __fastcall SV_SaveSP_SaveServerCommands(MemoryFile *memFile)
{
  ?SV_SaveSP_SaveServerCommands@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SvGameModeAppSP::GetServerThreadOwnsGame
==============
*/

bool __fastcall SvGameModeAppSP::GetServerThreadOwnsGame(SvGameModeAppSP *this)
{
  return ?GetServerThreadOwnsGame@SvGameModeAppSP@@UEAA_NXZ(this);
}

/*
==============
SvGameModeAppSP::ForwardFrame
==============
*/

bool __fastcall SvGameModeAppSP::ForwardFrame(SvGameModeAppSP *this)
{
  return ?ForwardFrame@SvGameModeAppSP@@AEAA_NXZ(this);
}

/*
==============
SV_MainSP_SetClientSaveGameFunction
==============
*/

void __fastcall SV_MainSP_SetClientSaveGameFunction(void (__fastcall *workerFunction)())
{
  ?SV_MainSP_SetClientSaveGameFunction@@YAXP6AXXZ@Z(workerFunction);
}

/*
==============
SV_MainSP_RunFrame
==============
*/

ServerFrameSmoothStatus __fastcall SV_MainSP_RunFrame(ServerFrameExtent extent, unsigned int timeCap)
{
  return ?SV_MainSP_RunFrame@@YA?AW4ServerFrameSmoothStatus@@W4ServerFrameExtent@@I@Z(extent, timeCap);
}

/*
==============
SV_MainSP_InForwardFrame
==============
*/

int __fastcall SV_MainSP_InForwardFrame()
{
  return ?SV_MainSP_InForwardFrame@@YAHXZ();
}

/*
==============
SV_SaveSP_ProcessPendingSaves
==============
*/

int __fastcall SV_SaveSP_ProcessPendingSaves()
{
  return ?SV_SaveSP_ProcessPendingSaves@@YAHXZ();
}

/*
==============
SV_MainSP_DemoPlaybackForwardFrame
==============
*/

int __fastcall SV_MainSP_DemoPlaybackForwardFrame()
{
  return ?SV_MainSP_DemoPlaybackForwardFrame@@YAHXZ();
}

/*
==============
SV_GetPartialFrametime
==============
*/

int __fastcall SV_GetPartialFrametime()
{
  return ?SV_GetPartialFrametime@@YAHXZ();
}

/*
==============
SV_ExitAfterTime
==============
*/

void SV_ExitAfterTime(void)
{
  ?SV_ExitAfterTime@@YAXXZ();
}

/*
==============
SV_ServerSnapshotPending
==============
*/

int __fastcall SV_ServerSnapshotPending()
{
  return ?SV_ServerSnapshotPending@@YAHXZ();
}

/*
==============
SvGameModeAppSP::FlushLoopbackPackets
==============
*/

void __fastcall SvGameModeAppSP::FlushLoopbackPackets(SvGameModeAppSP *this)
{
  ?FlushLoopbackPackets@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppSP::ServerThreadFrame
==============
*/

void __fastcall SvGameModeAppSP::ServerThreadFrame(SvGameModeAppSP *this)
{
  ?ServerThreadFrame@SvGameModeAppSP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppSP::WaitClientMessages
==============
*/

bool __fastcall SvGameModeAppSP::WaitClientMessages(SvGameModeAppSP *this)
{
  return ?WaitClientMessages@SvGameModeAppSP@@AEAA_NXZ(this);
}

/*
==============
SvGameModeAppSP::AllowNetPackets
==============
*/

void __fastcall SvGameModeAppSP::AllowNetPackets(SvGameModeAppSP *this, bool allow)
{
  ?AllowNetPackets@SvGameModeAppSP@@UEAAX_N@Z(this, allow);
}

/*
==============
SvGameModeAppSP::ClientFrameRateFix
==============
*/

int __fastcall SvGameModeAppSP::ClientFrameRateFix(SvGameModeAppSP *this, int msec_base)
{
  return ?ClientFrameRateFix@SvGameModeAppSP@@UEAAHH@Z(this, msec_base);
}

/*
==============
SV_SaveMemory_IsRecentlyLoaded
==============
*/

bool __fastcall SV_SaveMemory_IsRecentlyLoaded()
{
  return ?SV_SaveMemory_IsRecentlyLoaded@@YA_NXZ();
}

/*
==============
SvGameModeAppSP::WaitServer
==============
*/

void __fastcall SvGameModeAppSP::WaitServer(SvGameModeAppSP *this, void (__fastcall *waitFunction)())
{
  ?WaitServer@SvGameModeAppSP@@UEAAXP6AXXZ@Z(this, waitFunction);
}

/*
==============
SV_SaveSP_ClearPendingSaves
==============
*/

void SV_SaveSP_ClearPendingSaves(void)
{
  ?SV_SaveSP_ClearPendingSaves@@YAXXZ();
}

/*
==============
SV_MainSP_SetServerTime
==============
*/

void __fastcall SV_MainSP_SetServerTime(int serverTime)
{
  ?SV_MainSP_SetServerTime@@YAXH@Z(serverTime);
}

/*
==============
SV_MainSP_ClearInFrameSMP
==============
*/

void SV_MainSP_ClearInFrameSMP(void)
{
  ?SV_MainSP_ClearInFrameSMP@@YAXXZ();
}

/*
==============
SvGameModeAppSP::ResetServerTime
==============
*/

void __fastcall SvGameModeAppSP::ResetServerTime(SvGameModeAppSP *this)
{
  ?ResetServerTime@SvGameModeAppSP@@QEAAXXZ(this);
}

/*
==============
SV_WaitServerSnapshot
==============
*/

void SV_WaitServerSnapshot(void)
{
  ?SV_WaitServerSnapshot@@YAXXZ();
}

/*
==============
SV_MainSP_WaitForClientToSaveGame
==============
*/

void SV_MainSP_WaitForClientToSaveGame(void)
{
  ?SV_MainSP_WaitForClientToSaveGame@@YAXXZ();
}

/*
==============
SvGameModeAppSP::MainThreadPreSyncErrorCleanup
==============
*/

void __fastcall SvGameModeAppSP::MainThreadPreSyncErrorCleanup(SvGameModeAppSP *this)
{
  ?MainThreadPreSyncErrorCleanup@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SV_MainSP_PreFrame
==============
*/

void SV_MainSP_PreFrame(void)
{
  ?SV_MainSP_PreFrame@@YAXXZ();
}

/*
==============
SvGameModeAppSP::ServerThreadErrorCleanup
==============
*/

void __fastcall SvGameModeAppSP::ServerThreadErrorCleanup(SvGameModeAppSP *this)
{
  ?ServerThreadErrorCleanup@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppSP::SvGameModeAppSP
==============
*/
void SvGameModeAppSP::SvGameModeAppSP(SvGameModeAppSP *this)
{
  SvGameModeApplication::SvGameModeApplication(this);
  this->m_svPartialTime = 0;
  this->__vftable = (SvGameModeAppSP_vtbl *)&SvGameModeAppSP::`vftable';
}

/*
==============
SvGameModeAppSP::AllowNetPackets
==============
*/
void SvGameModeAppSP::AllowNetPackets(SvGameModeAppSP *this, bool allow)
{
  ;
}

/*
==============
SvGameModeAppSP::ClientFrameRateFix
==============
*/
__int64 SvGameModeAppSP::ClientFrameRateFix(SvGameModeAppSP *this, int msec_base)
{
  int v2; 
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int v5; 
  int v6; 
  double TimescaleForSv; 
  int FrameDuration; 
  int v9; 
  float v10; 
  int v11; 
  float v12; 
  __int64 result; 

  v2 = msec_base;
  if ( !msec_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2341, ASSERT_TYPE_ASSERT, "(msec_base)", (const char *)&queryFormat, "msec_base") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  SvGameGlobalsSP->ignoreClientMessageTimeout = 0;
  if ( !Com_GameIsPaused() )
  {
    v5 = HIDWORD(qword_14E91B0F0);
    if ( HIDWORD(qword_14E91B0F0) )
    {
      v6 = v2 - SvGameGlobalsSP->waitSnapshotTime;
      if ( v6 > 0 )
      {
        TimescaleForSv = Com_GetTimescaleForSv();
        if ( *(float *)&TimescaleForSv == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2357, ASSERT_TYPE_ASSERT, "(timescale != 0.0f)", (const char *)&queryFormat, "timescale != 0.0f") )
          __debugbreak();
        FrameDuration = SvGameModeApplication::GetFrameDuration(this);
        v9 = 1;
        v10 = (float)(v6 * FrameDuration);
        v11 = 200;
        if ( v5 < 200 )
          v11 = v5;
        v12 = (float)v11;
        if ( (int)(float)(v10 / (float)(v12 * *(float *)&TimescaleForSv)) > 1 )
          v9 = (int)(float)(v10 / (float)(v12 * *(float *)&TimescaleForSv));
        if ( v9 < v2 )
        {
          v2 = v9;
          SvGameGlobalsSP->ignoreClientMessageTimeout = 1;
        }
      }
    }
  }
  result = (unsigned int)v2;
  SvGameGlobalsSP->waitSnapshotTime = 0;
  return result;
}

/*
==============
SvGameModeAppSP::FlushLoopbackPackets
==============
*/
void SvGameModeAppSP::FlushLoopbackPackets(SvGameModeAppSP *this)
{
  ;
}

/*
==============
SvGameModeAppSP::ForwardFrame
==============
*/
char SvGameModeAppSP::ForwardFrame(SvGameModeAppSP *this)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int forwardTime; 
  SvGameGlobalsSP *v4; 
  int v5; 
  int Time; 
  SvGameGlobalsSP *v7; 
  SvGameGlobalsSP *v8; 
  CLPauseReason PauseReason; 
  scrContext_t *v11; 
  SvGameGlobalsSP *v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  __int64 v20; 

  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  forwardTime = 0;
  v4 = SvGameGlobalsSP;
  if ( sv_demo.forwardTime )
    forwardTime = sv_demo.forwardTime;
  SvGameGlobalsSP->forwardTime = forwardTime;
  if ( !forwardTime )
    return 0;
  v5 = Sys_Milliseconds();
  if ( !this->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  if ( v4->forwardTime % (signed int)this->m_frameDuration )
  {
    LODWORD(v20) = v4->forwardTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2239, ASSERT_TYPE_ASSERT, "( ( !(sv->forwardTime % this->GetFrameDuration()) ) )", "( sv->forwardTime ) = %i", v20) )
      __debugbreak();
  }
  if ( SND_ExistsPendingRestore() )
    return 0;
  SV_WaitServer();
  Com_CheckError();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
  {
    LODWORD(v20) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2250, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v20) )
      __debugbreak();
  }
  Time = G_Main_GetTime();
  v7 = SvGameGlobalsSP::GetSvGameGlobalsSP();
  v8 = v7;
  if ( v7->forwardTime - Time > 0 )
  {
    PauseReason = CL_Pause_GetPauseReason();
    if ( PauseReason )
      CL_Pause_UnpauseGame();
    v11 = ScriptContext_Server();
    if ( v8->forwardTime - Time > SvGameModeApplication::GetFrameDuration(this) )
      Scr_EnableBreakpoints(v11, 0);
    SV_WakeServer();
    SV_WaitServer();
    Com_CheckError();
    if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
    {
      LODWORD(v20) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2285, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v20) )
        __debugbreak();
    }
    v12 = SvGameGlobalsSP::GetSvGameGlobalsSP();
    v13 = v12->forwardTime - G_Main_GetTime();
    if ( v13 > 0 )
      SvGameModeAppSP::UpdateServerTime(this, v13);
    v14 = G_Main_GetTime();
    Com_Printf(15, "\n=== Replay moved forward %d msec from time %g. ===\n\n", (unsigned int)(v14 - Time), (float)((float)Time * 0.001));
    v15 = G_Main_GetTime() - Time;
    if ( Sys_Milliseconds() - v5 > v15 )
    {
      v16 = Sys_Milliseconds() - v5;
      v17 = G_Main_GetTime();
      Com_Printf(15, "Moving forward %ims took %ims of wall time\n", (unsigned int)(v17 - Time), v16);
    }
    v18 = G_Main_GetTime();
    v19 = sv_demo.forwardTime;
    if ( sv_demo.forwardTime - v18 <= 0 )
      v19 = 0;
    sv_demo.forwardTime = v19;
    this->m_svPartialTime = 0;
    Scr_EnableBreakpoints(v11, 1);
    if ( !CL_Pause_IsGamePaused() )
    {
      if ( PauseReason )
      {
        CL_Pause_SetPauseReason(PauseReason);
        CL_Pause_UpdatePauseState();
      }
    }
    sv_demo.playingForClient = sv_demo.playing;
    return 1;
  }
  else
  {
    sv_demo.forwardTime = 0;
    v7->forwardTime = 0;
    return 0;
  }
}

/*
==============
SvGameModeAppSP::GetServerThreadOwnsGame
==============
*/
char SvGameModeAppSP::GetServerThreadOwnsGame(SvGameModeAppSP *this)
{
  return 1;
}

/*
==============
SvGameModeAppSP::MainThreadPreSyncErrorCleanup
==============
*/
void SvGameModeAppSP::MainThreadPreSyncErrorCleanup(SvGameModeAppSP *this)
{
  if ( Com_IsAnyLocalServerRunning() )
    SvGameGlobalsSP::GetSvGameGlobalsSP()->clientSideSaveGameRequested = 0;
}

/*
==============
SvGameModeAppSP::PacketEvent
==============
*/
void SvGameModeAppSP::PacketEvent(SvGameModeAppSP *this)
{
  ;
}

/*
==============
PendingSaveList_WriteInfoToBuffer
==============
*/
__int64 PendingSaveList_WriteInfoToBuffer(char *buffer, int bufferSize)
{
  int v4; 
  unsigned int v5; 
  const char *v7; 
  unsigned int v8; 
  const char *v9; 
  unsigned int v10; 
  volatile int v11; 
  char *description; 
  int v13; 
  const char *v14; 
  const char *v15; 
  char *fmt; 

  v4 = Com_sprintf(buffer, bufferSize, "^7== Pending Saves ==\n");
  v5 = Com_sprintf(&buffer[v4], bufferSize - v4, "^7  Count: ^5%i\n", (unsigned int)pendingSaveGlob.count) + v4;
  if ( !pendingSaveGlob.count )
    return v5;
  v7 = "NO";
  if ( pendingSaveGlob.isAutoSaving )
    v7 = "YES";
  v8 = Com_sprintf(&buffer[v5], (int)(bufferSize - v5), "^7  Autosaving: ^5%s\n", v7) + v5;
  v9 = "NO";
  if ( pendingSaveGlob.loadGameContinue )
    v9 = "YES";
  v10 = Com_sprintf(&buffer[v8], (int)(bufferSize - v8), "^7  LoadGameContinue: ^5%s\n", v9) + v8;
  v11 = 0;
  if ( pendingSaveGlob.count > 0 )
  {
    description = pendingSaveGlob.pendingSaves[0].description;
    do
    {
      if ( v11 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2440, ASSERT_TYPE_ASSERT, "(idx < PENDING_SAVES_LIMIT)", (const char *)&queryFormat, "idx < PENDING_SAVES_LIMIT") )
        __debugbreak();
      v13 = *((_DWORD *)description + 82);
      v14 = "NO";
      v15 = "NO";
      if ( (v13 & 4) != 0 )
        v14 = "YES";
      if ( (v13 & 2) != 0 )
        v15 = "YES";
      LODWORD(fmt) = *((_DWORD *)description + 80);
      v10 += Com_sprintf(&buffer[v10], (int)(bufferSize - v10), "^7  #%i: Id^5%i^7 - ^5%s^7 - \"^5%s^7\" - \"^5%s^7\" commit: ^5%s^7 write: ^5%s^7\n", (unsigned int)v11++, fmt, SaveTypeNames[(unsigned __int8)description[324]], description, description - 64, v15, v14);
      description += 400;
    }
    while ( v11 < pendingSaveGlob.count );
  }
  return v10 + Com_sprintf(&buffer[v10], (int)(bufferSize - v10), "^7\n");
}

/*
==============
SvGameModeAppSP::ResetServerTime
==============
*/
void SvGameModeAppSP::ResetServerTime(SvGameModeAppSP *this)
{
  *(_QWORD *)&this->m_svLevelTime = 0i64;
  this->m_svPartialTime = 0;
}

/*
==============
SvGameModeAppSP::RunFrame
==============
*/
void SvGameModeAppSP::RunFrame(SvGameModeAppSP *this, int msec)
{
  bool v4; 
  int FrameDuration; 
  int m_svResidualTime; 
  __int64 v7; 

  Sys_ProfSetMarker(0xFFFFFFFF, "SV_Frame");
  if ( !Com_IsAnyLocalServerRunning() )
    goto LABEL_12;
  if ( !CL_IsCGameRendering() )
  {
    SV_WaitServer();
    Com_CheckError();
    if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
    {
      LODWORD(v7) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1225, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v7) )
        __debugbreak();
    }
    if ( !SvGameGlobalsSP::GetSvGameGlobalsSP()->pendingSnapshot && !pendingSaveGlob.count )
      SV_ProcessPostFrame();
    goto LABEL_12;
  }
  if ( SV_CmdsSP_CheckLoadGame() )
  {
LABEL_12:
    CL_MainSP_SetAnimFrametime(0);
    return;
  }
  s_inForwardFrame = 1;
  v4 = SvGameModeAppSP::ForwardFrame(this);
  s_inForwardFrame = 0;
  if ( !v4 )
  {
    if ( !Com_GameIsPaused() )
    {
LABEL_27:
      FrameDuration = SvGameModeApplication::GetFrameDuration(this);
      if ( this->m_svResidualTime >= FrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1279, ASSERT_TYPE_ASSERT, "( m_svResidualTime < frameDuration )", (const char *)&queryFormat, "m_svResidualTime < frameDuration") )
        __debugbreak();
      this->m_svPartialTime = FrameDuration - this->m_svResidualTime;
      SvGameModeAppSP::UpdateServerTime(this, msec);
      if ( this->m_svResidualTime >= FrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1284, ASSERT_TYPE_ASSERT, "(m_svResidualTime < frameDuration)", (const char *)&queryFormat, "m_svResidualTime < frameDuration") )
        __debugbreak();
      m_svResidualTime = this->m_svResidualTime;
      if ( m_svResidualTime )
        this->m_svPartialTime = FrameDuration - m_svResidualTime;
      sv_demo.playingForClient = sv_demo.playing;
      return;
    }
    SV_WaitServer();
    Com_CheckError();
    if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
    {
      LODWORD(v7) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1258, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v7) )
        __debugbreak();
    }
    CL_MainSP_SetAnimFrametime(0);
    G_MainSP_SetPausedTime();
    Physics_UpdateVDB();
    if ( !SvGameGlobalsSP::GetSvGameGlobalsSP()->pendingSnapshot )
    {
      if ( !pendingSaveGlob.count || !SvStaticGlobals::ms_svStaticGlobals.inFrame )
      {
        SV_ProcessPostFrame();
        return;
      }
      goto LABEL_27;
    }
  }
}

/*
==============
SV_ExitAfterTime
==============
*/
void SV_ExitAfterTime(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int integer; 
  SvGameModeApplication *ActiveServerApplication; 

  v0 = DVARINT_RunForTime;
  if ( !DVARINT_RunForTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "RunForTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer )
  {
    v1 = DVARINT_RunForTime;
    if ( !DVARINT_RunForTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "RunForTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    integer = v1->current.integer;
    if ( 1000 * integer < SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      Com_Printf(15, "ALLGOOD - quit after good run of %d time.\n", (unsigned int)ActiveServerApplication->m_svLevelTime);
      Com_Quit_f();
    }
  }
}

/*
==============
SV_GetPartialFrametime
==============
*/
__int64 SV_GetPartialFrametime()
{
  if ( (_BYTE)SvGameModeApplication::ms_allocType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_gamemode_app_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocType == GameModeType::SP )", (const char *)&queryFormat, "ms_allocType == GameModeType::SP") )
    __debugbreak();
  return LODWORD(SvGameModeApplication::GetActiveServerApplication()[1].__vftable);
}

/*
==============
SV_MainSP_AddServerCommand
==============
*/
void SV_MainSP_AddServerCommand(SvClientSP *client, const char *cmd)
{
  int sequence; 
  int sent; 
  unsigned __int64 v6; 
  __int64 v7; 
  int v8; 
  int rover; 
  __int64 v10; 
  char *v11; 
  __int64 i; 
  char v13; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 368, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  sequence = client->reliableCommands.header.sequence;
  sent = client->reliableCommands.header.sent;
  if ( sequence - sent == 128 )
  {
    SV_MainSP_DumpServerCommands(client);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E9D90);
    sequence = client->reliableCommands.header.sequence;
    sent = client->reliableCommands.header.sent;
  }
  if ( sequence - sent >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 378, ASSERT_TYPE_ASSERT, "(client->reliableCommands.header.sequence - client->reliableCommands.header.sent < maxSvReliableCmds)", (const char *)&queryFormat, "client->reliableCommands.header.sequence - client->reliableCommands.header.sent < maxSvReliableCmds") )
    __debugbreak();
  ++client->reliableCommands.header.sequence;
  v6 = -1i64;
  v7 = client->reliableCommands.header.sequence & 0x7F;
  do
    ++v6;
  while ( cmd[v6] );
  v8 = truncate_cast<int,unsigned __int64>(v6);
  rover = client->reliableCommands.header.rover;
  v10 = v8;
  if ( rover + v8 + 1 > 0x2000 )
  {
    SV_MainSP_DumpServerCommands(client);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E9D90);
    rover = client->reliableCommands.header.rover;
  }
  client->reliableCommands.commands[v7] = rover;
  v11 = &client->reliableCommands.buf[client->reliableCommands.header.rover];
  if ( (int)v10 > 0 )
  {
    for ( i = 0i64; i < v10; ++i )
    {
      v13 = cmd[i];
      if ( v13 == 37 )
        v13 = 46;
      *v11++ = v13;
    }
  }
  *v11 = 0;
  client->reliableCommands.header.rover += v10 + 1;
}

/*
==============
SV_MainSP_BeginSaveGame
==============
*/
void SV_MainSP_BeginSaveGame(void)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 

  if ( Sys_IsServerThread() )
  {
    SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
    SvGameGlobalsSP->requestSaveGame = 1;
    while ( !SvGameGlobalsSP->savingGame )
      Sys_Sleep(1);
  }
}

/*
==============
SV_MainSP_CheckForClientSaveGame
==============
*/
void SV_MainSP_CheckForClientSaveGame(bool checkForSnapShot)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1671, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( SvGameGlobalsSP->clientSideSaveGameRequested && (!checkForSnapShot || !Sys_ThreadsSP_WaitServerSnapshot()) )
  {
    if ( !SvGameGlobalsSP->clientSideSaveFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1691, ASSERT_TYPE_ASSERT, "(sv->clientSideSaveFunction != nullptr)", (const char *)&queryFormat, "sv->clientSideSaveFunction != nullptr") )
      __debugbreak();
    SvGameGlobalsSP->clientSideSaveFunction();
    SvGameGlobalsSP->clientSideSaveGameRequested = 0;
    Sys_ThreadsSP_ClientSaveCompleted();
  }
}

/*
==============
SV_MainSP_CheckStartServer
==============
*/
bool SV_MainSP_CheckStartServer(void *__formal)
{
  return Sys_WaitStartServer(0, 1) || SvGameModeApplication::GetActiveServerApplication()->m_restartServerThread;
}

/*
==============
SV_MainSP_ClearClientSaveGameRequest
==============
*/
void SV_MainSP_ClearClientSaveGameRequest(void)
{
  SvGameGlobalsSP::GetSvGameGlobalsSP()->clientSideSaveGameRequested = 0;
}

/*
==============
SV_MainSP_ClearInFrameSMP
==============
*/
void SV_MainSP_ClearInFrameSMP(void)
{
  SvStaticGlobals::ms_svStaticGlobals.inFrame = 0;
}

/*
==============
SV_MainSP_DemoPlaybackForwardFrame
==============
*/
_BOOL8 SV_MainSP_DemoPlaybackForwardFrame()
{
  return SV_IsDemoPlaying() && s_inForwardFrame && Sys_IsMainThread();
}

/*
==============
SV_MainSP_DemoSetAnimTime
==============
*/
void SV_MainSP_DemoSetAnimTime(void)
{
  if ( !G_MainSP_IsDemoSaveGame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 683, ASSERT_TYPE_ASSERT, "(G_MainSP_IsDemoSaveGame())", (const char *)&queryFormat, "G_MainSP_IsDemoSaveGame()") )
    __debugbreak();
  G_MainSP_SetAnimTimeFromLevel();
}

/*
==============
SV_MainSP_DumpServerCommands
==============
*/
void SV_MainSP_DumpServerCommands(SvClientSP *client)
{
  int i; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 349, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Com_Printf(15, "===== pending server commands =====\n");
  for ( i = client->reliableCommands.header.sent + 1; i <= client->reliableCommands.header.sequence; ++i )
    Com_Printf(15, "cmd %5d: %s\n", (unsigned int)i, &client->reliableCommands.buf[client->reliableCommands.commands[i & 0x7F]]);
}

/*
==============
SV_MainSP_EndSaveGame
==============
*/
void SV_MainSP_EndSaveGame(void)
{
  if ( Sys_IsServerThread() )
    SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame = 0;
}

/*
==============
SV_MainSP_InForwardFrame
==============
*/
__int64 SV_MainSP_InForwardFrame()
{
  return (unsigned int)s_inForwardFrame;
}

/*
==============
SV_MainSP_InitSnapshot
==============
*/
void SV_MainSP_InitSnapshot(void)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  SvGameModeApplication *ActiveServerApplication; 

  if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1552, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  ActiveServerApplication->m_restartServerThread = 1;
  Sys_InitServerEvents();
  s_svSpTimeOut = 0;
  *(_QWORD *)&SvStaticGlobals::ms_svStaticGlobals.inFrame = 0i64;
  SvGameGlobalsSP->pendingSnapshot = 0;
  SV_ClientSP_SendGameState();
  SvStaticGlobals::ms_svStaticGlobals.state = SS_GAME;
  CL_CGameSP_FirstSnapshot();
  ActiveServerApplication->m_svLevelTime = G_Main_GetTime();
}

/*
==============
SV_MainSP_IsServerTimeout
==============
*/
__int64 SV_MainSP_IsServerTimeout()
{
  double TimescaleForSv; 
  signed __int32 v1; 
  int v3; 
  SvGameModeApplication *ActiveServerApplication; 
  signed __int32 v5; 

  TimescaleForSv = Com_GetTimescaleForSv();
  if ( *(float *)&TimescaleForSv == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 915, ASSERT_TYPE_ASSERT, "(timescale != 0.0f)", (const char *)&queryFormat, "timescale != 0.0f") )
    __debugbreak();
  v1 = s_svSpTimeOut;
  if ( !s_svSpTimeOut )
    return (unsigned int)(s_svSpTimeOut + 1);
  v3 = Sys_Milliseconds();
  if ( v3 - v1 < 0 )
    return 0i64;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  v5 = v3 + (int)(float)((float)SvGameModeApplication::GetFrameDuration(ActiveServerApplication) / *(float *)&TimescaleForSv);
  if ( ((unsigned __int8)&s_svSpTimeOut & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_svSpTimeOut) )
    __debugbreak();
  _InterlockedCompareExchange(&s_svSpTimeOut, v5, v1);
  return 1i64;
}

/*
==============
SV_MainSP_PreFrame
==============
*/
void SV_MainSP_PreFrame(void)
{
  __int64 v0; 

  Profile2_UpdateEntry(3);
  if ( ((unsigned __int8)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE7FDC);
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v0) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 694, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v0) )
      __debugbreak();
  }
  g_serverThreadOwnership = 1;
  G_MainSP_RunPreFrame();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 706, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 707, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( level.loading == LOADING_DONE )
  {
    Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_ProcessTransients");
    SV_TransientsSP_Process();
    Sys_ProfEndNamedEvent();
  }
  Profile2_UpdateEntry(3);
  if ( ((unsigned __int64)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE7FDC);
}

/*
==============
SV_MainSP_RunFrame
==============
*/
__int64 SV_MainSP_RunFrame(ServerFrameExtent extent, unsigned int timeCap)
{
  __int64 v4; 
  const void *v5; 
  char *Value; 
  int *v7; 
  _QWORD *v8; 
  char *v9; 
  int *v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  ServerFrameSmoothStatus v13; 
  __int64 v14; 
  scrContext_t *v15; 
  __int64 v17; 
  __int64 v18; 

  Profile2_UpdateEntry(3);
  if ( ((unsigned __int8)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE7FDC);
  Profile2_UpdateEntry(102);
  if ( ((unsigned __int8)&dword_14FDE8168 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8168) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8168);
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v17) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 740, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v17) )
      __debugbreak();
  }
  g_serverThreadOwnership = 1;
  CL_FlushDebugServerData();
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v4 = tls_index;
  v5 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", v5) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  Value = (char *)Sys_GetValue(0);
  v7 = (int *)(Value + 13216);
  if ( (unsigned int)(*((_DWORD *)Value + 3304) + 1) >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = *((_DWORD *)Value + 3304) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)++*v7 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v7;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = &v7[*v7 + 2];
  v11 = __rdtsc();
  *v10 = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 278, NULL, 0);
  Profile_BeginCSV(12);
  v13 = G_MainSP_RunFrame(extent, timeCap);
  Profile_EndCSV(12);
  Profile_EndInternal(NULL);
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v14 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4);
  if ( *(_QWORD *)(v14 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v14 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 272i64) = 0i64;
  if ( extent == SV_FRAME_DO_ALL )
  {
    v15 = ScriptContext_Server();
    Scr_ProfileUpdate(v15);
    Scr_ProfileBuiltinUpdate(v15);
    Profile_ResetCounters(1);
    Profile_ResetScriptCounters(v15);
    Profile2_ServerUpdate();
  }
  CL_UpdateDebugServerData();
  Profile2_UpdateEntry(102);
  if ( ((unsigned __int64)&dword_14FDE8168 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8168) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8168);
  Profile2_UpdateEntry(3);
  if ( ((unsigned __int64)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE7FDC);
  return (unsigned int)v13;
}

/*
==============
SV_MainSP_SetClientSaveGameFunction
==============
*/
void SV_MainSP_SetClientSaveGameFunction(void (*workerFunction)())
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  SvGameGlobalsSP *v3; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1637, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  v3 = SvGameGlobalsSP;
  if ( SvGameGlobalsSP->clientSideSaveGameRequested )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1639, ASSERT_TYPE_ASSERT, "(!sv->clientSideSaveGameRequested)", (const char *)&queryFormat, "!sv->clientSideSaveGameRequested") )
      __debugbreak();
    v3->clientSideSaveFunction = workerFunction;
  }
  else
  {
    SvGameGlobalsSP->clientSideSaveFunction = workerFunction;
  }
}

/*
==============
SV_MainSP_SetServerTime
==============
*/
void SV_MainSP_SetServerTime(int serverTime)
{
  LocalClientNum_t OnlyLocalClientNum; 

  com_time = serverTime;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  Con_SetServerTime(OnlyLocalClientNum, serverTime);
}

/*
==============
SV_MainSP_SetServerTimeout
==============
*/
void SV_MainSP_SetServerTimeout(int timeout)
{
  const char *v2; 
  double TimescaleForSv; 
  unsigned int v4; 
  int v5; 

  if ( timeout < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 877, ASSERT_TYPE_ASSERT, "(timeout >= 0)", (const char *)&queryFormat, "timeout >= 0") )
    __debugbreak();
  if ( timeout )
  {
    TimescaleForSv = Com_GetTimescaleForSv();
    if ( *(float *)&TimescaleForSv == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 888, ASSERT_TYPE_ASSERT, "(timescale != 0.0f)", (const char *)&queryFormat, "timescale != 0.0f") )
      __debugbreak();
    v4 = (int)(float)((float)timeout / *(float *)&TimescaleForSv);
    v5 = Sys_Milliseconds();
    if ( s_svSpTimeOut && v5 - s_svSpTimeOut < 0 && (int)(s_svSpTimeOut - (v5 + v4)) <= 0 )
    {
      v2 = j_va("ignore server timeout: %d", v4);
    }
    else
    {
      s_svSpTimeOut = v5 + v4;
      v2 = j_va("server timeout: %d", v4);
    }
  }
  else
  {
    s_svSpTimeOut = 0;
    v2 = "server no timeout";
  }
  Sys_ProfBeginNamedEvent(0xFF0000FF, v2);
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_MainSP_SignalClientToSaveGame
==============
*/
void SV_MainSP_SignalClientToSaveGame(void)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1646, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( !SvGameGlobalsSP->clientSideSaveFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1648, ASSERT_TYPE_ASSERT, "(sv->clientSideSaveFunction != nullptr)", (const char *)&queryFormat, "sv->clientSideSaveFunction != nullptr") )
    __debugbreak();
  if ( SvGameGlobalsSP->clientSideSaveGameRequested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1649, ASSERT_TYPE_ASSERT, "(!sv->clientSideSaveGameRequested)", (const char *)&queryFormat, "!sv->clientSideSaveGameRequested") )
    __debugbreak();
  Sys_ThreadsSP_ClearClientSaveComplete();
  SvGameGlobalsSP->clientSideSaveGameRequested = 1;
}

/*
==============
SV_MainSP_WaitClientRecvMessages
==============
*/
bool SV_MainSP_WaitClientRecvMessages(void *__formal)
{
  return Sys_ThreadsSP_WaitClientMessageReceived() || SvGameModeApplication::GetActiveServerApplication()->m_restartServerThread;
}

/*
==============
SV_MainSP_WaitClientSendMessages
==============
*/
bool SV_MainSP_WaitClientSendMessages(void *__formal)
{
  return Sys_ThreadsSP_CanSendClientMessages() || SvGameModeApplication::GetActiveServerApplication()->m_restartServerThread;
}

/*
==============
SV_MainSP_WaitForClientToSaveGame
==============
*/
void SV_MainSP_WaitForClientToSaveGame(void)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1658, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  Sys_ThreadsSP_WaitClientSaveComplete();
  if ( SvGameGlobalsSP::GetSvGameGlobalsSP()->clientSideSaveGameRequested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1662, ASSERT_TYPE_ASSERT, "(!sv->clientSideSaveGameRequested)", (const char *)&queryFormat, "!sv->clientSideSaveGameRequested") )
    __debugbreak();
}

/*
==============
SV_MainSP_WaitSaveGame
==============
*/
void SV_MainSP_WaitSaveGame(void)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 

  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( SvGameGlobalsSP->requestSaveGame )
  {
    SvGameGlobalsSP->requestSaveGame = 0;
    SvGameGlobalsSP->savingGame = 1;
    Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitSavingGame, NULL);
  }
}

/*
==============
SV_MainSP_WaitSavingGame
==============
*/
bool SV_MainSP_WaitSavingGame(void *__formal)
{
  return SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame == 0;
}

/*
==============
SV_ProcessPostFrame
==============
*/
void SV_ProcessPostFrame()
{
  int v0; 
  scrContext_t *v1; 
  __int64 v2; 

  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(v2) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 806, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v2) )
      __debugbreak();
  }
  v0 = SV_SaveSP_ProcessPendingSaves();
  if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(v2) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 812, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v2) )
      __debugbreak();
  }
  if ( v0 && cl_paused )
    CL_Pause_UnpauseGame();
  v1 = ScriptContext_Server();
  Scr_UpdateDebugger(v1);
}

/*
==============
SV_SaveMemory_IsRecentlyLoaded
==============
*/
bool SV_SaveMemory_IsRecentlyLoaded()
{
  bool IsRecentlyLoaded; 

  if ( sv_demo.playing )
    return SV_DemoSP_GetIsRecentlyLoaded();
  IsRecentlyLoaded = G_SaveMemorySP_IsRecentlyLoaded();
  SV_DemoSP_RecordIsRecentlyLoaded(IsRecentlyLoaded);
  return IsRecentlyLoaded;
}

/*
==============
SV_SaveSP_AddLoadGameContinue
==============
*/
void SV_SaveSP_AddLoadGameContinue(void)
{
  pendingSaveGlob.loadGameContinue = 1;
}

/*
==============
SV_SaveSP_AddPendingSave
==============
*/
__int64 SV_SaveSP_AddPendingSave(const char *filename, const char *description, const char *screenshot, SaveType saveType, unsigned int commitLevel, bool suppressPlayerNotify)
{
  const dvar_t *v10; 
  __int64 result; 
  PendingSave *v12; 
  unsigned int SaveId; 
  __int64 v14; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 133, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !description && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 134, ASSERT_TYPE_ASSERT, "(description)", (const char *)&queryFormat, "description") )
    __debugbreak();
  if ( !screenshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 135, ASSERT_TYPE_ASSERT, "(screenshot)", (const char *)&queryFormat, "screenshot") )
    __debugbreak();
  v10 = DVARINT_reloading;
  if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer )
  {
    Com_Printf(15, "savegame request ignored\n");
    return 0xFFFFFFFFi64;
  }
  if ( saveType == SAVE_TYPE_AUTOSAVE )
  {
    if ( pendingSaveGlob.isAutoSaving )
    {
      Com_PrintWarning(15, "Warning: Multiple Autosaves attempted in same frame. Save \"%s\" ignored\n", filename);
      return 4294967294i64;
    }
    pendingSaveGlob.isAutoSaving = 1;
  }
  if ( pendingSaveGlob.count < 3 )
  {
    if ( pendingSaveGlob.count < 0 )
    {
      LODWORD(v14) = pendingSaveGlob.count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 166, ASSERT_TYPE_ASSERT, "( ( pendingSaveGlob.count < PENDING_SAVES_LIMIT && pendingSaveGlob.count >= 0 ) )", "( pendingSaveGlob.count ) = %i", v14) )
        __debugbreak();
    }
    v12 = &pendingSaveGlob.pendingSaves[pendingSaveGlob.count++];
    if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 113, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 114, ASSERT_TYPE_ASSERT, "(pendingSave)", (const char *)&queryFormat, "pendingSave") )
      __debugbreak();
    if ( !description && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 115, ASSERT_TYPE_ASSERT, "(description)", (const char *)&queryFormat, "description") )
      __debugbreak();
    if ( !screenshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 116, ASSERT_TYPE_ASSERT, "(screenshot)", (const char *)&queryFormat, "screenshot") )
      __debugbreak();
    Core_strcpy(v12->filename, 0x40ui64, filename);
    Core_strcpy_truncate(v12->description, 0x100ui64, description);
    Core_strcpy_truncate(v12->screenShotName, 0x40ui64, screenshot);
    v12->commitLevel = commitLevel;
    v12->saveType = saveType;
    if ( saveType == SAVE_TYPE_AUTOSAVE )
      SaveId = G_SaveMemorySP_GenerateSaveId();
    else
      SaveId = 0;
    v12->suppressPlayerNotify = suppressPlayerNotify;
    result = SaveId;
    v12->saveId = SaveId;
  }
  else
  {
    Com_PrintWarning(15, "Warning: Pending Saves limit exceeded. Save %s ignored\n", filename);
    return 4294967293i64;
  }
  return result;
}

/*
==============
SV_SaveSP_ClearPendingSaves
==============
*/
void SV_SaveSP_ClearPendingSaves(void)
{
  pendingSaveGlob.count = 0;
  *(_WORD *)&pendingSaveGlob.isAutoSaving = 0;
}

/*
==============
SV_SaveSP_LoadServerCommands
==============
*/
void SV_SaveSP_LoadServerCommands(SaveGame *save)
{
  unsigned int SpClientNum; 
  SvClient *CommonClient; 
  int i; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 481, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SpClientNum = SvClientSP::GetSpClientNum();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(SpClientNum);
  SaveMemory_LoadRead(&CommonClient[1], 12, save);
  for ( i = *(_DWORD *)&CommonClient[1].state + 1; i <= SHIDWORD(CommonClient[1].__vftable); ++i )
    SaveMemory_LoadRead(&CommonClient[29].lastUsercmd.offHand.attachmentVariationIndices[4 * (i & 0x7F) + 1], 4, save);
  SaveMemory_LoadRead(&CommonClient[1].state + 4, (int)CommonClient[1].__vftable, save);
  CL_MainSP_SetServerCommandSequence(*(_DWORD *)&CommonClient[1].state);
}

/*
==============
SV_SaveSP_ProcessPendingSaves
==============
*/
__int64 SV_SaveSP_ProcessPendingSaves()
{
  __int64 result; 
  const dvar_t *v1; 
  unsigned int v2; 
  volatile int i; 
  const PendingSave *v4; 
  int v5; 
  int v6; 
  __int64 j; 
  __int64 v8; 
  unsigned __int8 v9; 

  result = (unsigned int)pendingSaveGlob.count;
  if ( pendingSaveGlob.count )
  {
    v1 = DVARINT_reloading;
    if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.integer )
    {
      Com_Printf(15, "savegame request ignored\n");
      return 0i64;
    }
    else
    {
      if ( SvStaticGlobals::ms_svStaticGlobals.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 235, ASSERT_TYPE_ASSERT, "( !svs->inFrame )", (const char *)&queryFormat, "!svs->inFrame") )
        __debugbreak();
      v2 = 0;
      for ( i = 0; i < pendingSaveGlob.count; ++i )
      {
        v4 = &pendingSaveGlob.pendingSaves[i];
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 202, ASSERT_TYPE_ASSERT, "(pendingSave)", (const char *)&queryFormat, "pendingSave") )
          __debugbreak();
        v5 = SV_GameSP_GetCheckSum();
        if ( G_SaveSP_SaveGame(v4, v5) )
          v2 = 1;
      }
      pendingSaveGlob.count = 0;
      pendingSaveGlob.isAutoSaving = 0;
      if ( pendingSaveGlob.loadGameContinue )
      {
        pendingSaveGlob.loadGameContinue = 0;
        Sys_EnterCriticalSection(CRITSECT_CBUF);
        v6 = truncate_cast<int,unsigned __int64>(0x18ui64) + 1;
        if ( s_cmd_textArray[0].cmdsize + v6 <= s_cmd_textArray[0].maxsize )
        {
          for ( j = s_cmd_textArray[0].cmdsize - 1; j >= 0; s_cmd_textArray[0].data[v8] = v9 )
          {
            v8 = v6 + j;
            v9 = s_cmd_textArray[0].data[j--];
          }
          memcpy_0(s_cmd_textArray[0].data, "script_loadgame_continue", v6 - 1);
          s_cmd_textArray[0].data[v6 - 1] = 10;
          s_cmd_textArray[0].cmdsize += v6;
        }
        else
        {
          Com_PrintError(1, "Cbuf_InsertText overflowed\n");
        }
        Sys_LeaveCriticalSection(CRITSECT_CBUF);
      }
      return v2;
    }
  }
  return result;
}

/*
==============
SV_SaveSP_SaveServerCommands
==============
*/
void SV_SaveSP_SaveServerCommands(MemoryFile *memFile)
{
  unsigned int SpClientNum; 
  SvClient *CommonClient; 
  ServerCommandsSP *v4; 
  ServerCommandsSP *ServerCommands; 
  LocalClientNum_t OnlyLocalClientNum; 
  LocalClientNum_t v7; 
  LocalClientNum_t v8; 
  int i; 
  int j; 
  __int64 p; 
  int sent; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 420, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  SpClientNum = SvClientSP::GetSpClientNum();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(SpClientNum);
  v4 = NULL;
  ServerCommands = (ServerCommandsSP *)&CommonClient[1];
  if ( *(_DWORD *)&CommonClient[1].state == HIDWORD(CommonClient[1].__vftable) )
  {
    if ( ServerCommands->header.rover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 428, ASSERT_TYPE_ASSERT, "(!client->reliableCommands.header.rover)", "%s\n\t%s", "!client->reliableCommands.header.rover", (const char *)&CommonClient[1].state + 4) )
      __debugbreak();
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    ServerCommands = CL_CGameSP_GetServerCommands(OnlyLocalClientNum);
    p = *(_QWORD *)&ServerCommands->header.rover;
    sent = ServerCommands->header.sent;
  }
  else
  {
    v7 = CL_GetOnlyLocalClientNum();
    if ( CL_CGameSP_GetServerCommands(v7)->header.rover )
    {
      v8 = CL_GetOnlyLocalClientNum();
      v4 = CL_CGameSP_GetServerCommands(v8);
      sent = v4->header.sent;
      if ( v4->header.sequence != ServerCommands->header.sent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 444, ASSERT_TYPE_ASSERT, "(clientCommands->header.sequence == serverCommands->header.sent)", (const char *)&queryFormat, "clientCommands->header.sequence == serverCommands->header.sent") )
        __debugbreak();
      HIDWORD(p) = ServerCommands->header.sequence;
      LODWORD(p) = v4->header.rover + ServerCommands->header.rover;
      if ( HIDWORD(p) - sent > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 449, ASSERT_TYPE_ASSERT, "(header.sequence - header.sent <= 128)", (const char *)&queryFormat, "header.sequence - header.sent <= MAX_RELIABLE_COMMANDS_SERVER_TO_CLIENT_SP") )
        __debugbreak();
      if ( (int)p > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 450, ASSERT_TYPE_ASSERT, "(header.rover <= static_cast< int >( sizeof( clientCommands->buf ) ))", (const char *)&queryFormat, "header.rover <= static_cast< int >( sizeof( clientCommands->buf ) )") )
        __debugbreak();
    }
    else
    {
      p = *(_QWORD *)&ServerCommands->header.rover;
      sent = ServerCommands->header.sent;
    }
  }
  MemFile_WriteData(memFile, 0xCui64, &p);
  if ( v4 )
  {
    for ( i = v4->header.sent + 1; i <= v4->header.sequence; ++i )
      MemFile_WriteData(memFile, 4ui64, &v4->commands[i & 0x7F]);
  }
  for ( j = ServerCommands->header.sent + 1; j <= ServerCommands->header.sequence; ++j )
    MemFile_WriteData(memFile, 4ui64, &ServerCommands->commands[j & 0x7F]);
  if ( v4 )
    MemFile_WriteData(memFile, v4->header.rover, v4->buf);
  MemFile_WriteData(memFile, ServerCommands->header.rover, ServerCommands->buf);
}

/*
==============
SV_SaveSP_SetLastSaveName
==============
*/
void SV_SaveSP_SetLastSaveName(const char *filename)
{
  const dvar_t *v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  char v11; 
  LocalClientNum_t OnlyLocalClientNum; 
  int ControllerFromClient; 

  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 326, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() || (v2 = DVARBOOL_sv_saveOnStartMap) == NULL || (Dvar_CheckFrontendServerThread(DVARBOOL_sv_saveOnStartMap), v2->current.enabled) )
  {
    v3 = filename;
    if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 296, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
      __debugbreak();
LABEL_10:
    v4 = 8i64;
    v5 = "internal";
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v6 = (unsigned __int8)v5[v3 - "internal"];
      v7 = v4;
      v8 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v7 )
      {
LABEL_21:
        if ( v3[8] != 45 )
          break;
        return;
      }
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
          break;
      }
      if ( !v6 )
        goto LABEL_21;
    }
    while ( 1 )
    {
      v11 = *v3;
      if ( !*v3 )
        break;
      if ( v11 == 47 || v11 == 92 )
      {
        ++v3;
        goto LABEL_10;
      }
      ++v3;
    }
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
    GamerProfile_SetLastSaveGame(ControllerFromClient, filename);
  }
}

/*
==============
SV_SaveSP_ShouldPreventSavingToDisk
==============
*/
bool SV_SaveSP_ShouldPreventSavingToDisk(const char *filename)
{
  const dvar_t *v1; 
  bool result; 

  result = 0;
  if ( Com_IsAnyLocalServerRunning() )
  {
    v1 = DVARBOOL_sv_saveOnStartMap;
    if ( DVARBOOL_sv_saveOnStartMap )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_sv_saveOnStartMap);
      if ( !v1->current.enabled )
        return 1;
    }
  }
  return result;
}

/*
==============
SV_ServerSnapshotPending
==============
*/
__int64 SV_ServerSnapshotPending()
{
  return (unsigned int)SvGameGlobalsSP::GetSvGameGlobalsSP()->pendingSnapshot;
}

/*
==============
SV_UpdatePerformanceFrameSP
==============
*/
void SV_UpdatePerformanceFrameSP(float time, float vmTime, float vmBuiltinTime, float entFieldTime)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  float v12; 
  ServerProfileTimes *v13; 
  float v14; 
  bool v15; 
  SvGameModeApplication *ActiveServerApplication; 
  float *p_waitStartTime; 
  __int64 v18; 
  SvGameModeApplication *v19; 
  int v27; 
  int v28; 
  int v31; 

  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  v7 = 0x7FFFFFFF;
  v8 = 0;
  v9 = Sys_Milliseconds();
  v10 = s_serverDebugFrame_0;
  v11 = (int)((unsigned __int64)(1717986919i64 * s_serverDebugFrame_0++) >> 32) >> 4;
  v12 = (float)s_waitStartServerTime;
  v13 = &s_serverProfileTimes_0[(__int64)(int)(v10 - 40 * ((v11 >> 31) + v11))];
  v13->wallClockTime = (float)(v9 - s_lastWallClockEndTime_0);
  v13->waitClientTime = (float)s_waitClientMessageTime;
  v13->waitStartTime = v12;
  v14 = (float)s_waitServerTimeoutTime;
  v13->waitSendTime = (float)s_waitSendMessagesTime;
  v13->frameTime = time;
  v13->vmFrameTime = vmTime;
  v13->vmBuiltinTime = vmBuiltinTime;
  v13->vmEntFieldTime = entFieldTime;
  v13->waitTimeoutTime = v14;
  v15 = s_serverDebugFrame_0 < 40;
  v13->animCalls = SvGameGlobalsSP->profile.animCalls;
  v13->serverTime = level.time;
  s_lastWallClockEndTime_0 = v9;
  s_waitStartServerTime = 0;
  s_waitClientMessageTime = 0;
  s_waitServerTimeoutTime = 0;
  s_waitSendMessagesTime = 0;
  if ( !v15 )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    SvGameGlobalsSP->profile.frameTime = 0.0;
    p_waitStartTime = &s_serverProfileTimes_0[0].waitStartTime;
    SvGameGlobalsSP->profile.wallClockTime = 0.0;
    v18 = 40i64;
    SvGameGlobalsSP->profile.waitStartTime = 0.0;
    v19 = ActiveServerApplication;
    SvGameGlobalsSP->profile.waitClientTime = 0.0;
    SvGameGlobalsSP->profile.waitTimeoutTime = 0.0;
    SvGameGlobalsSP->profile.waitSendTime = 0.0;
    do
    {
      SvGameGlobalsSP->profile.frameTime = SvGameGlobalsSP->profile.frameTime + *(p_waitStartTime - 25);
      SvGameGlobalsSP->profile.wallClockTime = SvGameGlobalsSP->profile.wallClockTime + *(p_waitStartTime - 24);
      SvGameGlobalsSP->profile.waitStartTime = SvGameGlobalsSP->profile.waitStartTime + *p_waitStartTime;
      SvGameGlobalsSP->profile.waitClientTime = SvGameGlobalsSP->profile.waitClientTime + p_waitStartTime[1];
      SvGameGlobalsSP->profile.waitTimeoutTime = SvGameGlobalsSP->profile.waitTimeoutTime + p_waitStartTime[2];
      SvGameGlobalsSP->profile.waitSendTime = SvGameGlobalsSP->profile.waitSendTime + p_waitStartTime[3];
      _XMM1 = *((unsigned int *)p_waitStartTime - 25);
      __asm
      {
        vminss  xmm7, xmm1, xmm7
        vmaxss  xmm8, xmm1, xmm8
      }
      SvGameGlobalsSP->profile.vmFrameTime = SvGameGlobalsSP->profile.vmFrameTime + *(p_waitStartTime - 14);
      _XMM2 = *((unsigned int *)p_waitStartTime - 14);
      SvGameGlobalsSP->profile.vmBuiltinTime = SvGameGlobalsSP->profile.vmBuiltinTime + *(p_waitStartTime - 8);
      __asm
      {
        vminss  xmm10, xmm2, xmm10
        vmaxss  xmm11, xmm2, xmm11
      }
      _XMM2 = *((unsigned int *)p_waitStartTime - 8);
      SvGameGlobalsSP->profile.vmEntFieldTime = SvGameGlobalsSP->profile.vmEntFieldTime + *(p_waitStartTime - 2);
      v27 = *((_DWORD *)p_waitStartTime + 4);
      p_waitStartTime += 32;
      v28 = v27;
      __asm { vminss  xmm12, xmm2, xmm12 }
      if ( v7 <= v27 )
        v28 = v7;
      __asm { vmaxss  xmm13, xmm2, xmm13 }
      if ( v8 >= v27 )
        v27 = v8;
      v7 = v28;
      v8 = v27;
      --v18;
    }
    while ( v18 );
    SvGameGlobalsSP->profile.frameTime = SvGameGlobalsSP->profile.frameTime * 0.025;
    SvGameGlobalsSP->profile.wallClockTime = SvGameGlobalsSP->profile.wallClockTime * 0.025;
    SvGameGlobalsSP->profile.waitStartTime = SvGameGlobalsSP->profile.waitStartTime * 0.025;
    SvGameGlobalsSP->profile.waitClientTime = SvGameGlobalsSP->profile.waitClientTime * 0.025;
    SvGameGlobalsSP->profile.waitTimeoutTime = SvGameGlobalsSP->profile.waitTimeoutTime * 0.025;
    v31 = s_serverDebugFrame_0;
    SvGameGlobalsSP->profile.waitSendTime = SvGameGlobalsSP->profile.waitSendTime * 0.025;
    SvGameGlobalsSP->profile.mostRecentFrameTimeMsec = time;
    SvGameGlobalsSP->profile.debugFrameNumber = v31;
    __asm { vmaxss  xmm0, xmm7, xmm9 }
    SvGameGlobalsSP->profile.serverFrameTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm1, xmm8, xmm9 }
    SvGameGlobalsSP->profile.serverFrameTimeMax = *(float *)&_XMM1;
    if ( !v19->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    SvGameGlobalsSP->profile.serverFrameTimeTarget = (float)(int)v19->m_frameDuration;
    SvGameGlobalsSP->profile.vmFrameTime = SvGameGlobalsSP->profile.vmFrameTime * 0.025;
    __asm { vmaxss  xmm0, xmm10, xmm3 }
    SvGameGlobalsSP->profile.vmFrameTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm0, xmm11, xmm3 }
    SvGameGlobalsSP->profile.vmFrameTimeMax = *(float *)&_XMM0;
    SvGameGlobalsSP->profile.vmFrameTimeAccum = vmTime + SvGameGlobalsSP->profile.vmFrameTimeAccum;
    SvGameGlobalsSP->profile.vmFrameTimeMinAccum = SvGameGlobalsSP->profile.vmFrameTimeMinAccum + SvGameGlobalsSP->profile.vmFrameTimeMin;
    SvGameGlobalsSP->profile.vmFrameTimeMaxAccum = SvGameGlobalsSP->profile.vmFrameTimeMaxAccum + SvGameGlobalsSP->profile.vmFrameTimeMax;
    SvGameGlobalsSP->profile.vmFrameTimeFrames = SvGameGlobalsSP->profile.vmFrameTimeFrames + 1.0;
    SvGameGlobalsSP->profile.vmBuiltinTime = SvGameGlobalsSP->profile.vmBuiltinTime * 0.025;
    __asm { vmaxss  xmm0, xmm12, xmm3 }
    SvGameGlobalsSP->profile.vmBuiltinTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm0, xmm13, xmm3 }
    SvGameGlobalsSP->profile.vmBuiltinTimeMax = *(float *)&_XMM0;
    SvGameGlobalsSP->profile.vmBuiltinTimeAccum = vmBuiltinTime + SvGameGlobalsSP->profile.vmBuiltinTimeAccum;
    SvGameGlobalsSP->profile.vmBuiltinTimeMinAccum = SvGameGlobalsSP->profile.vmBuiltinTimeMinAccum + SvGameGlobalsSP->profile.vmBuiltinTimeMin;
    SvGameGlobalsSP->profile.vmBuiltinTimeMaxAccum = SvGameGlobalsSP->profile.vmBuiltinTimeMaxAccum + SvGameGlobalsSP->profile.vmBuiltinTimeMax;
    SvGameGlobalsSP->profile.vmEntFieldTime = SvGameGlobalsSP->profile.vmEntFieldTime * 0.025;
    SvGameGlobalsSP->profile.vmEntFieldTimeAccum = entFieldTime + SvGameGlobalsSP->profile.vmEntFieldTimeAccum;
    SvGameGlobalsSP->profile.animCallsMin = v7;
    SvGameGlobalsSP->profile.animCallsMax = v8;
    SvGameGlobalsSP->profile.serverTime = level.time;
  }
}

/*
==============
SV_WaitServerSnapshot
==============
*/
void SV_WaitServerSnapshot(void)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  SvGameGlobalsSP *v1; 
  __int128 v5; 
  SvGameModeApplication *ActiveServerApplication; 
  int m_frameDuration; 
  int v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1744, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( !SvGameGlobalsSP->pendingSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1749, ASSERT_TYPE_ASSERT, "( sv->pendingSnapshot )", (const char *)&queryFormat, "sv->pendingSnapshot") )
    __debugbreak();
  SvGameGlobalsSP->pendingSnapshot = 0;
  __rdtsc();
  Profile2_UpdateEntry(28);
  if ( ((unsigned __int8)&dword_14FDE8040 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8040) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8040);
  while ( !Sys_ThreadsSP_WaitServerSnapshot() )
  {
    Com_CheckError();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1347, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !com_inServerFrame )
    {
      com_inServerFrame = 1;
      Sys_WakeServer();
    }
    Sys_ThreadsSP_AllowSendClientMessages();
    Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
    if ( !(_DWORD)qword_14E91B0F0 || SvGameGlobalsSP->ignoreClientMessageTimeout )
    {
      s_svSpTimeOut = 0;
      Sys_ProfBeginNamedEvent(0xFF0000FF, "server no timeout");
      Sys_ProfEndNamedEvent();
    }
    Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
    SV_MainSP_CheckForClientSaveGame(1);
    if ( SvGameGlobalsSP->requestSaveGame )
    {
      if ( Sys_ThreadsSP_WaitServerSnapshot() )
        break;
      v1 = SvGameGlobalsSP::GetSvGameGlobalsSP();
      if ( v1->requestSaveGame )
      {
        v1->requestSaveGame = 0;
        v1->savingGame = 1;
        Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitSavingGame, NULL);
      }
    }
    Com_CheckSyncFrame();
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1783, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1784, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
      __debugbreak();
    CL_TransientsSP_ForceRestartServer();
    g_waitSnapshotTime = Sys_Milliseconds() + 1;
    Sys_ProcessWorkerCmdsWithTimeout(SV_WaitServerSnapshotTimeout, NULL);
  }
  Sys_ThreadsSP_ServerSnapshotReset();
  Profile2_UpdateEntry(28);
  if ( ((unsigned __int64)&dword_14FDE8040 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8040) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8040);
  __rdtsc();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM1 = v5;
  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
  SvGameGlobalsSP->waitSnapshotTime = (int)*(float *)&_XMM2;
  Sys_ThreadsSP_DisallowSendClientMessages();
  Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
  LODWORD(qword_14E91B0F0) = 0;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = ActiveServerApplication->m_frameDuration;
  if ( SvGameModeApplication::GetActiveServerApplication()->m_svResidualTime >= m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1807, ASSERT_TYPE_ASSERT, "(SvGameModeApplication::GetResidualTime() < frameMsec)", (const char *)&queryFormat, "SvGameModeApplication::GetResidualTime() < frameMsec") )
    __debugbreak();
  if ( SvGameGlobalsSP->ignoreClientMessageTimeout )
    v9 = 0;
  else
    v9 = m_frameDuration - SvGameModeApplication::GetActiveServerApplication()->m_svResidualTime;
  SV_MainSP_SetServerTimeout(v9);
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
  Sys_ThreadsSP_ClientMessageReceived();
}

/*
==============
SV_WaitServerSnapshotTimeout
==============
*/
bool SV_WaitServerSnapshotTimeout(void *__formal)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1729, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return Sys_ThreadsSP_WaitServerSnapshot() || Sys_Milliseconds() - g_waitSnapshotTime >= 0;
}

/*
==============
SV_WaitServerTimeout
==============
*/
bool SV_WaitServerTimeout(void *__formal)
{
  return (unsigned int)SV_MainSP_IsServerTimeout() || SvGameModeApplication::GetActiveServerApplication()->m_restartServerThread;
}

/*
==============
SV_WakeServer
==============
*/
void SV_WakeServer()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1347, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !com_inServerFrame )
  {
    com_inServerFrame = 1;
    Sys_WakeServer();
  }
}

/*
==============
SvGameModeAppSP::ServerThreadErrorCleanup
==============
*/
void SvGameModeAppSP::ServerThreadErrorCleanup(SvGameModeAppSP *this)
{
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( Sys_IsServerThread() )
      SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame = 0;
    SvGameGlobalsSP::GetSvGameGlobalsSP()->clientSideSaveGameRequested = 0;
  }
}

/*
==============
SvGameModeAppSP::ServerThreadFrame
==============
*/
void SvGameModeAppSP::ServerThreadFrame(SvGameModeAppSP *this)
{
  unsigned int m_frameDuration; 
  BOOL v3; 
  __int128 v6; 
  __int128 v8; 
  int FrameDuration; 
  float v11; 
  float v12; 
  scrContext_t *v13; 
  __int64 v14; 
  ServerTimingState outTimingState; 

  SvStaticGlobals::ms_svStaticGlobals.inFrame = 0;
  Sys_ServerCompleted();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait start server");
  Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_CheckStartServer, NULL);
  Sys_ProfEndNamedEvent();
  if ( this->m_restartServerThread )
  {
    this->m_restartServerThread = 0;
    qword_14E91B0F0 = 0i64;
    return;
  }
  if ( !this->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = this->m_frameDuration;
  if ( m_frameDuration != 50 )
  {
    if ( !m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    LODWORD(v14) = this->m_frameDuration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1084, ASSERT_TYPE_ASSERT, "( GetFrameDuration() ) == ( DEFAULT_SERVER_FRAME_DURATION )", "GetFrameDuration() == DEFAULT_SERVER_FRAME_DURATION\n\t%i, %i", v14, 50) )
      __debugbreak();
  }
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(v14) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1087, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v14) )
      __debugbreak();
  }
  Profile2_UpdateEntry(103);
  if ( ((unsigned __int8)&dword_14FDE816C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE816C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE816C);
  Profile_ResetThread(2);
  Profile_BeginCSV(10);
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "run frame");
  SV_Timing_Start(&outTimingState);
  G_MainSP_RunPreFrameForDemo();
  SvStaticGlobals::ms_svStaticGlobals.inFrame = 1;
  SV_MainSP_PreFrame();
  SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
  if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(v14) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1108, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v14) )
      __debugbreak();
  }
  Sys_ServerCompleted();
  SV_Timing_Pause(&outTimingState);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(103);
  if ( ((unsigned __int64)&dword_14FDE816C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE816C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE816C);
  Profile2_UpdateEntry(104);
  if ( ((unsigned __int8)&dword_14FDE8170 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8170) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8170);
  v3 = SV_DemoSP_CheckAutoSaveHistory() != 0;
  s_waitClientMessageTime -= Sys_Milliseconds();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait receive msg");
  Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitClientRecvMessages, NULL);
  Sys_ProfEndNamedEvent();
  s_waitClientMessageTime += Sys_Milliseconds();
  if ( this->m_restartServerThread )
  {
    Profile2_UpdateEntry(104);
    if ( ((unsigned __int64)&dword_14FDE8170 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8170) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8170);
    goto LABEL_38;
  }
  Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
  if ( !v3 && !(unsigned int)SV_MainSP_IsServerTimeout() )
  {
    Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
    Sys_ProfBeginNamedEvent(0xFF808080, "server timeout");
    Sys_ProcessWorkerCmdsWithTimeout(SV_WaitServerTimeout, NULL);
    Sys_ProfEndNamedEvent();
    Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
  }
  LODWORD(qword_14E91B0F0) = 1;
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
  if ( this->m_restartServerThread )
  {
    Profile2_End(104);
LABEL_38:
    Profile_EndCSV(10);
    return;
  }
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait send msg");
  Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitClientSendMessages, NULL);
  Sys_ProfEndNamedEvent();
  Profile2_End(104);
  if ( this->m_restartServerThread || !SvGameModeAppSP::WaitStartServer(this) )
    goto LABEL_38;
  Profile2_Begin(105);
  Sys_ProfBeginNamedEvent(0xFFF5DEB3, "post frame");
  Profile_BeginCSV(11);
  SV_Timing_Resume(&outTimingState);
  Sys_ThreadsSP_ClearClientMessage();
  SV_SnapshotSP_SendClientMessages();
  CL_CGameSP_CreateNextSnap();
  SvStaticGlobals::ms_svStaticGlobals.inFrame = 0;
  Sys_ThreadsSP_ServerSnapshotCompleted();
  SV_ProcessPostFrame();
  Profile_EndCSV(11);
  Sys_ProfEndNamedEvent();
  SV_Timing_End(&outTimingState);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (outTimingState.totalTicks & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v6;
  }
  *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v8 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v8;
  __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
  HIDWORD(qword_14E91B0F0) = (int)(float)(*(float *)&_XMM8 + 0.5);
  FrameDuration = SvGameModeApplication::GetFrameDuration(this);
  SV_Timing_UpdateFrame(&outTimingState, (float)FrameDuration);
  *(double *)&_XMM0 = Scr_GetRunThreadsTime(SCRIPTINSTANCE_SERVER);
  v11 = *(float *)&_XMM0;
  *(double *)&_XMM0 = Scr_GetEntFieldTime(SCRIPTINSTANCE_SERVER);
  v12 = *(float *)&_XMM0;
  *(double *)&_XMM0 = Scr_GetBuiltinTime(SCRIPTINSTANCE_SERVER);
  SV_UpdatePerformanceFrameSP(*(float *)&_XMM8, v11, *(float *)&_XMM0, v12);
  v13 = ScriptContext_Server();
  Profile_TrackUsageAnalysis(v13, *(float *)&_XMM8, 0);
  Profile2_End(105);
  Profile_EndCSV(10);
  SvStaticGlobals::ms_svStaticGlobals.inFrame = 0;
  Sys_ServerCompleted();
}

/*
==============
SvGameModeAppSP::ServerThreadLoop
==============
*/
void SvGameModeAppSP::ServerThreadLoop(SvGameModeAppSP *this)
{
  while ( SvGameModeApplication::ms_applicationActive )
  {
    if ( (_BYTE)SvGameModeApplication::ms_allocType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1304, ASSERT_TYPE_ASSERT, "( ms_allocType == GameModeType::SP )", (const char *)&queryFormat, "ms_allocType == GameModeType::SP") )
      __debugbreak();
    SvGameModeAppSP::ServerThreadFrame(this);
  }
}

/*
==============
SvGameModeAppSP::UpdateServerTime
==============
*/
void SvGameModeAppSP::UpdateServerTime(SvGameModeAppSP *this, int msec)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int FrameDuration; 
  int m_svResidualTime; 
  int m_svLevelTime; 
  int v8; 
  int v9; 
  int v10; 
  LocalClientNum_t OnlyLocalClientNum; 
  int v12; 
  __int64 v13; 
  unsigned int SpClientNum; 
  SvClient *CommonClient; 
  unsigned __int64 v16; 
  bool v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  LocalClientNum_t v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  int integer; 
  SvGameModeApplication *ActiveServerApplication; 
  __int64 v26; 
  __int64 v27; 
  int v28; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1913, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( msec < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1914, ASSERT_TYPE_ASSERT, "(msec >= 0)", (const char *)&queryFormat, "msec >= 0") )
    __debugbreak();
  sv_demo.serverThreadStarted = 1;
  SV_WakeServer();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( SvGameGlobalsSP->pendingSnapshot )
  {
    CL_MainSP_SetAnimFrametime(0);
    return;
  }
  FrameDuration = SvGameModeApplication::GetFrameDuration(this);
  if ( this->m_svResidualTime >= FrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1957, ASSERT_TYPE_ASSERT, "(m_svResidualTime < frameDuration)", (const char *)&queryFormat, "m_svResidualTime < frameDuration") )
    __debugbreak();
  this->m_svResidualTime += msec;
  if ( this->m_svLevelTime > 2130706432 )
  {
    Com_Shutdown("EXE/SERVERRESTARTTIMEWRAP");
    Com_AssetLoadUI();
    return;
  }
  Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
  m_svResidualTime = this->m_svResidualTime;
  if ( m_svResidualTime < FrameDuration )
  {
    if ( !(_DWORD)qword_14E91B0F0 )
    {
      m_svLevelTime = this->m_svLevelTime;
      v8 = FrameDuration - m_svResidualTime;
      if ( m_svLevelTime >= FrameDuration - m_svResidualTime + com_time )
      {
        v9 = m_svLevelTime - v8;
        Sys_ThreadsSP_DisallowSendClientMessages();
        v10 = 0;
        if ( !SvGameGlobalsSP->ignoreClientMessageTimeout )
          v10 = v8;
        SV_MainSP_SetServerTimeout(v10);
        Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
        com_time = v9;
        OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
        Con_SetServerTime(OnlyLocalClientNum, v9);
        CL_MainSP_SetAnimFrametime(msec);
        return;
      }
    }
    this->m_svResidualTime = FrameDuration;
  }
  if ( SvGameGlobalsSP->pendingSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2016, ASSERT_TYPE_ASSERT, "(!sv->pendingSnapshot)", (const char *)&queryFormat, "!sv->pendingSnapshot") )
    __debugbreak();
  SvGameGlobalsSP->pendingSnapshot = 1;
  this->m_svLevelTime += FrameDuration;
  if ( this->m_svResidualTime < FrameDuration )
  {
    v28 = FrameDuration;
    LODWORD(v26) = this->m_svResidualTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2021, ASSERT_TYPE_ASSERT, "( m_svResidualTime ) >= ( frameDuration )", "m_svResidualTime >= frameDuration\n\t%i, %i", v26, v28) )
      __debugbreak();
  }
  this->m_svResidualTime -= FrameDuration;
  v12 = 0;
  if ( SvGameGlobalsSP->demoResetTimeResidual )
  {
LABEL_72:
    if ( SvGameGlobalsSP->demoResetTimeResidualValue >= FrameDuration )
    {
      LODWORD(v27) = FrameDuration;
      LODWORD(v26) = SvGameGlobalsSP->demoResetTimeResidualValue;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2029, ASSERT_TYPE_ASSERT, "( sv->demoResetTimeResidualValue ) < ( frameDuration )", "sv->demoResetTimeResidualValue < frameDuration\n\t%i, %i", v26, v27) )
        __debugbreak();
    }
    this->m_svResidualTime = SvGameGlobalsSP->demoResetTimeResidualValue;
    *(_WORD *)&SvGameGlobalsSP->demoResetTimeResidual = 0;
  }
  else
  {
    v13 = tls_index;
    while ( !Com_GameIsPaused() )
    {
      SpClientNum = SvClientSP::GetSpClientNum();
      if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(SpClientNum);
      if ( HIDWORD(CommonClient[1].__vftable) - *(_DWORD *)&CommonClient[1].state >= 32 || LODWORD(CommonClient[1].__vftable) + 2048 >= 0x2000 )
        break;
      if ( this->m_svResidualTime < FrameDuration )
        goto LABEL_76;
      if ( !SvGameGlobalsSP->forwardTime )
        break;
      SV_WaitServer();
      Com_CheckError();
      v16 = (unsigned __int64)&g_serverThreadOwnership & 3;
      if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
      {
        LODWORD(v26) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2064, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v26) )
          __debugbreak();
      }
      SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
      if ( pendingSaveGlob.count || !SvStaticGlobals::ms_svStaticGlobals.inFrame )
        break;
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
      {
        LODWORD(v26) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2077, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v26) )
          __debugbreak();
      }
      if ( SvGameGlobalsSP->forwardTime - G_Main_GetTime() <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2078, ASSERT_TYPE_ASSERT, "(sv->forwardTime - G_Main_GetTime() > 0)", (const char *)&queryFormat, "sv->forwardTime - G_Main_GetTime() > 0") )
        __debugbreak();
      v17 = com_inServerFrame == 0;
      v18 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v13);
      v19 = *(_DWORD *)(v18 + 1052);
      *(_DWORD *)(v18 + 1052) = -4609;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2084, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
        __debugbreak();
      G_MainSP_RunPreFrameForDemo();
      SV_MainSP_PreFrame();
      SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
      if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2096, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
        __debugbreak();
      LODWORD(qword_14E91B0F0) = 0;
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
      {
        LODWORD(v26) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2101, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v26) )
          __debugbreak();
      }
      if ( !pendingSaveGlob.count )
        SV_ProcessPostFrame();
      *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v13) + 1052i64) = v19;
      this->m_svLevelTime += FrameDuration;
      if ( this->m_svResidualTime < FrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 2143, ASSERT_TYPE_ASSERT, "(m_svResidualTime >= frameDuration)", (const char *)&queryFormat, "m_svResidualTime >= frameDuration") )
        __debugbreak();
      this->m_svResidualTime -= FrameDuration;
      this->m_svPartialTime += FrameDuration;
      if ( SvGameGlobalsSP->demoResetTimeResidual )
        goto LABEL_72;
    }
    this->m_svResidualTime = 0;
  }
LABEL_76:
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1347, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !com_inServerFrame )
  {
    com_inServerFrame = 1;
    Sys_WakeServer();
  }
  if ( (_DWORD)qword_14E91B0F0 )
  {
    LODWORD(qword_14E91B0F0) = 0;
    if ( !SvGameGlobalsSP->ignoreClientMessageTimeout )
      v12 = FrameDuration - this->m_svResidualTime;
    SV_MainSP_SetServerTimeout(v12);
  }
  else
  {
    s_svSpTimeOut = 0;
    Sys_ProfBeginNamedEvent(0xFF0000FF, "server no timeout");
    Sys_ProfEndNamedEvent();
  }
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
  com_time = this->m_svResidualTime + this->m_svLevelTime - FrameDuration;
  v20 = com_time;
  v21 = CL_GetOnlyLocalClientNum();
  Con_SetServerTime(v21, v20);
  CL_MainSP_SetAnimFrametime(this->m_svResidualTime);
  v22 = DVARINT_RunForTime;
  if ( !DVARINT_RunForTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "RunForTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.integer )
  {
    v23 = DVARINT_RunForTime;
    if ( !DVARINT_RunForTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "RunForTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    integer = v23->current.integer;
    if ( 1000 * integer < SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      Com_Printf(15, "ALLGOOD - quit after good run of %d time.\n", (unsigned int)ActiveServerApplication->m_svLevelTime);
      Com_Quit_f();
    }
  }
}

/*
==============
SvGameModeAppSP::WaitClientMessages
==============
*/
bool SvGameModeAppSP::WaitClientMessages(SvGameModeAppSP *this)
{
  BOOL v2; 

  Profile2_UpdateEntry(104);
  if ( ((unsigned __int8)&dword_14FDE8170 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8170) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8170);
  v2 = SV_DemoSP_CheckAutoSaveHistory() != 0;
  s_waitClientMessageTime -= Sys_Milliseconds();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait receive msg");
  Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitClientRecvMessages, NULL);
  Sys_ProfEndNamedEvent();
  s_waitClientMessageTime += Sys_Milliseconds();
  if ( this->m_restartServerThread )
  {
    Profile2_UpdateEntry(104);
    if ( ((unsigned __int64)&dword_14FDE8170 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8170) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8170);
    return 0;
  }
  else
  {
    Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
    if ( !v2 && !(unsigned int)SV_MainSP_IsServerTimeout() )
    {
      Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
      Sys_ProfBeginNamedEvent(0xFF808080, "server timeout");
      Sys_ProcessWorkerCmdsWithTimeout(SV_WaitServerTimeout, NULL);
      Sys_ProfEndNamedEvent();
      Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
    }
    LODWORD(qword_14E91B0F0) = 1;
    Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
    if ( this->m_restartServerThread )
    {
      Profile2_End(104);
      return 0;
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait send msg");
      Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitClientSendMessages, NULL);
      Sys_ProfEndNamedEvent();
      Profile2_End(104);
      return !this->m_restartServerThread;
    }
  }
}

/*
==============
SvGameModeAppSP::WaitServer
==============
*/
void SvGameModeAppSP::WaitServer(SvGameModeAppSP *this, void (*waitFunction)())
{
  const scrContext_t *v3; 
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int v5; 
  LocalClientNum_t OnlyLocalClientNum; 
  SvGameGlobalsSP *v7; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1399, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStartingAsync() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1400, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStartingAsync())", "%s\n\tAsync startup not supported in SP", "!Com_IsAnyLocalServerStartingAsync()") )
    __debugbreak();
  v3 = ScriptContext_Server();
  if ( (Sys_IsRemoteDebugServer(v3) || !Scr_NoWaitServer(v3)) && com_inServerFrame )
  {
    com_inServerFrame = 0;
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1419, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    sv_demo.serverThreadStarted = 0;
    Sys_SleepServer();
    if ( !this->m_restartServerThread )
      Sys_ThreadsSP_DisallowSendClientMessages();
    SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
    if ( !SvGameGlobalsSP->pendingSnapshot )
    {
      Sys_EnterCriticalSection(CRITSECT_CLIENT_MESSAGE);
      if ( (_DWORD)qword_14E91B0F0 )
      {
        LODWORD(qword_14E91B0F0) = 0;
        com_time = this->m_svLevelTime;
        v5 = com_time;
        OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
        Con_SetServerTime(OnlyLocalClientNum, v5);
        this->m_svLevelTime += SvGameModeApplication::GetFrameDuration(this);
        this->m_svResidualTime = 0;
        SvGameGlobalsSP->pendingSnapshot = 1;
      }
      Sys_LeaveCriticalSection(CRITSECT_CLIENT_MESSAGE);
    }
    while ( !Sys_WaitServer() )
    {
      SV_MainSP_CheckForClientSaveGame(0);
      v7 = SvGameGlobalsSP::GetSvGameGlobalsSP();
      if ( v7->requestSaveGame )
      {
        v7->requestSaveGame = 0;
        v7->savingGame = 1;
        Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_WaitSavingGame, NULL);
      }
      Com_CheckSyncFrame();
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1462, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_main_sp.cpp", 1463, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
        __debugbreak();
      CL_TransientsSP_ForceRestartServer();
    }
    while ( G_SaveMemorySP_IsSecondarySaveThreadInProgress() )
    {
      Com_CheckSyncFrame();
      Sys_Sleep(0);
    }
  }
}

/*
==============
SvGameModeAppSP::WaitStartServer
==============
*/
char SvGameModeAppSP::WaitStartServer(SvGameModeAppSP *this)
{
  char result; 

  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "wait start server");
  Sys_ProcessWorkerCmdsWithTimeout(SV_MainSP_CheckStartServer, NULL);
  Sys_ProfEndNamedEvent();
  if ( !this->m_restartServerThread )
    return 1;
  result = 0;
  this->m_restartServerThread = 0;
  qword_14E91B0F0 = 0i64;
  return result;
}

