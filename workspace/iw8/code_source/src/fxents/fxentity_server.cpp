/*
==============
G_FXEntity_ClearSystem
==============
*/

void G_FXEntity_ClearSystem(void)
{
  ?G_FXEntity_ClearSystem@@YAXXZ();
}

/*
==============
G_FXEntity_TriggerFX
==============
*/

void __fastcall G_FXEntity_TriggerFX(scrContext_t *scrContext)
{
  ?G_FXEntity_TriggerFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_GetFXEntity
==============
*/

FxEntity *__fastcall SV_GetFXEntity(unsigned int entnum)
{
  return ?SV_GetFXEntity@@YAPEAUFxEntity@@I@Z(entnum);
}

/*
==============
G_SaveFXEntities
==============
*/

void __fastcall G_SaveFXEntities(MemoryFile *memFile)
{
  ?G_SaveFXEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_LoadFXEntities
==============
*/

void __fastcall G_LoadFXEntities(SaveGame *save)
{
  ?G_LoadFXEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_FXEntitiesFreeAll
==============
*/

void G_FXEntitiesFreeAll(void)
{
  ?G_FXEntitiesFreeAll@@YAXXZ();
}

/*
==============
G_FXEntity_SpawnFX
==============
*/

void __fastcall G_FXEntity_SpawnFX(scrContext_t *scrContext)
{
  ?G_FXEntity_SpawnFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_FXEntityDelete
==============
*/

void __fastcall ScrCmd_FXEntityDelete(scr_entref_t entref)
{
  ?ScrCmd_FXEntityDelete@@YAXUscr_entref_t@@@Z(entref);
}

/*
==============
G_FXEntity_PlayLoopedFX
==============
*/

void __fastcall G_FXEntity_PlayLoopedFX(scrContext_t *scrContext)
{
  ?G_FXEntity_PlayLoopedFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ReserveNewIndex
==============
*/
__int64 ReserveNewIndex()
{
  __int64 i; 
  __int64 result; 
  int v2; 
  __int64 v3; 
  SoundEntFreeElem *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( s_soundGaplessNextIndex > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 106, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) <= ( ( 128 ) )", "s_soundGaplessNextIndex <= SOUND_ENTITY_MAX\n\t%i, %i", s_soundGaplessNextIndex, 128) )
    __debugbreak();
  if ( s_soundGapFirst )
    goto LABEL_48;
  if ( s_soundGaplessNextIndex != 128 )
    goto LABEL_49;
  if ( s_soundGapLast )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 109, ASSERT_TYPE_ASSERT, "( s_soundGapLast == 0 )", (const char *)&queryFormat, "s_soundGapLast == NULL") )
      __debugbreak();
    if ( s_soundGaplessNextIndex != 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = s_soundGaplessNextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 91, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) == ( ( 128 ) )", "s_soundGaplessNextIndex == SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
  }
  for ( i = 0i64; i < 128; ++i )
  {
    if ( !s_serverSoundEntities[i].spawned && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SoundEnts appear to be full, but there are actually one or more available.") )
      __debugbreak();
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411D288, 586i64);
  if ( s_soundGapFirst )
  {
LABEL_48:
    if ( !s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 124, ASSERT_TYPE_ASSERT, "( s_soundGapLast )", (const char *)&queryFormat, "s_soundGapLast") )
      __debugbreak();
    v2 = SoundGapQueue_IndexForElem(s_soundGapFirst);
    v3 = v2;
    if ( v2 < 0 )
    {
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 58, ASSERT_TYPE_ASSERT, "( num ) >= ( 0 )", "num >= 0\n\t%i, %i", v5, 0i64) )
        __debugbreak();
    }
    if ( (int)v3 >= 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 59, ASSERT_TYPE_ASSERT, "( num ) < ( ( 128 ) )", "num < SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    if ( !s_soundGapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 60, ASSERT_TYPE_ASSERT, "( s_soundGapFirst )", (const char *)&queryFormat, "s_soundGapFirst") )
      __debugbreak();
    v4 = &s_soundGapQueue[v3];
    if ( s_soundGapFirst != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 61, ASSERT_TYPE_ASSERT, "( s_soundGapFirst == &s_soundGapQueue[num] )", (const char *)&queryFormat, "s_soundGapFirst == &s_soundGapQueue[num]") )
      __debugbreak();
    if ( s_soundGapLast == s_soundGapFirst )
    {
      if ( s_soundGapFirst->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 65, ASSERT_TYPE_ASSERT, "(s_soundGapFirst->next == 0)", (const char *)&queryFormat, "s_soundGapFirst->next == NULL") )
        __debugbreak();
      s_soundGapLast = NULL;
    }
    result = (unsigned int)v3;
    s_soundGapFirst = s_soundGapFirst->next;
    v4->next = NULL;
  }
  else
  {
LABEL_49:
    if ( s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 132, ASSERT_TYPE_ASSERT, "( s_soundGapLast == 0 )", (const char *)&queryFormat, "s_soundGapLast == NULL") )
      __debugbreak();
    if ( s_soundGaplessNextIndex >= 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = s_soundGaplessNextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 133, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) < ( ( 128 ) )", "s_soundGaplessNextIndex < SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    return (unsigned int)s_soundGaplessNextIndex++;
  }
  return result;
}

