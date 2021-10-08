/*
==============
CG_ClientAntiCheatMP_Init
==============
*/

void __fastcall CG_ClientAntiCheatMP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ClientAntiCheatMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientAntiCheatMP_WaitForAllWorkers
==============
*/

void CG_ClientAntiCheatMP_WaitForAllWorkers(void)
{
  ?CG_ClientAntiCheatMP_WaitForAllWorkers@@YAXXZ();
}

/*
==============
CG_ClientAntiCheatMP_DLogRecordTargetDeltas
==============
*/

void __fastcall CG_ClientAntiCheatMP_DLogRecordTargetDeltas(const LocalClientNum_t localClientNum, const int otherClientNum, const int eventIndex, const int eventTime)
{
  ?CG_ClientAntiCheatMP_DLogRecordTargetDeltas@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, otherClientNum, eventIndex, eventTime);
}

/*
==============
CG_ClientAntiCheatMP_FreeClientMemory
==============
*/

void CG_ClientAntiCheatMP_FreeClientMemory(void)
{
  ?CG_ClientAntiCheatMP_FreeClientMemory@@YAXXZ();
}

/*
==============
CG_ClientAntiCheatMP_DebugDraw
==============
*/

void __fastcall CG_ClientAntiCheatMP_DebugDraw(const LocalClientNum_t localClientNum)
{
  ?CG_ClientAntiCheatMP_DebugDraw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker
==============
*/

void __fastcall CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker(const LocalClientNum_t localClientNum)
{
  ?CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientAntiCheatMP_LogViewValues
==============
*/

void __fastcall CG_ClientAntiCheatMP_LogViewValues(const LocalClientNum_t localClientNum, const vec3_t *viewAngles, const vec3_t *viewOrigin, const int time)
{
  ?CG_ClientAntiCheatMP_LogViewValues@@YAXW4LocalClientNum_t@@AEBTvec3_t@@1H@Z(localClientNum, viewAngles, viewOrigin, time);
}

/*
==============
CG_ClientAntiCheatMP_Shutdown
==============
*/

void __fastcall CG_ClientAntiCheatMP_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_ClientAntiCheatMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientAntiCheatMP_CalculateTargetDeltasCmd
==============
*/

void __fastcall CG_ClientAntiCheatMP_CalculateTargetDeltasCmd(const void *const cmdInfo)
{
  ?CG_ClientAntiCheatMP_CalculateTargetDeltasCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_ClientAntiCheatMP_ResetLastRecordedViewValues
==============
*/

void __fastcall CG_ClientAntiCheatMP_ResetLastRecordedViewValues(const LocalClientNum_t localClientNum)
{
  ?CG_ClientAntiCheatMP_ResetLastRecordedViewValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientAntiCheatMP_UpdateTargetThroughWallsCmd
==============
*/

void __fastcall CG_ClientAntiCheatMP_UpdateTargetThroughWallsCmd(const void *const cmdInfo)
{
  ?CG_ClientAntiCheatMP_UpdateTargetThroughWallsCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_ClientAntiCheatMP_AllocateClientMemory
==============
*/

void __fastcall CG_ClientAntiCheatMP_AllocateClientMemory(HunkUser *const hunkUser, const unsigned int maxLocalClients, const unsigned int maxClients)
{
  ?CG_ClientAntiCheatMP_AllocateClientMemory@@YAXQEAUHunkUser@@II@Z(hunkUser, maxLocalClients, maxClients);
}

/*
==============
CG_AntiCheatMP_CollectionEnabled
==============
*/
bool CG_AntiCheatMP_CollectionEnabled(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 

  v1 = localClientNum;
  if ( localClientNum )
    return 0;
  v2 = DVARBOOL_cg_anticheat_dataCollectionEnabled;
  if ( !DVARBOOL_cg_anticheat_dataCollectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_anticheat_dataCollectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && s_clientAntiCheatData[v1]->isInitialized;
}

/*
==============
CG_AntiCheatMP_GetInitializedClientData
==============
*/
CgClientAntiCheatData *CG_AntiCheatMP_GetInitializedClientData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  CgClientAntiCheatData **v3; 
  CgClientAntiCheatData *result; 
  int v6; 

  v1 = localClientNum;
  if ( localClientNum )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clientAntiCheatData ) ) + 0 ) )", "localClientNum doesn't index s_clientAntiCheatData\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = s_clientAntiCheatData[v1] == NULL;
  v3 = &s_clientAntiCheatData[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(s_clientAntiCheatData[localClientNum])", (const char *)&queryFormat, "s_clientAntiCheatData[localClientNum]") )
    __debugbreak();
  result = *v3;
  if ( !(*v3)->isInitialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 145, ASSERT_TYPE_ASSERT, "(s_clientAntiCheatData[localClientNum]->isInitialized)", (const char *)&queryFormat, "s_clientAntiCheatData[localClientNum]->isInitialized") )
      __debugbreak();
    return *v3;
  }
  return result;
}

/*
==============
CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue
==============
*/
CgClientAntiCheatMP_RecordTargetDeltasQueue *CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  CgClientAntiCheatMP_RecordTargetDeltasQueue **v3; 
  CgClientAntiCheatMP_RecordTargetDeltasQueue *result; 
  int v6; 

  v1 = localClientNum;
  if ( localClientNum )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_recordTargetDeltasQueue ) ) + 0 ) )", "localClientNum doesn't index s_recordTargetDeltasQueue\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = s_recordTargetDeltasQueue[v1] == NULL;
  v3 = &s_recordTargetDeltasQueue[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 154, ASSERT_TYPE_ASSERT, "(s_recordTargetDeltasQueue[localClientNum])", (const char *)&queryFormat, "s_recordTargetDeltasQueue[localClientNum]") )
    __debugbreak();
  result = *v3;
  if ( !(*v3)->isInitialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 155, ASSERT_TYPE_ASSERT, "(s_recordTargetDeltasQueue[localClientNum]->isInitialized)", (const char *)&queryFormat, "s_recordTargetDeltasQueue[localClientNum]->isInitialized") )
      __debugbreak();
    return *v3;
  }
  return result;
}

