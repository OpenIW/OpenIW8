/*
==============
SV_SnapshotArchiveMP_WriteCachedPlayerState
==============
*/

bool __fastcall SV_SnapshotArchiveMP_WriteCachedPlayerState(const unsigned int clientIndex, const cachedSnapshotPlayerState_t *const cachedFrame, cachedPlayerState_t *const toCachedPs)
{
  return ?SV_SnapshotArchiveMP_WriteCachedPlayerState@@YA_NIQEBUcachedSnapshotPlayerState_t@@QEAUcachedPlayerState_t@@@Z(clientIndex, cachedFrame, toCachedPs);
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap
==============
*/

void __fastcall SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap(msg_t *msgWeaponMap, bool *isDeltaEncoded)
{
  ?SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap@@YAXPEAUmsg_t@@PEA_N@Z(msgWeaponMap, isDeltaEncoded);
}

/*
==============
SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache
==============
*/

CachedSnapshotPlayerStateBuffer __fastcall SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache()
{
  return ?SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache@@YA?AW4CachedSnapshotPlayerStateBuffer@@XZ();
}

/*
==============
SV_SnapshotArchiveMP_EncodeCachedPlayerState
==============
*/

bool __fastcall SV_SnapshotArchiveMP_EncodeCachedPlayerState(msg_t *const msg, const unsigned int clientIndex, const int serverTime, const cachedPlayerState_t *const fromCachedPs, const cachedPlayerState_t *const toCachedPs)
{
  return ?SV_SnapshotArchiveMP_EncodeCachedPlayerState@@YA_NQEAUmsg_t@@IHQEBUcachedPlayerState_t@@1@Z(msg, clientIndex, serverTime, fromCachedPs, toCachedPs);
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotEncodeWorldState
==============
*/

void __fastcall SV_SnapshotMP_ArchiveSnapshotEncodeWorldState(msg_t *msgWorldState, bool *isDeltaEncoded)
{
  ?SV_SnapshotMP_ArchiveSnapshotEncodeWorldState@@YAXPEAUmsg_t@@PEA_N@Z(msgWorldState, isDeltaEncoded);
}

/*
==============
SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray
==============
*/

unsigned int __fastcall SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray(cachedSnapshotWorldState_t *cachedFrame)
{
  return ?SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray@@YAIPEAUcachedSnapshotWorldState_t@@@Z(cachedFrame);
}

/*
==============
SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray
==============
*/

unsigned int __fastcall SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray(cachedSnapshotWorldState_t *cachedFrame)
{
  return ?SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray@@YAIPEAUcachedSnapshotWorldState_t@@@Z(cachedFrame);
}

/*
==============
SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms
==============
*/

bool __fastcall SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms(const unsigned int clientIndex, const cachedPlayerState_t *const cachedPs, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms@@YA_NIQEBUcachedPlayerState_t@@AEATvec3_t@@1@Z(clientIndex, cachedPs, outOrigin, outAngles);
}

/*
==============
SV_SnapshotArchiveMP_EncodeCachedPlayerState
==============
*/
_BOOL8 SV_SnapshotArchiveMP_EncodeCachedPlayerState(msg_t *const msg, const unsigned int clientIndex, const int serverTime, const cachedPlayerState_t *const fromCachedPs, const cachedPlayerState_t *const toCachedPs)
{
  bool v12; 
  SnapshotInfo snapInfo; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( msg != nullptr )", (const char *)&queryFormat, "msg != nullptr", -2i64) )
    __debugbreak();
  if ( !toCachedPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 159, ASSERT_TYPE_ASSERT, "( toCachedPs != nullptr )", (const char *)&queryFormat, "toCachedPs != nullptr") )
    __debugbreak();
  Profile_Begin(329);
  SnapshotInfo::reset(&snapInfo);
  snapInfo.archived = 1;
  snapInfo.entJustUnlinked = 0;
  _RAX = SV_GameMP_GetMapCenter();
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter+4], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter+8], xmm0
  }
  snapInfo.serverTime = serverTime;
  G_ActiveMP_ValidateSpectateOtherFlags(&toCachedPs->ps.otherFlags);
  MSG_WriteByte(msg, toCachedPs->team);
  if ( !fromCachedPs )
    fromCachedPs = NULL;
  MSG_WriteDeltaPlayerstate(&snapInfo, msg, serverTime, &fromCachedPs->ps, &toCachedPs->ps);
  v12 = msg->overflowed == 0;
  Profile_EndInternal(NULL);
  return v12;
}

/*
==============
SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray
==============
*/
__int64 SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray(cachedSnapshotWorldState_t *cachedFrame)
{
  __int64 v2; 
  __int64 result; 
  __int64 v4; 
  __int64 v5; 

  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 891, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( cachedFrame->scriptableInstFirstIndex != g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex )
  {
    LODWORD(v4) = cachedFrame->scriptableInstFirstIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 895, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptableInstFirstIndex ) == ( sbl->cachedInstNextIndex )", "cachedFrame->scriptableInstFirstIndex == sbl->cachedInstNextIndex\n\t%i, %i", v4, LODWORD(g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex)) )
      __debugbreak();
  }
  if ( cachedFrame->scriptableInstCount > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    LODWORD(v5) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
    LODWORD(v4) = cachedFrame->scriptableInstCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 896, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptableInstCount ) <= ( sbl->cachedPartCount )", "cachedFrame->scriptableInstCount <= sbl->cachedPartCount\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  v2 = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount;
  if ( (unsigned int)(v2 + cachedFrame->scriptableInstCount) <= g_svSnapshotData.scriptableSnapshots.cachedInstCount )
    return (unsigned int)v2;
  g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex += (unsigned int)(g_svSnapshotData.scriptableSnapshots.cachedInstCount - v2);
  result = 0i64;
  cachedFrame->scriptableInstFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  return result;
}

/*
==============
SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray
==============
*/
__int64 SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray(cachedSnapshotWorldState_t *cachedFrame)
{
  __int64 v2; 
  __int64 result; 
  __int64 v4; 
  __int64 v5; 

  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 920, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( cachedFrame->scriptablePartFirstIndex != g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex )
  {
    LODWORD(v4) = cachedFrame->scriptablePartFirstIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 924, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptablePartFirstIndex ) == ( sbl->cachedPartNextIndex )", "cachedFrame->scriptablePartFirstIndex == sbl->cachedPartNextIndex\n\t%i, %i", v4, LODWORD(g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex)) )
      __debugbreak();
  }
  if ( cachedFrame->scriptablePartCount > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    LODWORD(v5) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
    LODWORD(v4) = cachedFrame->scriptablePartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 925, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptablePartCount ) <= ( sbl->cachedPartCount )", "cachedFrame->scriptablePartCount <= sbl->cachedPartCount\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  v2 = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount;
  if ( (unsigned int)(v2 + cachedFrame->scriptablePartCount) <= g_svSnapshotData.scriptableSnapshots.cachedPartCount )
    return (unsigned int)v2;
  g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex += (unsigned int)(g_svSnapshotData.scriptableSnapshots.cachedPartCount - v2);
  result = 0i64;
  cachedFrame->scriptablePartFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  return result;
}

/*
==============
SV_SnapshotArchiveMP_IsEntityRelevant
==============
*/
bool SV_SnapshotArchiveMP_IsEntityRelevant(const gentity_s *ent, int entNum)
{
  double v11; 
  double v12; 
  double v13; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1027, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RBX->r.isLinked )
    return 0;
  if ( _RBX->s.number != entNum )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  xmm2, dword ptr [rbx+130h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+68h+var_10], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_18], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+68h+var_20], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "(ent->s.number == entNum)", "%s\n\tentnum: %d vs %d, eType: %d, origin: %f %f %f", "ent->s.number == entNum", _RBX->s.number, entNum, _RBX->s.eType, v11, v12, v13) )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0x1Eu) && (_RBX->r.svFlags & 1) == 0;
}

/*
==============
SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache
==============
*/
__int64 SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache()
{
  signed int v0; 
  unsigned int v1; 
  cachedSnapshotPlayerState_t *v2; 
  bool v3; 
  int nextArchivedSnapshotFrames; 
  int archivedFrame; 

  v0 = 0;
  if ( g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].archivedFrame <= SV_SnapshotArchive_GetMinArchiveFrameIndex() || (v1 = 1, g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].archivedFrame > g_svSnapshotData.archive.nextArchivedSnapshotFrames) )
    v1 = 0;
  v2 = &g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[v1];
  *(_QWORD *)v2->playerStateValid = 0i64;
  *(_QWORD *)&v2->playerStateValid[2] = 0i64;
  *(_QWORD *)&v2->playerStateValid[4] = 0i64;
  *(_QWORD *)&v2->playerStateValid[6] = 0i64;
  *(_QWORD *)&v2->deltaFrame = 0i64;
  v2->time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  v2->archivedFrame = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
  if ( g_svSnapshotData.archive.nextArchivedSnapshotFrames < g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].archivedFrame )
  {
    archivedFrame = g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].archivedFrame;
    nextArchivedSnapshotFrames = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1390, ASSERT_TYPE_ASSERT, "( writeFrame->archivedFrame ) >= ( noDeltaFrame->archivedFrame )", "writeFrame->archivedFrame >= noDeltaFrame->archivedFrame\n\t%i, %i", nextArchivedSnapshotFrames, archivedFrame) )
      __debugbreak();
  }
  v3 = (int)SvClient::ms_clientCount <= 0;
  v2->deltaFrame = g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].archivedFrame;
  if ( !v3 )
  {
    do
    {
      if ( SvClient::GetCommonClient(v0)->state >= CS_CONNECTED && G_ActiveMP_GetFollowPlayerState(v0, NULL) )
        v2->playerStateValid[(__int64)v0 >> 5] |= 0x80000000 >> (v0 & 0x1F);
      ++v0;
    }
    while ( v0 < (int)SvClient::ms_clientCount );
  }
  return v1;
}

