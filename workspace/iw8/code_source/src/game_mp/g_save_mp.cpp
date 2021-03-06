/*
==============
G_SaveMP_LoadGame
==============
*/

void __fastcall G_SaveMP_LoadGame(const SvServerInitSettings *initSettings, int checksum, SaveGame *save, const bool scriptRunning, const bool demoSave)
{
  ?G_SaveMP_LoadGame@@YAXPEBUSvServerInitSettings@@HPEAUSaveGame@@_N2@Z(initSettings, checksum, save, scriptRunning, demoSave);
}

/*
==============
GSaveMP::ScrFreeSentientFields
==============
*/

void __fastcall GSaveMP::ScrFreeSentientFields(GSaveMP *this, sentient_s *sentient)
{
  ?ScrFreeSentientFields@GSaveMP@@UEBAXPEAUsentient_s@@@Z(this, sentient);
}

/*
==============
GSaveMP_ScrFreeClientFields
==============
*/

void __fastcall GSaveMP_ScrFreeClientFields(gclient_s *client)
{
  ?GSaveMP_ScrFreeClientFields@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
GSaveMP::ScrFreeEntityFields
==============
*/

void __fastcall GSaveMP::ScrFreeEntityFields(GSaveMP *this, gentity_s *ent)
{
  ?ScrFreeEntityFields@GSaveMP@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GSaveMP::SetLastSaveName
==============
*/

void __fastcall GSaveMP::SetLastSaveName(GSaveMP *this, const char *fileName)
{
  ?SetLastSaveName@GSaveMP@@UEBAXPEBD@Z(this, fileName);
}

/*
==============
G_SaveMP_SaveState
==============
*/

void __fastcall G_SaveMP_SaveState(MemoryFile *memFile, const bool isDemo, const bool restart, const bool scriptRunning)
{
  ?G_SaveMP_SaveState@@YAXPEAUMemoryFile@@_N11@Z(memFile, isDemo, restart, scriptRunning);
}

/*
==============
G_SaveMP_LoadInitState
==============
*/

void __fastcall G_SaveMP_LoadInitState(MemoryFile *memFile)
{
  ?G_SaveMP_LoadInitState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GSaveMP_ScrFreeSentientFields
==============
*/

void __fastcall GSaveMP_ScrFreeSentientFields(sentient_s *sentient)
{
  ?GSaveMP_ScrFreeSentientFields@@YAXPEAUsentient_s@@@Z(sentient);
}

/*
==============
G_SaveMP_PreLoadGame
==============
*/

void __fastcall G_SaveMP_PreLoadGame(const SvServerInitSettings *initSettings, SaveGame **saveGame, int *levelTime)
{
  ?G_SaveMP_PreLoadGame@@YAXPEBUSvServerInitSettings@@PEAPEAUSaveGame@@PEAH@Z(initSettings, saveGame, levelTime);
}

/*
==============
G_SaveMP_ScrFreeAgentFields
==============
*/

void __fastcall G_SaveMP_ScrFreeAgentFields(ai_agent_t *pInfo)
{
  ?G_SaveMP_ScrFreeAgentFields@@YAXPEAUai_agent_t@@@Z(pInfo);
}

/*
==============
GSaveMP::ScrFreeClientFields
==============
*/

void __fastcall GSaveMP::ScrFreeClientFields(GSaveMP *this, gclient_s *client)
{
  ?ScrFreeClientFields@GSaveMP@@UEBAXPEAUgclient_s@@@Z(this, client);
}

/*
==============
GSaveMP_ScrFreeEntityFields
==============
*/

void __fastcall GSaveMP_ScrFreeEntityFields(gentity_s *ent)
{
  ?GSaveMP_ScrFreeEntityFields@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GSaveMP_ScrFreeClientFields
==============
*/
void GSaveMP_ScrFreeClientFields(gclient_s *client)
{
  G_SaveField_FreeFields(s_saveMP_gclientFields, (unsigned __int8 *)client);
}

/*
==============
GSaveMP_ScrFreeEntityFields
==============
*/
void GSaveMP_ScrFreeEntityFields(gentity_s *ent)
{
  G_SaveField_FreeFields(s_saveMP_gentityFields, (unsigned __int8 *)ent);
}

/*
==============
GSaveMP_ScrFreeSentientFields
==============
*/
void GSaveMP_ScrFreeSentientFields(sentient_s *sentient)
{
  G_SaveField_FreeFields(s_saveMP_sentientFields, (unsigned __int8 *)sentient);
}

/*
==============
G_LoadLevelState
==============
*/
void G_LoadLevelState(const SvServerInitSettings *initSettings, SaveGame *save)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  OmnvarGameData *gameOmnvars; 
  unsigned int v8; 
  GWeaponMap *Instance; 
  signed int i; 
  sentient_s *v11; 
  int iDamageParts; 
  unsigned __int8 *v13; 
  MemoryFile *v14; 
  signed int v15; 
  outline_data_t *v16; 
  unsigned int v17; 
  bool v18; 
  MemoryFile *v19; 
  SaveGame *v20; 
  signed int j; 
  gentity_s *v22; 
  unsigned __int8 *p_type; 
  __int64 v24; 
  unsigned __int8 *v25; 
  MemoryFile *MemoryFile; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  GAntiLagMP *AntiLagMP; 
  signed int v29; 
  OmnvarClientData *v30; 
  gclient_s *v31; 
  unsigned int v32; 
  unsigned int v33; 
  SvClient *CommonClient; 
  __int64 v35; 
  SvClient *v36; 
  __int64 v37; 
  int v38; 
  SvServerInitSettings *v39; 
  int k; 
  gagent_s *v48; 
  unsigned int v49; 
  __int64 entityNum; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int v55; 
  SvClientMP *v56; 
  bot_data_t *ClientData; 
  Ai_Asm *v58; 
  PartyData *PartyData; 
  unsigned int v60; 
  int v61; 
  gentity_s *v62; 
  unsigned int eType; 
  DObj *ServerDObjForEntnum; 
  XAnimTree *EntAnimTree; 
  const char *v66; 
  DObjPartBits *p_partBits; 
  __int64 v68; 
  entityType_s v69; 
  char *fmt; 
  __int64 v71; 
  __int64 v72; 
  char p[4]; 
  unsigned int clientNum; 
  unsigned __int8 buffer; 
  char v76[3]; 
  int v77; 
  MemoryFile *memFile; 
  SvServerInitSettings *initSettingsa; 
  SaveGame *savea; 
  GUtils *v81; 
  DObjPartBits partBits; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 

  initSettingsa = (SvServerInitSettings *)initSettings;
  savea = save;
  memFile = SaveMemory_GetMemoryFile(save);
  level.initializing = 1;
  MemFile_ReadData(memFile, 4ui64, &level.num_entities);
  MemFile_ReadData(memFile, 4ui64, &level.framenum);
  MemFile_ReadData(memFile, 4ui64, &level.startTime);
  MemFile_ReadData(memFile, 4ui64, &level.savepersist);
  MemFile_ReadData(memFile, 0x32Cui64, level.teamScores);
  MemFile_ReadData(memFile, 0x32Cui64, level.teamRadarStrength);
  MemFile_ReadData(memFile, 0xCBui64, level.teamHasRadar);
  MemFile_ReadData(memFile, 4ui64, &level.numConnectedClients);
  MemFile_ReadData(memFile, 0x320ui64, level.sortedClients);
  G_HudElem_Load(memFile);
  MemFile_ReadData(memFile, 8ui64, &level.compassMapUpperLeft);
  MemFile_ReadData(memFile, 8ui64, &level.compassMapWorldSize);
  MemFile_ReadData(memFile, 8ui64, &level.compassNorth);
  MemFile_ReadData(memFile, 4ui64, &level.hudElemLastAssignedSoundID);
  MemFile_ReadData(memFile, 4ui64, &level.pendingTriggerListSize);
  MemFile_ReadData(memFile, 12i64 * level.pendingTriggerListSize, level.pendingTriggerList);
  MemFile_ReadData(memFile, 4ui64, &level.teammode);
  G_HeadIcons_Load(memFile);
  G_TargetMarkerGroups_Load(memFile);
  gameOmnvars = level.gameOmnvars;
  v8 = BG_Omnvar_PerGameCount();
  MemFile_ReadData(memFile, 8i64 * v8, gameOmnvars);
  SV_LoadBotMatchMakingData(memFile);
  G_SaveMP_LoadConfigstrings(CS_FIRST, 1u, memFile);
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::LoadWeapons(Instance, memFile);
  G_GameInterface_OnLoad(memFile);
  Cmd_LoadNotifications(memFile);
  if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1731, ASSERT_TYPE_ASSERT, "( level.sentients )", (const char *)&queryFormat, "level.sentients") )
    __debugbreak();
  if ( level.maxSentients != 272 )
  {
    LODWORD(v71) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1732, ASSERT_TYPE_ASSERT, "( level.maxSentients ) == ( (200 + 48 + 24) )", "level.maxSentients == MAX_SENTIENTS_MP\n\t%i, %i", v71, 272) )
      __debugbreak();
  }
  clientNum = 0;
  for ( i = 0; i < 272; clientNum = i )
  {
    v11 = &level.sentients[i];
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 734, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    SaveMemory_LoadRead(&v11->inuse, 1, save);
    if ( v11->inuse )
    {
      G_SaveFieldMP_ReadStruct(s_saveMP_sentientFields, (unsigned __int8 *)v11, 184, save);
      if ( !v11->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 743, ASSERT_TYPE_ASSERT, "(sentient->inuse)", (const char *)&queryFormat, "sentient->inuse") )
        __debugbreak();
      iDamageParts = v11->iDamageParts;
      if ( iDamageParts != -1 )
      {
        v13 = (unsigned __int8 *)DamageParts_Get(iDamageParts);
        G_SaveFieldMP_ReadStruct(g_saveMP_damagePartsField, v13, 5852, save);
      }
    }
    i = clientNum + 1;
  }
  ReadSpawnedPathNodes(save);
  ReadPathNodes(save);
  G_SaveFieldMP_ReadStruct(threatGroupFields, (unsigned __int8 *)&g_threatBias, 2404, save);
  v14 = memFile;
  GMovingPlatformsMP::SaveMP_Read(memFile, save);
  v15 = 0;
  clientNum = 0;
  do
  {
    v16 = &level.outlineData[v15];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 492, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_ReadData(v14, 1ui64, p);
    if ( p[0] )
    {
      MemFile_ReadData(v14, 4ui64, &v77);
      v16->refCount = v77;
      MemFile_ReadData(v14, 0x1Cui64, &v16->enabledForClientMask);
      v16->lastUsed = 0;
      MemFile_ReadData(v14, 0x320ui64, v16);
    }
    v15 = clientNum + 1;
    clientNum = v15;
  }
  while ( v15 < 63 );
  G_Objectives_Load(v14);
  v17 = 0;
  clientNum = 0;
  v18 = 1;
  do
  {
    if ( !v18 )
    {
      LODWORD(v72) = 2048;
      LODWORD(v71) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v72) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1753, ASSERT_TYPE_ASSERT, "(!G_IsEntityInUse( i ))", (const char *)&queryFormat, "!G_IsEntityInUse( i )") )
      __debugbreak();
    v17 = clientNum + 1;
    clientNum = v17;
    v18 = v17 < 0x800;
  }
  while ( v17 != 2048 );
  v19 = memFile;
  v20 = savea;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v81 = GUtils::ms_gUtils;
  GUtils::DisableCreateEntityPhysicsOnInit(GUtils::ms_gUtils, 1);
  G_LoadWeaponCue(v20);
  MemFile_ReadData(v19, 4ui64, &clientNum);
  for ( j = clientNum; (clientNum & 0x80000000) == 0; j = clientNum )
  {
    if ( j >= 2048 )
    {
      LODWORD(fmt) = 2048;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC83C0, 97i64, (unsigned int)j, fmt);
      j = clientNum;
    }
    v22 = &g_entities[j];
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 372, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
      __debugbreak();
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 373, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    G_SaveFieldMP_ReadStruct(s_saveMP_gentityFields, (unsigned __int8 *)v22, 1456, v20);
    if ( !v22->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1773, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
      __debugbreak();
    g_entityIsInUse[clientNum] = 1;
    G_SaveMP_CheckSavedEntity(v22);
    MemFile_ReadData(v19, 4ui64, &clientNum);
  }
  G_SaveMP_CheckSavedEntities();
  VelocityObstacle3Manager::Load(v19);
  G_VehicleMP_ReadSaveGame(v20);
  GPlayerTraceInfo::OnLoadLevelState();
  G_CoverWall_ReadSaveGame(v20);
  G_PlayerUse_Read(v20);
  G_Trigger_Read(v20);
  GTurretMP::SaveMP_ReadTurrets(v19, v20);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 931, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  p_type = &g_badplaces[0].type;
  v24 = 16i64;
  v25 = (unsigned __int8 *)g_badplaces;
  do
  {
    G_SaveFieldMP_ReadStruct(badplaceFields, v25, 48, v20);
    if ( *p_type )
      Path_UpdateBadPlaceCount((badplace_t *)v25, 1);
    v25 += 48;
    p_type += 48;
    --v24;
  }
  while ( v24 );
  G_MotionWarp_Load(v20);
  SpeedThresholdLoad(v20);
  Nav_PostSpawnInit(0, 1);
  MemoryFile = SaveMemory_GetMemoryFile(v20);
  NavData_Read(MemoryFile);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  MemFile_ReadData(v19, 4ui64, &clientNum);
  v29 = clientNum;
  if ( (clientNum & 0x80000000) == 0 )
  {
    v86 = v2;
    v85 = v3;
    v84 = v4;
    v83 = v5;
    do
    {
      if ( v29 >= (int)SvClient::ms_clientCount )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC8420);
        v29 = clientNum;
      }
      v30 = &level.clientOmnvars[v29];
      v31 = &level.clients[v29];
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 443, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 444, ASSERT_TYPE_ASSERT, "(clientOmnvars)", (const char *)&queryFormat, "clientOmnvars") )
        __debugbreak();
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 445, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
        __debugbreak();
      G_SaveFieldMP_ReadStruct(s_saveMP_gclientFields, (unsigned __int8 *)v31, 64592, v20);
      if ( v31->sess.connected == CON_CONNECTED )
      {
        v31->sess.omnvars = (OmnvarData *)v30;
        v32 = BG_Omnvar_PerClientCount();
        MemFile_ReadData(&v20->memFile, 8i64 * v32, v30);
      }
      else
      {
        v31->sess.omnvars = NULL;
      }
      if ( v31->sess.cs.clientIndex != clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1838, ASSERT_TYPE_ASSERT, "(gcl->sess.cs.clientIndex == i)", (const char *)&queryFormat, "gcl->sess.cs.clientIndex == i") )
        __debugbreak();
      v33 = clientNum;
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v33);
      v35 = (int)clientNum;
      v36 = CommonClient;
      CommonClient->gentity = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v35];
      v37 = (int)clientNum;
      if ( clientNum >= 0x800 )
      {
        LODWORD(v72) = 2048;
        LODWORD(v71) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v72) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v37].r.isInUse != g_entityIsInUse[v37] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v37] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1843, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( i ))", (const char *)&queryFormat, "G_IsEntityInUse( i )") )
        __debugbreak();
      v31->sess.scriptPersId = (unsigned int)v36[854].gentity;
      MemFile_ReadData(v19, 1ui64, p);
      v38 = (unsigned __int8)p[0];
      v39 = initSettingsa;
      LODWORD(v36[855].__vftable) = (unsigned __int8)p[0];
      if ( v38 )
        G_SaveMP_ReadTestClientInfo(v39, v19, (SvClientMP *)v36);
      ReadCharacterInfo(v19, clientNum);
      GAntiLagMP::ArchiveStateForCharacter(AntiLagMP, v19, clientNum);
      if ( v20->header.demoPlayback )
      {
        G_ClientMP_UserinfoChanged(clientNum);
      }
      else
      {
        LOBYTE(v36[1].__vftable) = v36->state;
        _XMM5 = 0i64;
        v36->state = v39->isDevMigration + 2;
        HIDWORD(v36[855].__vftable) = sv_serverId_value;
        *(_DWORD *)&v36[782].lastUsercmd.scriptedMeleeTarget = PersistentGlobalsMP->time;
        v36[782].lastUsercmd.sightedClientsMask.data[0] = PersistentGlobalsMP->time;
        v31->ps.delta_angles.v[0] = v31->ps.viewangles.v[0];
        v31->ps.delta_angles.v[1] = v31->ps.viewangles.v[1];
        v31->ps.delta_angles.v[2] = v31->ps.viewangles.v[2];
        __asm
        {
          vroundss xmm0, xmm5, xmm2, 1
          vroundss xmm3, xmm5, xmm2, 1
        }
        v31->ps.delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        __asm
        {
          vroundss xmm0, xmm5, xmm3, 1
          vroundss xmm3, xmm5, xmm2, 1
        }
        v31->ps.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        __asm
        {
          vroundss xmm0, xmm5, xmm3, 1
          vroundss xmm3, xmm5, xmm2, 1
        }
        v31->ps.delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        SV_ClientMP_SetAssignedTeam(clientNum, v31->sess.cs.team);
      }
      MemFile_ReadData(v19, 4ui64, &clientNum);
      v29 = clientNum;
    }
    while ( (clientNum & 0x80000000) == 0 );
  }
  MemFile_ReadData(v19, 4ui64, &clientNum);
  for ( k = clientNum; (clientNum & 0x80000000) == 0; k = clientNum )
  {
    if ( k >= level.maxagents )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC8500);
      k = clientNum;
    }
    v48 = &level.agents[k];
    G_SaveMP_ReadAgent(v48, v20);
    v49 = clientNum;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v49 >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v72) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v71) = v49;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v71, v72) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v48->agentState.entityNum != v49 + ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1899, ASSERT_TYPE_ASSERT, "(gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i ))", (const char *)&queryFormat, "gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i )") )
      __debugbreak();
    entityNum = v48->agentState.entityNum;
    v51 = (__int64)&PersistentGlobalsMP->agents[clientNum];
    *(_QWORD *)(v51 + 8) = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[entityNum];
    v52 = v48->agentState.entityNum;
    if ( (unsigned int)v52 >= 0x800 )
    {
      LODWORD(v72) = 2048;
      LODWORD(v71) = v48->agentState.entityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v72) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v52].r.isInUse != g_entityIsInUse[v52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1903, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( gagent->agentState.entityNum ))", (const char *)&queryFormat, "G_IsEntityInUse( gagent->agentState.entityNum )") )
      __debugbreak();
    MemFile_ReadData(v19, 0x108ui64, (void *)(v51 + 16));
    ReadCharacterInfo(v19, v48->agentState.entityNum);
    GAntiLagMP::ArchiveStateForCharacter(AntiLagMP, v19, v48->agentState.entityNum);
    v53 = v48->agentState.entityNum;
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    SV_AgentInitScriptable(&SvGameGlobalsCommon->gentities[v53]);
    MemFile_ReadData(v19, 4ui64, &clientNum);
  }
  ScriptableSv_ArchiveState(v19);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1223, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(p, 1, v20);
  if ( (unsigned __int8)BG_BotSystemEnabled() != p[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1226, ASSERT_TYPE_ASSERT, "(static_cast<byte>( BG_BotSystemEnabled() ) == botSysEnabled)", (const char *)&queryFormat, "static_cast<byte>( BG_BotSystemEnabled() ) == botSysEnabled") )
    __debugbreak();
  if ( p[0] )
  {
    while ( 1 )
    {
      SaveMemory_LoadRead(&buffer, 1, v20);
      if ( buffer == 0xFF )
        break;
      v55 = buffer;
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v56 = (SvClientMP *)SvClient::GetCommonClient(v55);
      SV_BotInit(v56, 0);
      ClientData = Bot_GetClientData(v56);
      if ( !ClientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1242, ASSERT_TYPE_ASSERT, "(botData)", (const char *)&queryFormat, "botData") )
        __debugbreak();
      G_SaveMP_ReadBotData(v20, ClientData);
    }
    v19 = memFile;
  }
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1202, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(p, 1, v20);
  if ( (unsigned __int8)BG_AISystemEnabled() != p[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1205, ASSERT_TYPE_ASSERT, "(static_cast<byte>( BG_AISystemEnabled() ) == aiSysEnabled)", (const char *)&queryFormat, "static_cast<byte>( BG_AISystemEnabled() ) == aiSysEnabled") )
    __debugbreak();
  if ( p[0] )
    SV_BotStaticStateRead(v20);
  AI_BT_Load(v19);
  v58 = Ai_Asm::Singleton();
  Ai_Asm::ReadInstances(v58, v19);
  MemFile_ReadSentinel(v19, 0x9624F492);
  NavData_NavigatorLoadComplete();
  TacGraph_Read(v19);
  MemFile_ReadSentinel(v19, 0x42FE2416u);
  AIScheduler::Read(v19);
  MemFile_ReadSentinel(v19, 0x47195735u);
  G_LightSampler_Read(v19);
  MemFile_ReadSentinel(v19, 0x589DE242u);
  if ( Lobby_IsInLobby() )
  {
    PartyData = Lobby_GetPartyData();
    PartyHost_CheckTeams(PartyData);
  }
  GMissile::ClearMissileRegistry();
  GMissile::ClearMissileEventRegistry();
  ScriptableSv_DisableLinking(1);
  MemFile_ReadData(v19, 4ui64, &clientNum);
  v60 = clientNum;
  if ( (clientNum & 0x80000000) == 0 )
  {
    v61 = 2359300;
    do
    {
      if ( (int)v60 > 2048 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC86B0, 100i64, v60);
        v60 = clientNum;
      }
      v62 = &g_entities[v60];
      if ( v60 >= 0x800 )
      {
        LODWORD(v72) = 2048;
        LODWORD(v71) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v71, v72) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v60].r.isInUse != g_entityIsInUse[v60] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v60] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1957, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( i ))", (const char *)&queryFormat, "G_IsEntityInUse( i )") )
        __debugbreak();
      if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = (unsigned __int16)v62->s.eType;
      if ( (unsigned __int16)eType <= 0x15u && _bittest(&v61, eType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1959, ASSERT_TYPE_ASSERT, "(!BG_IsCorpseEntity( &ent->s ))", "%s\n\tShould not have written corpses in the dobj array", "!BG_IsCorpseEntity( &ent->s )") )
        __debugbreak();
      G_UtilsMP_DObjLoad(v62);
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(clientNum);
      if ( !ServerDObjForEntnum )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC8790, 101i64, clientNum);
      MemFile_ReadData(v19, 1ui64, &buffer);
      if ( buffer )
      {
        MemFile_ReadData(v19, 1ui64, p);
        if ( p[0] )
          XAnimReadSimpleBlendAnimTree(ServerDObjForEntnum, v19, MOVEMENT);
        else
          XAnimReadSimpleAnimTree(ServerDObjForEntnum, v19, MOVEMENT);
      }
      else
      {
        EntAnimTree = G_Utils_GetEntAnimTree(v62);
        if ( EntAnimTree )
          DObjSetTree(ServerDObjForEntnum, EntAnimTree);
        MemFile_ReadData(v19, 1ui64, v76);
        if ( v76[0] != (ServerDObjForEntnum->tree != NULL) )
        {
          v66 = "did not have";
          if ( v76[0] )
            v66 = "had";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1989, ASSERT_TYPE_ASSERT, "(hadTree == ( obj->tree != nullptr ))", "%s\n\tLoading this saved game will crash, because when saving, a server dobj %s a tree, but we haven't replicated this when loading.", "hadTree == ( obj->tree != nullptr )", v66) )
            __debugbreak();
        }
      }
      XAnimLoadAnimTree(ServerDObjForEntnum, v19);
      p_partBits = &partBits;
      v68 = 8i64;
      do
      {
        MemFile_ReadData(v19, 4ui64, &v77);
        p_partBits->array[0] = v77;
        p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
        --v68;
      }
      while ( v68 );
      DObjSetHidePartBits(ServerDObjForEntnum, &partBits);
      v69 = v62->s.eType;
      if ( v69 == ET_MISSILE )
      {
        GMissile::RegisterMissileEntity(v62->s.number);
      }
      else if ( GMissile::IsMissileEventType(v69) )
      {
        GMissile::RegisterMissileEventEntity(v62->s.number);
      }
      MemFile_ReadData(v19, 4ui64, &clientNum);
      v60 = clientNum;
    }
    while ( (clientNum & 0x80000000) == 0 );
    v20 = savea;
  }
  ScriptableSv_DisableLinking(0);
  MemFile_ReadSentinel(v19, 0xBEA426A5);
  GUtils::DisableCreateEntityPhysicsOnInit(v81, 0);
  WorldCollision_Load(v20);
  StaticModels_Load(v20);
  PatchCollision_Load(v20);
  Physics_Load(v20);
  G_PlayerSpawns_Load(v19);
  g_migrationStressStartTime = level.time;
  level.initializing = 0;
}