/*
==============
G_FXEntitiesFreeAll
==============
*/
void G_FXEntitiesFreeAll(void)
{
  FxEntity *v0; 

  v0 = g_fxEntities;
  do
  {
    if ( (v0->flags & 0x10) != 0 )
      G_FXEntityRelease(v0);
    ++v0;
  }
  while ( (__int64)v0 < (__int64)g_gapQueue );
}

/*
==============
G_FXEntityRelease
==============
*/
void G_FXEntityRelease(FxEntity *fxEnt)
{
  signed __int64 v2; 
  FXEntFreeElem *v3; 
  scrContext_t *v4; 

  if ( !fxEnt )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 191, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 148, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
      __debugbreak();
  }
  if ( fxEnt < g_fxEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 149, ASSERT_TYPE_ASSERT, "(fxEnt >= g_fxEntities)", (const char *)&queryFormat, "fxEnt >= g_fxEntities") )
    __debugbreak();
  if ( fxEnt >= (FxEntity *)g_gapQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 150, ASSERT_TYPE_ASSERT, "(fxEnt < ( g_fxEntities + ( sizeof( *array_counter( g_fxEntities ) ) + 0 ) ))", (const char *)&queryFormat, "fxEnt < ( g_fxEntities + ARRAY_COUNT( g_fxEntities ) )") )
    __debugbreak();
  v2 = fxEnt - g_fxEntities;
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 154, ASSERT_TYPE_ASSERT, "(result >= 0)", (const char *)&queryFormat, "result >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 155, ASSERT_TYPE_ASSERT, "(result < 1280)", (const char *)&queryFormat, "result < FX_ENTITY_MAX") )
    __debugbreak();
  if ( fxEnt != &g_fxEntities[(int)v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 156, ASSERT_TYPE_ASSERT, "(fxEnt == &g_fxEntities[result])", (const char *)&queryFormat, "fxEnt == &g_fxEntities[result]") )
    __debugbreak();
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 37, ASSERT_TYPE_ASSERT, "(num >= 0)", (const char *)&queryFormat, "num >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 38, ASSERT_TYPE_ASSERT, "(num < 1280)", (const char *)&queryFormat, "num < FX_ENTITY_MAX") )
    __debugbreak();
  v3 = &g_gapQueue[(int)v2];
  if ( v3 == g_gapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 41, ASSERT_TYPE_ASSERT, "(thisItem != g_gapFirst)", (const char *)&queryFormat, "thisItem != g_gapFirst") )
    __debugbreak();
  if ( v3 == g_gapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 42, ASSERT_TYPE_ASSERT, "(thisItem != g_gapLast)", (const char *)&queryFormat, "thisItem != g_gapLast") )
    __debugbreak();
  if ( v3->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 43, ASSERT_TYPE_ASSERT, "(thisItem->next == 0)", (const char *)&queryFormat, "thisItem->next == NULL") )
    __debugbreak();
  if ( g_gapLast )
    g_gapLast->next = v3;
  else
    g_gapFirst = &g_gapQueue[(int)v2];
  g_gapLast = &g_gapQueue[(int)v2];
  v3->next = NULL;
  v4 = ScriptContext_Server();
  Scr_FreeEntityNum(v4, v2, ENTITY_CLASS_FXENTITY);
  fxEnt->flags &= ~0x10u;
  if ( g_fxEntsCount > 0 )
  {
    --g_fxEntsCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 202, ASSERT_TYPE_ASSERT, "(g_fxEntsCount > 0)", (const char *)&queryFormat, "g_fxEntsCount > 0") )
      __debugbreak();
    --g_fxEntsCount;
  }
}