/*
==============
SV_SnapshotArchiveMP_WriteCachedPlayerState
==============
*/
char SV_SnapshotArchiveMP_WriteCachedPlayerState(const unsigned int clientIndex, const cachedSnapshotPlayerState_t *const cachedFrame, cachedPlayerState_t *const toCachedPs)
{
  clientState_t *ClientState; 
  __int64 v8; 

  if ( !G_ActiveMP_GetFollowPlayerState(clientIndex, &toCachedPs->ps) )
    return 0;
  ClientState = G_MainMP_GetClientState(clientIndex);
  if ( !ClientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 41, ASSERT_TYPE_ASSERT, "( cs )", (const char *)&queryFormat, "cs") )
    __debugbreak();
  if ( ClientState->clientIndex != toCachedPs->ps.clientNum )
  {
    LODWORD(v8) = ClientState->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 42, ASSERT_TYPE_ASSERT, "( cs->clientIndex ) == ( toCachedPs->ps.clientNum )", "cs->clientIndex == toCachedPs->ps.clientNum\n\t%i, %i", v8, toCachedPs->ps.clientNum) )
      __debugbreak();
  }
  toCachedPs->team = ClientState->team;
  toCachedPs->archivedFrame = cachedFrame->archivedFrame;
  toCachedPs->time = cachedFrame->time;
  toCachedPs->lastUsedTime = 0;
  toCachedPs->origin.v[0] = toCachedPs->ps.origin.v[0];
  toCachedPs->origin.v[1] = toCachedPs->ps.origin.v[1];
  toCachedPs->origin.v[2] = toCachedPs->ps.origin.v[2];
  toCachedPs->angles.v[0] = toCachedPs->ps.viewangles.v[0];
  toCachedPs->angles.v[1] = toCachedPs->ps.viewangles.v[1];
  toCachedPs->angles.v[2] = toCachedPs->ps.viewangles.v[2];
  G_ActiveMP_ValidateFollowPlayerState(&toCachedPs->ps);
  return 1;
}

/*
==============
SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms
==============
*/
char SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms(const unsigned int clientIndex, const cachedPlayerState_t *const cachedPs, vec3_t *outOrigin, vec3_t *outAngles)
{
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  unsigned int v17; 
  int v19; 
  int *v20; 
  const dvar_t *v21; 
  __int64 v22; 
  int v33; 
  vec3_t outOrigina; 
  vec3_t outAnglesa; 
  vec3_t angles; 
  vec3_t origin; 
  int archiveFrameNum[20]; 

  _R13 = outAngles;
  _R12 = outOrigin;
  if ( !cachedPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 66, ASSERT_TYPE_ASSERT, "( cachedPs != nullptr )", (const char *)&queryFormat, "cachedPs != nullptr") )
    __debugbreak();
  _R12->v[0] = cachedPs->origin.v[0];
  _R12->v[1] = cachedPs->origin.v[1];
  _R12->v[2] = cachedPs->origin.v[2];
  _R13->v[0] = cachedPs->angles.v[0];
  _R13->v[1] = cachedPs->angles.v[1];
  _R13->v[2] = cachedPs->angles.v[2];
  v14 = DVARBOOL_sv_archive_smooth_transform_origin;
  if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.enabled )
  {
    v15 = DVARBOOL_sv_archive_smooth_transform_angles;
    if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( !v15->current.enabled )
      return 0;
  }
  v16 = DVARBOOL_sv_virtual_archive_enabled;
  if ( !DVARBOOL_sv_virtual_archive_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_virtual_archive_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled || SvClientMP::GetMpClient(clientIndex)->cumulThinkTime <= 0 )
    return 0;
  v17 = 0;
  _EBP = 0;
  v19 = g_svSnapshotData.archive.nextArchivedSnapshotFrames - 1;
  if ( g_svSnapshotData.archive.nextArchivedSnapshotFrames - 1 >= 0 )
  {
    v20 = archiveFrameNum;
    while ( !SV_SnapshotMP_GetArchivedPlayerTransform(clientIndex, v19, &g_svSnapshotData.archive, &outOrigina, &outAnglesa) )
    {
      _EBP += g_svSnapshotData.archive.archivedFrameDuration;
      ++v17;
      v21 = DVARINT_sv_cmdMaxExtrapTime;
      *v20++ = v19;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxExtrapTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( _EBP <= v21->current.integer && v17 < 0x14 && --v19 >= 0 )
        continue;
      return 1;
    }
    v22 = (int)(v17 - 1);
    if ( (int)(v17 - 1) >= 0 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovaps [rsp+178h+var_48], xmm6
        vmovaps [rsp+178h+var_58], xmm7
      }
      _EDI = 0;
      __asm
      {
        vmovaps [rsp+178h+var_68], xmm8
        vmovss  xmm8, cs:__real@3b360b61
        vmovaps [rsp+178h+var_78], xmm9
        vmovss  xmm9, cs:__real@3f000000
        vmovd   xmm1, ebp
        vmovaps [rsp+178h+var_88], xmm10
        vmovss  xmm10, cs:__real@43b40000
        vcvtdq2ps xmm1, xmm1
        vmovaps [rsp+178h+var_98], xmm11
        vdivss  xmm11, xmm0, xmm1
        vxorps  xmm7, xmm7, xmm7
      }
      do
      {
        __asm { vmovss  xmm1, dword ptr [r12] }
        _EDI += g_svSnapshotData.archive.archivedFrameDuration;
        v33 = archiveFrameNum[v22];
        __asm
        {
          vmovd   xmm0, edi
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm6, xmm0, xmm11
          vsubss  xmm0, xmm1, dword ptr [rsp+178h+outOrigin]
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm2, xmm1, dword ptr [rsp+178h+outOrigin]
          vmovss  xmm0, dword ptr [r12+4]
          vsubss  xmm0, xmm0, dword ptr [rsp+178h+outOrigin+4]
          vmulss  xmm1, xmm0, xmm6
          vmovss  xmm0, dword ptr [r12+8]
          vsubss  xmm0, xmm0, dword ptr [rsp+178h+outOrigin+8]
          vmovss  dword ptr [rsp+178h+origin], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsp+178h+outOrigin+4]
          vmulss  xmm1, xmm0, xmm6
          vmovss  xmm0, dword ptr [r13+0]
          vsubss  xmm0, xmm0, dword ptr [rsp+178h+outAngles]
          vmulss  xmm4, xmm0, xmm8
          vmovss  dword ptr [rsp+178h+origin+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsp+178h+outOrigin+8]
          vmovss  dword ptr [rsp+178h+origin+8], xmm2
          vaddss  xmm2, xmm4, xmm9
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm10
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+178h+outAngles]
          vmovss  xmm0, dword ptr [r13+4]
          vsubss  xmm0, xmm0, dword ptr [rsp+178h+outAngles+4]
          vmulss  xmm4, xmm0, xmm8
          vmovss  dword ptr [rsp+178h+angles], xmm3
          vaddss  xmm2, xmm4, xmm9
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm10
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+178h+outAngles+4]
          vmovss  xmm0, dword ptr [r13+8]
          vsubss  xmm0, xmm0, dword ptr [rsp+178h+outAngles+8]
          vmulss  xmm4, xmm0, xmm8
          vaddss  xmm2, xmm4, xmm9
          vmovss  dword ptr [rsp+178h+angles+4], xmm3
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm10
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+178h+outAngles+8]
          vmovss  dword ptr [rsp+178h+angles+8], xmm3
        }
        if ( !SV_SnapshotMP_SetArchivedPlayerTransform(clientIndex, v33, &g_svSnapshotData.archive, &origin, &angles) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 141, ASSERT_TYPE_ASSERT, "(SV_SnapshotMP_SetArchivedPlayerTransform( clientIndex, interpFrames[interpFrameIndex], &g_svSnapshotData.archive, interpOrigin, interpAngles ))", (const char *)&queryFormat, "SV_SnapshotMP_SetArchivedPlayerTransform( clientIndex, interpFrames[interpFrameIndex], &g_svSnapshotData.archive, interpOrigin, interpAngles )") )
          __debugbreak();
        --v22;
      }
      while ( v22 >= 0 );
      __asm
      {
        vmovaps xmm11, [rsp+178h+var_98]
        vmovaps xmm10, [rsp+178h+var_88]
        vmovaps xmm9, [rsp+178h+var_78]
        vmovaps xmm8, [rsp+178h+var_68]
        vmovaps xmm7, [rsp+178h+var_58]
        vmovaps xmm6, [rsp+178h+var_48]
      }
    }
  }
  return 1;
}

/*
==============
SV_SnapshotArchive_FindCachedFrameForDeltaWorldState
==============
*/
bool SV_SnapshotArchive_FindCachedFrameForDeltaWorldState(const cachedSnapshotWorldState_t **outCachedSnapshotWorldState)
{
  int v2; 
  int MinArchiveFrameIndex; 
  int v4; 
  cachedSnapshotWorldState_t *v5; 
  int nextCachedSnapshotEntities; 
  __int64 v8; 
  __int64 v9; 

  v2 = 0;
  MinArchiveFrameIndex = SV_SnapshotArchive_GetMinArchiveFrameIndex();
  if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 512 > 0 )
    v2 = g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 512;
  if ( !outCachedSnapshotWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1449, ASSERT_TYPE_ASSERT, "( outCachedSnapshotWorldState )", (const char *)&queryFormat, "outCachedSnapshotWorldState") )
    __debugbreak();
  *outCachedSnapshotWorldState = NULL;
  v4 = g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 1;
  if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 1 >= v2 )
  {
    while ( 1 )
    {
      v5 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[v4 % 512];
      if ( v5->archivedFrame > MinArchiveFrameIndex && !v5->usesDelta )
        break;
      if ( --v4 < v2 )
        return *outCachedSnapshotWorldState != NULL;
    }
    if ( v5->first_entity < 0 )
    {
      LODWORD(v8) = v5->first_entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1468, ASSERT_TYPE_ASSERT, "( ( cachedWorldStateFrame->first_entity >= 0 ) )", "( cachedWorldStateFrame->first_entity ) = %i", v8) )
        __debugbreak();
    }
    if ( v5->first_entityClientMask < 0 )
    {
      LODWORD(v8) = v5->first_entityClientMask;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1469, ASSERT_TYPE_ASSERT, "( ( cachedWorldStateFrame->first_entityClientMask >= 0 ) )", "( cachedWorldStateFrame->first_entityClientMask ) = %i", v8) )
        __debugbreak();
    }
    if ( v5->first_entity != v5->first_entityClientMask )
    {
      LODWORD(v8) = v5->first_entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1472, ASSERT_TYPE_ASSERT, "( cachedWorldStateFrame->first_entity ) == ( cachedWorldStateFrame->first_entityClientMask )", "cachedWorldStateFrame->first_entity == cachedWorldStateFrame->first_entityClientMask\n\t%i, %i", v8, v5->first_entityClientMask) )
        __debugbreak();
    }
    nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
    {
      LODWORD(v9) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
      LODWORD(v8) = g_svSnapshotData.nextCachedSnapshotEntities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1473, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", v8, v9) )
        __debugbreak();
      nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
    }
    if ( v5->first_entity >= nextCachedSnapshotEntities - 10800 && v5->first_clientState >= g_svSnapshotData.nextCachedSnapshotClientStates - g_svSnapshotData.numCachedSnapshotClientStates && v5->first_agent >= g_svSnapshotData.nextCachedSnapshotAgents - g_svSnapshotData.numCachedSnapshotAgents && g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex <= v5->scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount && g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex <= v5->scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount && v5->umbraGateStatesIndex >= g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates )
      *outCachedSnapshotWorldState = v5;
  }
  return *outCachedSnapshotWorldState != NULL;
}