/*
==============
G_ReconnectTestClients
==============
*/
void G_ReconnectTestClients()
{
  signed int v0; 
  __int64 v1; 
  SvClient *CommonClient; 
  __int64 v3; 
  __int64 v4; 
  usercmd_s cmd; 

  v0 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    v1 = tls_index;
    do
    {
      if ( SvClient::GetCommonClient(v0)->state == CS_RECONNECTING )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v0);
        if ( LODWORD(CommonClient[855].__vftable) )
        {
          if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
            __debugbreak();
          v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
          if ( *(_QWORD *)(v3 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v3 + 272)) )
            __debugbreak();
          *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 272i64) = 0i64;
          memset_0(&cmd, 0, sizeof(cmd));
          SV_ClientMP_EnterWorld((SvClientMP *)CommonClient, &cmd, 0);
          if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
            __debugbreak();
          v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
          if ( *(_QWORD *)(v4 + 272) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", *(const void **)(v4 + 272)) )
              __debugbreak();
          }
          *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
        }
      }
      ++v0;
    }
    while ( v0 < (int)SvClient::ms_clientCount );
  }
}

/*
==============
G_SaveLevelState
==============
*/
void G_SaveLevelState(MemoryFile *memFile, bool demoSave)
{
  unsigned __int64 UsedSize; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  OmnvarGameData *gameOmnvars; 
  unsigned int v8; 
  unsigned __int64 v9; 
  GWeaponMap *Instance; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  int v15; 
  int i; 
  sentient_s *v17; 
  __int64 v18; 
  DamageParts *v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  pathnode_t *Node; 
  __int64 totalLinkCount; 
  int v24; 
  __int64 v25; 
  unsigned __int16 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  int v33; 
  outline_data_t *v34; 
  unsigned int v35; 
  ClientBits *p_enabledForClientMask; 
  char v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  char v42; 
  bool v43; 
  int j; 
  const gentity_s *v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  unsigned __int64 v59; 
  badplace_t *v60; 
  __int64 v61; 
  const unsigned __int8 *v62; 
  __int128 v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  unsigned __int64 v66; 
  __int64 v67; 
  GAntiLagMP *v68; 
  unsigned __int64 v69; 
  signed int v70; 
  gclient_s *v71; 
  const PartyData *ServerLobby; 
  __int64 v73; 
  int v74; 
  SvClient *CommonClient; 
  __int64 v76; 
  int NetId; 
  __int16 v78; 
  const characterInfo_t *v79; 
  unsigned __int64 v80; 
  unsigned __int64 v81; 
  int maxagents; 
  int v83; 
  __int64 v84; 
  unsigned int v85; 
  gagent_s *v86; 
  unsigned int v87; 
  unsigned int v88; 
  const characterInfo_t *v89; 
  unsigned int v90; 
  unsigned __int64 v91; 
  unsigned __int64 v92; 
  unsigned __int64 v93; 
  unsigned __int64 v94; 
  char v95; 
  signed int k; 
  SvClientMP *v97; 
  bot_data_t *ClientData; 
  bot_data_t *v99; 
  unsigned __int64 v100; 
  unsigned __int64 v101; 
  char v102; 
  unsigned __int64 v103; 
  unsigned __int64 v104; 
  unsigned __int64 v105; 
  unsigned __int64 v106; 
  Ai_Asm *v107; 
  unsigned __int64 v108; 
  unsigned __int64 v109; 
  unsigned __int64 v110; 
  unsigned __int64 v111; 
  unsigned __int64 v112; 
  unsigned __int64 v113; 
  unsigned __int64 v114; 
  unsigned __int64 v115; 
  int v116; 
  bool v117; 
  gentity_s *v118; 
  unsigned int eType; 
  DObj *ServerDObjForEntnum; 
  bool v121; 
  XAnimTree *EntAnimTree; 
  XAnimTree *tree; 
  entityType_s v124; 
  unsigned __int64 v125; 
  unsigned __int64 v126; 
  DObjPartBits *p_partBits; 
  __int64 v128; 
  unsigned __int64 v129; 
  unsigned __int64 v130; 
  unsigned __int64 v131; 
  unsigned __int64 v132; 
  unsigned __int64 v133; 
  unsigned __int64 v134; 
  unsigned __int64 v135; 
  unsigned __int64 v136; 
  unsigned __int64 v137; 
  unsigned __int64 v138; 
  unsigned __int64 v139; 
  unsigned __int64 v140; 
  __int64 v141; 
  __int64 v142; 
  __int64 v143; 
  int clientNum; 
  char v145[4]; 
  unsigned int p; 
  GAntiLagMP *AntiLagMP; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned __int8 v149[32]; 
  __int128 v150; 
  int inPlayerLOSTime; 
  DObjPartBits partBits; 
  __m256i dest; 
  __m256i v154; 
  __m256i v155; 
  __m256i v156; 
  __m256i v157; 
  __int128 v158; 
  __int64 v159; 
  int v160; 
  DamageParts v161; 

  v145[0] = demoSave;
  if ( !MemFile_IsWriting(memFile) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2061, ASSERT_TYPE_ASSERT, "(MemFile_IsWriting( memFile ))", (const char *)&queryFormat, "MemFile_IsWriting( memFile )") )
    __debugbreak();
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("level struct data", UsedSize);
  MemFile_WriteData(memFile, 4ui64, &level.num_entities);
  MemFile_WriteData(memFile, 4ui64, &level.framenum);
  MemFile_WriteData(memFile, 4ui64, &level.startTime);
  MemFile_WriteData(memFile, 4ui64, &level.savepersist);
  MemFile_WriteData(memFile, 0x32Cui64, level.teamScores);
  MemFile_WriteData(memFile, 0x32Cui64, level.teamRadarStrength);
  MemFile_WriteData(memFile, 0xCBui64, level.teamHasRadar);
  MemFile_WriteData(memFile, 4ui64, &level.numConnectedClients);
  MemFile_WriteData(memFile, 0x320ui64, level.sortedClients);
  v5 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("g_hudelems", v5);
  G_HudElem_Save(memFile);
  v6 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v6);
  MemFile_WriteData(memFile, 8ui64, &level.compassMapUpperLeft);
  MemFile_WriteData(memFile, 8ui64, &level.compassMapWorldSize);
  MemFile_WriteData(memFile, 8ui64, &level.compassNorth);
  MemFile_WriteData(memFile, 4ui64, &level.hudElemLastAssignedSoundID);
  MemFile_WriteData(memFile, 4ui64, &level.pendingTriggerListSize);
  MemFile_WriteData(memFile, 12i64 * level.pendingTriggerListSize, level.pendingTriggerList);
  if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2085, ASSERT_TYPE_ASSERT, "( level.currentTriggerListSize == 0 )", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
    __debugbreak();
  MemFile_WriteData(memFile, 4ui64, &level.teammode);
  G_HeadIcons_Save(memFile);
  G_TargetMarkerGroups_Save(memFile);
  gameOmnvars = level.gameOmnvars;
  v8 = BG_Omnvar_PerGameCount();
  MemFile_WriteData(memFile, 8i64 * v8, gameOmnvars);
  SV_SaveBotMatchMakingData(memFile);
  SV_SaveConfigstrings(CS_FIRST, 1u, memFile);
  v9 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("weapon map", v9);
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::SaveWeapons(Instance, memFile);
  v11 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v11);
  G_GameInterface_OnSave(demoSave, memFile);
  v12 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("cmd notifications", v12);
  Cmd_SaveNotifications(memFile);
  v13 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v13);
  if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2112, ASSERT_TYPE_ASSERT, "( level.sentients )", (const char *)&queryFormat, "level.sentients") )
    __debugbreak();
  if ( level.maxSentients != 272 )
  {
    LODWORD(v141) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2113, ASSERT_TYPE_ASSERT, "( level.maxSentients ) == ( (200 + 48 + 24) )", "level.maxSentients == MAX_SENTIENTS_MP\n\t%i, %i", v141, 272) )
      __debugbreak();
  }
  v14 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("sentients", v14);
  v15 = 0;
  clientNum = 0;
  for ( i = 0; i < 272; clientNum = i )
  {
    v17 = &level.sentients[i];
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 714, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    MemFile_WriteData(memFile, 1ui64, &v17->inuse);
    if ( v17->inuse )
    {
      v18 = *(_QWORD *)&v17->lastNavObstacleTime;
      dest = *(__m256i *)&v17->ent;
      v154 = *(__m256i *)&v17->bIgnoreMe;
      v155 = *(__m256i *)&v17->lastAttacker.number;
      v156 = *(__m256i *)&v17->meleeAttackerSpot[3];
      v157 = *(__m256i *)&v17->timeOfNodeClaim;
      v158 = *(_OWORD *)&v17->banNodeTime;
      v159 = v18;
      G_SaveFieldMP_WriteStruct(s_saveMP_sentientFields, (const unsigned __int8 *)v17, (unsigned __int8 *)&dest, 184, memFile);
      if ( v17->iDamageParts != -1 )
      {
        DamageParts::DamageParts(&v161);
        v19 = DamageParts_Get(v17->iDamageParts);
        memcpy_0(&v161, v19, sizeof(v161));
        G_SaveFieldMP_WriteStruct(g_saveMP_damagePartsField, (const unsigned __int8 *)v19, (unsigned __int8 *)&v161, 5852, memFile);
      }
    }
    i = clientNum + 1;
  }
  v20 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v20);
  v21 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("pathnodes", v21);
  WriteSpawnedPathNodes(memFile);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 771, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Node = Path_FirstNode(-1);
  if ( Node )
  {
    do
    {
      *(__m256i *)v149 = *(__m256i *)&Node->dynamic.pOwners[0].number;
      v150 = *(_OWORD *)&Node->dynamic.bInactive;
      inPlayerLOSTime = Node->dynamic.actors.inPlayerLOSTime;
      G_SaveFieldMP_WriteStruct(pathnodeFields, (const unsigned __int8 *)&Node->dynamic, v149, 52, memFile);
      totalLinkCount = Node->constant.totalLinkCount;
      v24 = totalLinkCount - 1;
      if ( (int)totalLinkCount - 1 >= Node->dynamic.wLinkCount )
      {
        v25 = 12 * totalLinkCount - 12;
        do
        {
          LOWORD(p) = *(unsigned __int16 *)((char *)&Node->constant.Links->nodeNum + v25);
          v26 = Path_ConvertNodeToIndex(Node);
          if ( v26 == (_WORD)p )
          {
            LODWORD(v143) = (unsigned __int16)p;
            LODWORD(v142) = Path_ConvertNodeToIndex(Node);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 780, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( node ) != index)", "%s\n\tnodeIndex %d index %d", "Path_ConvertNodeToIndex( node ) != index", v142, v143) )
              __debugbreak();
          }
          MemFile_WriteData(memFile, 2ui64, &p);
          --v24;
          v25 -= 12i64;
        }
        while ( v24 >= Node->dynamic.wLinkCount );
      }
      Node = Path_NextNode(Node, -1);
    }
    while ( Node );
    v15 = 0;
  }
  v27 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v27);
  v28 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("threatbias", v28);
  memcpy_0(&dest, &g_threatBias, 0x964ui64);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 890, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveFieldMP_WriteStruct(threatGroupFields, (const unsigned __int8 *)&g_threatBias, (unsigned __int8 *)&dest, 2404, memFile);
  v29 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v29);
  v30 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("moving platforms", v30);
  GMovingPlatformsMP::SaveMP_Write(memFile);
  v31 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v31);
  v32 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("outlines", v32);
  v33 = 0;
  clientNum = 0;
  do
  {
    v34 = &level.outlineData[v33];
    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 473, ASSERT_TYPE_ASSERT, "(outlineData)", (const char *)&queryFormat, "outlineData") )
      __debugbreak();
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 474, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    v35 = 0;
    p_enabledForClientMask = &v34->enabledForClientMask;
    while ( !p_enabledForClientMask->array[0] )
    {
      ++v35;
      p_enabledForClientMask = (ClientBits *)((char *)p_enabledForClientMask + 4);
      if ( v35 >= 7 )
        goto LABEL_46;
    }
    if ( v34->refCount <= 0 )
    {
LABEL_46:
      v37 = 0;
      goto LABEL_47;
    }
    v37 = 1;