/*
==============
CG_ClientAntiCheatMP_AllocateClientMemory
==============
*/
void CG_ClientAntiCheatMP_AllocateClientMemory(HunkUser *const hunkUser, const unsigned int maxLocalClients, const unsigned int maxClients)
{
  unsigned int v6; 
  unsigned int *v7; 
  __int64 v8; 
  __int64 v9; 
  CgClientAntiCheatMP_RecordTargetDeltasQueue *v10; 
  CgClientAntiCheatData *v11; 
  unsigned __int64 v12; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 744, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  v6 = 1;
  s_allocatedClientCount = maxClients;
  if ( !maxLocalClients )
    v6 = 0;
  if ( v6 )
  {
    v7 = s_clientDeltasRawArrayCount;
    v8 = 0i64;
    v9 = v6;
    do
    {
      s_clientAntiCheatData[v8] = (CgClientAntiCheatData *)Mem_HunkUser_AllocInternal(hunkUser, 0x25F0ui64, 8ui64, "CG_ClientAntiCheatMP_AllocateClientMemory");
      v10 = (CgClientAntiCheatMP_RecordTargetDeltasQueue *)Mem_HunkUser_AllocInternal(hunkUser, 0x218ui64, 4ui64, "CG_ClientAntiCheatMP_AllocateClientMemory");
      v11 = s_clientAntiCheatData[v8];
      s_recordTargetDeltasQueue[v8] = v10;
      v11->isInitialized = 0;
      v10->isInitialized = 0;
      v12 = 800i64 * s_allocatedClientCount;
      *v7 = 200 * s_allocatedClientCount;
      s_clientDeltasRawArray[v8++] = (CgClientAntiCheatData::IdealToActualTargetAngle *)Mem_HunkUser_AllocInternal(hunkUser, v12, 2ui64, "CG_ClientAntiCheatMP_AllocateClientMemory");
      ++v7;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
CG_ClientAntiCheatMP_CalculateDeltaDeltas
==============
*/
void CG_ClientAntiCheatMP_CalculateDeltaDeltas(const CgClientAntiCheatMP_LogViewValuesWorkCmd *const cmd, const CgGlobalsMP *const cgameGlob, CgClientAntiCheatData *r_data)
{
  volatile signed __int32 *p_deltaDeltasDebugLock; 
  unsigned __int64 nextAimTrackingIndex; 
  CgClientAntiCheatData::IdealToActualTargetAngles *v49; 
  int clientNum; 
  unsigned int m_clientCount; 
  unsigned int v52; 
  __int64 v53; 
  unsigned int v54; 
  __int64 localClientNum; 
  CgEntitySystem *v56; 
  __int64 v57; 
  team_t team; 
  team_t v59; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  const characterInfo_t *CharacterInfo; 
  volatile int *v110; 
  __int64 v111; 
  vec3_t vec; 
  vec3_t outEyePos; 
  vec3_t angles; 
  char v115; 
  void *retaddr; 
  unsigned int v117; 
  int v118; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = r_data;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !cmd->dlogOnly )
  {
    if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 443, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF008080, "CG_ClientAntiCheatMP_CalculateDeltaDeltas");
    if ( cmd->deltaTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 447, ASSERT_TYPE_ASSERT, "( cmd->deltaTime ) > ( 0 )", "%s > %s\n\t%i, %i", "cmd->deltaTime", "0", cmd->deltaTime, 0i64) )
      __debugbreak();
    p_deltaDeltasDebugLock = &_RBX->deltaDeltasDebugLock;
    v110 = &_RBX->deltaDeltasDebugLock;
    v111 = ((_BYTE)_RBX - 24) & 3;
    if ( (((_BYTE)_RBX - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RBX->deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  xmm8, cs:__real@3b360b61
      vmulss  xmm3, xmm1, xmm8
      vmovss  xmm9, cs:__real@3f000000
      vaddss  xmm2, xmm3, xmm9
      vxorps  xmm10, xmm10, xmm10
      vroundss xmm0, xmm10, xmm2, 1
      vsubss  xmm0, xmm3, xmm0
      vmovss  xmm11, cs:__real@43b40000
      vmulss  xmm1, xmm0, xmm11
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm1, xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r14+10h]
      vmovss  xmm13, cs:__real@3f800000
      vdivss  xmm5, xmm13, xmm0
      vmovss  xmm12, cs:__real@447a0000
      vmulss  xmm0, xmm1, xmm12
      vmulss  xmm14, xmm0, xmm5
      vmovss  xmm1, dword ptr [rbx+50h]
      vsubss  xmm0, xmm1, dword ptr [r14+0Ch]
      vmulss  xmm4, xmm0, xmm8
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm10, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm11
      vandps  xmm1, xmm1, xmm7
      vmulss  xmm0, xmm1, xmm12
      vmulss  xmm15, xmm0, xmm5
    }
    nextAimTrackingIndex = _RBX->nextAimTrackingIndex;
    v49 = &_RBX->deltaDeltas[nextAimTrackingIndex % 0xC7];
    _RBX->nextAimTrackingIndex = nextAimTrackingIndex + 1;
    *(_QWORD *)v49->validClients.array = 0i64;
    *(_QWORD *)&v49->validClients.array[2] = 0i64;
    *(_QWORD *)&v49->validClients.array[4] = 0i64;
    v49->validClients.array[6] = 0;
    v49->hasTimeJump = cmd->hasTimeJump;
    v49->time = _RBX->lastRecordedAnglesTime;
    if ( cgameGlob->clientNum != cgameGlob->predictedPlayerState.clientNum )
    {
      LODWORD(v107) = cgameGlob->predictedPlayerState.clientNum;
      LODWORD(v106) = cgameGlob->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 462, ASSERT_TYPE_ASSERT, "( cgameGlob->clientNum ) == ( cgameGlob->predictedPlayerState.clientNum )", "%s == %s\n\t%i, %i", "cgameGlob->clientNum", "cgameGlob->predictedPlayerState.clientNum", v106, v107) )
        __debugbreak();
    }
    clientNum = cgameGlob->predictedPlayerState.clientNum;
    v118 = clientNum;
    CharacterInfo = CgGlobalsMP::GetCharacterInfo((CgGlobalsMP *)cgameGlob, clientNum);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
    v117 = ComCharacterLimits::ms_gameData.m_clientCount;
    if ( ComCharacterLimits::ms_gameData.m_clientCount > _RBX->maxClientCount )
    {
      LODWORD(v107) = _RBX->maxClientCount;
      LODWORD(v106) = ComCharacterLimits::ms_gameData.m_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 467, ASSERT_TYPE_ASSERT, "( maxClients ) <= ( r_data.maxClientCount )", "%s <= %s\n\t%u, %u", "maxClients", "r_data.maxClientCount", v106, v107) )
        __debugbreak();
    }
    v52 = 0;
    if ( m_clientCount )
    {
      v53 = 0i64;
      v108 = 0i64;
      v54 = v117;
      do
      {
        if ( v52 != clientNum )
        {
          localClientNum = cmd->localClientNum;
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v105) = cmd->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v105) )
              __debugbreak();
          }
          if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v105) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v104) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
          {
            LODWORD(v105) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v105) )
              __debugbreak();
          }
          v56 = CgEntitySystem::ms_entitySystemArray[localClientNum];
          if ( v52 >= 0x800 )
          {
            LODWORD(v105) = 2048;
            LODWORD(v104) = v52;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          v57 = (__int64)&v56->m_entities[v52];
          if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 476, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
            __debugbreak();
          if ( (*(_BYTE *)(v57 + 648) & 1) != 0 && *(_WORD *)(v57 + 408) == 1 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v57 + 412), ACTIVE, 0x11u) )
          {
            team = CgGlobalsMP::GetCharacterInfo((CgGlobalsMP *)cgameGlob, v52)->team;
            v59 = CharacterInfo->team;
            if ( cgameGlob == (const CgGlobalsMP *const)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
              __debugbreak();
            if ( v57 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
              __debugbreak();
            if ( v59 && v59 == team )
            {
              v53 = v108;
            }
            else
            {
              CG_CalcEyePoint(cmd->localClientNum, v52, &outEyePos);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+188h+outEyePos]
                vsubss  xmm1, xmm0, dword ptr [r14+14h]
                vmovss  dword ptr [rsp+188h+vec], xmm1
                vmovss  xmm2, dword ptr [rsp+188h+outEyePos+4]
                vsubss  xmm0, xmm2, dword ptr [r14+18h]
                vmovss  dword ptr [rsp+188h+vec+4], xmm0
                vmovss  xmm1, dword ptr [rsp+188h+outEyePos+8]
                vsubss  xmm2, xmm1, dword ptr [r14+1Ch]
                vmovss  dword ptr [rsp+188h+vec+8], xmm2
              }
              vectosignedangles(&vec, &angles);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+188h+angles]
                vsubss  xmm1, xmm0, dword ptr [r14+8]
                vmulss  xmm4, xmm1, xmm8
                vaddss  xmm2, xmm4, xmm9
                vroundss xmm3, xmm10, xmm2, 1
                vsubss  xmm0, xmm4, xmm3
                vmulss  xmm1, xmm0, xmm11
                vandps  xmm1, xmm1, xmm7
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [r14+10h]
                vdivss  xmm6, xmm13, xmm0
                vmulss  xmm0, xmm1, xmm12
                vmulss  xmm5, xmm0, xmm6
                vmovss  xmm1, dword ptr [rsp+188h+angles+4]
                vsubss  xmm2, xmm1, dword ptr [r14+0Ch]
                vmulss  xmm4, xmm2, xmm8
                vaddss  xmm3, xmm4, xmm9
                vroundss xmm2, xmm10, xmm3, 1
                vsubss  xmm0, xmm4, xmm2
                vmulss  xmm1, xmm0, xmm11
                vandps  xmm1, xmm1, xmm7
                vmulss  xmm0, xmm1, xmm12
                vmulss  xmm6, xmm0, xmm6
                vsubss  xmm0, xmm14, xmm5
                vandps  xmm0, xmm0, xmm7; f
              }
              v53 = v108;
              *(unsigned __int16 *)((char *)&v49->clientDeltas->deltaDeltaPitch + v108) = HalfFromFloat(*(float *)&_XMM0);
              __asm
              {
                vsubss  xmm0, xmm15, xmm6
                vandps  xmm0, xmm0, xmm7; f
              }
              *(unsigned __int16 *)((char *)&v49->clientDeltas->deltaDeltaYaw + v108) = HalfFromFloat(*(float *)&_XMM0);
              bitarray_base<bitarray<224>>::setBit(&v49->validClients, v52);
              memset(&angles, 0, sizeof(angles));
              memset(&vec, 0, sizeof(vec));
              memset(&outEyePos, 0, sizeof(outEyePos));
            }
          }
          v54 = v117;
          clientNum = v118;
        }
        ++v52;
        v53 += 4i64;
        v108 = v53;
      }
      while ( v52 < v54 );
      p_deltaDeltasDebugLock = v110;
    }
    v49->dataValid = 1;
    if ( v111 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 511, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v115;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_ClientAntiCheatMP_CalculateTargetDeltasCmd
==============
*/
void CG_ClientAntiCheatMP_CalculateTargetDeltasCmd(const void *const cmdInfo)
{
  const CgGlobalsMP *LocalClientGlobals; 
  CgClientAntiCheatData *InitializedClientData; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 517, ASSERT_TYPE_ASSERT, "(cmdInfo)", (const char *)&queryFormat, "cmdInfo") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmdInfo);
  InitializedClientData = CG_AntiCheatMP_GetInitializedClientData((const LocalClientNum_t)*(_DWORD *)cmdInfo);
  CG_ClientAntiCheatMP_DLogRecordTargetDeltas(*(const LocalClientNum_t *)cmdInfo, InitializedClientData);
  CG_ClientAntiCheatMP_CalculateDeltaDeltas((const CgClientAntiCheatMP_LogViewValuesWorkCmd *const)cmdInfo, LocalClientGlobals, InitializedClientData);
}