/*
==============
SV_SnapshotArchive_GetMinArchiveFrameIndex
==============
*/
__int64 SV_SnapshotArchive_GetMinArchiveFrameIndex()
{
  if ( g_svSnapshotData.archive.archivedFrameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1359, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedFrameDuration > 0 )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedFrameDuration > 0") )
    __debugbreak();
  return (unsigned int)(g_svSnapshotData.archive.nextArchivedSnapshotFrames - 1000 / g_svSnapshotData.archive.archivedFrameDuration);
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap
==============
*/
void SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap(msg_t *msgWeaponMap, bool *isDeltaEncoded)
{
  int MinArchiveFrameIndex; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  cachedSnapshotWeaponMap_t *v13; 
  cachedSnapshotWeaponMap_t *v14; 
  bool v15; 
  SnapshotInfo snapInfo; 

  if ( !msgWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1516, ASSERT_TYPE_ASSERT, "( msgWeaponMap )", (const char *)&queryFormat, "msgWeaponMap") )
    __debugbreak();
  if ( !isDeltaEncoded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1517, ASSERT_TYPE_ASSERT, "( isDeltaEncoded )", (const char *)&queryFormat, "isDeltaEncoded") )
    __debugbreak();
  if ( !SV_SnapshotMP_ArchiveEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1518, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_ArchiveEnabled() )", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
  if ( !g_svSnapshotData.cachedSnapshotWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1519, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotWeapons )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotWeapons") )
    __debugbreak();
  SnapshotInfo::reset(&snapInfo);
  snapInfo.archived = 1;
  snapInfo.entJustUnlinked = 0;
  Profile_Begin(330);
  _RSI = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4Ch]
    vmovss  dword ptr [rsp+2C8h+snapInfo.mapCenter], xmm0
    vmovss  xmm1, dword ptr [rax+50h]
    vmovss  dword ptr [rsp+2C8h+snapInfo.mapCenter+4], xmm1
    vmovss  xmm0, dword ptr [rax+54h]
    vmovss  dword ptr [rsp+2C8h+snapInfo.mapCenter+8], xmm0
  }
  snapInfo.serverTime = _RSI->time;
  MinArchiveFrameIndex = SV_SnapshotArchive_GetMinArchiveFrameIndex();
  v9 = 0;
  v10 = MinArchiveFrameIndex;
  if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 512 > 0 )
    v9 = g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 512;
  v11 = g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 1;
  if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 1 < v9 )
    goto LABEL_19;
  while ( 1 )
  {
    v12 = v11 % 512;
    v13 = &g_svSnapshotData.cachedSnapshotWeaponMapFrames[v11 % 512];
    if ( g_svSnapshotData.cachedSnapshotWeaponMapFrames[v11 % 512].archivedFrame > v10 && !g_svSnapshotData.cachedSnapshotWeaponMapFrames[v12].usesDelta )
      break;
    if ( --v11 < v9 )
      goto LABEL_19;
  }
  if ( g_svSnapshotData.cachedSnapshotWeaponMapFrames[v12].first_weapon < g_svSnapshotData.nextCachedSnapshotWeapon - g_svSnapshotData.numCachedSnapshotWeapons )
  {
LABEL_19:
    MSG_WriteBit1(msgWeaponMap);
    MSG_WriteLong(msgWeaponMap, _RSI->time);
    v14 = &g_svSnapshotData.cachedSnapshotWeaponMapFrames[g_svSnapshotData.nextCachedSnapshotWeaponMapFrames % 512];
    v14->archivedFrame = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
    v14->usesDelta = 0;
    v14->time = _RSI->time;
    SV_WriteCachedWeapons(msgWeaponMap, v14, &snapInfo);
    if ( ++g_svSnapshotData.nextCachedSnapshotWeaponMapFrames >= 2147483646 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1575, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotWeaponMapFrames wrapped\n") )
        __debugbreak();
      g_svSnapshotData.snapArchiveEncodeError = 1;
    }
    v15 = 0;
  }
  else
  {
    MSG_WriteBit0(msgWeaponMap);
    MSG_WriteLong(msgWeaponMap, v13->archivedFrame);
    MSG_WriteLong(msgWeaponMap, _RSI->time);
    SV_WriteDeltaCachedWeapons(msgWeaponMap, v13, &snapInfo);
    v15 = 1;
  }
  *isDeltaEncoded = v15;
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotEncodeWorldState
==============
*/
void SV_SnapshotMP_ArchiveSnapshotEncodeWorldState(msg_t *msgWorldState, bool *isDeltaEncoded)
{
  __int64 v4; 
  __int64 v5; 
  EntityLoDs *p_newEntitiesLoD; 
  EntityLoDs *p_oldEntitiesLoD; 
  cachedSnapshotWorldState_t *v12; 
  int cursize; 
  const dvar_t *v14; 
  bool v15; 
  cachedSnapshotWorldState_t *v16; 
  int nextCachedSnapshotUmbraGateStatesIndex; 
  int v22; 
  const dvar_t *v23; 
  cachedSnapshotWorldState_t *outCachedSnapshotWorldState; 
  SnapshotInfo snapInfo; 

  if ( !msgWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1595, ASSERT_TYPE_ASSERT, "( msgWorldState )", (const char *)&queryFormat, "msgWorldState") )
    __debugbreak();
  if ( !isDeltaEncoded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1596, ASSERT_TYPE_ASSERT, "( isDeltaEncoded )", (const char *)&queryFormat, "isDeltaEncoded") )
    __debugbreak();
  if ( !SV_SnapshotMP_ArchiveEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1597, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_ArchiveEnabled() )", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
  if ( !g_svSnapshotData.cachedSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1598, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntities )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntities") )
    __debugbreak();
  if ( !g_svSnapshotData.cachedSnapshotClientStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1599, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotClientStates )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotClientStates") )
    __debugbreak();
  if ( !g_svSnapshotData.cachedSnapshotAgents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1600, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotAgents )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotAgents") )
    __debugbreak();
  SnapshotInfo::reset(&snapInfo);
  v4 = 4i64;
  snapInfo.archived = 1;
  v5 = 4i64;
  snapInfo.entJustUnlinked = 0;
  snapInfo.sendNetfieldLoDBit = 0;
  p_newEntitiesLoD = &snapInfo.newEntitiesLoD;
  do
  {
    *(_QWORD *)p_newEntitiesLoD->array = -1i64;
    *(_QWORD *)&p_newEntitiesLoD->array[2] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD->array[4] = -1i64;
    p_newEntitiesLoD = (EntityLoDs *)((char *)p_newEntitiesLoD + 64);
    *(_QWORD *)&p_newEntitiesLoD[-1].array[54] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[56] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[58] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[60] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[62] = -1i64;
    --v5;
  }
  while ( v5 );
  p_oldEntitiesLoD = &snapInfo.oldEntitiesLoD;
  do
  {
    *(_QWORD *)p_oldEntitiesLoD->array = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD->array[2] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD->array[4] = -1i64;
    p_oldEntitiesLoD = (EntityLoDs *)((char *)p_oldEntitiesLoD + 64);
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[54] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[56] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[58] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[60] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[62] = -1i64;
    --v4;
  }
  while ( v4 );
  Profile_Begin(331);
  _RSI = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4Ch]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter], xmm0
    vmovss  xmm1, dword ptr [rax+50h]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter+4], xmm1
    vmovss  xmm0, dword ptr [rax+54h]
    vmovss  dword ptr [rsp+2D8h+snapInfo.mapCenter+8], xmm0
  }
  snapInfo.serverTime = _RSI->time;
  if ( SV_SnapshotArchive_FindCachedFrameForDeltaWorldState((const cachedSnapshotWorldState_t **)&outCachedSnapshotWorldState) )
  {
    v12 = outCachedSnapshotWorldState;
    if ( !outCachedSnapshotWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1633, ASSERT_TYPE_ASSERT, "( baseCachedWorldStateFrame )", (const char *)&queryFormat, "baseCachedWorldStateFrame") )
      __debugbreak();
    MSG_WriteBit0(msgWorldState);
    MSG_WriteLong(msgWorldState, v12->archivedFrame);
    MSG_WriteLong(msgWorldState, _RSI->time);
    if ( !msgWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1311, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1312, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
      __debugbreak();
    cursize = msgWorldState->cursize;
    MSG_WriteDeltaUmbraGateState(msgWorldState, &g_svSnapshotData.cachedSnapshotUmbraGateStates[v12->umbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates], &level.umbraGateStates);
    v14 = DVARINT_sv_printArchiveDetails;
    if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer )
      Com_Printf(15, "[Snapshot] Archived delta snapshot umbra gate states: %d bytes\n", (unsigned int)(msgWorldState->cursize - cursize));
    SV_WriteDeltaCachedClientStates(msgWorldState, v12, &snapInfo);
    SV_WriteDeltaCachedAgents(msgWorldState, v12, &snapInfo);
    SV_WriteDeltaCachedEntityLoD(msgWorldState, v12, &snapInfo);
    SV_WriteDeltaCachedScriptables(msgWorldState, v12, &snapInfo);
    SV_WriteDeltaCachedEntities(msgWorldState, v12, &snapInfo);
    v15 = 1;
  }
  else
  {
    MSG_WriteBit1(msgWorldState);
    MSG_WriteLong(msgWorldState, _RSI->time);
    v16 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[g_svSnapshotData.nextCachedSnapshotWorldStateFrames % 512];
    v16->archivedFrame = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
    v16->usesDelta = 0;
    v16->time = _RSI->time;
    if ( !msgWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1332, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
      __debugbreak();
    nextCachedSnapshotUmbraGateStatesIndex = g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
    __asm { vmovups ymm0, ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array; level_locals_t level }
    v16->umbraGateStatesIndex = g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
    _RCX = 3i64 * (nextCachedSnapshotUmbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates);
    _RAX = g_svSnapshotData.cachedSnapshotUmbraGateStates;
    _RCX *= 2i64;
    __asm
    {
      vmovups ymmword ptr [rax+rcx*8], ymm0
      vmovups xmm1, xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h; level_locals_t level
      vmovups xmmword ptr [rax+rcx*8+20h], xmm1
    }
    ++g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
    v22 = msgWorldState->cursize;
    MSG_WriteDeltaUmbraGateState(msgWorldState, NULL, &level.umbraGateStates);
    v23 = DVARINT_sv_printArchiveDetails;
    if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.integer )
      Com_Printf(15, "[Snapshot] Archived delta snapshot umbra gate states: %d bytes\n", (unsigned int)(msgWorldState->cursize - v22));
    SV_WriteCachedClientStates(msgWorldState, v16, &snapInfo);
    SV_WriteCachedAgents(msgWorldState, v16, &snapInfo);
    SV_WriteCachedEntityLoD(msgWorldState, v16, &snapInfo);
    SV_WriteCachedScriptables(msgWorldState, v16, &snapInfo);
    SV_WriteCachedEntities(msgWorldState, v16, &snapInfo);
    if ( ++g_svSnapshotData.nextCachedSnapshotWorldStateFrames >= 2147483646 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1681, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotWorldStateFrames wrapped\n") )
        __debugbreak();
      g_svSnapshotData.snapArchiveEncodeError = 1;
    }
    v15 = 0;
  }
  *isDeltaEncoded = v15;
  Profile_EndInternal(NULL);
}