LABEL_47:
    LOBYTE(p) = v37;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( v37 )
    {
      p = v34->refCount;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0x1Cui64, &v34->enabledForClientMask);
      MemFile_WriteData(memFile, 0x320ui64, v34);
    }
    v33 = clientNum + 1;
    clientNum = v33;
  }
  while ( v33 < 63 );
  v38 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v38);
  v39 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("objectives", v39);
  G_Objectives_Save(memFile);
  v40 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v40);
  G_SaveWeaponCue(memFile);
  v41 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("entities", v41);
  v42 = v145[0];
  clientNum = 0;
  v43 = 1;
  for ( j = 0; j < 2048; v43 = (unsigned int)j < 0x800 )
  {
    if ( !v43 )
    {
      LODWORD(v142) = 2048;
      LODWORD(v141) = j;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[j].r.isInUse != g_entityIsInUse[j] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[j] )
    {
      v45 = &g_entities[clientNum];
      MemFile_WriteData(memFile, 4ui64, &clientNum);
      G_SaveMP_CheckSavedEntity(v45);
      v160 = 0;
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 360, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      memcpy_0(&dest, v45, 0x5B0ui64);
      G_SaveFieldMP_WriteStruct(s_saveMP_gentityFields, (const unsigned __int8 *)v45, (unsigned __int8 *)&dest, 1456, memFile);
    }
    j = clientNum + 1;
    clientNum = j;
  }
  clientNum = -1;
  MemFile_WriteData(memFile, 4ui64, &clientNum);
  v46 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v46);
  v47 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("vo3", v47);
  VelocityObstacle3Manager::Save(memFile);
  v48 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v48);
  v49 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("vehicles", v49);
  G_VehicleMP_WriteSaveGame(memFile);
  v50 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v50);
  v51 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("covarWalls", v51);
  G_CoverWall_WriteSaveGame(memFile);
  v52 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v52);
  v53 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("playerUse", v53);
  G_PlayerUse_Write(memFile);
  v54 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v54);
  v55 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("trigger", v55);
  G_Trigger_Write(memFile);
  v56 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v56);
  v57 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("turrets", v57);
  GTurretMP::SaveMP_WriteTurrets(memFile);
  v58 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v58);
  v59 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("aibadplaces", v59);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 918, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v60 = g_badplaces;
  v61 = 16i64;
  v62 = (const unsigned __int8 *)g_badplaces;
  do
  {
    v63 = *(_OWORD *)&v60->teamflags.array[4];
    *(__m256i *)v149 = *(__m256i *)&v60->endtime;
    v150 = v63;
    G_SaveFieldMP_WriteStruct(badplaceFields, v62, v149, 48, memFile);
    v62 += 48;
    ++v60;
    --v61;
  }
  while ( v61 );
  v64 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v64);
  v65 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("MotionWarp", v65);
  G_MotionWarp_Save(memFile);
  v66 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v66);
  SpeedThresholdSave(memFile);
  NavData_Write(memFile);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v67 = *(_QWORD *)&GStatic::ms_gameStatics;
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  v68 = AntiLagMP;
  v69 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("clients", v69);
  clientNum = 0;
  if ( level.maxclients > 0 )
  {
    v70 = 0;
    do
    {
      v71 = &level.clients[v70];
      if ( Session_IsValid(&g_serverSession) && !SV_IsDemoPlaying() && (v70 >= (int)SvClient::ms_clientCount || !SV_ClientMP_IsTestClient(v70) && (v70 >= (int)SvClient::ms_clientCount || !SV_BotIsBot(v70))) )
      {
        ServerLobby = SV_MainMP_GetServerLobby();
        if ( Party_IsMemberRegistered(ServerLobby, v70) != (v71->sess.connected != CON_DISCONNECTED) )
        {
          LODWORD(v143) = v71->sess.connected;
          LODWORD(v142) = v70;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2047, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientIndex ) == ( cl->sess.connected != CON_DISCONNECTED ))", "%s\n\t%i cl->sess.connected = %i\n", "Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientIndex ) == ( cl->sess.connected != CON_DISCONNECTED )", v142, v143) )
            __debugbreak();
        }
      }
      if ( v71->sess.connected )
      {
        v73 = clientNum;
        if ( (unsigned int)clientNum >= 0x800 )
        {
          LODWORD(v142) = 2048;
          LODWORD(v141) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v73].r.isInUse != g_entityIsInUse[v73] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v73] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2225, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( i ))", (const char *)&queryFormat, "G_IsEntityInUse( i )") )
          __debugbreak();
        MemFile_WriteData(memFile, 4ui64, &clientNum);
        G_SaveMP_WriteClient(clientNum, v71, memFile, v42);
        v74 = clientNum;
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v74);
        LOBYTE(p) = CommonClient[855].__vftable;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( LODWORD(CommonClient[855].__vftable) )
        {
          if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1529, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
            __debugbreak();
          memset_0(&dest, 0, 0x400ui64);
          Info_CopyValues(dest.m256i_i8, (const char *)&CommonClient[1].lastUsercmd.buttons + 4, s_testClientSendFields, 4);
          v76 = -1i64;
          do
            ++v76;
          while ( dest.m256i_i8[v76] );
          p = v76;
          MemFile_WriteData(memFile, 4ui64, &p);
          MemFile_WriteData(memFile, (int)v76, &dest);
          NetId = NetConnection::GetNetId((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
          v78 = NetId;
          if ( (NetId < 0 || (unsigned int)NetId > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,netsrc_t>(netsrc_t)", "unsigned", (unsigned __int16)NetId, "signed", NetId) )
            __debugbreak();
          LOWORD(p) = v78;
          MemFile_WriteData(memFile, 2ui64, &p);
        }
        v79 = (const characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v67 + 224i64))(v67, (unsigned int)clientNum);
        if ( !v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2240, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        WriteCharacterInfo(memFile, v79);
        if ( v71->sess.cs.clientIndex != clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2243, ASSERT_TYPE_ASSERT, "(cl->sess.cs.clientIndex == i)", (const char *)&queryFormat, "cl->sess.cs.clientIndex == i") )
          __debugbreak();
        v68 = AntiLagMP;
        GAntiLagMP::ArchiveStateForCharacter(AntiLagMP, memFile, clientNum);
      }
      else
      {
        v68 = AntiLagMP;
      }
      v70 = ++clientNum;
    }
    while ( clientNum < level.maxclients );
  }
  clientNum = -1;
  MemFile_WriteData(memFile, 4ui64, &clientNum);
  v80 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v80);
  v81 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("agents", v81);
  maxagents = level.maxagents;
  v83 = 0;
  clientNum = 0;
  if ( level.maxagents > 0 )
  {
    v84 = (__int64)PersistentGlobalsMP;
    v85 = 0;
    do
    {
      v86 = &level.agents[v85];
      if ( v86->agentState.entityNum != 2047 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v85 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v142) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v141) = v85;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v87 = ComCharacterLimits::ms_gameData.m_clientCount + v85;
        if ( v87 >= 0x800 )
        {
          LODWORD(v142) = 2048;
          LODWORD(v141) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v87].r.isInUse != g_entityIsInUse[v87] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v87] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2263, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ComCharacterLimits::GetEntityIndexFromAgentIndex( i ) ))", (const char *)&queryFormat, "G_IsEntityInUse( ComCharacterLimits::GetEntityIndexFromAgentIndex( i ) )") )
          __debugbreak();
        MemFile_WriteData(memFile, 4ui64, &clientNum);
        G_SaveMP_WriteAgent(v86, memFile);
        v88 = clientNum;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v88 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v142) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v141) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v86->agentState.entityNum != v88 + ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2268, ASSERT_TYPE_ASSERT, "(gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i ))", (const char *)&queryFormat, "gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i )") )
          __debugbreak();
        MemFile_WriteData(memFile, 0x108ui64, (const void *)(280i64 * clientNum + *(_QWORD *)(v84 + 64) + 16));
        v89 = (const characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v67 + 224i64))(v67, (unsigned int)v86->agentState.entityNum);
        if ( !v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2273, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        WriteCharacterInfo(memFile, v89);
        v90 = clientNum;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v90 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v142) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v141) = v90;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v86->agentState.entityNum != v90 + ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2276, ASSERT_TYPE_ASSERT, "(gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i ))", (const char *)&queryFormat, "gagent->agentState.entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i )") )
          __debugbreak();
        GAntiLagMP::ArchiveStateForCharacter(v68, memFile, v86->agentState.entityNum);
        v83 = clientNum;
        maxagents = level.maxagents;
      }
      clientNum = ++v83;
      v85 = v83;
    }
    while ( v83 < maxagents );
    v15 = 0;
  }
  clientNum = -1;
  MemFile_WriteData(memFile, 4ui64, &clientNum);
  v91 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v91);
  v92 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("scriptables", v92);
  ScriptableSv_ArchiveState(memFile);
  v93 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v93);
  v94 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("bots", v94);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1105, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v95 = BG_BotSystemEnabled();
  LOBYTE(p) = v95;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v95 )
  {
    for ( k = 0; k < (int)SvClient::ms_clientCount; ++k )
    {
      if ( SvClient::GetCommonClient(k)->state == CS_ACTIVE && SV_BotIsBot(k) )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        v97 = (SvClientMP *)SvClient::GetCommonClient(k);
        ClientData = Bot_GetClientData(v97);
        v145[0] = k;
        v99 = ClientData;
        if ( !ClientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1122, ASSERT_TYPE_ASSERT, "(botData)", (const char *)&queryFormat, "botData") )
          __debugbreak();
        MemFile_WriteData(memFile, 1ui64, v145);
        G_SaveMP_WriteBotData(memFile, v99);
      }
    }
    v145[0] = -1;
    MemFile_WriteData(memFile, 1ui64, v145);
  }
  v100 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v100);
  v101 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("ai", v101);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v102 = BG_AISystemEnabled();
  LOBYTE(p) = v102;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v102 )
    SV_BotStaticStateWrite(memFile);
  v103 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v103);
  v104 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("behaviour tree", v104);
  AI_BT_Save(memFile);
  v105 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v105);
  v106 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("ai asm", v106);
  v107 = Ai_Asm::Singleton();
  Ai_Asm::WriteInstances(v107, memFile);
  MemFile_WriteSentinel(memFile, 0x9624F492);
  v108 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v108);
  v109 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("tacgraph", v109);
  TacGraph_Write(memFile);
  MemFile_WriteSentinel(memFile, 0x42FE2416u);
  v110 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v110);
  v111 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("ai scheduler", v111);
  AIScheduler::Write(memFile);
  MemFile_WriteSentinel(memFile, 0x47195735u);
  v112 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v112);
  v113 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("lightsampler", v113);
  G_LightSampler_Write(memFile);
  MemFile_WriteSentinel(memFile, 0x589DE242u);
  v114 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v114);
  v115 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("xanim info", v115);
  clientNum = 0;
  v116 = 2359300;
  v117 = 1;
  do
  {
    if ( !v117 )
    {
      LODWORD(v142) = 2048;
      LODWORD(v141) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v15] )
    {
      v118 = &g_entities[clientNum];
      if ( !v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = (unsigned __int16)v118->s.eType;
      if ( (unsigned __int16)eType <= 0x15u && _bittest(&v116, eType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2329, ASSERT_TYPE_ASSERT, "(!BG_IsCorpseEntity( &ent->s ))", "%s\n\tShouldn't have corpses in the migration save", "!BG_IsCorpseEntity( &ent->s )") )
        __debugbreak();
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(clientNum);
      if ( ServerDObjForEntnum )
      {
        MemFile_WriteData(memFile, 4ui64, &clientNum);
        v121 = ServerDObjForEntnum->tree && XAnimIsSimpleTree(ServerDObjForEntnum->tree);
        LOBYTE(p) = v121;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( v121 )
        {
          if ( XAnimIsSimpleBlendTree(ServerDObjForEntnum->tree) )
          {
            LOBYTE(p) = 1;
            MemFile_WriteData(memFile, 1ui64, &p);
            XAnimWriteSimpleBlendAnimTree(ServerDObjForEntnum, memFile);
          }
          else
          {
            LOBYTE(p) = 0;
            MemFile_WriteData(memFile, 1ui64, &p);
            XAnimWriteSimpleAnimTree(ServerDObjForEntnum, memFile);
          }
        }
        else
        {
          EntAnimTree = G_Utils_GetEntAnimTree(v118);
          tree = ServerDObjForEntnum->tree;
          if ( ServerDObjForEntnum->tree != EntAnimTree )
          {
            v124 = v118->s.eType;
            if ( v124 != ET_AGENT && (v124 != ET_INVISIBLE || EntAnimTree || !ServerDObjForEntnum->tree) )
            {
              G_Debug_PrintEntityDebugInfoToConsole(0, -1);
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              v125 = (__int64)((unsigned __int128)(((char *)v118 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
              v126 = (v125 >> 63) + v125;
              if ( (unsigned int)v126 >= 0x800 )
              {
                LODWORD(v142) = 2048;
                LODWORD(v141) = v126;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
                  __debugbreak();
              }
              LODWORD(v142) = (__int16)v126;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2367, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tServer dobj for entity %d had non-simple animtree that doesn't match ent->pAnimTree, which we don't know how to serialize.", "false", v142) )
                __debugbreak();
              tree = ServerDObjForEntnum->tree;
            }
          }
          LOBYTE(p) = tree != NULL;
          MemFile_WriteData(memFile, 1ui64, &p);
        }
        XAnimSaveAnimTree(ServerDObjForEntnum, memFile);
        DObjGetHidePartBits(ServerDObjForEntnum, &partBits);
        p_partBits = &partBits;
        v128 = 8i64;
        do
        {
          p = p_partBits->array[0];
          MemFile_WriteData(memFile, 4ui64, &p);
          p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
          --v128;
        }
        while ( v128 );
      }
    }
    v15 = clientNum + 1;
    clientNum = v15;
    v117 = (unsigned int)v15 < 0x800;
  }
  while ( v15 < 2048 );
  clientNum = -1;
  MemFile_WriteData(memFile, 4ui64, &clientNum);
  MemFile_WriteSentinel(memFile, 0xBEA426A5);
  v129 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v129);
  v130 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("WorldCollision_Write", v130);
  WorldCollision_Write(memFile);
  v131 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v131);
  v132 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("StaticModels_Write", v132);
  StaticModels_Write(memFile);
  v133 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v133);
  v134 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("PatchCollision_Write", v134);
  PatchCollision_Write(memFile);
  v135 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v135);
  v136 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("Physics_Write", v136);
  Physics_Write(memFile);
  v137 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v137);
  v138 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("PlayerSpawns_Save", v138);
  G_PlayerSpawns_Save(memFile);
  v139 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v139);
  v140 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v140);
}