/*
==============
G_FXEntity_ClearSystem
==============
*/
void G_FXEntity_ClearSystem(void)
{
  g_gapFirst = NULL;
  g_gapLast = NULL;
  g_gaplessNextIndex = 0;
  g_fxEntsCount = 0;
  memset_0(g_gapQueue, 0, sizeof(g_gapQueue));
  memset_0(g_fxEntities, 0, sizeof(g_fxEntities));
}

/*
==============
G_FXEntity_PlayLoopedFX
==============
*/
void G_FXEntity_PlayLoopedFX(scrContext_t *scrContext)
{
  int givenAxisCount; 
  float v3; 
  int fxId; 
  unsigned int v5; 
  unsigned int v6; 
  __int128 v7; 
  __int128 v11; 
  double Float; 
  int v18; 
  FxEntity *v19; 
  tmat33_t<vec3_t> v20; 
  vec3_t pos; 

  if ( Scr_GetNumParam(scrContext) < 3 || Scr_GetNumParam(scrContext) > 6 )
    Scr_Error(COM_ERR_5273, scrContext, "Incorrect number of parameters");
  givenAxisCount = 0;
  v3 = 0.0;
  fxId = Scr_GetInt(scrContext, 0);
  v5 = Scr_GetNumParam(scrContext) - 4;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_13;
      givenAxisCount = 1;
      Scr_GetVector(scrContext, 5u, &v20.m[2]);
      v7 = LODWORD(v20.m[2].v[0]);
      *(float *)&v7 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v20.m[2].v[1] * v20.m[2].v[1])) + (float)(v20.m[2].v[2] * v20.m[2].v[2]));
      _XMM4 = v7;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm8, xmm0
      }
      v20.m[2].v[0] = v20.m[2].v[0] * (float)(1.0 / *(float *)&_XMM0);
      v20.m[2].v[2] = v20.m[2].v[2] * (float)(1.0 / *(float *)&_XMM0);
      v20.m[2].v[1] = v20.m[2].v[1] * (float)(1.0 / *(float *)&_XMM0);
      if ( *(float *)&v7 == 0.0 )
        Scr_FxParamError(COM_ERR_5387, scrContext, 5, "playLoopedFx called with (0 0 0) up direction", fxId);
    }
    Scr_GetVector(scrContext, 4u, v20.m);
    v11 = LODWORD(v20.m[0].v[0]);
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v20.m[0].v[1] * v20.m[0].v[1])) + (float)(v20.m[0].v[2] * v20.m[0].v[2]));
    _XMM4 = v11;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm8, xmm0
    }
    v20.m[0].v[0] = v20.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
    v20.m[0].v[2] = v20.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
    v20.m[0].v[1] = v20.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v11 == 0.0 )
      Scr_FxParamError(COM_ERR_5388, scrContext, 4, "playLoopedFx called with (0 0 0) forward direction", fxId);
    ++givenAxisCount;
  }
  Float = Scr_GetFloat(scrContext, 3u);
  v3 = *(float *)&Float;