/*
==============
SV_WriteCachedAgents
==============
*/
void SV_WriteCachedAgents(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, SnapshotInfo *snapInfo)
{
  int cursize; 
  int v7; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 v9; 
  const dvar_t *v27; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 439, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 440, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 441, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  cursize = msg->cursize;
  v7 = 0;
  cachedFrame->num_agents = 0;
  cachedFrame->first_agent = g_svSnapshotData.nextCachedSnapshotAgents;
  MSG_ClearLastReferencedEntity(msg);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->agentCount > 0 )
  {
    v9 = 0i64;
    do
    {
      if ( PersistentGlobalsMP->agents[v9].entityNum != 2047 )
      {
        if ( g_svSnapshotData.nextCachedSnapshotAgents >= 2147483646 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 466, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotAgents wrapped\n") )
            __debugbreak();
          g_svSnapshotData.snapArchiveEncodeError = 1;
          break;
        }
        _RDI = &g_svSnapshotData.cachedSnapshotAgents[(__int64)(g_svSnapshotData.nextCachedSnapshotAgents % g_svSnapshotData.numCachedSnapshotAgents)];
        _RAX = G_MainMP_GetAgentState(v7);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rdi], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rdi+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rdi+20h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rdi+30h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rdi+40h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rdi+50h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rdi+60h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rdi+70h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rdi+80h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rdi+90h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rdi+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rdi+0B0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0C0h]
          vmovups xmmword ptr [rdi+0C0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0D0h]
          vmovups xmmword ptr [rdi+0D0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0E0h]
          vmovups xmmword ptr [rdi+0E0h], xmm0
        }
        *(_QWORD *)&_RDI->agentState.serverDobjHeldWeapon.m_mapEntryId = *(_QWORD *)&_RAX->serverDobjHeldWeapon.m_mapEntryId;
        *(_DWORD *)&_RDI->agentState.serverDobjHideWeapon = *(_DWORD *)&_RAX->serverDobjHideWeapon;
        MSG_WriteDeltaAgent(snapInfo, msg, PersistentGlobalsMP->time, NULL, &_RDI->agentState, 1, 1);
        ++g_svSnapshotData.nextCachedSnapshotAgents;
        ++cachedFrame->num_agents;
      }
      ++v7;
      ++v9;
    }
    while ( v7 < PersistentGlobalsMP->agentCount );
  }
  MSG_WriteBit0(msg);
  v27 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer )
    Com_Printf(15, "[Snapshot] Archived snapshot agents: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteCachedClientStates
==============
*/
void SV_WriteCachedClientStates(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, SnapshotInfo *snapInfo)
{
  int cursize; 
  signed int v7; 
  cachedClientState_t *v8; 
  __int64 v11; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v22; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 303, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 304, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 305, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  cursize = msg->cursize;
  v7 = 0;
  cachedFrame->num_clientStates = 0;
  cachedFrame->first_clientState = g_svSnapshotData.nextCachedSnapshotClientStates;
  MSG_ClearLastReferencedEntity(msg);
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( SvClient::GetCommonClient(v7)->state >= CS_CONNECTED )
      {
        if ( g_svSnapshotData.nextCachedSnapshotClientStates >= 2147483646 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 327, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotClientStates wrapped\n") )
            __debugbreak();
          g_svSnapshotData.snapArchiveEncodeError = 1;
          break;
        }
        v8 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)(g_svSnapshotData.nextCachedSnapshotClientStates % g_svSnapshotData.numCachedSnapshotClientStates)];
        _RAX = G_MainMP_GetClientState(v7);
        _RDX = v8;
        v11 = 3i64;
        do
        {
          _RDX = (cachedClientState_t *)((char *)_RDX + 128);
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RAX = (clientState_t *)((char *)_RAX + 128);
          __asm
          {
            vmovups xmmword ptr [rdx-80h], xmm0
            vmovups xmm1, xmmword ptr [rax-70h]
            vmovups xmmword ptr [rdx-70h], xmm1
            vmovups xmm0, xmmword ptr [rax-60h]
            vmovups xmmword ptr [rdx-60h], xmm0
            vmovups xmm1, xmmword ptr [rax-50h]
            vmovups xmmword ptr [rdx-50h], xmm1
            vmovups xmm0, xmmword ptr [rax-40h]
            vmovups xmmword ptr [rdx-40h], xmm0
            vmovups xmm1, xmmword ptr [rax-30h]
            vmovups xmmword ptr [rdx-30h], xmm1
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rdx-20h], xmm0
            vmovups xmm1, xmmword ptr [rax-10h]
            vmovups xmmword ptr [rdx-10h], xmm1
          }
          --v11;
        }
        while ( v11 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rdx], xmm0
        }
        *(_QWORD *)&_RDX->cs.doNotSimulateTracers = *(_QWORD *)&_RAX->doNotSimulateTracers;
        PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
        MSG_WriteDeltaClient(snapInfo, msg, PersistentGlobalsMP->time, NULL, &v8->cs, 1, 1);
        ++g_svSnapshotData.nextCachedSnapshotClientStates;
        ++cachedFrame->num_clientStates;
      }
      ++v7;
    }
    while ( v7 < (int)SvClient::ms_clientCount );
  }
  MSG_WriteBit0(msg);
  v22 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.integer )
    Com_Printf(15, "[Snapshot] Archived snapshot clients: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteCachedEntities
==============
*/
void SV_WriteCachedEntities(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, SnapshotInfo *snapInfo)
{
  msg_t *v5; 
  int cursize; 
  int v7; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  __int64 v9; 
  const dvar_t *v26; 
  const char *v27; 
  const char *v28; 
  __int16 number; 
  unsigned int clientMaskSize; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  bool v32; 
  const dvar_t *v33; 
  __int64 num_entities; 
  char *fmt; 
  char *fromClientMask; 
  char *toClientMask; 
  int v38; 
  char *v40; 
  entityState_t *to; 
  char v42[8]; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  entityState_t from; 
  int v47[29]; 
  int v48; 

  v5 = msg;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1198, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1199, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1200, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  cursize = v5->cursize;
  v7 = 0;
  cachedFrame->num_entities = 0;
  cachedFrame->first_entity = g_svSnapshotData.nextCachedSnapshotEntities;
  cachedFrame->num_entityClientMask = 0;
  cachedFrame->first_entityClientMask = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
  v38 = cursize;
  MSG_ClearLastReferencedEntity(v5);
  memset_0(v47, 0, 0x78ui64);
  memset_0(&from, 0, sizeof(from));
  *(_QWORD *)v42 = 0i64;
  v43 = 0i64;
  v44 = 0i64;
  v45 = 0;
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->num_entities <= 0 )
    goto LABEL_32;
  v9 = 0i64;
  while ( 1 )
  {
    _RBX = &SvGameGlobalsMP->gentities[v9];
    if ( !SV_SnapshotArchiveMP_IsEntityRelevant(_RBX, v7) )
      goto LABEL_24;
    if ( g_svSnapshotData.nextCachedSnapshotEntities >= 2147483646 )
      break;
    if ( g_svSnapshotData.nextCachedSnapshotEntityClientMask >= 2147483646 )
    {
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1244, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotEntityClientMask wrapped\n");
      goto LABEL_28;
    }
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    to = &g_svSnapshotData.cachedSnapshotEntities[g_svSnapshotData.nextCachedSnapshotEntities % 10800];
    __asm
    {
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rax+50h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rax+70h], xmm1
      vmovups xmm0, xmmword ptr [rbx+80h]
      vmovups xmmword ptr [rax+80h], xmm0
      vmovups xmm1, xmmword ptr [rbx+90h]
      vmovups xmmword ptr [rax+90h], xmm1
      vmovups xmm0, xmmword ptr [rbx+0A0h]
      vmovups xmmword ptr [rax+0A0h], xmm0
      vmovups xmm1, xmmword ptr [rbx+0B0h]
      vmovups xmmword ptr [rax+0B0h], xmm1
      vmovups xmm0, xmmword ptr [rbx+0C0h]
      vmovups xmmword ptr [rax+0C0h], xmm0
      vmovups xmm1, xmmword ptr [rbx+0D0h]
      vmovups xmmword ptr [rax+0D0h], xmm1
      vmovups xmm0, xmmword ptr [rbx+0E0h]
      vmovups xmmword ptr [rax+0E0h], xmm0
    }
    *(_QWORD *)&to->partBits.array[6] = *(_QWORD *)&_RBX->s.partBits.array[6];
    v40 = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * (g_svSnapshotData.nextCachedSnapshotEntityClientMask % 10800);
    memcpy_0(v40, &_RBX->clientMask, g_svSnapshotData.clientMaskSize);
    if ( _RBX->s.eType >= ET_EVENTS )
    {
      ++v48;
    }
    else
    {
      v26 = DVARINT_sv_printArchiveDetails;
      if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.integer > 1 )
      {
        v27 = SL_ConvertToString(_RBX->targetname);
        v28 = SL_ConvertToString(_RBX->classname);
        Com_Printf(25, "[Snapshot] Ent %i - eType %i - classname %s, targetname %s\n", (unsigned int)_RBX->s.number, (unsigned int)_RBX->s.eType, v28, v27);
      }
      v5 = msg;
      ++v47[_RBX->s.eType];
    }
    number = _RBX->s.number;
    snapInfo->fromBaseline = 1;
    clientMaskSize = g_svSnapshotData.clientMaskSize;
    from.number = number;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    MSG_WriteDeltaArchivedEntity(snapInfo, v5, PersistentGlobalsMP->time, &from, to, v42, v40, clientMaskSize);
    snapInfo->fromBaseline = 0;
    ++g_svSnapshotData.nextCachedSnapshotEntities;
    ++g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    ++cachedFrame->num_entities;
    ++cachedFrame->num_entityClientMask;