/*
==============
G_SaveMP_CheckSavedEntities
==============
*/
void G_SaveMP_CheckSavedEntities()
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  v1 = 0i64;
  v2 = 0i64;
  v3 = 0i64;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v6) = 2048;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v2].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v1] )
      G_SaveMP_CheckSavedEntity(&g_entities[v3]);
    ++v0;
    ++v3;
    ++v1;
    ++v2;
    v4 = v0 < 0x800;
  }
  while ( v0 != 2048 );
}

/*
==============
G_SaveMP_CheckSavedEntity
==============
*/
void G_SaveMP_CheckSavedEntity(const gentity_s *ent)
{
  signed __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 137, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v3) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, 2048) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v4) = 2048;
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( ent ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  SV_MsgMP_ValidateEntityState(&ent->s);
}

/*
==============
G_SaveMP_LoadConfigstrings
==============
*/
void G_SaveMP_LoadConfigstrings(const ConfigString first, const unsigned int count, MemoryFile *memFile)
{
  __int64 v4; 
  unsigned int v6; 
  SvGameGlobals *v7; 
  int restarting; 
  __int64 v9; 
  ConfigString v10; 
  char *fmt; 
  __int64 v12; 
  __int64 v13; 
  int p; 
  unsigned int v15; 
  SvGameGlobals *SvGameGlobalsCommon; 
  __int64 v17; 
  char psz[1024]; 

  v4 = count;
  v15 = count;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 206, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (unsigned int)(first + v4) > 0x2FE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 207, ASSERT_TYPE_ASSERT, "(first + count <= MAX_CONFIGSTRINGS_MP)", (const char *)&queryFormat, "first + count <= MAX_CONFIGSTRINGS_MP") )
    __debugbreak();
  if ( SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 210, ASSERT_TYPE_ASSERT, "(!SV_Loaded())", (const char *)&queryFormat, "!SV_Loaded()") )
    __debugbreak();
  v6 = 0;
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v7 = SvGameGlobalsCommon;
  restarting = SvGameGlobalsCommon->restarting;
  p = SvGameGlobalsCommon->restarting;
  SvGameGlobalsCommon->restarting = 0;
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    v17 = v4;
    v10 = first;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( first >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v13) = first;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v13) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v10 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v13) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v13) )
          __debugbreak();
      }
      G_SaveField_ReadCStyleString(psz, 1024, memFile);
      SV_SetConfigstring(v10++, psz);
      --v9;
    }
    while ( v9 );
    v7 = SvGameGlobalsCommon;
    v6 = v17;
    LODWORD(v4) = v15;
    restarting = p;
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != v6 )
  {
    LODWORD(v13) = v4;
    LODWORD(v12) = first;
    LODWORD(fmt) = p;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC7930, 95i64, v6, fmt, v12, v13);
  }
  v7->restarting = restarting;
}