/*
==============
CG_ClientAntiCheatMP_DLogRecordTargetDeltas
==============
*/
void CG_ClientAntiCheatMP_DLogRecordTargetDeltas(const LocalClientNum_t localClientNum, const int otherClientNum, const int eventIndex, const int eventTime)
{
  CgClientAntiCheatMP_RecordTargetDeltasQueue *InitializedRecordTargetDeltasQueue; 
  volatile int *p_pendingCount; 
  volatile signed __int32 *p_singleWriterLock; 
  __int64 v11; 
  char *fmt; 
  __int64 v13; 
  int v14; 

  if ( CG_AntiCheatMP_CollectionEnabled(localClientNum) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 538, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    InitializedRecordTargetDeltasQueue = CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue(localClientNum);
    p_pendingCount = &InitializedRecordTargetDeltasQueue->pendingCount;
    if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_pendingCount) )
      __debugbreak();
    if ( (unsigned __int64)*(int *)p_pendingCount < 0x20 )
    {
      p_singleWriterLock = &InitializedRecordTargetDeltasQueue->singleWriterLock;
      if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &InitializedRecordTargetDeltasQueue->singleWriterLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_singleWriterLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 549, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleWriterLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleWriterLock, 1, 0 ) == 0") )
        __debugbreak();
      if ( InitializedRecordTargetDeltasQueue->writeIndex >= 0x20 )
      {
        v14 = 32;
        LODWORD(v13) = InitializedRecordTargetDeltasQueue->writeIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 551, ASSERT_TYPE_ASSERT, "(unsigned)( r_queue.writeIndex ) < (unsigned)( ( sizeof( *array_counter( r_queue.data ) ) + 0 ) )", "r_queue.writeIndex doesn't index ARRAY_COUNT( r_queue.data )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v11 = (__int64)&InitializedRecordTargetDeltasQueue->data[InitializedRecordTargetDeltasQueue->writeIndex];
      if ( InitializedRecordTargetDeltasQueue->data[InitializedRecordTargetDeltasQueue->writeIndex].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 553, ASSERT_TYPE_ASSERT, "(!r_data.inUse)", (const char *)&queryFormat, "!r_data.inUse") )
        __debugbreak();
      *(_DWORD *)v11 = otherClientNum;
      *(_DWORD *)(v11 + 4) = eventIndex;
      *(_DWORD *)(v11 + 8) = eventTime;
      *(_BYTE *)(v11 + 12) = 1;
      InitializedRecordTargetDeltasQueue->writeIndex = ((unsigned __int8)InitializedRecordTargetDeltasQueue->writeIndex + 1) & 0x1F;
      if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_pendingCount) )
        __debugbreak();
      if ( _InterlockedAdd(p_pendingCount, 1u) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &r_queue.pendingCount ) > 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &r_queue.pendingCount ) > 0") )
        __debugbreak();
      if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &InitializedRecordTargetDeltasQueue->singleWriterLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_singleWriterLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 568, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleWriterLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleWriterLock, 0, 1 ) == 1") )
        __debugbreak();
    }
    else
    {
      LODWORD(fmt) = eventTime;
      Com_PrintWarning(15, "CG_ClientAntiCheatMP_DLogRecordTargetDeltas queue is full. Dropping event for eventIndex %i, otherClientNum %i, and eventTime %i\n", (unsigned int)eventIndex, (unsigned int)otherClientNum, fmt);
    }
  }
}