LABEL_24:
    ++v7;
    ++v9;
    if ( v7 >= SvGameGlobalsMP->num_entities )
      goto LABEL_31;
  }
  v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1237, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotEntities wrapped\n");
LABEL_28:
  if ( v32 )
    __debugbreak();
  g_svSnapshotData.snapArchiveEncodeError = 1;
LABEL_31:
  cursize = v38;
LABEL_32:
  MSG_WriteEntityIndex(snapInfo, v5, 2047, 11);
  v33 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.integer )
  {
    Com_Printf(15, "[Snapshot] Archived snapshot entities: %d bytes (%d entities)\n", (unsigned int)(v5->cursize - cursize), (unsigned int)cachedFrame->num_entities);
    num_entities = (unsigned int)cachedFrame->num_entities;
    LODWORD(fmt) = g_svSnapshotData.archive.archivedFrameDuration * (10800 / (int)num_entities);
    Com_Printf(14, "[Snapshot] %i/%i snapshotEntities stored - this pace would give us %ims of snaps\n", num_entities, 10800i64, fmt);
  }
  g_svSnapshotData.archivedEntityCountWorkerAsync = cachedFrame->num_entities;
  if ( cachedFrame->num_entities != cachedFrame->num_entityClientMask )
  {
    LODWORD(toClientMask) = cachedFrame->num_entityClientMask;
    LODWORD(fromClientMask) = cachedFrame->num_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "( cachedFrame->num_entities ) == ( cachedFrame->num_entityClientMask )", "cachedFrame->num_entities == cachedFrame->num_entityClientMask\n\t%i, %i", fromClientMask, toClientMask) )
      __debugbreak();
  }
  if ( cachedFrame->first_entity != cachedFrame->first_entityClientMask )
  {
    LODWORD(toClientMask) = cachedFrame->first_entityClientMask;
    LODWORD(fromClientMask) = cachedFrame->first_entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1303, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", fromClientMask, toClientMask) )
      __debugbreak();
  }
  if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
  {
    LODWORD(toClientMask) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    LODWORD(fromClientMask) = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1304, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", fromClientMask, toClientMask) )
      __debugbreak();
  }
}

/*
==============
SV_WriteCachedEntityLoD
==============
*/
void SV_WriteCachedEntityLoD(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, SnapshotInfo *snapInfo)
{
  int cursize; 
  signed int v7; 
  cachedEntityLoD_t *v8; 
  const EntityLoDs *p_clientEntityLoD; 
  const dvar_t *v10; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 599, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 600, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 601, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( g_svSnapshotData.useNetfieldLoD )
  {
    if ( !g_svSnapshotData.cachedSnapshotEntityLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 609, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntityLoD != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntityLoD != nullptr") )
      __debugbreak();
    cursize = msg->cursize;
    v7 = 0;
    cachedFrame->num_entityLoD = 0;
    cachedFrame->first_entityLoD = g_svSnapshotData.nextCachedSnapshotEntityLoD;
    MSG_ClearLastReferencedEntity(msg);
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v7)->state >= CS_CONNECTED )
        {
          if ( g_svSnapshotData.nextCachedSnapshotEntityLoD >= 2147483646 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 631, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotEntityLoD wrapped\n") )
              __debugbreak();
            g_svSnapshotData.snapArchiveEncodeError = 1;
            break;
          }
          v8 = &g_svSnapshotData.cachedSnapshotEntityLoD[g_svSnapshotData.nextCachedSnapshotEntityLoD % g_svSnapshotData.numCachedSnapshotEntityLoD];
          v8->lodInfo.clientIndex = v7;
          p_clientEntityLoD = &v8->lodInfo.clientEntityLoD;
          v8->lodInfo.clientEntityLoD = *G_ActiveMP_GetEntityLoD(v7);
          MSG_WriteDeltaEntityLoD(snapInfo, msg, NULL, p_clientEntityLoD, v7);
          ++g_svSnapshotData.nextCachedSnapshotEntityLoD;
          ++cachedFrame->num_entityLoD;
        }
        ++v7;
      }
      while ( v7 < (int)SvClient::ms_clientCount );
    }
    MSG_WriteBit0(msg);
    v10 = DVARINT_sv_printArchiveDetails;
    if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.integer )
      Com_Printf(15, "[Snapshot] Archived snapshot entity lod: %d bytes\n", (unsigned int)(msg->cursize - cursize));
  }
}

/*
==============
SV_WriteCachedScriptables
==============
*/
void SV_WriteCachedScriptables(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, SnapshotInfo *snapInfo)
{
  __int64 cachedInstNextIndex; 
  unsigned int scriptableInstCount; 
  __int64 v8; 
  ScriptableReplicatedInstance *v9; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  const ScriptablePartWorldState *PartWorldState; 
  unsigned int TotalReplicatedPartsLimit; 
  __int64 scriptablePartFirstIndex; 
  unsigned int scriptablePartCount; 
  __int64 v15; 
  int v16; 
  ScriptablePartData *v17; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  int cursize; 
  const ScriptableReplicatedLimits *v20; 
  const dvar_t *v21; 
  __int64 cachedPartNextIndex; 
  ScriptablePartData *toParts; 
  __int64 toPartCount; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 947, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 948, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 949, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 958, ASSERT_TYPE_ASSERT, "( sbl->cachedInstNextIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "%s < %s\n\t%lli, %lli", "sbl->cachedInstNextIndex", "SCRIPTABLE_SNAPSHOT_INDEX_MAX", g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  cachedFrame->scriptableInstCount = ScriptableSv_GetReplicatedInstanceLimit();
  cachedInstNextIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  cachedFrame->scriptableInstFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  if ( cachedInstNextIndex != g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex )
  {
    LODWORD(toPartCount) = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
    LODWORD(toParts) = cachedInstNextIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 895, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptableInstFirstIndex ) == ( sbl->cachedInstNextIndex )", "cachedFrame->scriptableInstFirstIndex == sbl->cachedInstNextIndex\n\t%i, %i", toParts, toPartCount) )
      __debugbreak();
  }
  if ( cachedFrame->scriptableInstCount > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    LODWORD(toPartCount) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
    LODWORD(toParts) = cachedFrame->scriptableInstCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 896, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptableInstCount ) <= ( sbl->cachedPartCount )", "cachedFrame->scriptableInstCount <= sbl->cachedPartCount\n\t%i, %i", toParts, toPartCount) )
      __debugbreak();
  }
  scriptableInstCount = cachedFrame->scriptableInstCount;
  v8 = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount;
  if ( scriptableInstCount + (unsigned int)v8 > g_svSnapshotData.scriptableSnapshots.cachedInstCount )
  {
    g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex += (unsigned int)(g_svSnapshotData.scriptableSnapshots.cachedInstCount - v8);
    LODWORD(v8) = 0;
    scriptableInstCount = cachedFrame->scriptableInstCount;
    cachedFrame->scriptableInstFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  }
  v9 = &g_svSnapshotData.scriptableSnapshots.cachedInstances[(unsigned int)v8];
  ReplicatedInstances = ScriptableSv_GetReplicatedInstances();
  memcpy_0(v9, ReplicatedInstances, 32i64 * scriptableInstCount);
  if ( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 970, ASSERT_TYPE_ASSERT, "( sbl->cachedPartNextIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "%s < %s\n\t%lli, %lli", "sbl->cachedPartNextIndex", "SCRIPTABLE_SNAPSHOT_INDEX_MAX", g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  PartWorldState = ScriptableSv_GetPartWorldState();
  cachedFrame->scriptablePartFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  TotalReplicatedPartsLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
  scriptablePartFirstIndex = cachedFrame->scriptablePartFirstIndex;
  cachedFrame->scriptablePartCount = TotalReplicatedPartsLimit;
  if ( scriptablePartFirstIndex != g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex )
  {
    LODWORD(toPartCount) = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
    LODWORD(toParts) = scriptablePartFirstIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 924, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptablePartFirstIndex ) == ( sbl->cachedPartNextIndex )", "cachedFrame->scriptablePartFirstIndex == sbl->cachedPartNextIndex\n\t%i, %i", toParts, toPartCount) )
      __debugbreak();
  }
  if ( cachedFrame->scriptablePartCount > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    LODWORD(toPartCount) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
    LODWORD(toParts) = cachedFrame->scriptablePartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 925, ASSERT_TYPE_ASSERT, "( cachedFrame->scriptablePartCount ) <= ( sbl->cachedPartCount )", "cachedFrame->scriptablePartCount <= sbl->cachedPartCount\n\t%i, %i", toParts, toPartCount) )
      __debugbreak();
  }
  scriptablePartCount = cachedFrame->scriptablePartCount;
  v15 = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount;
  v16 = v15;
  if ( scriptablePartCount + (unsigned int)v15 > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex += (unsigned int)(g_svSnapshotData.scriptableSnapshots.cachedPartCount - v15);
    v16 = 0;
    scriptablePartCount = cachedFrame->scriptablePartCount;
    cachedFrame->scriptablePartFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  }
  if ( g_svSnapshotData.scriptableSnapshots.cachedPartCount - v16 < scriptablePartCount )
  {
    LODWORD(toPartCount) = scriptablePartCount;
    LODWORD(toParts) = g_svSnapshotData.scriptableSnapshots.cachedPartCount - v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 981, ASSERT_TYPE_ASSERT, "( sbl->cachedPartCount - nextCachePartArrayIndex ) >= ( cachedFrame->scriptablePartCount )", "sbl->cachedPartCount - nextCachePartArrayIndex >= cachedFrame->scriptablePartCount\n\t%i, %i", toParts, toPartCount) )
      __debugbreak();
  }
  v17 = &g_svSnapshotData.scriptableSnapshots.cachedParts[v16];
  ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
  ScriptableCommon_CopyScriptableParts(PartWorldState, v17, ReplicatedLimits);
  cursize = msg->cursize;
  v20 = ScriptableSv_GetReplicatedLimits();
  ScriptableMsg_WriteArchiveNoDelta(snapInfo, msg, v20, v9, cachedFrame->scriptableInstCount, v17, cachedFrame->scriptablePartCount);
  v21 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer )
    Com_Printf(15, "[Snapshot] Archived cached snapshot scriptable world: %d bytes\n", (unsigned int)(msg->cursize - cursize));
  g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex += cachedFrame->scriptableInstCount;
  cachedPartNextIndex = cachedFrame->scriptablePartCount + g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex = cachedPartNextIndex;
  if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex >= 0x7FFFFFFFFFFFFFFEi64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1012, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "scriptable cachedInstNextIndex wrapped\n") )
      __debugbreak();
    cachedPartNextIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
    g_svSnapshotData.snapArchiveEncodeError = 1;
  }
  if ( cachedPartNextIndex >= 0x7FFFFFFFFFFFFFFEi64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1018, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "scriptable cachedPartNextIndex wrapped\n") )
      __debugbreak();
    g_svSnapshotData.snapArchiveEncodeError = 1;
  }
}