/*
==============
G_SaveMP_LoadGame
==============
*/
void G_SaveMP_LoadGame(const SvServerInitSettings *initSettings, int checksum, SaveGame *save, const bool scriptRunning, const bool demoSave)
{
  int MaxObjectives; 
  scrContext_t *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  gentity_s *v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2846, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( scriptRunning )
  {
    G_MainMP_FreeEntities();
    G_HudElem_DestroyAll();
    G_FreePathnodesScriptInfo();
    G_VehiclePathScr_FreeScriptInfo();
    MaxObjectives = G_Objectives_GetMaxObjectives();
    memset_0(level.objectives, 0, 340i64 * MaxObjectives);
    memset_0(level.outlineData, 0, sizeof(level.outlineData));
    v9 = ScriptContext_Server();
    Scr_ShutdownSystem(v9, 1u, 1, 1);
  }
  G_SaveMP_LoadMainState(initSettings, save, scriptRunning, demoSave);
  G_SaveMemoryMP_FinalizeLoad(save);
  G_SaveMP_CheckSavedEntities();
  if ( scriptRunning )
  {
    if ( demoSave )
    {
      if ( !SV_DemoMP_UsingDemoHistory() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2877, ASSERT_TYPE_ASSERT, "(SV_DemoMP_UsingDemoHistory())", (const char *)&queryFormat, "SV_DemoMP_UsingDemoHistory()") )
        __debugbreak();
      if ( !sv_demo.nextLevelSave->freeEntBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2879, ASSERT_TYPE_ASSERT, "(sv_demo.nextLevelSave->freeEntBuf)", (const char *)&queryFormat, "sv_demo.nextLevelSave->freeEntBuf") )
        __debugbreak();
      G_DemoMP_LoadFreeEntities(sv_demo.nextLevelSave->freeEntBuf);
    }
    v10 = 0;
    v11 = 0i64;
    v12 = 0i64;
    do
    {
      v13 = &g_entities[v12];
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v11] && v13->r.isLinked )
        SV_LinkEntity(v13);
      ++v10;
      ++v11;
      ++v12;
    }
    while ( v10 < 2048 );
    SV_Game_LocateGameData(level.gentities, level.num_entities, &level.clients->ps, 64592);
    Scr_HostMigration();
    G_ReconnectTestClients();
  }
  G_SaveMP_CheckSavedEntities();
}

/*
==============
G_SaveMP_LoadInitState
==============
*/
void G_SaveMP_LoadInitState(MemoryFile *memFile)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int i; 
  char v4[4]; 
  int p; 
  __int64 v6; 
  BG_SynchronizedPlayerInfo playerInfo; 

  v6 = -2i64;
  MemFile_MoveToSegment(memFile, 1, StreamModeSource_MPLoadInitState);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  MemFile_ReadData(memFile, 4ui64, &p);
  PersistentGlobalsMP->time = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  PersistentGlobalsMP->snapFlagServerBit = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  PersistentGlobalsMP->loopbackProcessStopTime = p;
  G_SaveMP_LoadConfigstrings(CS_FIRST, 0x2FEu, memFile);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    MemFile_ReadData(memFile, 1ui64, v4);
    if ( v4[0] )
    {
      bdSecurityID::bdSecurityID(&playerInfo.partyId);
      XUID::XUID(&playerInfo.xuid);
      BG_SynchronizedPlayerInfo_Reset(&playerInfo);
      BG_SynchronizedPlayerInfo::DeserializeFromMemfile(&playerInfo, memFile);
      SV_Live_SetPlayerInfo_NoBroadcast(i, &playerInfo);
      bdSecurityID::~bdSecurityID(&playerInfo.partyId);
    }
    else
    {
      SV_Live_ClearPlayerInfo_NoBroadcast(i);
    }
  }
  MemFile_MoveToSegment(memFile, -1, StreamModeSource_MPLoadInitState);
  if ( memFile->memoryOverflow )
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC82E0);
}

/*
==============
G_SaveMP_LoadMainState
==============
*/
void G_SaveMP_LoadMainState(const SvServerInitSettings *initSettings, SaveGame *save, const bool scriptRunning, const bool demoSave)
{
  MemoryFile *MemoryFile; 
  scrContext_t *v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  signed int v13; 
  SvClient *CommonClient; 
  int maxagents; 
  int v16; 
  __int64 v17; 
  signed int v18; 
  scrContext_t *v19; 
  SvClient *v20; 
  char v21; 
  SvClientConnectionState state; 
  unsigned int v23; 
  unsigned __int8 v24; 
  __int64 v25; 
  char *SvGameGlobalsCommon; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int8 v29; 
  unsigned __int8 v30; 
  char v31[2]; 
  unsigned int index; 
  scrContext_t *scrContext; 
  __int64 v34; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned __int8 v36; 
  SaveGame *savea; 
  __int16 v38; 
  char p; 

  LOBYTE(v38) = scriptRunning;
  savea = save;
  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2645, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2646, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  MemoryFile = SaveMemory_GetMemoryFile(save);
  MemFile_MoveToSegment(MemoryFile, 3, StreamModeSource_MPLoadMainState);
  scrContext = ScriptContext_Server();
  v9 = scrContext;
  Scr_LoadPre(scrContext, MemoryFile, scriptRunning);
  MemFile_MoveToSegment(MemoryFile, 2, StreamModeSource_MPLoadMainState);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v10 = (__int64)PersistentGlobalsMP;
  if ( demoSave )
  {
    SV_SnapshotMP_LoadState(MemoryFile);
    MemFile_ReadData(MemoryFile, 0xE000ui64, PersistentGlobalsMP->challenges);
    MemFile_ReadData(MemoryFile, 0x1300ui64, &PersistentGlobalsMP->OOBProf);
  }
  v11 = SvClient::ms_clientCount;
  v12 = 0;
  v13 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v13++);
      CommonClient->state = CS_FREE;
      v11 = SvClient::ms_clientCount;
    }
    while ( v13 < (int)SvClient::ms_clientCount );
    v9 = scrContext;
  }
  maxagents = level.maxagents;
  v16 = 0;
  if ( level.maxagents > 0 )
  {
    v17 = 0i64;
    do
    {
      v17 += 280i64;
      ++v16;
      *(_DWORD *)(v17 + *(_QWORD *)(v10 + 64) - 280) = 2047;
      maxagents = level.maxagents;
    }
    while ( v16 < level.maxagents );
    v11 = SvClient::ms_clientCount;
  }
  v18 = 0;
  if ( v11 > 0 )
  {
    v19 = scrContext;
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v20 = SvClient::GetCommonClient(v18);
      MemFile_ReadData(MemoryFile, 1ui64, &p);
      v21 = p;
      if ( p )
      {
        if ( !demoSave && !initSettings->isDevMigration )
          SvClientMP::ClearClientMemoryMP((SvClientMP *)v20);
        v20->state = v21;
        if ( (unsigned __int8)v21 >= 3u )
        {
          v20[1115].lastUsercmd.remoteControlMove[1] = 0;
          *(_QWORD *)&v20[1115].lastUsercmd.meleeChargeEnt = 0i64;
          MemFile_ReadData(MemoryFile, 4ui64, &index);
          v23 = index;
          if ( index )
          {
            if ( LODWORD(v20[854].gentity) )
            {
              if ( demoSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2725, ASSERT_TYPE_ASSERT, "( !demoSave )", (const char *)&queryFormat, "!demoSave") )
                __debugbreak();
              if ( !initSettings->isDevMigration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2727, ASSERT_TYPE_ASSERT, "( initSettings->isDevMigration )", (const char *)&queryFormat, "initSettings->isDevMigration") )
                __debugbreak();
              Scr_FreeExtArray(v19, (unsigned int)v20[854].gentity);
            }
            LODWORD(v20[854].gentity) = Scr_ConvertObjectFromLoad(v19, v23);
          }
          if ( !demoSave )
          {
            MemFile_ReadData(MemoryFile, 0x15ui64, &v20[854].lastUsercmd.sightedClientsMask.data[2]);
            MemFile_ReadData(MemoryFile, 1ui64, &v36);
            v20[1115].lastUsercmd.offHand.attachmentVariationIndices[5] = v36;
            MemFile_ReadData(MemoryFile, 1ui64, &v29);
            v20[1115].lastUsercmd.offHand.attachmentVariationIndices[6] = v29;
            MemFile_ReadData(MemoryFile, 8ui64, &v20[1115].lastUsercmd.offHand.attachmentVariationIndices[13]);
            MemFile_ReadData(MemoryFile, 0x10470ui64, &v20[855].state);
            MemFile_ReadData(MemoryFile, 8ui64, &v34);
            *(_QWORD *)&v20[1115].lastUsercmd.offHand.weaponAttachments[10] = v34;
            MemFile_ReadData(MemoryFile, 0x208Eui64, &v20[1086].lastUsercmd.offHand.attachmentVariationIndices[13]);
            MemFile_ReadData(MemoryFile, 1ui64, &v30);
            v20[1115].lastUsercmd.offHand.weaponAttachments[8] = v30;
            MemFile_ReadData(MemoryFile, 1ui64, v31);
            if ( v31[0] )
              SV_ClientMP_DelayDropClient((SvClientMP *)v20, "EXE/PLAYERKICKED");
          }
        }
      }
      else
      {
        state = v20->state;
        if ( state )
        {
          LODWORD(v27) = (unsigned __int8)state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2692, ASSERT_TYPE_ASSERT, "( client->state ) == ( SvClientConnectionState::CS_FREE )", "client->state == SvClientConnectionState::CS_FREE\n\t%i, %i", v27, 0i64) )
            __debugbreak();
        }
      }
      ++v18;
    }
    while ( v18 < (int)SvClient::ms_clientCount );
    maxagents = level.maxagents;
    v10 = (__int64)PersistentGlobalsMP;
    v9 = scrContext;
  }
  v24 = v38;
  if ( (_BYTE)v38 && maxagents > 0 )
  {
    v25 = 0i64;
    do
    {
      MemFile_ReadData(MemoryFile, 2ui64, &v38);
      v25 += 280i64;
      ++v12;
      *(_DWORD *)(v25 + *(_QWORD *)(v10 + 64) - 280) = v38;
    }
    while ( v12 < level.maxagents );
  }
  MemFile_ReadData(MemoryFile, 0xCui64, (void *)(v10 + 76));
  MemFile_ReadData(MemoryFile, 0xCui64, (void *)(v10 + 100));
  MemFile_ReadData(MemoryFile, 0xCui64, (void *)(v10 + 88));
  MemFile_ReadData(MemoryFile, 2ui64, &v38);
  *(_WORD *)(v10 + 112) = v38;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v28) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v28) )
      __debugbreak();
  }
  SvGameGlobalsCommon = (char *)SvGameGlobals::GetSvGameGlobalsCommon();
  G_SaveField_ReadCStyleString(SvGameGlobalsCommon + 1284, 64, MemoryFile);
  Online_MatchData_Load();
  MemFile_ReadData(MemoryFile, 0x800ui64, SvGameGlobalsCommon + 1348);
  Online_MatchData_Read(MemoryFile);
  if ( !demoSave )
    Online_MatchData_FlagHostMigration();
  G_SaveField_ReadCStyleString(SvGameGlobalsCommon + 3396, 64, MemoryFile);
  MemFile_ReadData(MemoryFile, 0x5DC0ui64, SvGameGlobalsCommon + 3460);
  SV_StreamSync_ReadState(MemoryFile);
  if ( v24 )
  {
    G_CharacterStreaming_ReadMigrationState(MemoryFile);
    G_WeaponStreaming_ReadMigrationState(MemoryFile);
    G_LoadLevelState(initSettings, savea);
    G_LoadGlass(MemoryFile);
  }
  MemFile_MoveToSegment(MemoryFile, 9, StreamModeSource_MPLoadMainState);
  MemFile_ReadData(MemoryFile, 1ui64, &v38);
  MemFile_MoveToSegment(MemoryFile, -1, StreamModeSource_MPLoadMainState);
  if ( MemoryFile->memoryOverflow )
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC82E0);
  GScr_Weapon_LoadPost(v9);
  Scr_LoadShutdown(v9, v24, (const ScrThreadMode)initSettings->serverThreadStartup);
}