LABEL_13:
  Scr_GetVector(scrContext, 2u, &pos);
  Scr_GetFloat(scrContext, 1u);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm4, 1 }
  if ( (int)*(float *)&_XMM1 <= 0 )
    Scr_FxParamError(COM_ERR_5389, scrContext, 1, "playLoopedFx called with repeat < 0.001 seconds", fxId);
  v18 = ReserveNewIndex_0();
  ++g_fxEntsCount;
  v19 = &g_fxEntities[v18];
  LOBYTE(v18) = v19->flags;
  *(_QWORD *)v19->origin.v = 0i64;
  *(_QWORD *)&v19->origin.z = 0i64;
  *(_QWORD *)&v19->angles.y = 0i64;
  *(_QWORD *)&v19->loopingCullDist = 0i64;
  *(_DWORD *)&v19->fxId = 0;
  v19->flags |= (v18 + 1) & 0xF | 0x10;
  ScrCmd_FXEntityInit(scrContext, v19, fxId, &pos, &v20, givenAxisCount);
  v19->flags |= 0x20u;
  v19->un1.triggerTime = (int)*(float *)&_XMM1;
  v19->loopingCullDist = v3;
  Scr_FXEntityAdd(scrContext, v19);
}

/*
==============
G_FXEntity_SpawnFX
==============
*/
void G_FXEntity_SpawnFX(scrContext_t *scrContext)
{
  int givenAxisCount; 
  int fxId; 
  unsigned int v4; 
  __int128 v5; 
  __int128 v9; 
  int v13; 
  FxEntity *v14; 
  tmat33_t<vec3_t> v15; 
  vec3_t pos; 

  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_5270, scrContext, "Incorrect number of parameters");
  givenAxisCount = 0;
  fxId = Scr_GetInt(scrContext, 0);
  v4 = Scr_GetNumParam(scrContext) - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      goto LABEL_12;
    Scr_GetVector(scrContext, 3u, &v15.m[2]);
    v5 = LODWORD(v15.m[2].v[0]);
    *(float *)&v5 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(v15.m[2].v[1] * v15.m[2].v[1])) + (float)(v15.m[2].v[2] * v15.m[2].v[2]));
    _XMM4 = v5;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
    v15.m[2].v[0] = v15.m[2].v[0] * (float)(1.0 / *(float *)&_XMM0);
    v15.m[2].v[2] = v15.m[2].v[2] * (float)(1.0 / *(float *)&_XMM0);
    v15.m[2].v[1] = v15.m[2].v[1] * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v5 == 0.0 )
      Scr_FxParamError(COM_ERR_5385, scrContext, 3, "spawnFx called with (0 0 0) up direction", fxId);
    givenAxisCount = 1;
  }
  Scr_GetVector(scrContext, 2u, v15.m);
  v9 = LODWORD(v15.m[0].v[0]);
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v15.m[0].v[1] * v15.m[0].v[1])) + (float)(v15.m[0].v[2] * v15.m[0].v[2]));
  _XMM4 = v9;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  v15.m[0].v[0] = v15.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
  v15.m[0].v[2] = v15.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
  v15.m[0].v[1] = v15.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v9 == 0.0 )
    Scr_FxParamError(COM_ERR_5386, scrContext, 2, "spawnFx called with (0 0 0) forward direction", fxId);
  ++givenAxisCount;