/*
==============
SV_WriteCachedWeapons
==============
*/
void SV_WriteCachedWeapons(msg_t *msg, cachedSnapshotWeaponMap_t *cachedFrame, SnapshotInfo *snapInfo)
{
  int cursize; 
  GWeaponMap *Instance; 
  unsigned __int16 v8; 
  unsigned __int16 i; 
  unsigned __int16 v10; 
  const dvar_t *v16; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 752, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 753, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 754, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  cursize = msg->cursize;
  cachedFrame->num_weapons = 0;
  cachedFrame->first_weapon = g_svSnapshotData.nextCachedSnapshotWeapon;
  MSG_ClearLastReferencedEntity(msg);
  Instance = GWeaponMap::GetInstance();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v8 = BgWeaponMap::ms_runtimeSize;
  for ( i = 1; i < v8; ++i )
  {
    if ( !Instance->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v10 = truncate_cast<unsigned short,unsigned int>(i);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v10 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( Instance->m_entries[v10].index == v10 )
    {
      if ( g_svSnapshotData.nextCachedSnapshotWeapon >= 2147483646 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 778, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotWeapon wrapped\n") )
          __debugbreak();
        g_svSnapshotData.snapArchiveEncodeError = 1;
        break;
      }
      _RBX = &g_svSnapshotData.cachedSnapshotWeapons[g_svSnapshotData.nextCachedSnapshotWeapon % g_svSnapshotData.numCachedSnapshotWeapons];
      _RAX = BgWeaponMap::GetWeaponEntry(Instance, i);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27] = *(_DWORD *)&_RAX->weapon.attachmentVariationIndices[27];
      *(_WORD *)&_RBX->weapon.scopeVariation = *(_WORD *)&_RAX->weapon.scopeVariation;
      MSG_WriteDeltaArchivedWeaponMapEntry(snapInfo, msg, i, NULL, _RAX);
      ++g_svSnapshotData.nextCachedSnapshotWeapon;
      ++cachedFrame->num_weapons;
    }
  }
  MSG_WriteWeaponMapEntry_Index(msg, v8);
  v16 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer )
    Com_Printf(15, "[Snapshot] Archived snapshot weapons: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteDeltaCachedAgents
==============
*/
void SV_WriteDeltaCachedAgents(msg_t *msg, const cachedSnapshotWorldState_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int cursize; 
  SvPersistentGlobalsMP *v8; 
  __int64 agentCount; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int entityNum; 
  cachedAgent_s *v15; 
  int v16; 
  const agentState_s *AgentState; 
  const agentState_s *v18; 
  const dvar_t *v19; 
  int v20; 
  int v22; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 365, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 366, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 367, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  cursize = msg->cursize;
  v8 = PersistentGlobalsMP;
  v22 = cursize;
  agentCount = PersistentGlobalsMP->agentCount;
  LODWORD(PersistentGlobalsMP) = oldCachedFrame->num_agents;
  v10 = 0;
  v20 = (int)PersistentGlobalsMP;
  MSG_ClearLastReferencedEntity(msg);
  v11 = 0;
  v12 = agentCount;
  if ( (int)agentCount > 0 )
  {
    v13 = 0i64;
    while ( 1 )
    {
      entityNum = v8->agents[v13].entityNum;
      if ( entityNum != 2047 )
      {
        if ( v10 < v20 )
        {
          v15 = &g_svSnapshotData.cachedSnapshotAgents[(__int64)((v10 + oldCachedFrame->first_agent) % g_svSnapshotData.numCachedSnapshotAgents)];
          v16 = v15->agentState.entityNum;
        }
        else
        {
          v15 = NULL;
          v16 = 2047;
        }
        if ( entityNum == v16 )
        {
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 404, ASSERT_TYPE_ASSERT, "( oldCachedAgent )", (const char *)&queryFormat, "oldCachedAgent") )
            __debugbreak();
          AgentState = G_MainMP_GetAgentState(v11);
          MSG_WriteDeltaAgent(snapInfo, msg, v8->time, &v15->agentState, AgentState, 1, 1);
LABEL_24:
          ++v10;
          goto LABEL_25;
        }
        if ( entityNum >= v16 )
        {
          if ( entityNum > v16 )
            goto LABEL_24;
        }
        else
        {
          v18 = G_MainMP_GetAgentState(v11);
          MSG_WriteDeltaAgent(snapInfo, msg, v8->time, NULL, v18, 1, 1);
        }
      }
LABEL_25:
      ++v11;
      ++v13;
      if ( !--v12 )
      {
        cursize = v22;
        break;
      }
    }
  }
  MSG_WriteBit0(msg);
  v19 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer )
    Com_Printf(15, "[Snapshot] Archived delta'ed snapshot agents: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteDeltaCachedClientStates
==============
*/
void SV_WriteDeltaCachedClientStates(msg_t *msg, const cachedSnapshotWorldState_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  signed int v6; 
  signed int v7; 
  int v8; 
  int num_clientStates; 
  cachedClientState_t *v10; 
  int clientIndex; 
  int time; 
  const clientState_t *ClientState; 
  int v14; 
  const clientState_t *v15; 
  const dvar_t *v16; 
  unsigned int v17; 
  int cursize; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 205, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 206, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 207, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  v6 = SvClient::ms_clientCount;
  v7 = 0;
  v8 = 0;
  num_clientStates = oldCachedFrame->num_clientStates;
  v17 = SvClient::ms_clientCount;
  cursize = msg->cursize;
  MSG_ClearLastReferencedEntity(msg);
  while ( v7 < v6 )
  {
    if ( SvClient::GetCommonClient(v7)->state >= CS_CONNECTED )
    {
      if ( v8 >= num_clientStates )
      {
        v10 = NULL;
        clientIndex = 9999;
        goto LABEL_14;
      }
LABEL_13:
      v10 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)((v8 + oldCachedFrame->first_clientState) % g_svSnapshotData.numCachedSnapshotClientStates)];
      clientIndex = v10->cs.clientIndex;
LABEL_14:
      snapInfo->clientNum = v7;
      if ( v7 == clientIndex )
      {
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 256, ASSERT_TYPE_ASSERT, "( cachedClientState )", (const char *)&queryFormat, "cachedClientState") )
          __debugbreak();
        time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
        ClientState = G_MainMP_GetClientState(v7);
        MSG_WriteDeltaClient(snapInfo, msg, time, &v10->cs, ClientState, 1, 1);
        v6 = v17;
        ++v8;
        ++v7;
      }
      else if ( v7 >= clientIndex )
      {
        if ( v7 > clientIndex )
          ++v8;
      }
      else
      {
        v14 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
        v15 = G_MainMP_GetClientState(v7);
        MSG_WriteDeltaClient(snapInfo, msg, v14, NULL, v15, 1, 1);
        v6 = v17;
        ++v7;
      }
    }
    else
    {
      ++v7;
    }
  }
  if ( v8 < num_clientStates )
    goto LABEL_13;
  MSG_WriteBit0(msg);
  v16 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer )
    Com_Printf(15, "[Snapshot] Archived delta'ed snapshot clients: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteDeltaCachedEntities
==============
*/
void SV_WriteDeltaCachedEntities(msg_t *msg, const cachedSnapshotWorldState_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  msg_t *v4; 
  int v5; 
  int v6; 
  const entityState_t *v7; 
  int number; 
  const char *fromClientMask; 
  int v10; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  __int64 v12; 
  unsigned int v30; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned int v32; 
  SvPersistentGlobalsMP *v33; 
  const dvar_t *v34; 
  char *toClientMask; 
  __int64 clientMaskSize; 
  unsigned int clientMaskSizea; 
  unsigned int clientMaskSizeb; 
  int v39; 
  unsigned int v40; 
  int v41; 
  int cursize; 
  __int64 v45; 
  SvGameGlobalsMP *v46; 
  char v47[4]; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  char v54[8]; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  entityState_t to; 
  entityState_t from; 

  v4 = msg;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1075, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1076, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  cursize = v4->cursize;
  MSG_ClearLastReferencedEntity(v4);
  v5 = 0;
  v41 = -1;
  v6 = 0;
  if ( oldCachedFrame->first_entity < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1090, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entity >= 0 ) )", "%s\n\t( oldCachedFrame->first_entity ) = %i", "( oldCachedFrame->first_entity >= 0 )", oldCachedFrame->first_entity) )
    __debugbreak();
  v7 = &g_svSnapshotData.cachedSnapshotEntities[oldCachedFrame->first_entity % 10800];
  number = v7->number;
  fromClientMask = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * (oldCachedFrame->first_entityClientMask % 10800);
  memset_0(&from, 0, sizeof(from));
  *(_QWORD *)v54 = 0i64;
  v10 = 0;
  v55 = 0i64;
  v56 = 0i64;
  v57 = 0;
  v40 = 0;
  v39 = 0;
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  v46 = SvGameGlobalsMP;
  if ( SvGameGlobalsMP->num_entities > 0 )
  {
    v12 = 0i64;
    v45 = 0i64;
    do
    {
      _R13 = (__int16 *)((char *)&SvGameGlobalsMP->gentities->s.number + v12);
      if ( SV_SnapshotArchiveMP_IsEntityRelevant((const gentity_s *)_R13, v5) )
      {
        while ( v5 > number )
        {
          if ( ++v6 < oldCachedFrame->num_entities )
          {
            if ( oldCachedFrame->first_entity < 0 )
            {
              LODWORD(toClientMask) = oldCachedFrame->first_entity;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1131, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entity >= 0 ) )", "%s\n\t( oldCachedFrame->first_entity ) = %i", "( oldCachedFrame->first_entity >= 0 )", toClientMask) )
                __debugbreak();
            }
            v7 = &g_svSnapshotData.cachedSnapshotEntities[(v6 + oldCachedFrame->first_entity) % 10800];
            if ( v7->number <= number )
            {
              LODWORD(clientMaskSize) = number;
              LODWORD(toClientMask) = v7->number;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1133, ASSERT_TYPE_ASSERT, "(oldCachedEnt->number > oldnum)", "%s\n\toldCachedEnt->s.number = %i, oldnum = %i", "oldCachedEnt->number > oldnum", toClientMask, clientMaskSize) )
                __debugbreak();
            }
            number = v7->number;
            if ( oldCachedFrame->first_entityClientMask < 0 )
            {
              LODWORD(toClientMask) = oldCachedFrame->first_entityClientMask;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1136, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entityClientMask >= 0 ) )", "%s\n\t( oldCachedFrame->first_entityClientMask ) = %i", "( oldCachedFrame->first_entityClientMask >= 0 )", toClientMask) )
                __debugbreak();
            }
            fromClientMask = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * ((v6 + oldCachedFrame->first_entityClientMask) % 10800);
          }
          else
          {
            v7 = NULL;
            number = 9999;
            fromClientMask = NULL;
          }
        }
        __asm { vmovups xmm0, xmmword ptr [r13+0] }
        _RCX = &to;
        __asm
        {
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [r13+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [r13+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [r13+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
          vmovups xmm0, xmmword ptr [r13+40h]
          vmovups xmmword ptr [rcx+40h], xmm0
          vmovups xmm1, xmmword ptr [r13+50h]
          vmovups xmmword ptr [rcx+50h], xmm1
          vmovups xmm0, xmmword ptr [r13+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
          vmovups xmm1, xmmword ptr [r13+70h]
          vmovups xmmword ptr [rcx+70h], xmm1
          vmovups xmm0, xmmword ptr [r13+80h]
          vmovups xmmword ptr [rcx+80h], xmm0
          vmovups xmm1, xmmword ptr [r13+90h]
          vmovups xmmword ptr [rcx+90h], xmm1
          vmovups xmm0, xmmword ptr [r13+0A0h]
          vmovups xmmword ptr [rcx+0A0h], xmm0
          vmovups xmm1, xmmword ptr [r13+0B0h]
          vmovups xmmword ptr [rcx+0B0h], xmm1
          vmovups xmm0, xmmword ptr [r13+0C0h]
          vmovups xmmword ptr [rcx+0C0h], xmm0
          vmovups xmm1, xmmword ptr [r13+0D0h]
          vmovups xmmword ptr [rcx+0D0h], xmm1
          vmovups xmm0, xmmword ptr [r13+0E0h]
          vmovups xmmword ptr [rcx+0E0h], xmm0
        }
        *(_QWORD *)&to.partBits.array[6] = *((_QWORD *)_R13 + 30);
        *(_DWORD *)v47 = *((_DWORD *)_R13 + 279);
        v48 = *((_DWORD *)_R13 + 280);
        v49 = *((_DWORD *)_R13 + 281);
        v50 = *((_DWORD *)_R13 + 282);
        v51 = *((_DWORD *)_R13 + 283);
        v52 = *((_DWORD *)_R13 + 284);
        v53 = *((_DWORD *)_R13 + 285);
        if ( v41 == *_R13 )
        {
          LODWORD(clientMaskSize) = *_R13;
          LODWORD(toClientMask) = v41;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 1146, ASSERT_TYPE_ASSERT, "(lastEntityNum != ent->s.number)", "%s\n\tlastEntityNum is %i, cur entnum is %i", "lastEntityNum != ent->s.number", toClientMask, clientMaskSize) )
            __debugbreak();
        }
        from.number = *_R13;
        if ( number == v5 )
        {
          v30 = g_svSnapshotData.clientMaskSize;
          PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
          clientMaskSizea = v30;
          v4 = msg;
          MSG_WriteDeltaArchivedEntity(snapInfo, msg, PersistentGlobalsMP->time, v7, &to, fromClientMask, v47, clientMaskSizea);
        }
        else
        {
          snapInfo->fromBaseline = 1;
          v32 = g_svSnapshotData.clientMaskSize;
          v33 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
          clientMaskSizeb = v32;
          v4 = msg;
          MSG_WriteDeltaArchivedEntity(snapInfo, msg, v33->time, &from, &to, v54, v47, clientMaskSizeb);
          snapInfo->fromBaseline = 0;
        }
        ++v39;
        ++v40;
        v41 = *_R13;
      }
      ++v5;
      SvGameGlobalsMP = v46;
      v12 = v45 + 1456;
      v45 += 1456i64;
    }
    while ( v5 < v46->num_entities );
    v10 = v39;
  }
  MSG_WriteEntityIndex(snapInfo, v4, 2047, 11);
  v34 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.integer )
    Com_Printf(15, "[Snapshot] Archived delta'ed snapshot entities: %d bytes (%d entities)\n", (unsigned int)(v4->cursize - cursize), v40);
  g_svSnapshotData.archivedEntityCountWorkerAsync = v10;
}