/*
==============
CG_ClientAntiCheatMP_DLogRecordTargetDeltas
==============
*/
char CG_ClientAntiCheatMP_DLogRecordTargetDeltas(const LocalClientNum_t localClientNum, const CgClientAntiCheatData *r_data)
{
  CgClientAntiCheatMP_RecordTargetDeltasQueue *InitializedRecordTargetDeltasQueue; 
  CgClientAntiCheatMP_RecordTargetDeltasQueue *v5; 
  volatile signed __int32 *p_singleReaderLock; 
  __int64 v7; 
  __int64 readIndex; 
  volatile int *p_deltaDeltasDebugLock; 
  __int64 v11; 
  __int64 otherClientNum; 
  int v13; 
  int v14; 
  char v15; 
  const CgClientAntiCheatData *v16; 
  int nextAimTrackingIndex; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  CgClientAntiCheatData::IdealToActualTargetAngles *v22; 
  int v23; 
  int lastRecordedAnglesTime; 
  __int64 endTime; 
  const char *v26; 
  unsigned __int64 v27; 
  int v29; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v32; 
  int eventNum; 
  char v34; 
  bool v35; 
  char *fmt; 
  __int64 v37; 
  __int64 v38; 
  char v39; 
  __int64 v40; 
  int v41; 
  volatile int *v44; 
  __int64 v45; 
  DLogContext context; 
  float values[256]; 
  char buffer[2056]; 

  InitializedRecordTargetDeltasQueue = CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue(localClientNum);
  v5 = InitializedRecordTargetDeltasQueue;
  p_singleReaderLock = &InitializedRecordTargetDeltasQueue->singleReaderLock;
  v7 = ((_BYTE)InitializedRecordTargetDeltasQueue + 16) & 3;
  if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &InitializedRecordTargetDeltasQueue->singleReaderLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_singleReaderLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 282, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 1, 0 ) == 0") )
    __debugbreak();
  if ( (((_BYTE)v5 + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &v5->pendingCount) )
    __debugbreak();
  if ( !v5->pendingCount )
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_singleReaderLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_singleReaderLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1") )
      __debugbreak();
    return 0;
  }
  if ( v5->readIndex >= 0x20 )
  {
    LODWORD(v37) = v5->readIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(unsigned)( r_queue.readIndex ) < (unsigned)( ( sizeof( *array_counter( r_queue.data ) ) + 0 ) )", "r_queue.readIndex doesn't index r_queue.data\n\t%i not in [0, %i)", v37, 32) )
      __debugbreak();
  }
  readIndex = v5->readIndex;
  if ( !v5->data[v5->readIndex].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 292, ASSERT_TYPE_ASSERT, "(cmdData->inUse)", (const char *)&queryFormat, "cmdData->inUse") )
    __debugbreak();
  p_deltaDeltasDebugLock = &r_data->deltaDeltasDebugLock;
  v44 = &r_data->deltaDeltasDebugLock;
  v11 = ((_BYTE)r_data - 24) & 3;
  v45 = v11;
  if ( (((_BYTE)r_data - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &r_data->deltaDeltasDebugLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0") )
    __debugbreak();
  if ( r_data->nextAimTrackingIndex )
  {
    otherClientNum = (unsigned int)v5->data[readIndex].otherClientNum;
    if ( (unsigned int)otherClientNum >= r_data->maxClientCount )
    {
      Com_PrintWarning(15, "ClientNum %i is beyond the delta delta max client count. Dropping requested dlog record.\n", otherClientNum);
      CG_ClientAntiCheatMP_DLogRecordTargetDeltas_Finalize(v5);
      if ( (((_BYTE)r_data - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &r_data->deltaDeltasDebugLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 313, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
        __debugbreak();
      if ( ((unsigned __int8)p_singleReaderLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_singleReaderLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_singleReaderLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 314, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1") )
        __debugbreak();
      return 1;
    }
    Sys_ProfBeginNamedEvent(0xFF008080, "CG_ClientAntiCheatMP_DLogRecordTargetDeltas");
    v13 = 127;
    v14 = 0;
    v15 = 0;
    v39 = 0;
    v16 = r_data;
    nextAimTrackingIndex = r_data->nextAimTrackingIndex;
    v18 = 0;
    if ( nextAimTrackingIndex - 200 > 0 )
      v18 = nextAimTrackingIndex - 200;
    v41 = v18;
    v19 = nextAimTrackingIndex - 1;
    if ( v19 >= v18 )
    {
      v40 = 127i64;
      v20 = v19;
      while ( 1 )
      {
        if ( v13 < 0 )
        {
LABEL_68:
          p_singleReaderLock = &v5->singleReaderLock;
          p_deltaDeltasDebugLock = v44;
          v11 = v45;
          break;
        }
        v21 = ((unsigned __int64)v20 * (unsigned __int128)0x49539E3B2D066EA3ui64) >> 64;
        v22 = &v16->deltaDeltas[v20 - 199 * ((v21 + ((unsigned __int64)(v20 - v21) >> 1)) >> 7)];
        if ( v22->time <= v5->data[readIndex].endTime + 15 )
        {
          v27 = (unsigned int)v5->data[readIndex].otherClientNum;
          if ( (unsigned int)v27 >= 0xE0 )
          {
            LODWORD(v38) = 224;
            LODWORD(v37) = v5->data[readIndex].otherClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v37, v38) )
              __debugbreak();
            v15 = v39;
          }
          if ( ((0x80000000 >> (v27 & 0x1F)) & v22->validClients.array[v27 >> 5]) != 0 )
          {
            v39 = 1;
            v14 = v5->data[readIndex].endTime - v22->time;
            if ( (unsigned int)v13 >= 0x80 )
            {
              LODWORD(v38) = 128;
              LODWORD(v37) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( outArrayIndex ) < (unsigned)( ( sizeof( *array_counter( deltaDeltaPitch ) ) + 0 ) )", "outArrayIndex doesn't index deltaDeltaPitch\n\t%i not in [0, %i)", v37, v38) )
                __debugbreak();
            }
            *(double *)&_XMM0 = FloatFromHalf(v22->clientDeltas[v5->data[readIndex].otherClientNum].deltaDeltaPitch);
            _R15 = v40;
            __asm { vmovss  [rsp+r15*4+0E28h+values], xmm0 }
            *(double *)&_XMM0 = FloatFromHalf(v22->clientDeltas[v5->data[readIndex].otherClientNum].deltaDeltaYaw);
            __asm { vmovss  [rsp+r15*4+0E28h+var_A48], xmm0 }
            --v13;
            --v40;
            if ( !v22->hasTimeJump )
            {
              if ( v14 >= 2000 )
                goto LABEL_68;
              goto LABEL_66;
            }
            if ( v22->time <= v5->data[readIndex].endTime - 15 )
              goto LABEL_68;
            v15 = 0;
            v39 = 0;
            v14 = 0;
            v13 = 127;
            v40 = 127i64;
          }
          else if ( v15 )
          {
            if ( v22->time <= v5->data[readIndex].endTime - 15 )
              goto LABEL_68;
            v15 = 0;
            v39 = 0;
            v14 = 0;
            v13 = 127;
            v40 = 127i64;
          }
        }
        else if ( v15 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(!hasStartedRecording)", (const char *)&queryFormat, "!hasStartedRecording") )
            __debugbreak();
LABEL_66:
          v15 = v39;
        }
        --v20;
        v16 = r_data;
        if ( v20 < v41 )
          goto LABEL_68;
      }
    }
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
      __debugbreak();
    CG_ClientAntiCheatMP_DLogRecordTargetDeltas_Finalize(v5);
    if ( ((unsigned __int8)p_singleReaderLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_singleReaderLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_singleReaderLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 400, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1") )
      __debugbreak();
    v23 = v13 + 1;
    if ( (unsigned int)(v13 + 1) >= 0x80 )
    {
      lastRecordedAnglesTime = r_data->lastRecordedAnglesTime;
      endTime = (unsigned int)v5->data[readIndex].endTime;
      v26 = "No delta delta data found for otherClientNum %i and eventTime %i (last recorded event time %i)\n";
      goto LABEL_112;
    }
    v29 = 128 - v23;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    UserId = DLog_GetUserId(ControllerFromClient);
    v32 = DLog_CreateContext(&context, UserId, buffer, 2048);
    eventNum = v5->data[readIndex].eventNum;
    if ( DLog_IsActive() )
    {
      v35 = DLog_BeginEvent(&context, "client_delta_delta_samples");
      context.autoEndEvent = 1;
      if ( v35 && DLog_Int32(&context, "event_index", eventNum) && DLog_Int32(&context, "window", v14) && DLog_Float32Array(&context, "delta_delta_0", &values[v23], v29) && DLog_Float32Array(&context, "delta_delta_1", &values[v23 + 128], v29) )
      {
        v34 = 1;
LABEL_102:
        if ( ((unsigned __int8)v34 & v32) != 0 && DLog_RecordContext(&context) )
        {
          LODWORD(fmt) = v5->data[readIndex].endTime;
          Com_Printf(15, "Sent delta delta dlog event for eventIndex %i, otherClientNum %i, and eventTime %i\n", (unsigned int)v5->data[readIndex].otherClientNum, (unsigned int)v5->data[readIndex].eventNum, fmt);
LABEL_113:
          Sys_ProfEndNamedEvent();
          return 1;
        }
        lastRecordedAnglesTime = v5->data[readIndex].endTime;
        endTime = (unsigned int)v5->data[readIndex].eventNum;
        v26 = "Failed to send delta delta dlog event for eventIndex %i, otherClientNum %i, and eventTime %i. See log for details.\n";
LABEL_112:
        LODWORD(fmt) = lastRecordedAnglesTime;
        Com_PrintWarning(15, v26, (unsigned int)v5->data[readIndex].otherClientNum, endTime, fmt);
        goto LABEL_113;
      }
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
    v34 = 0;
    goto LABEL_102;
  }
  Com_PrintWarning(15, "No delta delta data. Dropping requested dlog record.\n");
  CG_ClientAntiCheatMP_DLogRecordTargetDeltas_Finalize(v5);
  if ( (((_BYTE)r_data - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &r_data->deltaDeltasDebugLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 302, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
    __debugbreak();
  if ( ((unsigned __int8)p_singleReaderLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_singleReaderLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_singleReaderLock, 0, 1) == 1 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 303, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_queue.singleReaderLock, 0, 1 ) == 1") )
    return 0;
  __debugbreak();
  return 0;
}

/*
==============
CG_ClientAntiCheatMP_DLogRecordTargetDeltas_Finalize
==============
*/
void CG_ClientAntiCheatMP_DLogRecordTargetDeltas_Finalize(CgClientAntiCheatMP_RecordTargetDeltasQueue *r_queue)
{
  volatile int *p_pendingCount; 
  unsigned int readIndex; 
  int v4; 

  if ( r_queue->readIndex >= 0x20 )
  {
    v4 = 32;
    readIndex = r_queue->readIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( r_queue.readIndex ) < (unsigned)( ( sizeof( *array_counter( r_queue.data ) ) + 0 ) )", "r_queue.readIndex doesn't index r_queue.data\n\t%i not in [0, %i)", readIndex, v4) )
      __debugbreak();
  }
  r_queue->data[r_queue->readIndex].inUse = 0;
  r_queue->readIndex = ((unsigned __int8)r_queue->readIndex + 1) & 0x1F;
  p_pendingCount = &r_queue->pendingCount;
  if ( ((unsigned __int8)p_pendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_pendingCount) )
    __debugbreak();
  if ( _InterlockedDecrement(p_pendingCount) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &r_queue.pendingCount ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &r_queue.pendingCount ) >= 0") )
    __debugbreak();
}

/*
==============
CG_ClientAntiCheatMP_DebugDraw
==============
*/
void CG_ClientAntiCheatMP_DebugDraw(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  CgClientAntiCheatData *InitializedClientData; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  CgEntitySystem *v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  CgEntitySystem *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v1 = localClientNum;
  if ( CG_AntiCheatMP_CollectionEnabled(localClientNum) )
  {
    v2 = DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls;
    if ( !DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_anticheat_debugDrawTargetThroughWalls") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_CLIENT_ANTICHEAT_DETECT_TARGET_THROUGH_WALLS);
      InitializedClientData = CG_AntiCheatMP_GetInitializedClientData((const LocalClientNum_t)v1);
      LODWORD(v4) = 0;
      v5 = InitializedClientData->lastCrosshairsSightedPlayers.array[0];
      while ( v5 )
      {
LABEL_10:
        v6 = __lzcnt(v5);
        v7 = v6 + 32 * v4;
        if ( v6 >= 0x20 )
        {
          LODWORD(v17) = 32;
          LODWORD(v16) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( (v5 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v5 &= ~(0x80000000 >> v6);
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v17) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v16) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v1] )
        {
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v17) )
            __debugbreak();
        }
        v8 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( v7 >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = v6 + 32 * v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v9 = (__int64)&v8->m_entities[v7];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 709, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v9 + 648) & 1) != 0 && *(_WORD *)(v9 + 408) == 1 )
          CG_DrawDebugMP_DrawBoxAroundPlayer((const LocalClientNum_t)v1, (const centity_t *const)v9, &colorGreen, 0, 0);
      }
      while ( 1 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 7 )
          break;
        v5 = InitializedClientData->lastCrosshairsSightedPlayers.array[v4];
        if ( v5 )
          goto LABEL_10;
      }
      v10 = InitializedClientData->lastCrosshairsUnsightedPlayers.array[0];
      LODWORD(v11) = 0;
      while ( v10 )
      {
LABEL_38:
        v12 = __lzcnt(v10);
        v13 = v12 + 32 * v11;
        if ( v12 >= 0x20 )
        {
          LODWORD(v17) = 32;
          LODWORD(v16) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( (v10 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v10 &= ~(0x80000000 >> v12);
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v17) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v16) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v1] )
        {
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v17) )
            __debugbreak();
        }
        v14 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( v13 >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = v12 + 32 * v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v15 = (__int64)&v14->m_entities[v13];
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 723, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v15 + 648) & 1) != 0 && *(_WORD *)(v15 + 408) == 1 )
          CG_DrawDebugMP_DrawBoxAroundPlayer((const LocalClientNum_t)v1, (const centity_t *const)v15, &colorRed, 0, 0);
      }
      while ( 1 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 7 )
          break;
        v10 = InitializedClientData->lastCrosshairsUnsightedPlayers.array[v11];
        if ( v10 )
          goto LABEL_38;
      }
    }
  }
}