LABEL_12:
  Scr_GetVector(scrContext, 1u, &pos);
  v13 = ReserveNewIndex_0();
  ++g_fxEntsCount;
  v14 = &g_fxEntities[v13];
  LOBYTE(v13) = v14->flags;
  *(_QWORD *)v14->origin.v = 0i64;
  *(_QWORD *)&v14->origin.z = 0i64;
  *(_QWORD *)&v14->angles.y = 0i64;
  *(_QWORD *)&v14->loopingCullDist = 0i64;
  *(_DWORD *)&v14->fxId = 0;
  v14->flags |= (v13 + 1) & 0xF | 0x10;
  ScrCmd_FXEntityInit(scrContext, v14, fxId, &pos, &v15, givenAxisCount);
  Scr_FXEntityAdd(scrContext, v14);
}

/*
==============
G_FXEntity_TriggerFX
==============
*/
void G_FXEntity_TriggerFX(scrContext_t *scrContext)
{
  scr_entref_t EntityRef; 
  FxEntity *v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  bool v7; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetNumParam(scrContext) > 2 )
    Scr_Error(COM_ERR_5271, scrContext, "Incorrect number of parameters");
  EntityRef = Scr_GetEntityRef(scrContext, 0);
  if ( EntityRef.entclass != ENTITY_CLASS_FXENTITY )
  {
    Scr_ParamError(COM_ERR_5269, scrContext, 0, "Not an FXEntity");
    v3 = NULL;
    v4 = "fxEnt";
    v5 = "(fxEnt)";
    v6 = 355;
    goto LABEL_11;
  }
  if ( EntityRef.entnum >= 0x500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( 1280 )", "entref.entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", EntityRef.entnum, 1280) )
    __debugbreak();
  v7 = (g_fxEntities[EntityRef.entnum].flags & 0x10) == 0;
  v3 = &g_fxEntities[EntityRef.entnum];
  if ( v7 )
  {
    v4 = "FXEntity_IsValid( result )";
    v6 = 263;
    v5 = "(FXEntity_IsValid( result ))";
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", v6, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v4) )
      __debugbreak();
  }
  if ( (v3->flags & 0x20) != 0 )
    Scr_ParamError(COM_ERR_5272, scrContext, 0, "Not valid to call this with looping fxents.");
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Scr_GetFloat(scrContext, 1u);
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm4, 1 }
    FXEntity_SetTriggerTime(v3, (int)*(float *)&_XMM1);
  }
  else
  {
    FXEntity_SetTriggerTime(v3, level.time);
  }
}