/*
==============
SV_WriteDeltaCachedEntityLoD
==============
*/
void SV_WriteDeltaCachedEntityLoD(msg_t *msg, const cachedSnapshotWorldState_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  int v6; 
  signed int v7; 
  int v8; 
  int num_entityLoD; 
  cachedEntityLoD_t *v10; 
  int clientIndex; 
  const EntityLoDs *EntityLoD; 
  const EntityLoDs *v13; 
  const dvar_t *v14; 
  int cursize; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 500, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 501, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 502, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( g_svSnapshotData.useNetfieldLoD )
  {
    if ( !g_svSnapshotData.cachedSnapshotEntityLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 510, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntityLoD != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntityLoD != nullptr") )
      __debugbreak();
    v6 = 0;
    v7 = SvClient::ms_clientCount;
    v8 = 0;
    num_entityLoD = oldCachedFrame->num_entityLoD;
    cursize = msg->cursize;
    MSG_ClearLastReferencedEntity(msg);
    while ( v8 < v7 )
    {
      if ( SvClient::GetCommonClient(v8)->state >= CS_CONNECTED )
      {
        if ( v6 >= num_entityLoD )
        {
          v10 = NULL;
          clientIndex = 0x7FFFFFFF;
          goto LABEL_18;
        }
LABEL_17:
        v10 = &g_svSnapshotData.cachedSnapshotEntityLoD[(v6 + oldCachedFrame->first_entityLoD) % g_svSnapshotData.numCachedSnapshotEntityLoD];
        clientIndex = v10->lodInfo.clientIndex;
LABEL_18:
        if ( v8 == clientIndex )
        {
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 556, ASSERT_TYPE_ASSERT, "( oldEntityLoD != nullptr )", (const char *)&queryFormat, "oldEntityLoD != nullptr") )
            __debugbreak();
          EntityLoD = G_ActiveMP_GetEntityLoD(v8);
          MSG_WriteDeltaEntityLoD(snapInfo, msg, &v10->lodInfo, EntityLoD, v8);
          ++v6;
          ++v8;
        }
        else if ( v8 >= clientIndex )
        {
          if ( v8 > clientIndex )
            ++v6;
        }
        else
        {
          v13 = G_ActiveMP_GetEntityLoD(v8);
          MSG_WriteDeltaEntityLoD(snapInfo, msg, NULL, v13, v8++);
        }
      }
      else
      {
        ++v8;
      }
    }
    if ( v6 >= num_entityLoD )
    {
      MSG_WriteBit0(msg);
      v14 = DVARINT_sv_printArchiveDetails;
      if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.integer )
        Com_Printf(15, "[Snapshot] Archived delta'ed snapshot entity lods: %d bytes\n", (unsigned int)(msg->cursize - cursize));
      return;
    }
    goto LABEL_17;
  }
}