/*
==============
CG_ClientAntiCheatMP_FreeClientMemory
==============
*/
void CG_ClientAntiCheatMP_FreeClientMemory(void)
{
  s_clientDeltasRawArrayCount[0] = 0;
  s_clientDeltasRawArray[0] = NULL;
  s_recordTargetDeltasQueue[0] = NULL;
  s_clientAntiCheatData[0] = NULL;
  s_allocatedClientCount = 0;
}

/*
==============
CG_ClientAntiCheatMP_Init
==============
*/
void CG_ClientAntiCheatMP_Init(const LocalClientNum_t localClientNum)
{
  unsigned int v1; 
  unsigned int v2; 
  CgClientAntiCheatData *v3; 
  CgClientAntiCheatData::IdealToActualTargetAngle *v4; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    v1 = s_allocatedClientCount;
    v2 = s_clientDeltasRawArrayCount[0];
    v3 = s_clientAntiCheatData[0];
    v4 = s_clientDeltasRawArray[0];
    if ( !s_clientAntiCheatData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 780, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 781, ASSERT_TYPE_ASSERT, "(clientDeltasBuf)", (const char *)&queryFormat, "clientDeltasBuf") )
      __debugbreak();
    if ( v2 < 200 * v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 782, ASSERT_TYPE_ASSERT, "( clientDeltasBufLen ) >= ( maxClientCount * CgClientAntiCheatData::AIM_TRACKING_BUFFER_LENGTH )", "%s >= %s\n\t%u, %u", "clientDeltasBufLen", "maxClientCount * CgClientAntiCheatData::AIM_TRACKING_BUFFER_LENGTH", v2, 200 * v1) )
      __debugbreak();
    DebugWipe(v3, 0x25F0ui64);
    v3->enemyUnderCrosshairsTestId = CG_PLAYER_VISIBILITY_INVALID_ID;
    *(_QWORD *)&v3->crosshairsOnSightedTime = 0i64;
    *(_QWORD *)&v3->totalCrosshairsCheckTime = 0i64;
    *(_QWORD *)&v3->lastCrosshairsSightedPlayers.array[1] = 0i64;
    *(_QWORD *)&v3->lastCrosshairsSightedPlayers.array[3] = 0i64;
    *(_QWORD *)&v3->lastCrosshairsSightedPlayers.array[5] = 0i64;
    *(_QWORD *)v3->lastCrosshairsUnsightedPlayers.array = 0i64;
    *(_QWORD *)&v3->lastCrosshairsUnsightedPlayers.array[2] = 0i64;
    *(_QWORD *)&v3->lastCrosshairsUnsightedPlayers.array[4] = 0i64;
    v3->lastCrosshairsUnsightedPlayers.array[6] = 0;
    v3->lastRecordedAnglesTime = -1;
    v3->nextAimTrackingIndex = 0;
    v3->nextAimTrackingRecordIsTimeJump = 1;
    v3->maxClientCount = v1;
    JUMPOUT(0x140404071i64);
  }
}