/*
==============
G_LoadFXEntities
==============
*/
void G_LoadFXEntities(SaveGame *save)
{
  FXEntFreeElem *v2; 
  int i; 
  FXEntFreeElem *v4; 
  FXEntFreeElem *v5; 
  FXEntFreeElem *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9[6]; 
  __int16 buffer; 
  __int16 v11; 
  __int16 v12; 
  __int16 v13; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 511, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(&g_fxEntsCount, 4, save);
  v2 = NULL;
  for ( v9[0] = 0; v9[0] < g_fxEntsCount; ++v9[0] )
  {
    SaveMemory_LoadRead(&buffer, 2, save);
    if ( (unsigned int)buffer >= 0x500 )
    {
      LODWORD(v8) = 1280;
      LODWORD(v7) = buffer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 519, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( 1280 )", "idx doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    SaveMemory_LoadRead(&g_fxEntities[buffer], 35, save);
    if ( (g_fxEntities[buffer].flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 521, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &g_fxEntities[idx] ))", (const char *)&queryFormat, "FXEntity_IsValid( &g_fxEntities[idx] )") )
      __debugbreak();
  }
  v9[0] = 0;
  for ( i = 0; i < 1280; v9[0] = i )
  {
    v4 = &g_gapQueue[i];
    SaveMemory_LoadRead(&v11, 2, save);
    if ( v11 < 0 )
      v5 = NULL;
    else
      v5 = &g_gapQueue[v11];
    v4->next = v5;
    i = v9[0] + 1;
  }
  SaveMemory_LoadRead(&v12, 2, save);
  if ( v12 < 0 )
    v6 = NULL;
  else
    v6 = &g_gapQueue[v12];
  g_gapFirst = v6;
  SaveMemory_LoadRead(&v13, 2, save);
  if ( v13 >= 0 )
    v2 = &g_gapQueue[v13];
  g_gapLast = v2;
  SaveMemory_LoadRead(&g_gaplessNextIndex, 4, save);
  SaveMemory_LoadRead(v9, 4, save);
  if ( v9[0] != -1 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144350B30, 1227i64);
}

/*
==============
G_SaveFXEntities
==============
*/
void G_SaveFXEntities(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  int v4; 
  FxEntity *v5; 
  FXEntFreeElem *next; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int16 p; 
  int v13; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 465, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  MemFile_WriteData(memFile, 4ui64, &g_fxEntsCount);
  v4 = 0;
  v13 = 0;
  do
  {
    v5 = &g_fxEntities[v4];
    if ( (g_fxEntities[v4].flags & 0x10) != 0 )
    {
      ++v3;
      p = v4;
      if ( (__int16)v4 != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 487, ASSERT_TYPE_ASSERT, "(idxEncoded == idx)", (const char *)&queryFormat, "idxEncoded == idx") )
        __debugbreak();
      if ( (unsigned int)p >= 0x500 )
      {
        LODWORD(v11) = 1280;
        LODWORD(v10) = p;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( idxEncoded ) < (unsigned)( 1280 )", "idxEncoded doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      MemFile_WriteData(memFile, 2ui64, &p);
      MemFile_WriteData(memFile, 0x23ui64, v5);
      v4 = v13;
    }
    v13 = ++v4;
  }
  while ( v4 < 1280 );
  if ( v3 != g_fxEntsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 493, ASSERT_TYPE_ASSERT, "( countAsserter ) == ( g_fxEntsCount )", "%s == %s\n\t%i, %i", "countAsserter", "g_fxEntsCount", v3, g_fxEntsCount) )
    __debugbreak();
  v13 = 0;
  do
  {
    next = g_gapQueue[v2].next;
    if ( next )
      v7 = GapQueue_IndexForElem(next);
    else
      v7 = -1;
    p = v7;
    if ( (__int16)v7 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
      __debugbreak();
    MemFile_WriteData(memFile, 2ui64, &p);
    v2 = v13 + 1;
    v13 = v2;
  }
  while ( v2 < 1280 );
  if ( g_gapFirst )
    v8 = GapQueue_IndexForElem(g_gapFirst);
  else
    v8 = -1;
  p = v8;
  if ( (__int16)v8 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
    __debugbreak();
  MemFile_WriteData(memFile, 2ui64, &p);
  if ( g_gapLast )
    v9 = GapQueue_IndexForElem(g_gapLast);
  else
    v9 = -1;
  p = v9;
  if ( (__int16)v9 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
    __debugbreak();
  MemFile_WriteData(memFile, 2ui64, &p);
  MemFile_WriteData(memFile, 4ui64, &g_gaplessNextIndex);
  v13 = -1;
  MemFile_WriteData(memFile, 4ui64, &v13);
}

/*
==============
GapQueue_IndexForElem
==============
*/
__int64 GapQueue_IndexForElem(FXEntFreeElem *elem)
{
  signed __int64 v2; 

  if ( elem < g_gapQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 76, ASSERT_TYPE_ASSERT, "(elem >= g_gapQueue)", (const char *)&queryFormat, "elem >= g_gapQueue") )
    __debugbreak();
  if ( elem >= (FXEntFreeElem *)&g_gapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 77, ASSERT_TYPE_ASSERT, "(elem < ( g_gapQueue + ( sizeof( *array_counter( g_gapQueue ) ) + 0 ) ))", (const char *)&queryFormat, "elem < ( g_gapQueue + ARRAY_COUNT( g_gapQueue ) )") )
    __debugbreak();
  v2 = elem - g_gapQueue;
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 80, ASSERT_TYPE_ASSERT, "(result >= 0)", (const char *)&queryFormat, "result >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 81, ASSERT_TYPE_ASSERT, "(result < 1280)", (const char *)&queryFormat, "result < FX_ENTITY_MAX") )
    __debugbreak();
  if ( elem != &g_gapQueue[(int)v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 83, ASSERT_TYPE_ASSERT, "(elem == &g_gapQueue[result])", (const char *)&queryFormat, "elem == &g_gapQueue[result]") )
    __debugbreak();
  return (unsigned int)v2;
}

/*
==============
SV_GetFXEntity
==============
*/
FxEntity *SV_GetFXEntity(unsigned int entnum)
{
  __int64 v1; 
  int v4; 

  v1 = entnum;
  if ( entnum >= 0x500 )
  {
    v4 = 1280;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 426, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( 1280 )", "entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", entnum, v4) )
      __debugbreak();
  }
  return &g_fxEntities[v1];
}

/*
==============
ScrCmd_FXEntityDelete
==============
*/
void ScrCmd_FXEntityDelete(scr_entref_t entref)
{
  unsigned int entnum; 
  bool v2; 
  FxEntity *v3; 
  __int64 v4; 
  int v5; 

  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_FXENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 272, ASSERT_TYPE_ASSERT, "(entref.entclass == ENTITY_CLASS_FXENTITY)", (const char *)&queryFormat, "entref.entclass == ENTITY_CLASS_FXENTITY") )
    __debugbreak();
  if ( entnum >= 0x500 )
  {
    v5 = 1280;
    LODWORD(v4) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( 1280 )", "entref.entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (g_fxEntities[entnum].flags & 0x10) == 0;
  v3 = &g_fxEntities[entnum];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 276, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( result ))", (const char *)&queryFormat, "FXEntity_IsValid( result )") )
    __debugbreak();
  G_FXEntityRelease(v3);
}