/*
==============
G_SaveMP_PreLoadGame
==============
*/
void G_SaveMP_PreLoadGame(const SvServerInitSettings *initSettings, SaveGame **saveGame, int *levelTime)
{
  char *Value; 
  unsigned int *v7; 
  unsigned int v8; 
  _QWORD *v9; 
  char *v10; 
  int *v11; 
  unsigned __int64 v12; 
  ThreadContext CurrentThreadContext; 
  int v14; 
  SaveGame *SaveHandle; 
  MemoryFile *MemoryFile; 
  unsigned __int8 *Buffer; 
  const dvar_t *v18; 
  unsigned int v19; 
  bool IsSplitscreen; 
  const dvar_t *v21; 
  scrContext_t *v22; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v24; 
  __int64 v25; 
  __int64 v26; 
  char v27[4]; 
  int p; 
  __int64 v29; 
  BG_SynchronizedPlayerInfo playerInfo; 

  v29 = -2i64;
  if ( !saveGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2998, ASSERT_TYPE_ASSERT, "(saveGame)", (const char *)&queryFormat, "saveGame") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 14136);
  if ( (unsigned int)(*((_DWORD *)Value + 3534) + 1) >= 3 )
  {
    LODWORD(v25) = *((_DWORD *)Value + 3534) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, 3) )
      __debugbreak();
  }
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v25) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v9 = Value + 2088;
  v10 = Value + 40;
  if ( *v9 < (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v9 += 8i64;
  if ( *v9 >= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v9 = v7;
  if ( *v9 <= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v11 = (int *)&v7[*v7 + 2];
  v12 = __rdtsc();
  *v11 = v12;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v14 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 301, NULL, 0);
  if ( SV_IsDemoPlayingNext() )
  {
    SV_DemoMP_PreLoadDemo(initSettings, saveGame);
  }
  else
  {
    SaveHandle = G_SaveMemoryMP_GetSaveHandle(SAVE_MIGRATION_HANDLE);
    *saveGame = SaveHandle;
    SV_MigrationUpdateCount(SaveHandle->header.saveId);
    MemoryFile = SaveMemory_GetMemoryFile(SaveHandle);
    if ( SaveHandle->header.bodySize > Migration_GetBufferSize() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 3023, ASSERT_TYPE_ASSERT, "(header->bodySize <= Migration_GetBufferSize())", (const char *)&queryFormat, "header->bodySize <= Migration_GetBufferSize()") )
      __debugbreak();
    Buffer = Migration_GetBuffer();
    MemFile_InitForReading(MemoryFile, SaveHandle->header.bodySize, Buffer, 1, StreamModeSource_MPPreLoadGame);
    G_SaveMemory_InitializeLoad(*saveGame);
    G_SaveMP_VerifySaveGame(*saveGame, &SaveHandle->header);
    v18 = DVARBOOL_splitscreen_ingame;
    if ( !DVARBOOL_splitscreen_ingame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen_ingame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.color[0];
    IsSplitscreen = SV_Game_IsSplitscreen();
    Com_Printf(15, "Caching splitscreen data for migration: %i, %i.\n", IsSplitscreen, v19);
    s_splitscreenOnlineCache.splitscreen = SV_Game_IsSplitscreen();
    v21 = DVARBOOL_splitscreen_ingame;
    if ( !DVARBOOL_splitscreen_ingame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen_ingame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    s_splitscreenOnlineCache.splitscreen_ingame = v21->current.enabled;
    Dvar_LoadDvars(MemoryFile);
    Com_Printf(15, "Restoring splitscreen data for migration: %i, %i.\n", s_splitscreenOnlineCache.splitscreen, s_splitscreenOnlineCache.splitscreen_ingame);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, s_splitscreenOnlineCache.splitscreen);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen_ingame, s_splitscreenOnlineCache.splitscreen_ingame);
    v22 = ScriptContext_Server();
    Scr_SkipSource(v22, MemoryFile, MEMCARD_INVALID_FILE_HANDLE_0, 0);
    MemFile_MoveToSegment(MemoryFile, 1, StreamModeSource_MPLoadInitState);
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    MemFile_ReadData(MemoryFile, 4ui64, &p);
    PersistentGlobalsMP->time = p;
    MemFile_ReadData(MemoryFile, 4ui64, &p);
    PersistentGlobalsMP->snapFlagServerBit = p;
    MemFile_ReadData(MemoryFile, 4ui64, &p);
    PersistentGlobalsMP->loopbackProcessStopTime = p;
    G_SaveMP_LoadConfigstrings(CS_FIRST, 0x2FEu, MemoryFile);
    if ( !MemoryFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        MemFile_ReadData(MemoryFile, 1ui64, v27);
        if ( v27[0] )
        {
          bdSecurityID::bdSecurityID(&playerInfo.partyId);
          XUID::XUID(&playerInfo.xuid);
          BG_SynchronizedPlayerInfo_Reset(&playerInfo);
          BG_SynchronizedPlayerInfo::DeserializeFromMemfile(&playerInfo, MemoryFile);
          SV_Live_SetPlayerInfo_NoBroadcast(v14, &playerInfo);
          bdSecurityID::~bdSecurityID(&playerInfo.partyId);
        }
        else
        {
          SV_Live_ClearPlayerInfo_NoBroadcast(v14);
        }
        ++v14;
      }
      while ( v14 < (int)SvClient::ms_clientCount );
    }
    MemFile_MoveToSegment(MemoryFile, -1, StreamModeSource_MPLoadInitState);
    if ( MemoryFile->memoryOverflow )
      G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC82E0);
    *levelTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    v24 = DVARSTR_g_gametype;
    if ( !DVARSTR_g_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_gametype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    G_Main_SetupGameTypeQuick(v24->current.string);
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_SaveMP_ReadAgent
==============
*/
void G_SaveMP_ReadAgent(gagent_s *agent, SaveGame *save)
{
  unsigned int AgentIndexFromEntityIndex; 
  bot_data_t *BotDataAndOnlyBotData; 
  __int16 entityNum; 
  SvGameGlobals *SvGameGlobalsCommon; 
  sentient_info_t *sentientInfo; 
  MemoryFile *MemoryFile; 
  SvGameGlobals *v10; 
  __int64 v11; 
  char buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1293, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  G_SaveFieldMP_ReadStruct(s_saveMP_gagentFields, (unsigned __int8 *)agent, 55952, save);
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(agent->agentState.entityNum);
  if ( AgentIndexFromEntityIndex >= level.maxagents )
  {
    LODWORD(v11) = AgentIndexFromEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1299, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( level.maxagents )", "agentNum doesn't index level.maxagents\n\t%i not in [0, %i)", v11, level.maxagents) )
      __debugbreak();
  }
  BotDataAndOnlyBotData = Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex);
  if ( !BotDataAndOnlyBotData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "( agentData )", (const char *)&queryFormat, "agentData") )
    __debugbreak();
  Bot_MakeBotData(BotDataAndOnlyBotData);
  SaveMemory_LoadRead(&buffer, 1, save);
  entityNum = agent->agentState.entityNum;
  if ( buffer )
  {
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    ScrAgent_ResetAgentInfo(BotDataAndOnlyBotData, &SvGameGlobalsCommon->gentities[entityNum]);
    if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1176, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
      __debugbreak();
    if ( !BotDataAndOnlyBotData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1177, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
      __debugbreak();
    if ( !BotDataAndOnlyBotData->bIsScriptedAgent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1178, ASSERT_TYPE_ASSERT, "( botData->bIsScriptedAgent )", (const char *)&queryFormat, "botData->bIsScriptedAgent") )
      __debugbreak();
    if ( !BotDataAndOnlyBotData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1179, ASSERT_TYPE_ASSERT, "( botData->scriptedAgentInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->scriptedAgentInfo.sentientInfo != nullptr") )
      __debugbreak();
    sentientInfo = BotDataAndOnlyBotData->botInfo.sentientInfo;
    Nav_FreeNavigator(BotDataAndOnlyBotData->botInfo.pNavigator);
    G_SaveFieldMP_ReadStruct(scriptedAgentInfoFields, (unsigned __int8 *)&BotDataAndOnlyBotData->8, 3688, save);
    G_SaveFieldMP_ReadStruct(botMatchDataFields, (unsigned __int8 *)&BotDataAndOnlyBotData->botMatchData, 3420, save);
    MemoryFile = SaveMemory_GetMemoryFile(save);
    BotDataAndOnlyBotData->botInfo.pNavigator = Nav_ReadNavigator(MemoryFile, NULL);
    BotDataAndOnlyBotData->botInfo.sentientInfo = sentientInfo;
    G_SaveMP_ReadSentientInfoArray(save, MemoryFile, sentientInfo, level.maxSentients);
  }
  else
  {
    v10 = SvGameGlobals::GetSvGameGlobalsCommon();
    Bot_ResetBotInfo(BotDataAndOnlyBotData, &v10->gentities[entityNum]);
    G_SaveMP_ReadBotData(save, BotDataAndOnlyBotData);
  }
}

/*
==============
G_SaveMP_ReadBotData
==============
*/
void G_SaveMP_ReadBotData(SaveGame *save, bot_data_t *botData)
{
  sentient_info_t *sentientInfo; 
  playerState_s *playerState; 
  usercmd_s *lastUserCmd; 
  MemoryFile *MemoryFile; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1141, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1142, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( botData->bIsScriptedAgent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1143, ASSERT_TYPE_ASSERT, "( !botData->bIsScriptedAgent )", (const char *)&queryFormat, "!botData->bIsScriptedAgent") )
    __debugbreak();
  if ( !botData->botInfo.sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1144, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentientInfo != nullptr )", (const char *)&queryFormat, "botData->botInfo.sentientInfo != nullptr") )
    __debugbreak();
  if ( Bot_HasNavigator(&botData->botInfo) )
    Bot_FreeNavigator(&botData->botInfo);
  sentientInfo = botData->botInfo.sentientInfo;
  playerState = botData->botInfo.playerState;
  lastUserCmd = botData->botInfo.lastUserCmd;
  G_SaveFieldMP_ReadStruct(botInfoFields, (unsigned __int8 *)&botData->8, 29432, save);
  botData->botInfo.playerState = playerState;
  botData->botInfo.lastUserCmd = lastUserCmd;
  G_SaveFieldMP_ReadStruct(botMatchDataFields, (unsigned __int8 *)&botData->botMatchData, 3420, save);
  MemoryFile = SaveMemory_GetMemoryFile(save);
  botData->botInfo.pNavigator = Nav_ReadNavigator(MemoryFile, NULL);
  botData->botInfo.sentientInfo = sentientInfo;
  G_SaveMP_ReadSentientInfoArray(save, MemoryFile, sentientInfo, level.maxSentients);
}

/*
==============
G_SaveMP_ReadSentientInfoArray
==============
*/
void G_SaveMP_ReadSentientInfoArray(SaveGame *save, MemoryFile *memFile, sentient_info_t *sentientInfoArray, const unsigned int sentientInfoCount)
{
  __int64 v4; 
  int p; 

  v4 = sentientInfoCount;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (_DWORD)v4 != p )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FC7C40, 1351i64);
  if ( (_DWORD)v4 )
  {
    do
    {
      G_SaveFieldMP_ReadStruct(s_saveMP_sentientInfoFields, (unsigned __int8 *)sentientInfoArray++, 64, save);
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
G_SaveMP_ReadTestClientInfo
==============
*/
void G_SaveMP_ReadTestClientInfo(const SvServerInitSettings *initSettings, MemoryFile *memFile, SvClientMP *cl)
{
  SessionData *ServerSession; 
  netsrc_t v7; 
  const XSESSION_INFO *p_sessionInfo; 
  const XNADDR *Address; 
  signed __int64 v10; 
  const netadr_t *Netadr; 
  NetchanTelemetry *NetchanTelemetry; 
  __int64 type; 
  int p; 
  netadr_t result; 
  char source[1024]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1547, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1548, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  memset_0(source, 0, sizeof(source));
  MemFile_ReadData(memFile, 4ui64, &p);
  MemFile_ReadData(memFile, p, source);
  MemFile_ReadData(memFile, 2ui64, &p);
  SV_ClientMP_GetInfoForTestClient(cl->userinfo, 1024);
  Info_CopyValues(cl->userinfo, source, s_testClientSendFields, 4);
  if ( !initSettings->isDevMigration )
  {
    ServerSession = SV_MainMP_GetServerSession();
    v7 = (unsigned __int16)p;
    p_sessionInfo = &ServerSession->dyn.sessionInfo;
    Address = XSESSION_INFO::GetAddress(&ServerSession->dyn.sessionInfo);
    if ( NetConnection::Open(&cl->clientConnection, NS_MAXCLIENTS, p_sessionInfo, Address, v7, TYPE_GAME) )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v10 = ((char *)cl - (char *)SvClient::GetCommonClient(0)) / 379488;
      if ( (unsigned int)v10 >= 0xC8 )
      {
        LODWORD(type) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", type, 200) )
          __debugbreak();
      }
      Netadr = NetConnection::GetNetadr(&cl->clientConnection, &result);
      SvClientMP::AddClientAtAddress(Netadr, v10);
    }
  }
  NetchanTelemetry = SV_SnapshotMP_GetNetchanTelemetry();
  Netchan_Setup(NS_MAXCLIENTS, &cl->netchan, &cl->clientConnection, cl->netBuf.netchanBuffer, 4096, NetchanTelemetry);
}

/*
==============
G_SaveMP_SaveInitState
==============
*/
void G_SaveMP_SaveInitState(MemoryFile *memFile, const bool restart, const bool isDemo, const bool scriptRunning)
{
  unsigned __int8 v4; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  scrContext_t *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  signed int v18; 
  signed int v19; 
  BG_SynchronizedPlayerInfo *v20; 
  char v21; 
  unsigned __int64 v22; 
  int v23; 
  SvClient *CommonClient; 
  unsigned int gentity; 
  __int64 v26; 
  __int64 v27; 
  const scrContext_t *v28; 
  int p; 
  bool v30; 

  v30 = scriptRunning;
  v4 = scriptRunning;
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("server demo dvars", UsedSize);
  Dvar_SaveDvars(memFile, 0x80u);
  v8 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v8);
  v9 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("script source", v9);
  v28 = ScriptContext_Server();
  v10 = (scrContext_t *)v28;
  Scr_SaveSource(v28, memFile);
  v11 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v11);
  if ( isDemo )
  {
    v12 = MemFile_GetUsedSize(memFile);
    ProfMem_Begin("gameStateInfo", v12);
    BG_GameStateInfo_SaveState(memFile);
    v13 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v13);
  }
  MemFile_StartSegment(memFile, 1, StreamModeSource_MPSaveInitState);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  p = PersistentGlobalsMP->time;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = PersistentGlobalsMP->snapFlagServerBit;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = PersistentGlobalsMP->loopbackProcessStopTime;
  MemFile_WriteData(memFile, 4ui64, &p);
  v15 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("config strings", v15);
  SV_SaveConfigstrings(CS_FIRST, 0x2FEu, memFile);
  v16 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v16);
  v17 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("playerinfos", v17);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v18 = 0;
  v19 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( v19 >= SvClient::ms_clientCount )
      {
        LODWORD(v27) = SvClient::ms_clientCount;
        LODWORD(v26) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v20 = SvClientMP::ms_playerInfos[v19];
      LOBYTE(p) = XUID::IsValid(&v20->xuid);
      v21 = p;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( v21 )
        BG_SynchronizedPlayerInfo::SerializeToMemfile(v20, memFile);
      ++v19;
    }
    while ( v19 < (int)SvClient::ms_clientCount );
    v10 = (scrContext_t *)v28;
    v18 = 0;
    v4 = v30;
  }
  v22 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v22);
  v23 = v4;
  Scr_SavePre(v10, v4);
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( SvClient::GetCommonClient(v18)->state >= CS_CONNECTED )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v18);
        if ( !SV_ClientMP_IsLocalClient(v18) && (SV_ClientMP_IsLocalClient(v18) || *(_QWORD *)&CommonClient[1].state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1624, ASSERT_TYPE_ASSERT, "(SV_ClientMP_IsLocalClient( i ) || !SV_ClientMP_IsLocalClient( i ) && !client->dropReason)", "%s\n\tUnexpected drop reason for non local clients", "SV_ClientMP_IsLocalClient( i ) || !SV_ClientMP_IsLocalClient( i ) && !client->dropReason") )
          __debugbreak();
        gentity = (unsigned int)CommonClient[854].gentity;
        if ( gentity )
          Scr_ConvertObjectToSave(v10, gentity);
      }
      ++v18;
    }
    while ( v18 < (int)SvClient::ms_clientCount );
    v23 = v4;
  }
  Scr_SavePre2(v10, v23);
}