/*
==============
CG_ClientAntiCheatMP_LogViewValues
==============
*/
void CG_ClientAntiCheatMP_LogViewValues(const LocalClientNum_t localClientNum, const vec3_t *viewAngles, const vec3_t *viewOrigin, const int time)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgClientAntiCheatData *InitializedClientData; 
  CgClientAntiCheatData *v10; 
  volatile signed __int32 *p_deltaDeltasDebugLock; 
  __int64 v12; 
  CgClientAntiCheatData *v13; 
  volatile signed __int32 *v15; 
  __int64 v16; 
  int lastRecordedAnglesTime; 
  int v18; 
  LocalClientNum_t data; 
  char v25; 
  bool nextAimTrackingRecordIsTimeJump; 
  int v29; 
  int v30[3]; 

  _R12 = viewOrigin;
  if ( CG_AntiCheatMP_CollectionEnabled(localClientNum) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 184, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
      __debugbreak();
    if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS )") )
      __debugbreak();
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 188, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) || LocalClientGlobals->predictedPlayerState.clientNum != LocalClientGlobals->clientNum || LocalClientGlobals->predictedPlayerState.pm_type) && CG_AntiCheatMP_CollectionEnabled(localClientNum) )
    {
      InitializedClientData = CG_AntiCheatMP_GetInitializedClientData(localClientNum);
      v10 = InitializedClientData;
      p_deltaDeltasDebugLock = &InitializedClientData->deltaDeltasDebugLock;
      v12 = ((_BYTE)InitializedClientData - 24) & 3;
      if ( (((_BYTE)InitializedClientData - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &InitializedClientData->deltaDeltasDebugLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0") )
        __debugbreak();
      v10->lastRecordedAnglesTime = -1;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_deltaDeltasDebugLock) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
        __debugbreak();
      CG_ClientAntiCheatMP_LogViewValues_QueueDLogOnlyCmd(localClientNum);
    }
    v13 = CG_AntiCheatMP_GetInitializedClientData(localClientNum);
    _RBX = v13;
    v15 = &v13->deltaDeltasDebugLock;
    v16 = ((_BYTE)v13 - 24) & 3;
    if ( (((_BYTE)v13 - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v13->deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(v15, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 197, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0") )
      __debugbreak();
    lastRecordedAnglesTime = _RBX->lastRecordedAnglesTime;
    v18 = time - lastRecordedAnglesTime;
    if ( lastRecordedAnglesTime < 0 || v18 > 400 )
    {
      _RBX->nextAimTrackingRecordIsTimeJump = 1;
      _RBX->lastRecordedAnglesTime = time;
      _RBX->lastRecordedPitch = viewAngles->v[0];
      _RBX->lastRecordedYaw = viewAngles->v[1];
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v15) )
        __debugbreak();
      if ( _InterlockedCompareExchange(v15, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 212, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
        __debugbreak();
      CG_ClientAntiCheatMP_LogViewValues_QueueDLogOnlyCmd(localClientNum);
    }
    else if ( v18 < 16 )
    {
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v15) )
        __debugbreak();
      if ( _InterlockedCompareExchange(v15, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 241, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
        __debugbreak();
    }
    else
    {
      data = localClientNum;
      v25 = 0;
      nextAimTrackingRecordIsTimeJump = _RBX->nextAimTrackingRecordIsTimeJump;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4Ch]
        vmovss  [rsp+88h+var_48], xmm0
        vmovss  xmm1, dword ptr [rbx+50h]
        vmovss  [rsp+88h+var_44], xmm1
      }
      v29 = time - lastRecordedAnglesTime;
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vmovss  [rsp+88h+var_3C], xmm0
        vmovss  xmm1, dword ptr [r12+4]
        vmovss  [rsp+88h+var_38], xmm1
        vmovss  xmm0, dword ptr [r12+8]
        vmovss  [rsp+88h+var_34], xmm0
      }
      _RBX->nextAimTrackingRecordIsTimeJump = 0;
      _RBX->lastRecordedAnglesTime = time;
      _RBX->lastRecordedPitch = viewAngles->v[0];
      _RBX->lastRecordedYaw = viewAngles->v[1];
      if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v15) )
        __debugbreak();
      if ( _InterlockedCompareExchange(v15, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
        __debugbreak();
      Sys_AddWorkerCmd(WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS, &data);
      memset(v30, 0, sizeof(v30));
    }
  }
}

/*
==============
CG_ClientAntiCheatMP_LogViewValues_QueueDLogOnlyCmd
==============
*/
void CG_ClientAntiCheatMP_LogViewValues_QueueDLogOnlyCmd(const LocalClientNum_t localClientNum)
{
  CgClientAntiCheatMP_RecordTargetDeltasQueue *InitializedRecordTargetDeltasQueue; 
  int *p_pendingCount; 
  LocalClientNum_t mem; 
  char v5; 
  char v6[12]; 

  InitializedRecordTargetDeltasQueue = CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue(localClientNum);
  p_pendingCount = (int *)&InitializedRecordTargetDeltasQueue->pendingCount;
  if ( (((_BYTE)InitializedRecordTargetDeltasQueue + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &InitializedRecordTargetDeltasQueue->pendingCount) )
    __debugbreak();
  if ( *p_pendingCount > 0 )
  {
    DebugWipe(&mem, 0x20ui64);
    mem = localClientNum;
    v5 = 1;
    Sys_AddWorkerCmd(WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS, &mem);
    memset(v6, 0, sizeof(v6));
  }
}

/*
==============
CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker
==============
*/
void CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgClientAntiCheatData *InitializedClientData; 
  CgClientAntiCheatData *v4; 
  int frametime; 
  float fmt; 
  float extendedPitchAngle; 
  float v10; 
  LocalClientNum_t data; 
  int v12; 

  if ( CG_AntiCheatMP_CollectionEnabled(localClientNum) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 588, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 591, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    InitializedClientData = CG_AntiCheatMP_GetInitializedClientData(localClientNum);
    v4 = InitializedClientData;
    if ( InitializedClientData->enemyUnderCrosshairsTestId.id == 0xFF )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f000000
        vmovss  dword ptr [rsp+58h+var_28], xmm0
        vmovss  [rsp+58h+extendedPitchAngle], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+58h+fmt], xmm0
      }
      InitializedClientData->enemyUnderCrosshairsTestId = CG_PlayerVisibilityMP_UpdateCrosshairsTest(localClientNum, InitializedClientData->enemyUnderCrosshairsTestId, 0, 1, fmt, extendedPitchAngle, v10);
LABEL_10:
      *(_QWORD *)v4->lastCrosshairsSightedPlayers.array = 0i64;
      *(_QWORD *)&v4->lastCrosshairsSightedPlayers.array[2] = 0i64;
      *(_QWORD *)&v4->lastCrosshairsSightedPlayers.array[4] = 0i64;
      *(_QWORD *)&v4->lastCrosshairsSightedPlayers.array[6] = 0i64;
      *(_QWORD *)&v4->lastCrosshairsUnsightedPlayers.array[1] = 0i64;
      *(_QWORD *)&v4->lastCrosshairsUnsightedPlayers.array[3] = 0i64;
      *(_QWORD *)&v4->lastCrosshairsUnsightedPlayers.array[5] = 0i64;
      return;
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) || LocalClientGlobals->predictedPlayerState.clientNum != LocalClientGlobals->clientNum || LocalClientGlobals->predictedPlayerState.pm_type > 1u )
      goto LABEL_10;
    frametime = cls.frametime;
    data = localClientNum;
    if ( cls.frametime < 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 620, ASSERT_TYPE_ASSERT, "( cls.frametime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "cls.frametime", "0", cls.frametime, 0i64) )
        __debugbreak();
      frametime = cls.frametime;
    }
    v12 = frametime;
    Sys_AddWorkerCmd(WRKCMD_CG_CLIENT_ANTICHEAT_DETECT_TARGET_THROUGH_WALLS, &data);
  }
}