/*
==============
ScrCmd_FXEntityInit
==============
*/
void ScrCmd_FXEntityInit(scrContext_t *scrContext, FxEntity *fxEnt, int fxId, const vec3_t *pos, tmat33_t<vec3_t> *axis, int givenAxisCount)
{
  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 292, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  fxEnt->fxId = fxId;
  if ( (unsigned __int16)fxId != fxId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 295, ASSERT_TYPE_ASSERT, "( fxEnt->fxId ) == ( fxId )", "%s == %s\n\t%i, %i", "fxEnt->fxId", "fxId", (unsigned __int16)fxId, fxId) )
    __debugbreak();
  fxEnt->origin.v[0] = pos->v[0];
  fxEnt->origin.v[1] = pos->v[1];
  fxEnt->origin.v[2] = pos->v[2];
  Scr_SetFxAngles(scrContext, givenAxisCount, axis, &fxEnt->angles, fxId);
  if ( (fxEnt->flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 96, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
    __debugbreak();
  if ( fxEnt->un1.triggerTime )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 298, ASSERT_TYPE_ASSERT, "(FXEntity_GetTriggerTime( fxEnt ) == 0)", (const char *)&queryFormat, "FXEntity_GetTriggerTime( fxEnt ) == 0") )
      __debugbreak();
  }
}

/*
==============
Scr_FXEntityAdd
==============
*/
void Scr_FXEntityAdd(scrContext_t *scrContext, FxEntity *fxEnt)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 

  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 239, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  if ( (fxEnt->flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 240, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( fxEnt ))", (const char *)&queryFormat, "FXEntity_IsValid( fxEnt )") )
    __debugbreak();
  v4 = (__int64)((unsigned __int128)(((char *)fxEnt - (char *)g_fxEntities) * (__int128)0xE38E38E38E38E39i64) >> 64) >> 1;
  v5 = (v4 >> 63) + v4;
  if ( (unsigned int)v5 >= 0x500 )
  {
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 1280 )", "index doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v6, 1280) )
      __debugbreak();
  }
  Scr_AddEntityNum(scrContext, v5, ENTITY_CLASS_FXENTITY);
}