/*
==============
SV_WriteDeltaCachedScriptables
==============
*/
void SV_WriteDeltaCachedScriptables(msg_t *msg, const cachedSnapshotWorldState_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  const ScriptablePartWorldState *PartWorldState; 
  __int64 scriptableInstFirstIndex; 
  unsigned int scriptableInstCount; 
  const ScriptableReplicatedInstance *v9; 
  unsigned int ReplicatedInstanceLimit; 
  __int64 scriptablePartFirstIndex; 
  unsigned int fromPartCount; 
  const ScriptablePartData *fromParts; 
  ScriptablePartData *toParts; 
  unsigned int toPartCount; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  int cursize; 
  const ScriptableReplicatedLimits *v18; 
  const dvar_t *v19; 
  __int64 fromInstanceCount; 
  ScriptableReplicatedInstance *toInstances; 
  unsigned int toInstanceCount; 
  unsigned int v23; 
  ScriptablePartWorldState *r_partWorldState; 
  ScriptableReplicatedInstance *ReplicatedInstances; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 809, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 810, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 811, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  PartWorldState = ScriptableSv_GetPartWorldState();
  scriptableInstFirstIndex = oldCachedFrame->scriptableInstFirstIndex;
  r_partWorldState = (ScriptablePartWorldState *)PartWorldState;
  if ( scriptableInstFirstIndex >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 821, ASSERT_TYPE_ASSERT, "( oldCachedFrame->scriptableInstFirstIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "%s < %s\n\t%lli, %lli", "oldCachedFrame->scriptableInstFirstIndex", "SCRIPTABLE_SNAPSHOT_INDEX_MAX", scriptableInstFirstIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  scriptableInstCount = oldCachedFrame->scriptableInstCount;
  v23 = scriptableInstCount;
  v9 = &g_svSnapshotData.scriptableSnapshots.cachedInstances[(unsigned int)(oldCachedFrame->scriptableInstFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount)];
  ReplicatedInstances = (ScriptableReplicatedInstance *)ScriptableSv_GetReplicatedInstances();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  toInstanceCount = ReplicatedInstanceLimit;
  if ( scriptableInstCount != ReplicatedInstanceLimit )
  {
    LODWORD(toInstances) = ReplicatedInstanceLimit;
    LODWORD(fromInstanceCount) = scriptableInstCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 831, ASSERT_TYPE_ASSERT, "( oldInstCount ) == ( newInstanceCount )", "oldInstCount == newInstanceCount\n\t%i, %i", fromInstanceCount, toInstances) )
      __debugbreak();
  }
  scriptablePartFirstIndex = oldCachedFrame->scriptablePartFirstIndex;
  if ( scriptablePartFirstIndex >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 836, ASSERT_TYPE_ASSERT, "( oldCachedFrame->scriptablePartFirstIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "%s < %s\n\t%lli, %lli", "oldCachedFrame->scriptablePartFirstIndex", "SCRIPTABLE_SNAPSHOT_INDEX_MAX", scriptablePartFirstIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  fromPartCount = oldCachedFrame->scriptablePartCount;
  fromParts = &g_svSnapshotData.scriptableSnapshots.cachedParts[(unsigned int)(oldCachedFrame->scriptablePartFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount)];
  if ( ((unsigned __int8)&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 845, ASSERT_TYPE_ASSERT, "( Sys_InterlockedIncrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 1 )", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 1") )
    __debugbreak();
  if ( !g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 848, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer != nullptr") )
    __debugbreak();
  toParts = (ScriptablePartData *)g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer;
  toPartCount = ScriptableSv_GetTotalReplicatedPartsLimit();
  if ( toPartCount > g_svSnapshotData.scriptableSnapshots.archiveScratchSize )
  {
    LODWORD(toInstances) = g_svSnapshotData.scriptableSnapshots.archiveScratchSize;
    LODWORD(fromInstanceCount) = toPartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 852, ASSERT_TYPE_ASSERT, "( newPartCount * sizeof( ScriptablePartData ) ) <= ( g_svSnapshotData.scriptableSnapshots.archiveScratchSize )", "newPartCount * sizeof( ScriptablePartData ) <= g_svSnapshotData.scriptableSnapshots.archiveScratchSize\n\t%i, %i", fromInstanceCount, toInstances) )
      __debugbreak();
  }
  if ( toPartCount != fromPartCount )
  {
    LODWORD(toInstances) = fromPartCount;
    LODWORD(fromInstanceCount) = toPartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 853, ASSERT_TYPE_ASSERT, "( newPartCount ) == ( oldPartCount )", "newPartCount == oldPartCount\n\t%i, %i", fromInstanceCount, toInstances) )
      __debugbreak();
  }
  ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
  ScriptableCommon_CopyScriptableParts(r_partWorldState, toParts, ReplicatedLimits);
  cursize = msg->cursize;
  v18 = ScriptableSv_GetReplicatedLimits();
  ScriptableMsg_WriteArchiveDelta(snapInfo, msg, &g_svSnapshotData.scriptableSnapshots.archivePartChangedBits, v18, v9, v23, ReplicatedInstances, toInstanceCount, fromParts, fromPartCount, toParts, toPartCount);
  if ( ((unsigned __int64)&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 875, ASSERT_TYPE_ASSERT, "( Sys_InterlockedDecrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 0 )", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 0") )
    __debugbreak();
  v19 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer )
    Com_Printf(15, "[Snapshot] Archived delta snapshot scriptable world: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

/*
==============
SV_WriteDeltaCachedWeapons
==============
*/
void SV_WriteDeltaCachedWeapons(msg_t *msg, const cachedSnapshotWeaponMap_t *oldCachedFrame, SnapshotInfo *snapInfo)
{
  WeaponMapEntry *v6; 
  int cursize; 
  GWeaponMap *Instance; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  const WeaponMapEntry *WeaponEntry; 
  unsigned __int16 index; 
  unsigned __int16 v15; 
  SnapshotInfo *v16; 
  const WeaponMapEntry *v17; 
  const dvar_t *v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int16 i; 
  GWeaponMap *v23; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 666, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 667, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  v6 = NULL;
  if ( oldCachedFrame->num_weapons < 0 )
    goto LABEL_73;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( oldCachedFrame->num_weapons > BgWeaponMap::ms_runtimeSize )
  {
LABEL_73:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v19) = oldCachedFrame->num_weapons;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 668, ASSERT_TYPE_ASSERT, "( 0 ) <= ( oldCachedFrame->num_weapons ) && ( oldCachedFrame->num_weapons ) <= ( BgWeaponMap::GetRuntimeSize() )", "oldCachedFrame->num_weapons not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v19, 0i64, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 669, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  cursize = msg->cursize;
  MSG_ClearLastReferencedEntity(msg);
  Instance = GWeaponMap::GetInstance();
  v23 = Instance;
  v9 = 0;
  if ( oldCachedFrame->num_weapons )
    v6 = &g_svSnapshotData.cachedSnapshotWeapons[oldCachedFrame->first_weapon % g_svSnapshotData.numCachedSnapshotWeapons];
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v10 = BgWeaponMap::ms_runtimeSize;
  v11 = 1;
  for ( i = BgWeaponMap::ms_runtimeSize; v11 < i; ++v11 )
  {
    if ( !Instance->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v12 = truncate_cast<unsigned short,unsigned int>(v11);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v12 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( Instance->m_entries[v12].index == v12 )
    {
      WeaponEntry = BgWeaponMap::GetWeaponEntry(Instance, v11);
      if ( !WeaponEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 692, ASSERT_TYPE_ASSERT, "( newWeaponEntry )", (const char *)&queryFormat, "newWeaponEntry") )
        __debugbreak();
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( WeaponEntry->index >= BgWeaponMap::ms_runtimeSize )
      {
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        LODWORD(v20) = BgWeaponMap::ms_runtimeSize;
        LODWORD(v19) = WeaponEntry->index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 693, ASSERT_TYPE_ASSERT, "(unsigned)( newWeaponEntry->index ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "newWeaponEntry->index doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( v6 )
      {
        while ( 1 )
        {
          index = v6->index;
          v15 = WeaponEntry->index;
          if ( v6->index >= WeaponEntry->index )
            break;
          if ( ++v9 >= oldCachedFrame->num_weapons )
          {
            v6 = NULL;
            goto LABEL_55;
          }
          if ( index >= g_svSnapshotData.cachedSnapshotWeapons[(v9 + oldCachedFrame->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons].index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 704, ASSERT_TYPE_ASSERT, "( oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldWeaponIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index )", (const char *)&queryFormat, "oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldWeaponIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index") )
            __debugbreak();
          v6 = &g_svSnapshotData.cachedSnapshotWeapons[(v9 + oldCachedFrame->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons];
          if ( !v6 )
            goto LABEL_55;
        }
        if ( index <= v15 )
        {
          if ( index != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_archive_mp.cpp", 722, ASSERT_TYPE_ASSERT, "( oldWeaponEntry->index == newWeaponEntry->index )", (const char *)&queryFormat, "oldWeaponEntry->index == newWeaponEntry->index") )
            __debugbreak();
          ++v9;
          v16 = snapInfo;
          v17 = v6;
        }
        else
        {
          v17 = NULL;
          v16 = snapInfo;
        }
      }
      else
      {
LABEL_55:
        v16 = snapInfo;
        v17 = NULL;
      }
      MSG_WriteDeltaArchivedWeaponMapEntry(v16, msg, v11, v17, WeaponEntry);
      Instance = v23;
    }
    v10 = i;
  }
  MSG_WriteWeaponMapEntry_Index(msg, v10);
  v18 = DVARINT_sv_printArchiveDetails;
  if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer )
    Com_Printf(15, "[Snapshot] Archived delta'ed snapshot weapons: %d bytes\n", (unsigned int)(msg->cursize - cursize));
}