/*
==============
CG_ClientAntiCheatMP_ResetLastRecordedViewValues
==============
*/
void CG_ClientAntiCheatMP_ResetLastRecordedViewValues(const LocalClientNum_t localClientNum)
{
  CgClientAntiCheatData *InitializedClientData; 
  CgClientAntiCheatData *v3; 
  volatile signed __int32 *p_deltaDeltasDebugLock; 
  __int64 v5; 

  if ( CG_AntiCheatMP_CollectionEnabled(localClientNum) )
  {
    InitializedClientData = CG_AntiCheatMP_GetInitializedClientData(localClientNum);
    v3 = InitializedClientData;
    p_deltaDeltasDebugLock = &InitializedClientData->deltaDeltasDebugLock;
    v5 = ((_BYTE)InitializedClientData - 24) & 3;
    if ( (((_BYTE)InitializedClientData - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &InitializedClientData->deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 1, 0 ) == 0") )
      __debugbreak();
    v3->lastRecordedAnglesTime = -1;
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_deltaDeltasDebugLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_deltaDeltasDebugLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &r_data.deltaDeltasDebugLock, 0, 1 ) == 1") )
      __debugbreak();
    CG_ClientAntiCheatMP_LogViewValues_QueueDLogOnlyCmd(localClientNum);
  }
}

/*
==============
CG_ClientAntiCheatMP_Shutdown
==============
*/
void CG_ClientAntiCheatMP_Shutdown(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  const CgClientAntiCheatData *InitializedClientData; 
  unsigned int i; 
  CgClientAntiCheatMP_RecordTargetDeltasQueue *InitializedRecordTargetDeltasQueue; 
  bool v6; 
  CgClientAntiCheatData *v7; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v10; 
  int crosshairsOnUnsightedTime; 
  bool v12; 
  int crosshairsOnSightedTime; 
  int totalCrosshairsCheckTime; 
  char v15; 
  bool v16; 
  DLogContext context; 
  char buffer[1024]; 

  v1 = localClientNum;
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_CLIENT_ANTICHEAT_DETECT_TARGET_THROUGH_WALLS);
    v2 = v1;
    if ( !s_recordTargetDeltasQueue[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 894, ASSERT_TYPE_ASSERT, "(s_recordTargetDeltasQueue[localClientNum])", (const char *)&queryFormat, "s_recordTargetDeltasQueue[localClientNum]") )
      __debugbreak();
    if ( s_recordTargetDeltasQueue[v2]->isInitialized )
    {
      InitializedClientData = CG_AntiCheatMP_GetInitializedClientData((const LocalClientNum_t)v1);
      for ( i = 0; i < 4; ++i )
      {
        if ( !CG_ClientAntiCheatMP_DLogRecordTargetDeltas((const LocalClientNum_t)v1, InitializedClientData) )
          break;
      }
      InitializedRecordTargetDeltasQueue = CG_AntiCheatMP_GetInitializedRecordTargetDeltasQueue((const LocalClientNum_t)v1);
      if ( InitializedRecordTargetDeltasQueue->pendingCount > 0 )
        Com_PrintWarning(15, "CG_ClientAntiCheatMP_Shutdown_FlushKillQueue: dropping remaining %i kill logs\n", (unsigned int)InitializedRecordTargetDeltasQueue->pendingCount);
    }
    v6 = s_clientAntiCheatData[v2] == NULL;
    s_recordTargetDeltasQueue[v2]->isInitialized = 0;
    if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 902, ASSERT_TYPE_ASSERT, "(s_clientAntiCheatData[localClientNum])", (const char *)&queryFormat, "s_clientAntiCheatData[localClientNum]") )
      __debugbreak();
    if ( !s_clientAntiCheatData[v2]->isInitialized )
      goto LABEL_28;
    v7 = CG_AntiCheatMP_GetInitializedClientData((const LocalClientNum_t)v1);
    if ( v7->totalCrosshairsCheckTime <= 0 )
      goto LABEL_28;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    UserId = DLog_GetUserId(ControllerFromClient);
    v10 = DLog_CreateContext(&context, UserId, buffer, 1024);
    crosshairsOnUnsightedTime = v7->crosshairsOnUnsightedTime;
    v12 = v10;
    crosshairsOnSightedTime = v7->crosshairsOnSightedTime;
    totalCrosshairsCheckTime = v7->totalCrosshairsCheckTime;
    if ( DLog_IsActive() )
    {
      v16 = DLog_BeginEvent(&context, "client_match_target_data");
      context.autoEndEvent = 1;
      if ( v16 && DLog_Int32(&context, "target_a", totalCrosshairsCheckTime) && DLog_Int32(&context, "target_s", crosshairsOnSightedTime) && DLog_Int32(&context, "target_u", crosshairsOnUnsightedTime) )
      {
        v15 = 1;
        goto LABEL_19;
      }
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
    v15 = 0;
LABEL_19:
    if ( ((unsigned __int8)v15 & v12) != 0 && DLog_RecordContext(&context) )
      Com_Printf(15, "Sent client anticheat end of match data");
    else
      Com_PrintWarning(15, "Failed to send client anticheat end of match data");
LABEL_28:
    s_clientAntiCheatData[v2]->isInitialized = 0;
  }
}