/*
==============
G_SaveMP_SaveMainState
==============
*/
void G_SaveMP_SaveMainState(MemoryFile *memFile, const bool demoSave, const bool fullState)
{
  unsigned __int8 v3; 
  bool v4; 
  SvPersistentGlobalsMP *v6; 
  int v7; 
  signed int v8; 
  scrContext_t *v9; 
  SvClientConnectionState state; 
  const PartyData *ServerLobby; 
  SvClient *CommonClient; 
  char v13; 
  int IsLocalClient; 
  __int64 v15; 
  __int64 v16; 
  const char *v17; 
  __int64 v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  unsigned int gentity; 
  unsigned int v23; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v25; 
  __int64 v26; 
  int entityNum; 
  const char *SvGameGlobalsCommon; 
  __int64 v29; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  scrContext_t *v31; 
  unsigned __int16 botport; 
  __int64 p; 

  LOBYTE(botport) = fullState;
  v3 = fullState;
  v4 = demoSave;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v6 = PersistentGlobalsMP;
  MemFile_StartSegment(memFile, 2, StreamModeSource_MPSaveMainState);
  if ( v4 )
  {
    SV_SnapshotMP_SaveState(memFile);
    MemFile_WriteData(memFile, 0xE000ui64, PersistentGlobalsMP->challenges);
    MemFile_WriteData(memFile, 0x1300ui64, &PersistentGlobalsMP->OOBProf);
  }
  v7 = 0;
  v31 = ScriptContext_Server();
  v8 = 0;
  v9 = v31;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      state = SvClient::GetCommonClient(v8)->state;
      if ( !v4 && Session_IsValid(&g_serverSession) && !SV_BotIsBot(v8) && !SV_ClientMP_IsTestClient(v8) )
      {
        ServerLobby = SV_MainMP_GetServerLobby();
        if ( Party_IsMemberRegistered(ServerLobby, v8) == (unsigned __int8)state < CS_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2427, ASSERT_TYPE_ASSERT, "( Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientIndex ) != clientFree )", (const char *)&queryFormat, "Party_IsMemberRegistered( SV_MainMP_GetServerLobby(), clientIndex ) != clientFree") )
          __debugbreak();
      }
      LOBYTE(p) = state;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( (unsigned __int8)state >= CS_CONNECTED )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v8);
        v13 = 0;
        IsLocalClient = SV_ClientMP_IsLocalClient(v8);
        v15 = *(_QWORD *)&CommonClient[1].state;
        if ( IsLocalClient )
        {
          if ( v15 )
          {
            v16 = 0x7FFFFFFFi64;
            v17 = "EXE/PLAYERKICKED";
            v18 = v15 - (_QWORD)"EXE/PLAYERKICKED";
            while ( 1 )
            {
              v19 = v17[v18];
              v20 = v16;
              v21 = *v17++;
              --v16;
              if ( !v20 )
                break;
              if ( v19 != v21 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2528, ASSERT_TYPE_ASSERT, "(I_strcmp( client->dropReason, \"EXE/PLAYERKICKED\" ) == 0)", "%s\n\tUnexpcted drop reason found", "I_strcmp( client->dropReason, PLAYERKICKED_PREFIX ) == 0") )
                  __debugbreak();
                break;
              }
              if ( !v19 )
              {
                v13 = 1;
                goto LABEL_28;
              }
            }
            v13 = 1;
          }
        }
        else if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2534, ASSERT_TYPE_ASSERT, "(!client->dropReason)", (const char *)&queryFormat, "!client->dropReason") )
        {
          __debugbreak();
        }
LABEL_28:
        if ( !SV_IsDemoPlaying() )
        {
          CommonClient[1115].lastUsercmd.remoteControlMove[1] = 0;
          *(_QWORD *)&CommonClient[1115].lastUsercmd.meleeChargeEnt = 0i64;
        }
        gentity = (unsigned int)CommonClient[854].gentity;
        if ( gentity )
          v23 = Scr_ConvertObjectToSave(v31, gentity);
        else
          v23 = 0;
        LODWORD(p) = v23;
        MemFile_WriteData(memFile, 4ui64, &p);
        if ( !v4 )
        {
          MemFile_WriteData(memFile, 0x15ui64, &CommonClient[854].lastUsercmd.sightedClientsMask.data[2]);
          LOBYTE(p) = CommonClient[1115].lastUsercmd.offHand.attachmentVariationIndices[5];
          MemFile_WriteData(memFile, 1ui64, &p);
          LOBYTE(p) = CommonClient[1115].lastUsercmd.offHand.attachmentVariationIndices[6];
          MemFile_WriteData(memFile, 1ui64, &p);
          MemFile_WriteData(memFile, 8ui64, &CommonClient[1115].lastUsercmd.offHand.attachmentVariationIndices[13]);
          UsedSize = MemFile_GetUsedSize(memFile);
          ProfMem_Begin("stat block", UsedSize);
          MemFile_WriteData(memFile, 0x10470ui64, &CommonClient[855].state);
          p = *(_QWORD *)&CommonClient[1115].lastUsercmd.offHand.weaponAttachments[10];
          MemFile_WriteData(memFile, 8ui64, &p);
          MemFile_WriteData(memFile, 0x208Eui64, &CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[13]);
          LOBYTE(p) = CommonClient[1115].lastUsercmd.offHand.weaponAttachments[8];
          MemFile_WriteData(memFile, 1ui64, &p);
          LOBYTE(p) = v13;
          MemFile_WriteData(memFile, 1ui64, &p);
          v25 = MemFile_GetUsedSize(memFile);
          ProfMem_End(v25);
        }
      }
      ++v8;
    }
    while ( v8 < (int)SvClient::ms_clientCount );
    v6 = PersistentGlobalsMP;
    v3 = botport;
  }
  if ( v3 && level.maxagents > 0 )
  {
    v26 = 0i64;
    do
    {
      entityNum = v6->agents[v26].entityNum;
      if ( (unsigned int)(entityNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)entityNum, "signed", v6->agents[v26].entityNum) )
        __debugbreak();
      LOWORD(p) = entityNum;
      MemFile_WriteData(memFile, 2ui64, &p);
      ++v7;
      ++v26;
    }
    while ( v7 < level.maxagents );
    v4 = demoSave;
    v9 = v31;
    v3 = botport;
  }
  MemFile_WriteData(memFile, 0xCui64, &v6->mapCenter);
  MemFile_WriteData(memFile, 0xCui64, &v6->mapCenterBoundsMax);
  MemFile_WriteData(memFile, 0xCui64, &v6->mapCenterBoundsMin);
  botport = v6->botport;
  MemFile_WriteData(memFile, 2ui64, &botport);
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v29) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v29) )
      __debugbreak();
  }
  SvGameGlobalsCommon = (const char *)SvGameGlobals::GetSvGameGlobalsCommon();
  G_SaveField_WriteCStyleString(SvGameGlobalsCommon + 1284, 64, memFile);
  MemFile_WriteData(memFile, 0x800ui64, SvGameGlobalsCommon + 1348);
  Online_MatchData_Write(memFile);
  G_SaveField_WriteCStyleString(SvGameGlobalsCommon + 3396, 64, memFile);
  MemFile_WriteData(memFile, 0x5DC0ui64, SvGameGlobalsCommon + 3460);
  SV_StreamSync_WriteState(memFile);
  if ( v3 )
  {
    G_CharacterStreaming_WriteMigrationState(memFile);
    G_WeaponStreaming_WriteMigrationState(memFile);
    G_SaveLevelState(memFile, v4);
    G_SaveGlass(memFile);
  }
  MemFile_StartSegment(memFile, 3, StreamModeSource_MPSaveMainState);
  Scr_SavePost(v9, memFile, v3);
  MemFile_StartSegment(memFile, 4, StreamModeSource_MPSaveMainState);
  MemFile_StartSegment(memFile, 5, StreamModeSource_MPSaveMainState);
  MemFile_StartSegment(memFile, 6, StreamModeSource_MPSaveMainState);
  MemFile_StartSegment(memFile, 7, StreamModeSource_MPSaveMainState);
  MemFile_StartSegment(memFile, 8, StreamModeSource_MPSaveMainState);
  MemFile_StartSegment(memFile, 9, StreamModeSource_MPSaveMainState);
  LOBYTE(botport) = 0;
  MemFile_WriteData(memFile, 1ui64, &botport);
}

/*
==============
G_SaveMP_SaveState
==============
*/
void G_SaveMP_SaveState(MemoryFile *memFile, const bool isDemo, const bool restart, const bool scriptRunning)
{
  unsigned __int64 UsedSize; 
  unsigned __int64 v9; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2819, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  G_SaveMP_CheckSavedEntities();
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("SaveState", UsedSize);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveInitState");
  G_SaveMP_SaveInitState(memFile, restart, isDemo, scriptRunning);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_SaveMP_SaveMainState");
  G_SaveMP_SaveMainState(memFile, isDemo, scriptRunning);
  Sys_ProfEndNamedEvent();
  v9 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v9);
  ProfMem_PrintTree(0);
}

/*
==============
G_SaveMP_ScrFreeAgentFields
==============
*/
void G_SaveMP_ScrFreeAgentFields(ai_agent_t *pInfo)
{
  G_SaveField_FreeFields(scriptedAgentInfoFields, (unsigned __int8 *)pInfo);
}

/*
==============
G_SaveMP_VerifySaveGame
==============
*/
void G_SaveMP_VerifySaveGame(const SaveGame *saveGame, const SaveHeader *header)
{
  __int64 saveVersion; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  char *fmt; 
  __int64 v9; 

  if ( !saveGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2947, ASSERT_TYPE_ASSERT, "( saveGame )", (const char *)&queryFormat, "saveGame") )
    __debugbreak();
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 2948, ASSERT_TYPE_ASSERT, "( header )", (const char *)&queryFormat, "header") )
    __debugbreak();
  saveVersion = (unsigned int)header->saveVersion;
  if ( (_DWORD)saveVersion != 321 )
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC92B0, saveVersion, 321i64, header->buildNumber);
  if ( header->sp.health != Sys_GetSaveProtocolVersion() )
  {
    LODWORD(v9) = Sys_GetSaveProtocolVersion() >> 16;
    LODWORD(fmt) = (unsigned __int16)Sys_GetSaveProtocolVersion();
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC9300, (unsigned __int16)header->sp.health, HIWORD(header->sp.health), fmt, v9, header->buildNumber);
  }
  v5 = SaveMemory_CalculateChecksum(saveGame);
  if ( header->saveCheckSum != v5 )
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC9370, v5);
  if ( header->mp.omnvarPerClientCount != BG_Omnvar_PerClientCount() )
  {
    v6 = BG_Omnvar_PerClientCount();
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC93C0, header->mp.omnvarPerClientCount, v6);
  }
  if ( header->mp.omnvarPerGameCount != BG_Omnvar_PerGameCount() )
  {
    v7 = BG_Omnvar_PerGameCount();
    G_SaveError(SAVE_ERROR_CORRUPT_SAVE, &byte_143FC9420, header->mp.omnvarPerGameCount, v7);
  }
}