/*
==============
CG_ClientAntiCheatMP_UpdateTargetThroughWallsCmd
==============
*/
void CG_ClientAntiCheatMP_UpdateTargetThroughWallsCmd(const void *const cmdInfo)
{
  CgClientAntiCheatData *InitializedClientData; 
  const ClientBits *CrosshairsTestResult; 
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned __int64 crosshairClientNum; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 628, ASSERT_TYPE_ASSERT, "(cmdInfo)", (const char *)&queryFormat, "cmdInfo") )
    __debugbreak();
  InitializedClientData = CG_AntiCheatMP_GetInitializedClientData((const LocalClientNum_t)*(_DWORD *)cmdInfo);
  CrosshairsTestResult = CG_PlayerVisibilityMP_GetCrosshairsTestResult((const LocalClientNum_t)*(_DWORD *)cmdInfo, InitializedClientData->enemyUnderCrosshairsTestId);
  if ( CrosshairsTestResult )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmdInfo);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_anticheat_mp.cpp", 645, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v5 = LocalClientGlobals->sightedEnemyFools.array[0];
    v6 = LocalClientGlobals->sightedEnemyFools.array[1];
    v7 = LocalClientGlobals->sightedEnemyFools.array[2];
    LODWORD(v14) = LocalClientGlobals->sightedEnemyFools.array[3];
    LODWORD(v24) = v14;
    HIDWORD(v14) = LocalClientGlobals->sightedEnemyFools.array[4];
    HIDWORD(v24) = HIDWORD(v14);
    v15 = LocalClientGlobals->sightedEnemyFools.array[5];
    v25 = v15;
    v8 = LocalClientGlobals->sightedEnemyFools.array[6];
    crosshairClientNum = (unsigned int)LocalClientGlobals->crosshairClientNum;
    v21 = v5;
    v22 = v6;
    v23 = v7;
    v16 = v8;
    v26 = v8;
    if ( (_DWORD)crosshairClientNum != -1 )
    {
      if ( (unsigned int)crosshairClientNum >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", crosshairClientNum, 224) )
        __debugbreak();
      *(&v21 + (crosshairClientNum >> 5)) |= 0x80000000 >> (crosshairClientNum & 0x1F);
      v7 = v23;
      v6 = v22;
      v5 = v21;
      v16 = v26;
      v15 = v25;
      v14 = v24;
    }
    v17 = ~v5;
    v10 = ~v6;
    v11 = ~v7;
    v12 = ~(_DWORD)v14;
    v18 = ~HIDWORD(v14);
    v19 = ~v15;
    v20 = ~v16;
    v13 = CrosshairsTestResult->array[1] & ~v6 | CrosshairsTestResult->array[2] & ~v7 | CrosshairsTestResult->array[3] & ~(_DWORD)v14 | CrosshairsTestResult->array[4] & ~HIDWORD(v14) | CrosshairsTestResult->array[5] & ~v15 | CrosshairsTestResult->array[0] & ~v5 | CrosshairsTestResult->array[6] & ~v16;
    if ( v6 & CrosshairsTestResult->array[1] | v7 & CrosshairsTestResult->array[2] | (unsigned int)v14 & CrosshairsTestResult->array[3] | HIDWORD(v14) & CrosshairsTestResult->array[4] | v15 & CrosshairsTestResult->array[5] | v16 & CrosshairsTestResult->array[6] | v5 & CrosshairsTestResult->array[0] )
      InitializedClientData->crosshairsOnSightedTime += *((_DWORD *)cmdInfo + 1);
    if ( v13 )
      InitializedClientData->crosshairsOnUnsightedTime += *((_DWORD *)cmdInfo + 1);
    InitializedClientData->totalCrosshairsCheckTime += *((_DWORD *)cmdInfo + 1);
    *(_QWORD *)&InitializedClientData->lastCrosshairsSightedPlayers.array[3] = v14;
    InitializedClientData->lastCrosshairsSightedPlayers.array[5] = v15;
    InitializedClientData->lastCrosshairsSightedPlayers.array[6] = v16;
    InitializedClientData->lastCrosshairsSightedPlayers.array[0] = v5;
    InitializedClientData->lastCrosshairsSightedPlayers.array[1] = v6;
    InitializedClientData->lastCrosshairsSightedPlayers.array[2] = v7;
    InitializedClientData->lastCrosshairsSightedPlayers.array[0] &= CrosshairsTestResult->array[0];
    InitializedClientData->lastCrosshairsSightedPlayers.array[1] &= CrosshairsTestResult->array[1];
    InitializedClientData->lastCrosshairsSightedPlayers.array[2] &= CrosshairsTestResult->array[2];
    InitializedClientData->lastCrosshairsSightedPlayers.array[3] &= CrosshairsTestResult->array[3];
    InitializedClientData->lastCrosshairsSightedPlayers.array[4] &= CrosshairsTestResult->array[4];
    InitializedClientData->lastCrosshairsSightedPlayers.array[5] &= CrosshairsTestResult->array[5];
    InitializedClientData->lastCrosshairsSightedPlayers.array[6] &= CrosshairsTestResult->array[6];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[6] = v20;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[0] = v17;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[1] = v10;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[2] = v11;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[3] = v12;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[4] = v18;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[5] = v19;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[0] = v17 & CrosshairsTestResult->array[0];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[1] = CrosshairsTestResult->array[1] & v10;
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[2] = v11 & CrosshairsTestResult->array[2];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[3] = v12 & CrosshairsTestResult->array[3];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[4] = v18 & CrosshairsTestResult->array[4];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[5] = v19 & CrosshairsTestResult->array[5];
    InitializedClientData->lastCrosshairsUnsightedPlayers.array[6] = v20 & CrosshairsTestResult->array[6];
  }
  else
  {
    InitializedClientData->totalCrosshairsCheckTime += *((_DWORD *)cmdInfo + 1);
    *(_QWORD *)InitializedClientData->lastCrosshairsSightedPlayers.array = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsSightedPlayers.array[2] = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsSightedPlayers.array[4] = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsSightedPlayers.array[6] = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsUnsightedPlayers.array[1] = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsUnsightedPlayers.array[3] = 0i64;
    *(_QWORD *)&InitializedClientData->lastCrosshairsUnsightedPlayers.array[5] = 0i64;
  }
}

/*
==============
CG_ClientAntiCheatMP_WaitForAllWorkers
==============
*/
void CG_ClientAntiCheatMP_WaitForAllWorkers(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_CLIENT_ANTICHEAT_CALCULATE_TARGET_DELTAS);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_CLIENT_ANTICHEAT_DETECT_TARGET_THROUGH_WALLS);
}