/*
==============
G_SaveMP_WriteAgent
==============
*/
void G_SaveMP_WriteAgent(gagent_s *agent, MemoryFile *memFile)
{
  WeaponOffsetPatternCache *v4; 
  __int64 v5; 
  unsigned int AgentIndexFromEntityIndex; 
  bot_data_t *BotDataAndOnlyBotData; 
  __int64 v8; 
  char p[16]; 
  unsigned __int8 v10[3424]; 
  unsigned __int8 v11[3696]; 
  unsigned __int8 dest[4432]; 
  int v13; 
  BSplineRelaxedCBezier v14; 
  BSplineRelaxedCBezier v15; 
  BSplineRelaxedCBezier v16; 
  BSplineRelaxedCBezier v17; 
  WeaponOffsetPatternCache v18; 
  int v19; 
  char v20[19096]; 

  v13 = 0;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v14);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v15);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v16);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v17);
  v4 = &v18;
  v5 = 12i64;
  do
  {
    WeaponOffsetPatternCache::WeaponOffsetPatternCache(v4++);
    --v5;
  }
  while ( v5 );
  v19 = 0;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1259, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1260, ASSERT_TYPE_ASSERT, "(agent)", (const char *)&queryFormat, "agent") )
    __debugbreak();
  memcpy_0(dest, agent, 0xDA90ui64);
  memset_0(v20, 0, 0x4160ui64);
  G_SaveFieldMP_WriteStruct(s_saveMP_gagentFields, (const unsigned __int8 *)agent, dest, 55952, memFile);
  AgentIndexFromEntityIndex = ComCharacterLimits::GetAgentIndexFromEntityIndex(agent->agentState.entityNum);
  if ( AgentIndexFromEntityIndex >= level.maxagents )
  {
    LODWORD(v8) = AgentIndexFromEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1270, ASSERT_TYPE_ASSERT, "(unsigned)( agentNum ) < (unsigned)( level.maxagents )", "agentNum doesn't index level.maxagents\n\t%i not in [0, %i)", v8, level.maxagents) )
      __debugbreak();
  }
  BotDataAndOnlyBotData = Agent_GetBotDataAndOnlyBotData(AgentIndexFromEntityIndex);
  if ( !BotDataAndOnlyBotData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1273, ASSERT_TYPE_ASSERT, "( agentData )", (const char *)&queryFormat, "agentData") )
    __debugbreak();
  p[0] = BotDataAndOnlyBotData->bIsScriptedAgent == 1;
  MemFile_WriteData(memFile, 1ui64, p);
  if ( BotDataAndOnlyBotData->bIsScriptedAgent )
  {
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1057, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( !BotDataAndOnlyBotData->bIsScriptedAgent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1059, ASSERT_TYPE_ASSERT, "(botData->bIsScriptedAgent)", (const char *)&queryFormat, "botData->bIsScriptedAgent") )
      __debugbreak();
    memcpy_0(v10, &BotDataAndOnlyBotData->botMatchData, 0xD5Cui64);
    memcpy_0(v11, &BotDataAndOnlyBotData->8, 0xE68ui64);
    G_SaveFieldMP_WriteStruct(scriptedAgentInfoFields, (const unsigned __int8 *)&BotDataAndOnlyBotData->8, v11, 3688, memFile);
    G_SaveFieldMP_WriteStruct(botMatchDataFields, (const unsigned __int8 *)&BotDataAndOnlyBotData->botMatchData, v10, 3420, memFile);
    Nav_WriteNavigator(memFile, BotDataAndOnlyBotData->botInfo.pNavigator);
    G_SaveMP_WriteSentientInfoArray(memFile, BotDataAndOnlyBotData->botInfo.sentientInfo, level.maxSentients);
  }
  else
  {
    G_SaveMP_WriteBotData(memFile, BotDataAndOnlyBotData);
  }
}

/*
==============
G_SaveMP_WriteBotData
==============
*/
void G_SaveMP_WriteBotData(MemoryFile *memFile, bot_data_t *botData)
{
  unsigned __int8 v4[3424]; 
  unsigned __int8 dest[29440]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1032, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1033, ASSERT_TYPE_ASSERT, "(botData)", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( botData->bIsScriptedAgent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "(!botData->bIsScriptedAgent)", (const char *)&queryFormat, "!botData->bIsScriptedAgent") )
    __debugbreak();
  memcpy_0(dest, &botData->8, 0x72F8ui64);
  memcpy_0(v4, &botData->botMatchData, 0xD5Cui64);
  G_SaveFieldMP_WriteStruct(botInfoFields, (const unsigned __int8 *)&botData->8, dest, 29432, memFile);
  G_SaveFieldMP_WriteStruct(botMatchDataFields, (const unsigned __int8 *)&botData->botMatchData, v4, 3420, memFile);
  Nav_WriteNavigator(memFile, botData->botInfo.pNavigator);
  G_SaveMP_WriteSentientInfoArray(memFile, botData->botInfo.sentientInfo, level.maxSentients);
}

/*
==============
G_SaveMP_WriteClient
==============
*/
void G_SaveMP_WriteClient(const int clientNum, gclient_s *client, MemoryFile *memFile, bool demoSave)
{
  WeaponOffsetPatternCache *v8; 
  __int64 v9; 
  bool HasAssignedTeam_Internal; 
  const dvar_t *v14; 
  bool v15; 
  OmnvarData *omnvars; 
  unsigned int v17; 
  unsigned __int8 dest[188]; 
  float v19; 
  float v20; 
  int v21; 
  int AssignedTeam_Internal; 
  int v23; 
  char v24[22460]; 
  BSplineRelaxedCBezier v25; 
  BSplineRelaxedCBezier v26; 
  BSplineRelaxedCBezier v27; 
  BSplineRelaxedCBezier v28; 
  WeaponOffsetPatternCache v29; 

  v21 = 0;
  v23 = 0;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v25);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v26);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v27);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v28);
  v8 = &v29;
  v9 = 12i64;
  do
  {
    WeaponOffsetPatternCache::WeaponOffsetPatternCache(v8++);
    --v9;
  }
  while ( v9 );
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 396, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 397, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  memcpy_0(dest, client, 0xFC50ui64);
  if ( !demoSave )
  {
    v20 = 0.0;
    _XMM5 = 0i64;
    __asm
    {
      vroundss xmm2, xmm5, xmm1, 1
      vroundss xmm3, xmm5, xmm2, 1
    }
    v19 = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM2 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    HasAssignedTeam_Internal = SV_ClientMP_HasAssignedTeam_Internal(clientNum);
    v14 = DVARBOOL_team_consistency_fix;
    v15 = HasAssignedTeam_Internal;
    if ( !DVARBOOL_team_consistency_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "team_consistency_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v15 && (!v14->current.enabled || (unsigned int)(AssignedTeam_Internal - 201) <= 1) )
    {
      AssignedTeam_Internal = SV_ClientMP_GetAssignedTeam_Internal(clientNum);
      if ( !AssignedTeam_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 422, ASSERT_TYPE_ASSERT, "(tempClient.sess.cs.team != TEAM_FREE)", (const char *)&queryFormat, "tempClient.sess.cs.team != TEAM_FREE") )
        __debugbreak();
    }
  }
  memset_0(v24, 0, 0x4160ui64);
  G_SaveFieldMP_WriteStruct(s_saveMP_gclientFields, (const unsigned __int8 *)client, dest, 64592, memFile);
  if ( client->sess.connected == CON_CONNECTED )
  {
    if ( !client->sess.omnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 434, ASSERT_TYPE_ASSERT, "(client->sess.omnvars != nullptr)", (const char *)&queryFormat, "client->sess.omnvars != nullptr") )
      __debugbreak();
    omnvars = client->sess.omnvars;
    v17 = BG_Omnvar_PerClientCount();
    MemFile_WriteData(memFile, 8i64 * v17, omnvars);
  }
}

/*
==============
G_SaveMP_WriteSentientInfoArray
==============
*/
void G_SaveMP_WriteSentientInfoArray(MemoryFile *memFile, sentient_info_t *sentientInfoArray, const unsigned int sentientInfoCount)
{
  __int64 v3; 
  __m256i *v4; 
  const unsigned __int8 *v6; 
  __m256i v7; 
  int p[4]; 
  unsigned __int8 dest[32]; 
  __m256i v10; 

  v3 = sentientInfoCount;
  v4 = (__m256i *)sentientInfoArray;
  if ( !sentientInfoArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 997, ASSERT_TYPE_ASSERT, "( sentientInfoArray )", (const char *)&queryFormat, "sentientInfoArray") )
    __debugbreak();
  p[0] = v3;
  MemFile_WriteData(memFile, 4ui64, p);
  if ( (_DWORD)v3 )
  {
    v6 = (const unsigned __int8 *)v4;
    do
    {
      v7 = v4[1];
      *(__m256i *)dest = *v4;
      v10 = v7;
      G_SaveFieldMP_WriteStruct(s_saveMP_sentientInfoFields, v6, dest, 64, memFile);
      v6 += 64;
      v4 += 2;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
ReadPathNodes
==============
*/
void ReadPathNodes(SaveGame *save)
{
  SaveGame *v1; 
  pathnode_t *i; 
  unsigned int j; 
  __int64 k; 
  __int64 v5; 
  int v6; 
  double v7; 
  _DWORD *v8; 
  __int64 v9; 
  _DWORD *p_fDist; 
  unsigned __int64 v11; 
  unsigned __int64 m; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  double v22; 
  unsigned __int16 buffer; 

  v1 = save;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 803, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  for ( i = Path_FirstNode(-1); i; i = Path_NextNode(i, -1) )
  {
    G_SaveFieldMP_ReadStruct(pathnodeFields, (unsigned __int8 *)&i->dynamic, 52, v1);
    for ( j = i->constant.totalLinkCount - 1; (int)j >= i->dynamic.wLinkCount; --j )
    {
      SaveMemory_LoadRead(&buffer, 2, v1);
      for ( k = 0i64; ; k = (unsigned int)(k + 1) )
      {
        if ( (unsigned int)k > j )
        {
          LODWORD(v21) = i->dynamic.wLinkCount;
          LODWORD(v20) = i->constant.totalLinkCount;
          LODWORD(v19) = j;
          LODWORD(v18) = k;
          LODWORD(v17) = buffer;
          LODWORD(v16) = Path_ConvertNodeToIndex(i);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 814, ASSERT_TYPE_ASSERT, "(linkIndex <= (uint)i)", "%s\n\tunable to find path link from node %d to node %d. linkIndex %d, i %d, totalLinkCount %d, dynamicLinkCount %d.", "linkIndex <= (uint)i", v16, v17, v18, v19, v20, v21) )
            __debugbreak();
        }
        v5 = (__int64)&i->constant.Links[k];
        if ( *(_WORD *)(v5 + 4) == buffer )
          break;
      }
      v6 = *(_DWORD *)(v5 + 8);
      v1 = save;
      v7 = *(double *)v5;
      v22 = *(double *)v5;
      if ( (unsigned int)k < j )
      {
        v8 = (_DWORD *)(v5 + 12);
        v9 = j - (unsigned int)k;
        p_fDist = (_DWORD *)&i->constant.Links[k].fDist;
        LODWORD(k) = j;
        v11 = 12 * v9;
        for ( m = v11 >> 2; m; --m )
          *p_fDist++ = *v8++;
        v5 += v11;
      }
      v13 = i->constant.totalLinkCount - 1;
      if ( (unsigned int)k < v13 )
      {
        v14 = v5 + 12;
        do
        {
          if ( *(_WORD *)(v14 + 4) > WORD2(v22) )
            break;
          v15 = *(_DWORD *)(v14 + 8);
          LODWORD(k) = k + 1;
          *(double *)v5 = *(double *)v14;
          *(_DWORD *)(v5 + 8) = v15;
          v14 += 12i64;
          v5 += 12i64;
        }
        while ( (unsigned int)k < v13 );
      }
      *(double *)v5 = v7;
      *(_DWORD *)(v5 + 8) = v6;
    }
  }
}

/*
==============
SV_SaveConfigstrings
==============
*/
void SV_SaveConfigstrings(const ConfigString first, const unsigned int count, MemoryFile *memFile)
{
  __int64 v3; 
  int v6; 
  ConfigString v7; 
  scr_string_t ConfigstringConst; 
  const char *v9; 
  __int64 v10; 
  int p; 
  __int64 v12; 

  v3 = count;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (unsigned int)(first + v3) > 0x2FE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_save_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(first + count <= MAX_CONFIGSTRINGS_MP)", (const char *)&queryFormat, "first + count <= MAX_CONFIGSTRINGS_MP") )
    __debugbreak();
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    v12 = v3;
    v7 = first;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( first >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v10) = first;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v10) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v7 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v10) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v10) )
          __debugbreak();
      }
      ConfigstringConst = SV_GetConfigstringConst(v7);
      v9 = SL_ConvertToString(ConfigstringConst);
      G_SaveField_WriteCStyleString(v9, 1024, memFile);
      ++v7;
      --v3;
    }
    while ( v3 );
    v6 = v12;
  }
  p = v6;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
GSaveMP::ScrFreeClientFields
==============
*/
void GSaveMP::ScrFreeClientFields(GSaveMP *this, gclient_s *client)
{
  G_SaveField_FreeFields(s_saveMP_gclientFields, (unsigned __int8 *)client);
}

/*
==============
GSaveMP::ScrFreeEntityFields
==============
*/
void GSaveMP::ScrFreeEntityFields(GSaveMP *this, gentity_s *ent)
{
  G_SaveField_FreeFields(s_saveMP_gentityFields, (unsigned __int8 *)ent);
}

/*
==============
GSaveMP::ScrFreeSentientFields
==============
*/
void GSaveMP::ScrFreeSentientFields(GSaveMP *this, sentient_s *sentient)
{
  G_SaveField_FreeFields(s_saveMP_sentientFields, (unsigned __int8 *)sentient);
}

/*
==============
GSaveMP::SetLastSaveName
==============
*/
void GSaveMP::SetLastSaveName(GSaveMP *this, const char *fileName)
{
  ;
}

