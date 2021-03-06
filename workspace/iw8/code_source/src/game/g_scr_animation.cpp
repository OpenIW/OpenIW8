/*
==============
ScrCmd_animscriptedInternal
==============
*/

void __fastcall ScrCmd_animscriptedInternal(scrContext_t *scrContext, gentity_s *ent, int bDelayForActor)
{
  ?ScrCmd_animscriptedInternal@@YAXAEAUscrContext_t@@PEAUgentity_s@@H@Z(scrContext, ent, bDelayForActor);
}

/*
==============
G_StopAnimScripted
==============
*/

void __fastcall G_StopAnimScripted(gentity_s *ent)
{
  ?G_StopAnimScripted@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_HandleAnimError
==============
*/

void __fastcall GScr_HandleAnimError(scrContext_t *scrContext, int error)
{
  ?GScr_HandleAnimError@@YAXAEAUscrContext_t@@H@Z(scrContext, error);
}

/*
==============
GScr_Anim_SetAnimTree
==============
*/

void __fastcall GScr_Anim_SetAnimTree(scrContext_t *scrContext, gentity_s *ent, scr_animtree_t *animtree)
{
  ?GScr_Anim_SetAnimTree@@YAXAEAUscrContext_t@@PEAUgentity_s@@PEAUscr_animtree_t@@@Z(scrContext, ent, animtree);
}

/*
==============
Scr_FixupExtraAnimParams
==============
*/

unsigned int __fastcall Scr_FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  return ?Scr_FixupExtraAnimParams@@YAIAEAUscrContext_t@@IPEAIPEAW4XAnimSubTreeID@@1PEAW4XAnimCurveID@@@Z(scrContext, firstParamIndex, outGraftAnimIndex, outSubTreeID, outAnimIndex, outBlendCurveID);
}

/*
==============
DumpAnimCommand
==============
*/

void __fastcall DumpAnimCommand(const char *funcName, XAnimTree *tree, unsigned int anim, int root, float weight, float time, float rate)
{
  ?DumpAnimCommand@@YAXPEBDPEAUXAnimTree@@IHMMM@Z(funcName, tree, anim, root, weight, time, rate);
}

/*
==============
DumpAnimSetRateCommand
==============
*/

void __fastcall DumpAnimSetRateCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float rate)
{
  ?DumpAnimSetRateCommand@@YAXPEBDPEBUXAnim_s@@IHM@Z(funcName, treeanims, anim, root, rate);
}

/*
==============
ScrCmd_stopanimscripted
==============
*/

void __fastcall ScrCmd_stopanimscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_stopanimscripted@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DumpAnimSetCurveCommand
==============
*/

void __fastcall DumpAnimSetCurveCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, const char *curveName)
{
  ?DumpAnimSetCurveCommand@@YAXPEBDPEBUXAnim_s@@IH0@Z(funcName, treeanims, anim, root, curveName);
}

/*
==============
DumpAnimSetTimeCommand
==============
*/

void __fastcall DumpAnimSetTimeCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float time)
{
  ?DumpAnimSetTimeCommand@@YAXPEBDPEBUXAnim_s@@IHM@Z(funcName, treeanims, anim, root, time);
}

/*
==============
DumpAnimCommandInternal
==============
*/

void __fastcall DumpAnimCommandInternal(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float weight, float time, float rate)
{
  ?DumpAnimCommandInternal@@YAXPEBDPEBUXAnim_s@@IHMMM@Z(funcName, treeanims, anim, root, weight, time, rate);
}

/*
==============
Scr_AnimRelative
==============
*/

void __fastcall Scr_AnimRelative(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_AnimRelative@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
ShouldDumpAnimCommand
==============
*/

bool __fastcall ShouldDumpAnimCommand(scrContext_t *scrContext, int entNum, unsigned int verboseParamNumber)
{
  return ?ShouldDumpAnimCommand@@YA_NAEAUscrContext_t@@HI@Z(scrContext, entNum, verboseParamNumber);
}

/*
==============
GScr_SetFlaggedAnimKnob
==============
*/
void GScr_SetFlaggedAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetFlaggedAnimKnobLimited
==============
*/
void GScr_SetFlaggedAnimKnobLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetFlaggedAnimKnobRestart
==============
*/
void GScr_SetFlaggedAnimKnobRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetFlaggedAnimKnobLimitedRestart
==============
*/
void GScr_SetFlaggedAnimKnobLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 2u);
}

/*
==============
GScr_SetFlaggedAnimKnobAll
==============
*/
void GScr_SetFlaggedAnimKnobAll(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobAllInternal(scrContext, entref, 1u, "illegal call to SetFlaggedAnimKnobAll()\n");
}

/*
==============
GScr_SetFlaggedAnimKnobAllRestart
==============
*/
void GScr_SetFlaggedAnimKnobAllRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobAllInternal(scrContext, entref, 3u, "illegal call to SetFlaggedAnimKnobAllRestart()\n");
}

/*
==============
GScr_SetFlaggedAnim
==============
*/
void GScr_SetFlaggedAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetFlaggedAnimLimited
==============
*/
void GScr_SetFlaggedAnimLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetFlaggedAnimRestart
==============
*/
void GScr_SetFlaggedAnimRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetFlaggedAnimLimitedRestart
==============
*/
void GScr_SetFlaggedAnimLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 2u);
}

/*
==============
GScr_UseAnimTree
==============
*/
void GScr_UseAnimTree(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  scr_animtree_t v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  scr_animtree_t animtree; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3497, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  v5.anims = Scr_GetAnimTree(scrContext, 0).anims;
  v6 = Entity->s.eType == ET_PLAYER;
  animtree.anims = v5.anims;
  if ( v6 )
  {
    v7 = SL_ConvertToString(Entity->classname);
    v8 = j_va("cannot change the animtree of classname '%s'", v7);
    Scr_Error(COM_ERR_3498, scrContext, v8);
  }
  GScr_Anim_SetAnimTree(scrContext, Entity, &animtree);
}

/*
==============
GScr_StopUseAnimTree
==============
*/
void GScr_StopUseAnimTree(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  entityType_s eType; 
  const char *v6; 
  const char *v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3499, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  eType = Entity->s.eType;
  if ( eType == ET_PLAYER )
  {
    v6 = SL_ConvertToString(Entity->classname);
    v7 = j_va("cannot change the animtree of classname '%s'", v6);
    Scr_Error(COM_ERR_3500, scrContext, v7);
    eType = Entity->s.eType;
  }
  Com_Printf(18, "StopUseAnimTree called on ent %i of type %i\n", (unsigned int)Entity->s.number, (unsigned int)eType);
  GScr_Anim_SetAnimTree(scrContext, Entity, NULL);
}

/*
==============
GScr_IsAnimLooping
==============
*/
void GScr_IsAnimLooping(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int index; 
  const XAnim_s *Anims; 
  bool IsLooped; 

  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  Anims = XAnimGetAnims(EntAnimTree);
  IsLooped = XAnimIsLooped(Anims, index);
  Scr_AddInt(scrContext, IsLooped);
}

/*
==============
GScr_SetAnimTime
==============
*/
void GScr_SetAnimTime(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  float v5; 
  XAnimTree *EntAnimTree; 
  unsigned int NumParam; 
  double Float; 
  const char *v9; 
  ComErrorCode v10; 
  int v11; 
  unsigned int index; 
  unsigned int v13; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  const scrContext_t *v18; 
  int v19; 
  char *v20; 
  int time; 
  const char *AnimDebugName; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3501, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  v5 = 0.0;
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    if ( NumParam - 2 > 2 )
      Scr_Error(COM_ERR_3502, scrContext, "too many parameters");
    Float = Scr_GetFloat(scrContext, 1u);
    v5 = *(float *)&Float;
    if ( *(float *)&Float < 0.0 )
    {
      v5 = 0.0;
      v9 = "must be > 0";
      v10 = COM_ERR_3503;
LABEL_10:
      Scr_ParamError(v10, scrContext, 1u, v9);
      goto LABEL_11;
    }
    if ( *(float *)&Float > 1.0 )
    {
      v5 = FLOAT_1_0;
      v9 = "must be < 1";
      v10 = COM_ERR_3504;
      goto LABEL_10;
    }
  }
LABEL_11:
  v11 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v13 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v13 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v11 = 1;
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  if ( !XAnimIsLeafNode(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3505, scrContext, 0, "not a leaf animation");
  if ( v5 == 1.0 && XAnimIsLooped(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3506, scrContext, 1u, "cannot set time 1 on looping animation");
  XAnimSetTime(EntAnimTree, v13, subTreeID, index, v5);
  G_FlagAnimForUpdate(Entity);
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v11 + 2) )
  {
    v18 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v18, (int *)&line, (const char **)&filename);
    v19 = line;
    v20 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7time=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, v5, fmt, v20, v19, "SetAnimTime");
  }
}

/*
==============
GScr_SetAnimRate
==============
*/
void GScr_SetAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  double Float; 
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  int v7; 
  unsigned int index; 
  unsigned int v9; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  const scrContext_t *v14; 
  int v15; 
  char *v16; 
  int time; 
  const char *AnimDebugName; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3507, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_3508, scrContext, "incorrect number of parameters");
  Float = Scr_GetFloat(scrContext, 1u);
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v7 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v9 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v9 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v7 = 1;
  }
  XAnimSetAnimRate(EntAnimTree, v9, subTreeID, index, *(float *)&Float);
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v7 + 2) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    v14 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v14, (int *)&line, (const char **)&filename);
    v15 = line;
    v16 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7rate=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(float *)&Float, fmt, v16, v15, "SetAnimRate");
  }
}

/*
==============
GScr_SetAnimBlendCurve
==============
*/
void GScr_SetAnimBlendCurve(scrContext_t *scrContext, scr_entref_t entref)
{
  XAnimTree *EntAnimTree; 
  int v5; 
  unsigned int index; 
  unsigned int v7; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  XAnimCurveID ID; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const XAnim_s *SubTreeAnims; 
  const scrContext_t *v17; 
  int v18; 
  char *v19; 
  int time; 
  const char *AnimDebugName; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3509, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_3510, scrContext, "incorrect number of parameters");
  filename = (char *)GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree((gentity_s *)filename);
  v5 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v7 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v7 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v5 = 1;
  }
  ConstString = Scr_GetConstString(scrContext, 1u);
  ID = XAnimCurve_GetID(ConstString);
  if ( ID == CURVE_ASSET_END )
  {
    v13 = SL_ConvertToString(ConstString);
    v14 = j_va("SetAnimBlendCurve: could not find curve '%s'\n", v13);
    Scr_Error(COM_ERR_3511, scrContext, v14);
  }
  XAnimSetAnimCurve(EntAnimTree, v7, subTreeID, index, ID);
  if ( ShouldDumpAnimCommand(scrContext, *(__int16 *)filename, v5 + 2) )
  {
    v15 = SL_ConvertToString(ConstString);
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    v17 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v17, (int *)&line, (const char **)&filename);
    v18 = line;
    v19 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7curve=^5'%s'  ^7level time:%d  %s:%d   %s\n", AnimDebugName, v15, fmt, v19, v18, "SetAnimCurve");
  }
}

/*
==============
GScr_SetCustomNodeGameParameter
==============
*/
void GScr_SetCustomNodeGameParameter(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  scr_string_t ConstLowercaseString; 
  VariableType Type; 
  DObj *ServerDObjForEnt; 
  double Float; 
  vec3_t vectorValue; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3512, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_3513, scrContext, "Invalid number of parameters.");
  ConstLowercaseString = Scr_GetConstLowercaseString(scrContext, 0);
  Type = Scr_GetType(scrContext, 1u);
  if ( !ConstLowercaseString )
    Scr_Error(COM_ERR_3514, scrContext, "Invalid parameter name.");
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3515, scrContext, "No model exists.");
  if ( Type == VAR_VECTOR )
  {
    Scr_GetVector(scrContext, 1u, &vectorValue);
    XAnimSetVec3GameParameterByName(ServerDObjForEnt, ConstLowercaseString, &vectorValue);
  }
  else if ( (unsigned __int8)(Type - 5) > 1u )
  {
    Scr_Error(COM_ERR_3516, scrContext, "Invalid value.");
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 1u);
    XAnimSetFloatGameParameterByName(ServerDObjForEnt, ConstLowercaseString, *(float *)&Float);
  }
}

/*
==============
GScr_SetCustomNodeGameParameterByte
==============
*/
void GScr_SetCustomNodeGameParameterByte(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  scr_string_t ConstLowercaseString; 
  VariableType Type; 
  DObj *ServerDObjForEnt; 
  unsigned int Int; 
  unsigned __int8 v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_5894, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_5700, scrContext, "Invalid number of parameters.");
  ConstLowercaseString = Scr_GetConstLowercaseString(scrContext, 0);
  Type = Scr_GetType(scrContext, 1u);
  if ( !ConstLowercaseString )
    Scr_Error(COM_ERR_5701, scrContext, "Invalid parameter name.");
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_5702, scrContext, "No model exists.");
  if ( Type == VAR_INTEGER )
  {
    Int = Scr_GetInt(scrContext, 1u);
    v9 = Int;
    if ( Int > 0xFF )
      Scr_Error(COM_ERR_5703, scrContext, "Byte value must be between 0 and 255");
    XAnimSetByteGameParameterByName(ServerDObjForEnt, ConstLowercaseString, v9);
  }
  else
  {
    Scr_Error(COM_ERR_5704, scrContext, "Invalid value.  Must be an int between 0 and 255");
  }
}

/*
==============
GScr_SetAnim
==============
*/
void GScr_SetAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimLimited
==============
*/
void GScr_SetAnimLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimRestart
==============
*/
void GScr_SetAnimRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimLimitedRestart
==============
*/
void GScr_SetAnimLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 2u);
}

/*
==============
ScrCmd_animscripted
==============
*/
void ScrCmd_animscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3442, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) > 0xD )
    Scr_Error(COM_ERR_3443, scrContext, "too many parameters");
  if ( Scr_GetNumParam(scrContext) < 4 )
    Scr_Error(COM_ERR_3444, scrContext, "too few parameters");
  Entity = GetEntity(entref);
  ScrCmd_animscriptedInternal(scrContext, Entity, 1);
}

/*
==============
ScrCmd_stopanimscripted
==============
*/
void ScrCmd_stopanimscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3445, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  G_StopAnimScripted(Entity);
}

/*
==============
GScr_ClearAnim
==============
*/
void GScr_ClearAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int index; 
  double time; 
  int v9; 
  XAnimSubTreeID subTreeID; 
  unsigned int v11; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v15; 
  const char *v16; 
  const char *v17; 
  const XAnim_s *SubTreeAnims; 
  DObj *objID; 
  unsigned int graftAnimIndex; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3446, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  time = Scr_GetFloat(scrContext, 1u);
  v9 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v11 = 2;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v9 = 1;
    v11 = 3;
  }
  if ( Scr_GetNumParam(scrContext) > v11 && Scr_GetType(scrContext, v11) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v11);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v15 = Scr_GetConstString(scrContext, v11);
      v16 = SL_ConvertToString(v15);
      v17 = j_va("Invalid blend curve name '%s'", v16);
      Scr_Error(COM_ERR_3437, scrContext, v17);
    }
    ++v9;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v9 + 2) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    DumpAnimCommandInternal("ClearAnim", SubTreeAnims, index, -1, 0.0, *(float *)&time, 1.0);
  }
  objID = Com_GetServerDObjForEnt(Entity);
  XAnimClearTreeGoalWeights(EntAnimTree, graftAnimIndex, subTreeID, index, *(float *)&time, 1, objID, curveID);
}

/*
==============
ScrCmd_animrelative
==============
*/
void ScrCmd_animrelative(scrContext_t *scrContext, scr_entref_t entref)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3451, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) > 6 )
    Scr_Error(COM_ERR_3452, scrContext, "too many parameters");
  if ( Scr_GetNumParam(scrContext) > 6 || Scr_GetNumParam(scrContext) < 4 )
    Scr_Error(COM_ERR_3453, scrContext, "Incorrect number of parameters for ScrCmd_animrelative command");
  Scr_AnimRelative(scrContext, entref);
}

/*
==============
GScr_SetAnimKnob
==============
*/
void GScr_SetAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimKnobLimited
==============
*/
void GScr_SetAnimKnobLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimKnobRestart
==============
*/
void GScr_SetAnimKnobRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimKnobLimitedRestart
==============
*/
void GScr_SetAnimKnobLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 2u);
}

/*
==============
GScr_SetAnimKnobAll
==============
*/
void GScr_SetAnimKnobAll(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimKnobAllLimited
==============
*/
void GScr_SetAnimKnobAllLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimKnobAllRestart
==============
*/
void GScr_SetAnimKnobAllRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimKnobAllLimitedRestart
==============
*/
void GScr_SetAnimKnobAllLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 2u);
}

/*
==============
GScr_GetAnimTime
==============
*/
void GScr_GetAnimTime(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v6; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  double Time; 
  unsigned __int16 v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3467, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v6 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v6 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v12 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v12);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3468, scrContext, 0, "blended nonsynchronized animation has no concept of time");
  Time = XAnimGetTime(EntAnimTree, v6, subTreeID, index);
  Scr_AddFloat(scrContext, *(float *)&Time);
}

/*
==============
GScr_GetAnimWeight
==============
*/
void GScr_GetAnimWeight(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v6; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  double Weight; 
  unsigned __int16 v11; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3469, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v6 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v6 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v11 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v11);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  Weight = XAnimGetWeight(EntAnimTree, v6, subTreeID, index);
  Scr_AddFloat(scrContext, *(float *)&Weight);
}

/*
==============
GScr_GetAnimIKWeights
==============
*/
void GScr_GetAnimIKWeights(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  int index; 
  const DObj *ServerDObjForEnt; 
  __int64 i; 
  float ikWeights[2]; 
  __int64 v10; 
  float animWeights[2]; 
  __int64 v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3470, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3471, scrContext, "GetAnimIKWeights: No model exists.");
  *(_QWORD *)ikWeights = 0i64;
  v10 = 0i64;
  *(_QWORD *)animWeights = 0i64;
  v12 = 0i64;
  XAnimIKGetWeightsByAnimIndex(ServerDObjForEnt, index, ikWeights, animWeights);
  Scr_MakeArray(scrContext);
  for ( i = 0i64; i < 4; ++i )
  {
    Scr_AddFloat(scrContext, ikWeights[i]);
    Scr_AddArray(scrContext);
  }
}

/*
==============
GScr_GetAnimRate
==============
*/
void GScr_GetAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v6; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  double Rate; 
  unsigned __int16 v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3472, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v6 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v6 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v12 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v12);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3473, scrContext, 0, "blended nonsynchronized animation has no concept of rate");
  Rate = XAnimGetRate(EntAnimTree, v6, subTreeID, index);
  Scr_AddFloat(scrContext, *(float *)&Rate);
}

/*
==============
GScr_GetAnimAssetType
==============
*/
void GScr_GetAnimAssetType(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned __int16 index; 
  unsigned __int8 AssetType; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3474, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  AssetType = XAnimGetAssetType(EntAnimTree, index);
  Scr_AddInt(scrContext, AssetType);
}

/*
==============
DumpAnimCommand
==============
*/
void DumpAnimCommand(const char *funcName, XAnimTree *tree, unsigned int anim, int root, float weight, float time, float rate)
{
  const XAnim_s *Anims; 

  Anims = XAnimGetAnims(tree);
  DumpAnimCommandInternal(funcName, Anims, anim, root, weight, time, rate);
}

/*
==============
DumpAnimCommandInternal
==============
*/
void DumpAnimCommandInternal(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float weight, float time, float rate)
{
  const scrContext_t *v10; 
  int v11; 
  char *v12; 
  int v13; 
  const char *AnimDebugName; 
  int v15; 
  int v16; 
  int line; 
  char *filename; 

  g_animSP_lastDumpCommandTime = level.time;
  v10 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v10, &line, (const char **)&filename);
  v11 = line;
  v12 = filename;
  v13 = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  v16 = v11;
  v15 = v13;
  Com_Printf(19, "^3%s  ^7weight=^5%.3f ^7time=^5%.2f ^7rate=^5%.2f   ^7level time:%d  %s:%d   %s\n", AnimDebugName, weight, time, rate, v15, v12, v16, funcName);
}

/*
==============
DumpAnimSetCurveCommand
==============
*/
void DumpAnimSetCurveCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, const char *curveName)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int time; 
  const char *AnimDebugName; 
  int v13; 
  int v14; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  time = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  v14 = v9;
  v13 = time;
  Com_Printf(19, "^3%s  ^7curve=^5'%s'  ^7level time:%d  %s:%d   %s\n", AnimDebugName, curveName, v13, v10, v14, funcName);
}

/*
==============
DumpAnimSetRateCommand
==============
*/
void DumpAnimSetRateCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float rate)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int time; 
  const char *AnimDebugName; 
  int v13; 
  int v14; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  time = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  v14 = v9;
  v13 = time;
  Com_Printf(19, "^3%s  ^7rate=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, rate, v13, v10, v14, funcName);
}

/*
==============
DumpAnimSetTimeCommand
==============
*/
void DumpAnimSetTimeCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float time)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int v11; 
  const char *AnimDebugName; 
  int v13; 
  int v14; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  v11 = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  v14 = v9;
  v13 = v11;
  Com_Printf(19, "^3%s  ^7time=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, time, v13, v10, v14, funcName);
}

/*
==============
GScr_Anim_SetAnimTree
==============
*/
void GScr_Anim_SetAnimTree(scrContext_t *scrContext, gentity_s *ent, scr_animtree_t *animtree)
{
  XAnimTree *pAnimTree; 
  XAnimTree *SmallTree; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2446, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((ent->s.eType - 12) & 0xFFFD) == 0 )
      Scr_Error(COM_ERR_3522, scrContext, "Cannot set the animTree for a vehicle using the an always loaded .atr");
  }
  G_StopAnimScripted(ent);
  if ( ent->scripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2463, ASSERT_TYPE_ASSERT, "( !ent->scripted )", (const char *)&queryFormat, "!ent->scripted") )
    __debugbreak();
  pAnimTree = ent->pAnimTree;
  if ( animtree )
  {
    if ( pAnimTree && XAnimGetAnims(ent->pAnimTree) == animtree->anims )
      return;
    SmallTree = Com_XAnimCreateSmallTree(animtree->anims, MOVEMENT);
  }
  else
  {
    if ( !pAnimTree )
      return;
    SmallTree = NULL;
  }
  ent->pAnimTree = SmallTree;
  G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(ent, ent->r.isLinked);
  if ( pAnimTree )
    Com_XAnimFreeSmallTree(pAnimTree);
  if ( ent->s.eType == ET_TURRET )
    G_Turret_SetDObjTransferFlag(ent);
}

/*
==============
GScr_HandleAnimError
==============
*/
void GScr_HandleAnimError(scrContext_t *scrContext, int error)
{
  if ( error == 1 )
  {
    Scr_Error(COM_ERR_3523, scrContext, "root anim is not an ancestor of the anim");
  }
  else if ( error == 2 )
  {
    goto LABEL_6;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2624, ASSERT_TYPE_ASSERT, "(error == XANIM_ERROR_BAD_NOTIFY)", (const char *)&queryFormat, "error == XANIM_ERROR_BAD_NOTIFY") )
    __debugbreak();
LABEL_6:
  Scr_Error(COM_ERR_3524, scrContext, "cannot flag anim since it has 0 effective goal weight");
}

/*
==============
GScr_SetAnimInternal
==============
*/
void GScr_SetAnimInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  float v7; 
  float time; 
  gentity_s *Entity; 
  float v10; 
  unsigned int NumParam; 
  double Float; 
  double v13; 
  double v14; 
  unsigned int index; 
  int v16; 
  XAnimSubTreeID subTreeID; 
  unsigned int v18; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v29; 
  XAnimTree *tree; 
  unsigned int graftAnimIndex; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3517, scrContext, "AnimScripted entities are not supported in this game mode");
  v7 = FLOAT_1_0;
  time = FLOAT_0_2;
  Entity = GetEntity(entref);
  v10 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    if ( NumParam != 2 )
    {
      if ( NumParam != 3 )
      {
        if ( NumParam - 4 > 3 )
          Scr_Error(COM_ERR_3518, scrContext, "too many parameters");
        Float = Scr_GetFloat(scrContext, 3u);
        v7 = *(float *)&Float;
      }
      v13 = Scr_GetFloat(scrContext, 2u);
      time = *(float *)&v13;
      if ( *(float *)&v13 < 0.0 )
        Scr_ParamError(COM_ERR_3519, scrContext, 2u, "must set nonnegative goal time");
    }
    v14 = Scr_GetFloat(scrContext, 1u);
    v10 = *(float *)&v14;
    if ( *(float *)&v14 < 0.0 )
      Scr_ParamError(COM_ERR_3520, scrContext, 1u, "must set nonnegative weight");
  }
  index = Scr_GetAnim(scrContext, 0, tree).index;
  v16 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v18 = 4;
  if ( Scr_GetNumParam(scrContext) > 4 && Scr_GetType(scrContext, 4u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 4u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v16 = 1;
    v18 = 5;
  }
  if ( Scr_GetNumParam(scrContext) > v18 && Scr_GetType(scrContext, v18) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v18);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v22 = Scr_GetConstString(scrContext, v18);
      v23 = SL_ConvertToString(v22);
      v24 = j_va("Invalid blend curve name '%s'", v23);
      Scr_Error(COM_ERR_3437, scrContext, v24);
    }
    ++v16;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v16 + 4) )
  {
    switch ( flags )
    {
      case 1u:
        v25 = "SetAnim";
        break;
      case 2u:
        v25 = "SetAnimLimitedRestart";
        break;
      case 3u:
        v25 = "SetAnimRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2318, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v25 = "SetAnimLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    DumpAnimCommandInternal(v25, SubTreeAnims, index, -1, v10, time, v7);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3521, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v29 = XAnimSetCompleteGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, (scr_string_t)0, 0, bRestart, curveID, NULL);
  else
    v29 = XAnimSetGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, (scr_string_t)0, 0, bRestart, curveID, NULL);
  if ( v29 )
    GScr_HandleAnimError(scrContext, v29);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
GScr_SetAnimKnobAllInternal
==============
*/
void GScr_SetAnimKnobAllInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  float v5; 
  float time; 
  float v7; 
  unsigned int NumParam; 
  double Float; 
  double v10; 
  double v11; 
  unsigned int v12; 
  int v13; 
  XAnimSubTreeID subTreeID; 
  unsigned int v15; 
  int v16; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v19; 
  const char *v20; 
  const char *v21; 
  XAnimSubTreeID v22; 
  unsigned int v23; 
  const char *v24; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int v27; 
  unsigned int bRestart; 
  unsigned int graftAnimIndex; 
  int v30; 
  int linkPointer; 
  gentity_s *ent; 
  XAnimTree *tree; 
  XAnimCurveID curveID; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3461, scrContext, "AnimScripted entities are not supported in this game mode");
  v5 = FLOAT_1_0;
  time = FLOAT_0_2;
  ent = GetEntity(entref);
  v7 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(ent);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 2 )
  {
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3462, scrContext, "incorrect number of parameters");
        Float = Scr_GetFloat(scrContext, 4u);
        v5 = *(float *)&Float;
      }
      v10 = Scr_GetFloat(scrContext, 3u);
      time = *(float *)&v10;
      if ( *(float *)&v10 < 0.0 )
        Scr_ParamError(COM_ERR_3463, scrContext, 3u, "must set nonnegative goal time");
    }
    v11 = Scr_GetFloat(scrContext, 2u);
    v7 = *(float *)&v11;
    if ( *(float *)&v11 < 0.0 )
      Scr_ParamError(COM_ERR_3464, scrContext, 2u, "must set nonnegative weight");
  }
  linkPointer = Scr_GetAnim(scrContext, 1u, tree).linkPointer;
  v30 = Scr_GetAnim(scrContext, 0, tree).linkPointer;
  v12 = (unsigned __int16)v30;
  v13 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v15 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = (unsigned __int16)v30;
    v16 = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    v12 = (unsigned __int16)v16;
    Anims = Scr_GetAnims(scrContext, HIWORD(v16));
    if ( v12 >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v15 = 6;
    v13 = 1;
  }
  if ( Scr_GetNumParam(scrContext) > v15 && Scr_GetType(scrContext, v15) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v15);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v19 = Scr_GetConstString(scrContext, v15);
      v20 = SL_ConvertToString(v19);
      v21 = j_va("Invalid blend curve name '%s'", v20);
      Scr_Error(COM_ERR_3437, scrContext, v21);
    }
    ++v13;
  }
  v22 = XANIM_SUBTREE_DEFAULT;
  if ( v13 && HIWORD(linkPointer) != HIWORD(v30) )
    v22 = subTreeID;
  v23 = (unsigned __int16)linkPointer;
  if ( (unsigned __int16)linkPointer == v12 && v22 == subTreeID )
    Scr_Error(COM_ERR_3465, scrContext, "root anim is not an ancestor of the anim");
  if ( ShouldDumpAnimCommand(scrContext, ent->s.number, v13 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v24 = "SetAnimKnobAll";
        break;
      case 2u:
        v24 = "SetAnimKnobAllLimitedRestart";
        break;
      case 3u:
        v24 = "SetAnimKnobAllRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 880, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v24 = "SetAnimKnobAllLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    v23 = (unsigned __int16)linkPointer;
    DumpAnimCommandInternal(v24, SubTreeAnims, v12, (unsigned __int16)linkPointer, v7, time, v5);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3466, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v27 = XAnimSetCompleteGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v12, v22, v23, v7, time, v5, (scr_string_t)0, bRestart, curveID);
  else
    v27 = XAnimSetGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v12, v22, v23, v7, time, v5, (scr_string_t)0, bRestart, curveID);
  if ( v27 )
    GScr_HandleAnimError(scrContext, v27);
  else
    G_FlagAnimForUpdate(ent);
}

/*
==============
GScr_SetAnimKnobInternal
==============
*/
void GScr_SetAnimKnobInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  float v7; 
  float time; 
  gentity_s *Entity; 
  float v10; 
  unsigned int NumParam; 
  double Float; 
  double v13; 
  double v14; 
  unsigned int index; 
  int v16; 
  XAnimSubTreeID subTreeID; 
  unsigned int v18; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v29; 
  XAnimTree *tree; 
  unsigned int graftAnimIndex; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3456, scrContext, "AnimScripted entities are not supported in this game mode");
  v7 = FLOAT_1_0;
  time = FLOAT_0_2;
  Entity = GetEntity(entref);
  v10 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    if ( NumParam != 2 )
    {
      if ( NumParam != 3 )
      {
        if ( NumParam - 4 > 3 )
          Scr_Error(COM_ERR_3457, scrContext, "too many parameters");
        Float = Scr_GetFloat(scrContext, 3u);
        v7 = *(float *)&Float;
      }
      v13 = Scr_GetFloat(scrContext, 2u);
      time = *(float *)&v13;
      if ( *(float *)&v13 < 0.0 )
        Scr_ParamError(COM_ERR_3458, scrContext, 2u, "must set nonnegative goal time");
    }
    v14 = Scr_GetFloat(scrContext, 1u);
    v10 = *(float *)&v14;
    if ( *(float *)&v14 < 0.0 )
      Scr_ParamError(COM_ERR_3459, scrContext, 1u, "must set nonnegative weight");
  }
  index = Scr_GetAnim(scrContext, 0, tree).index;
  v16 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v18 = 4;
  if ( Scr_GetNumParam(scrContext) > 4 && Scr_GetType(scrContext, 4u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 4u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v16 = 1;
    v18 = 5;
  }
  if ( Scr_GetNumParam(scrContext) > v18 && Scr_GetType(scrContext, v18) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v18);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v22 = Scr_GetConstString(scrContext, v18);
      v23 = SL_ConvertToString(v22);
      v24 = j_va("Invalid blend curve name '%s'", v23);
      Scr_Error(COM_ERR_3437, scrContext, v24);
    }
    ++v16;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v16 + 4) )
  {
    switch ( flags )
    {
      case 1u:
        v25 = "SetAnimKnob";
        break;
      case 2u:
        v25 = "SetAnimKnobLimitedRestart";
        break;
      case 3u:
        v25 = "SetAnimKnobRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 652, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v25 = "SetAnimKnobLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    DumpAnimCommandInternal(v25, SubTreeAnims, index, -1, v10, time, v7);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3460, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v29 = XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, (scr_string_t)0, 0, bRestart, curveID);
  else
    v29 = XAnimSetGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, (scr_string_t)0, bRestart, curveID);
  if ( v29 )
    GScr_HandleAnimError(scrContext, v29);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
GScr_SetFlaggedAnimInternal
==============
*/
void GScr_SetFlaggedAnimInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  float v7; 
  float time; 
  gentity_s *Entity; 
  float v10; 
  unsigned int NumParam; 
  double Float; 
  double v13; 
  double v14; 
  unsigned int index; 
  int v16; 
  XAnimSubTreeID subTreeID; 
  unsigned int v18; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v22; 
  const char *v23; 
  const char *v24; 
  const XAnim_s *SubTreeAnims; 
  const char *v26; 
  const XAnim_s *v27; 
  const DObj *ServerDObjForEnt; 
  int v29; 
  unsigned int bRestart; 
  XAnimTree *tree; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3490, scrContext, "AnimScripted entities are not supported int this game mode");
  v7 = FLOAT_1_0;
  time = FLOAT_0_2;
  Entity = GetEntity(entref);
  v10 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 2 )
  {
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3491, scrContext, "incorrect number of parameters");
        Float = Scr_GetFloat(scrContext, 4u);
        v7 = *(float *)&Float;
        if ( *(float *)&Float < 0.0 )
          Scr_ParamError(COM_ERR_3492, scrContext, 4u, "must set nonnegative rate for flagged anims");
      }
      v13 = Scr_GetFloat(scrContext, 3u);
      time = *(float *)&v13;
      if ( *(float *)&v13 < 0.0 )
        Scr_ParamError(COM_ERR_3493, scrContext, 3u, "must set nonnegative goal time");
    }
    v14 = Scr_GetFloat(scrContext, 2u);
    v10 = *(float *)&v14;
    if ( *(float *)&v14 <= 0.0 )
      Scr_ParamError(COM_ERR_3494, scrContext, 2u, "must set positive weight");
  }
  index = Scr_GetAnim(scrContext, 1u, tree).index;
  notifyName = Scr_GetConstString(scrContext, 0);
  v16 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v18 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v16 = 1;
    v18 = 6;
  }
  if ( Scr_GetNumParam(scrContext) > v18 && Scr_GetType(scrContext, v18) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v18);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v22 = Scr_GetConstString(scrContext, v18);
      v23 = SL_ConvertToString(v22);
      v24 = j_va("Invalid blend curve name '%s'", v23);
      Scr_Error(COM_ERR_3437, scrContext, v24);
    }
    ++v16;
  }
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1672, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3495, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v16 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v26 = "SetFlaggedAnim";
        break;
      case 2u:
        v26 = "SetFlaggedAnimLimitedRestart";
        break;
      case 3u:
        v26 = "SetFlaggedAnimRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1696, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v26 = "SetFlaggedAnimLimited";
        break;
    }
    v27 = XAnimGetSubTreeAnims(tree, subTreeID);
    DumpAnimCommandInternal(v26, v27, index, -1, v10, time, v7);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3496, scrContext, "No model exists.");
  if ( v10 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1709, ASSERT_TYPE_ASSERT, "(goalWeight)", (const char *)&queryFormat, "goalWeight") )
    __debugbreak();
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v29 = XAnimSetCompleteGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, notifyName, 0, bRestart, curveID, NULL);
  else
    v29 = XAnimSetGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, notifyName, 0, bRestart, curveID, NULL);
  if ( v29 )
    GScr_HandleAnimError(scrContext, v29);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
GScr_SetFlaggedAnimKnobAllInternal
==============
*/
void GScr_SetFlaggedAnimKnobAllInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags, const char *usage)
{
  float v8; 
  float time; 
  float v10; 
  unsigned int NumParam; 
  double Float; 
  double v13; 
  double v14; 
  XAnimSubTreeID v15; 
  unsigned int v16; 
  int v17; 
  XAnimSubTreeID subTreeID; 
  unsigned int v19; 
  int v20; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v23; 
  const char *v24; 
  const char *v25; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v27; 
  unsigned int v28; 
  gentity_s *v29; 
  const char *v30; 
  const XAnim_s *v31; 
  const DObj *ServerDObjForEnt; 
  int v33; 
  unsigned int bRestart; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 
  XAnimTree *tree; 
  gentity_s *ent; 
  int v39; 
  int linkPointer; 
  XAnimCurveID curveID; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3482, scrContext, "AnimScripted entities are not supported in this game mode");
  v8 = FLOAT_1_0;
  time = FLOAT_0_2;
  ent = GetEntity(entref);
  v10 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(ent);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 3 )
  {
    if ( NumParam != 4 )
    {
      if ( NumParam != 5 )
      {
        if ( NumParam - 6 > 3 )
          Scr_Error(COM_ERR_3483, scrContext, usage);
        Float = Scr_GetFloat(scrContext, 5u);
        v8 = *(float *)&Float;
        if ( *(float *)&Float < 0.0 )
          Scr_ParamError(COM_ERR_3484, scrContext, 5u, "must set nonnegative rate for flagged anims");
      }
      v13 = Scr_GetFloat(scrContext, 4u);
      time = *(float *)&v13;
      if ( *(float *)&v13 < 0.0 )
        Scr_ParamError(COM_ERR_3485, scrContext, 4u, "must set nonnegative goal time");
    }
    v14 = Scr_GetFloat(scrContext, 3u);
    v10 = *(float *)&v14;
    if ( *(float *)&v14 <= 0.0 )
      Scr_ParamError(COM_ERR_3486, scrContext, 3u, "must set positive weight");
  }
  linkPointer = Scr_GetAnim(scrContext, 2u, tree).linkPointer;
  v39 = Scr_GetAnim(scrContext, 1u, tree).linkPointer;
  v15 = XANIM_SUBTREE_DEFAULT;
  v16 = (unsigned __int16)v39;
  notifyName = Scr_GetConstString(scrContext, 0);
  v17 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v19 = 6;
  if ( Scr_GetNumParam(scrContext) > 6 && Scr_GetType(scrContext, 6u) == VAR_ANIMATION )
  {
    graftAnimIndex = (unsigned __int16)v39;
    v20 = Scr_GetAnim(scrContext, 6u, NULL).linkPointer;
    if ( !HIWORD(v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    v16 = (unsigned __int16)v20;
    Anims = Scr_GetAnims(scrContext, HIWORD(v20));
    if ( v16 >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v19 = 7;
    v17 = 1;
  }
  if ( Scr_GetNumParam(scrContext) > v19 && Scr_GetType(scrContext, v19) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v19);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v23 = Scr_GetConstString(scrContext, v19);
      v24 = SL_ConvertToString(v23);
      v25 = j_va("Invalid blend curve name '%s'", v24);
      Scr_Error(COM_ERR_3437, scrContext, v25);
    }
    ++v17;
  }
  if ( v17 && HIWORD(linkPointer) != HIWORD(v39) )
    v15 = subTreeID;
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1495, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, v16) )
    Scr_ParamError(COM_ERR_3487, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  v27 = (unsigned __int16)linkPointer;
  if ( (unsigned __int16)linkPointer == v16 && v15 == subTreeID )
    Scr_Error(COM_ERR_3488, scrContext, "root anim is not an ancestor of the anim");
  v28 = v17 + 6;
  v29 = ent;
  if ( ShouldDumpAnimCommand(scrContext, ent->s.number, v28) )
  {
    if ( flags == 3 )
    {
      v30 = "SetFlaggedAnimKnobAllRestart";
    }
    else
    {
      if ( flags != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1523, ASSERT_TYPE_ASSERT, "(flags == (1 << 0))", (const char *)&queryFormat, "flags == ANIM_FLAG_COMPLETE") )
        __debugbreak();
      v30 = "SetFlaggedAnimKnobAll";
    }
    v31 = XAnimGetSubTreeAnims(tree, subTreeID);
    v27 = (unsigned __int16)linkPointer;
    DumpAnimCommandInternal(v30, v31, v16, (unsigned __int16)linkPointer, v10, time, v8);
    v29 = ent;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(v29);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3489, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v33 = XAnimSetCompleteGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v16, v15, v27, v10, time, v8, notifyName, bRestart, curveID);
  else
    v33 = XAnimSetGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v16, v15, v27, v10, time, v8, notifyName, bRestart, curveID);
  if ( v33 )
    GScr_HandleAnimError(scrContext, v33);
  else
    G_FlagAnimForUpdate(v29);
}

/*
==============
GScr_SetFlaggedAnimKnobInternal
==============
*/
void GScr_SetFlaggedAnimKnobInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  float v7; 
  float time; 
  gentity_s *Entity; 
  float v10; 
  unsigned int NumParam; 
  double Float; 
  double v13; 
  double v14; 
  unsigned int index; 
  int v16; 
  XAnimSubTreeID subTreeID; 
  unsigned int v18; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v22; 
  const char *v23; 
  const char *v24; 
  const XAnim_s *SubTreeAnims; 
  const char *v26; 
  const XAnim_s *v27; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v30; 
  XAnimTree *tree; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 

  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3475, scrContext, "AnimScripted entities are not supported in this game mode");
  v7 = FLOAT_1_0;
  time = FLOAT_0_2;
  Entity = GetEntity(entref);
  v10 = FLOAT_1_0;
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 2 )
  {
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3476, scrContext, "too many parameters");
        Float = Scr_GetFloat(scrContext, 4u);
        v7 = *(float *)&Float;
        if ( *(float *)&Float < 0.0 )
          Scr_ParamError(COM_ERR_3477, scrContext, 4u, "must set nonnegative rate for flagged anims");
      }
      v13 = Scr_GetFloat(scrContext, 3u);
      time = *(float *)&v13;
      if ( *(float *)&v13 < 0.0 )
        Scr_ParamError(COM_ERR_3478, scrContext, 3u, "must set nonnegative goal time");
    }
    v14 = Scr_GetFloat(scrContext, 2u);
    v10 = *(float *)&v14;
    if ( *(float *)&v14 <= 0.0 )
      Scr_ParamError(COM_ERR_3479, scrContext, 2u, "must set positive weight");
  }
  index = Scr_GetAnim(scrContext, 1u, tree).index;
  notifyName = Scr_GetConstString(scrContext, 0);
  v16 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v18 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v16 = 1;
    v18 = 6;
  }
  if ( Scr_GetNumParam(scrContext) > v18 && Scr_GetType(scrContext, v18) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v18);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v22 = Scr_GetConstString(scrContext, v18);
      v23 = SL_ConvertToString(v22);
      v24 = j_va("Invalid blend curve name '%s'", v23);
      Scr_Error(COM_ERR_3437, scrContext, v24);
    }
    ++v16;
  }
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1264, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3480, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v16 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v26 = "SetFlaggedAnimKnob";
        break;
      case 2u:
        v26 = "SetFlaggedAnimKnobLimitedRestart";
        break;
      case 3u:
        v26 = "SetFlaggedAnimKnobRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1294, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v26 = "SetFlaggedAnimKnobLimited";
        break;
    }
    v27 = XAnimGetSubTreeAnims(tree, subTreeID);
    DumpAnimCommandInternal(v26, v27, index, -1, v10, time, v7);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3481, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
    v30 = XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, notifyName, 0, bRestart, curveID);
  else
    v30 = XAnimSetGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, v10, time, v7, notifyName, bRestart, curveID);
  if ( v30 )
    GScr_HandleAnimError(scrContext, v30);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
G_StopAnimScripted
==============
*/
void G_StopAnimScripted(gentity_s *ent)
{
  actor_s *actor; 
  EntityAnimScript *scripted; 
  XAnimTree *EntAnimTree; 
  const dvar_t *v5; 
  const DObj *ServerDObjForEnt; 
  bool v7; 
  AIActorInterface v8; 
  AIActorInterface *v9; 

  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
  {
    actor = ent->actor;
    if ( actor )
    {
      AIActorInterface::AIActorInterface(&v8);
      v9 = NULL;
      AIActorInterface::SetActor(&v8, actor);
      v9 = &v8;
      if ( actor->eSimulatedState[actor->simulatedStateLevel] == AIS_SCRIPTEDANIM )
        AIScriptedInterface::PopState(&v8);
    }
  }
  scripted = ent->scripted;
  if ( scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 352, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    if ( scripted->anim )
    {
      EntAnimTree = GScr_GetEntAnimTree(ent);
      if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 358, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
        __debugbreak();
      v5 = DVARINT_g_dumpAnimsCommands;
      if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.integer == ent->s.number )
        DumpAnimCommandInternal("stopanimscripted", EntAnimTree->anims, scripted->anim, -1, 0.0, 0.2, 1.0);
      ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
      if ( ServerDObjForEnt )
        XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, scripted->anim, 0.0, 0.2, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    MT_Free(scripted, 0x60ui64);
    v7 = ent->s.eType == ET_SCRIPTMOVER;
    ent->scripted = NULL;
    if ( v7 )
      ent->s.lerp.u.anonymous.data[2] &= ~0x40u;
  }
}

/*
==============
ScrCmd_animscriptedInternal
==============
*/
void ScrCmd_animscriptedInternal(scrContext_t *scrContext, gentity_s *ent, int bDelayForActor)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  unsigned __int64 linkPointer; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  int NumParam; 
  unsigned __int16 v18; 
  scr_string_t v19; 
  double Float; 
  float time; 
  double v22; 
  float v23; 
  scr_string_t ConstString; 
  const char *v25; 
  const char *v26; 
  scr_anim_t v27; 
  unsigned __int64 v28; 
  actor_s *actor; 
  const char *v30; 
  scr_string_t targetname; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  actor_s *v39; 
  EntityAnimScript *scripted; 
  scr_string_t v41; 
  unsigned int v42; 
  EntityTagInfo *tagInfo; 
  EntityTagInfo *v44; 
  unsigned __int64 v45; 
  scr_string_t value; 
  const char *weight; 
  actor_s *pActor; 
  const char *goalTime; 
  XAnimTree *EntAnimTree; 
  DObj *obj; 
  AIActorInterface v53; 
  AIActorInterface *v54; 
  vec3_t vectorValue; 
  vec3_t origin; 
  tmat43_t<vec3_t> parentAxis; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 

  linkPointer = UNDEFINED_ANIM_2.linkPointer;
  v62 = v5;
  v61 = v6;
  v60 = v7;
  v59 = v8;
  v58 = v9;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  NumParam = Scr_GetNumParam(scrContext);
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3438, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 125, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  obj = Com_GetServerDObjForEnt(ent);
  if ( !obj )
    Scr_ObjectError(COM_ERR_3439, scrContext, "No model exists.");
  EntAnimTree = GScr_GetEntAnimTree(ent);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 131, ASSERT_TYPE_ASSERT, "( pAnimTree )", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  v63 = v4;
  LODWORD(v45) = 0;
  v18 = 0;
  v19 = 0;
  if ( NumParam <= 6 )
  {
    time = FLOAT_0_2;
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 6u);
    time = *(float *)&Float;
  }
  v64 = v3;
  if ( NumParam <= 7 )
  {
    v23 = FLOAT_1_0;
  }
  else
  {
    v22 = Scr_GetFloat(scrContext, 7u);
    v23 = *(float *)&v22;
  }
  if ( NumParam <= 4 )
    goto LABEL_26;
  if ( Scr_GetType(scrContext, 4u) )
  {
    ConstString = Scr_GetConstString(scrContext, 4u);
    v19 = ConstString;
    if ( ConstString != scr_const.normal && ConstString != scr_const.deathplant )
    {
      v25 = SL_ConvertToString(ConstString);
      v26 = j_va("Illegal mode %s for animScripted. Valid modes are normal and deathplant", v25);
      Scr_Error(COM_ERR_3440, scrContext, v26);
    }
    SL_AddRefToString(v19);
  }
  if ( NumParam > 5 && Scr_GetType(scrContext, 5u) )
  {
    v45 = Scr_GetAnim(scrContext, 5u, EntAnimTree).linkPointer;
    v27 = (scr_anim_t)v45;
    v18 = v45;
  }
  else
  {
LABEL_26:
    v27 = (scr_anim_t)v45;
  }
  v28 = Scr_GetAnim(scrContext, 3u, EntAnimTree).linkPointer;
  Scr_GetVector(scrContext, 2u, &vectorValue);
  Scr_GetVector(scrContext, 1u, &origin);
  value = Scr_GetConstString(scrContext, 0);
  SL_AddRefToString(value);
  actor = ent->actor;
  pActor = actor;
  if ( !actor )
    goto LABEL_82;
  if ( !actor->Physics.bIsAlive )
  {
    v30 = SL_ConvertToString(ent->classname);
    targetname = ent->targetname;
    goalTime = v30;
    if ( targetname )
      v32 = SL_ConvertToString(targetname);
    else
      v32 = "<undefined>";
    weight = v32;
    v33 = vtos(&ent->r.currentOrigin);
    v34 = j_va("tried to play a scripted animation on a dead AI; entity %i team %i origin %s targetname %s classname %s\n", (unsigned int)ent->s.number, (unsigned int)ent->sentient->eTeam, v33, weight, goalTime);
    Scr_Error(COM_ERR_3441, scrContext, v34);
  }
  if ( bDelayForActor )
  {
    if ( NumParam > 12 )
    {
      v35 = Scr_GetFloat(scrContext, 8u);
      v14 = *(float *)&v35;
      v36 = Scr_GetFloat(scrContext, 9u);
      v15 = *(float *)&v36;
      v37 = Scr_GetFloat(scrContext, 0xAu);
      v16 = *(float *)&v37;
      v38 = Scr_GetFloat(scrContext, 0xBu);
      v13 = *(float *)&v38;
      linkPointer = Scr_GetAnim(scrContext, 0xCu, NULL).linkPointer;
    }
    AIActorInterface::AIActorInterface(&v53);
    v39 = pActor;
    v54 = NULL;
    AIActorInterface::SetActor(&v53, pActor);
    v54 = &v53;
    AIScriptedInterface::PushState(&v53, AIS_SCRIPTEDANIM);
    AIScriptedInterface::KillAnimScript(&v53);
    scripted = ent->scripted;
    if ( scripted && scripted->anim )
    {
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_g_dumpAnimsCommands, "g_dumpAnimsCommands") == ent->s.number )
        DumpAnimCommandInternal("animscripted", EntAnimTree->anims, ent->scripted->anim, -1, 1.0, time, v23);
      XAnimSetCompleteGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ent->scripted->anim, 1.0, time, v23, (scr_string_t)0, 0, 0, LINEAR, NULL);
      G_FlagAnimForUpdate(ent);
    }
    if ( NumParam <= 12 )
    {
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
    }
    else
    {
      Scr_AddAnim(scrContext, (scr_anim_t)linkPointer);
      Scr_AddFloat(scrContext, v13);
      Scr_AddFloat(scrContext, v16);
      Scr_AddFloat(scrContext, v15);
      Scr_AddFloat(scrContext, v14);
    }
    Scr_AddFloat(scrContext, v23);
    Scr_AddFloat(scrContext, time);
    if ( WORD1(v45) )
      Scr_AddAnim(scrContext, v27);
    else
      Scr_AddUndefined(scrContext);
    if ( v19 )
      Scr_AddConstString(scrContext, v19);
    else
      Scr_AddUndefined(scrContext);
    Scr_AddAnim(scrContext, (scr_anim_t)v28);
    Scr_AddVector(scrContext, vectorValue.v);
    Scr_AddVector(scrContext, origin.v);
    v41 = value;
    Scr_AddConstString(scrContext, value);
    if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v42 = GScr_ExecEntThread(ent, GameScriptData::ms_gScriptData[1].levelscript, 0xDu);
    Scr_FreeThread(scrContext, v42);
  }
  else
  {
LABEL_82:
    if ( !WORD1(v45) && v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 254, ASSERT_TYPE_ASSERT, "(root.tree || !root.index)", (const char *)&queryFormat, "root.tree || !root.index") )
      __debugbreak();
    v41 = value;
    G_Animscripted(scrContext, ent, &origin, &vectorValue, (unsigned __int16)v28, v18, value, v19 == scr_const.deathplant, time, v23);
    v39 = pActor;
  }
  SL_RemoveRefToString(v41);
  if ( v19 )
    SL_RemoveRefToString(v19);
  tagInfo = ent->tagInfo;
  if ( tagInfo )
  {
    tagInfo->animScriptedDataInUse = 1;
    if ( !v39 || bDelayForActor )
    {
      if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 48, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
        __debugbreak();
      if ( !ent->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 49, ASSERT_TYPE_ASSERT, "(ent->tagInfo->animScriptedDataInUse)", "%s\n\tAttemping to use animScripted data of a linked entity that is not animscripted.\n", "ent->tagInfo->animScriptedDataInUse") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 50, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ))", "%s\n\tScripted animation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
        __debugbreak();
      v44 = ent->tagInfo;
      G_CalcTagParentAxis(ent, &parentAxis);
      MatrixInverseOrthogonal43(&parentAxis, (tmat43_t<vec3_t> *)&v44->extraDataUnion);
    }
  }
}

/*
==============
Scr_AnimRelative
==============
*/
void Scr_AnimRelative(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  __int16 v6; 
  unsigned __int16 v7; 
  scr_string_t v8; 
  scr_string_t ConstString; 
  const char *v10; 
  const char *v11; 
  unsigned __int16 index; 
  scr_string_t v13; 
  actor_s *actor; 
  scr_string_t notifyName; 
  const char *v16; 
  scr_string_t targetname; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  actor_s *v21; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t origin; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3447, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  if ( !Com_GetServerDObjForEnt(Entity) )
    Scr_ObjectError(COM_ERR_3448, scrContext, "No model exists.");
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 478, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( Scr_GetNumParam(scrContext) > 4 )
  {
    ConstString = Scr_GetConstString(scrContext, 4u);
    v8 = ConstString;
    if ( ConstString != scr_const.normal && ConstString != scr_const.deathplant )
    {
      v10 = SL_ConvertToString(ConstString);
      v11 = j_va("Illegal mode %s for animScripted. Valid modes are normal and deathplant", v10);
      Scr_Error(COM_ERR_3449, scrContext, v11);
    }
    if ( Scr_GetNumParam(scrContext) > 5 )
    {
      linkPointer = Scr_GetAnim(scrContext, 5u, EntAnimTree).linkPointer;
      v7 = linkPointer;
      v6 = HIWORD(linkPointer);
    }
  }
  index = Scr_GetAnim(scrContext, 3u, EntAnimTree).index;
  Scr_GetVector(scrContext, 2u, &vectorValue);
  Scr_GetVector(scrContext, 1u, &origin);
  v13 = Scr_GetConstString(scrContext, 0);
  actor = Entity->actor;
  notifyName = v13;
  if ( actor && !actor->Physics.bIsAlive )
  {
    v16 = SL_ConvertToString(Entity->classname);
    targetname = Entity->targetname;
    v18 = v16;
    if ( targetname )
      v19 = SL_ConvertToString(targetname);
    else
      v19 = "<undefined>";
    v20 = j_va("tried to play a scripted animation on a dead AI; entity %i team %i origin %.2f %.2f %.2f targetname %s classname %s\n", (unsigned int)Entity->s.number, (unsigned int)Entity->sentient->eTeam, Entity->r.currentOrigin.v[0], Entity->r.currentOrigin.v[1], Entity->r.currentOrigin.v[2], v19, v18);
    Scr_Error(COM_ERR_3450, scrContext, v20);
  }
  if ( !v6 && v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 508, ASSERT_TYPE_ASSERT, "(root.tree || !root.index)", (const char *)&queryFormat, "root.tree || !root.index") )
    __debugbreak();
  G_Animscripted(scrContext, Entity, &origin, &vectorValue, index, v7, notifyName, v8 == scr_const.deathplant, 0.2, 1.0);
  v21 = Entity->actor;
  if ( v21 )
  {
    v21->eScriptSetAnimMode = AI_ANIM_POINT_RELATIVE;
    Entity->actor->eAnimMode = AI_ANIM_POINT_RELATIVE;
  }
}

/*
==============
Scr_FixupExtraAnimParams
==============
*/
__int64 Scr_FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  unsigned int v10; 
  int linkPointer; 
  XAnim_s *Anims; 
  XAnimSubTreeID subTreeID; 
  scr_string_t ConstString; 
  XAnimCurveID ID; 
  scr_string_t v16; 
  const char *v17; 
  const char *v18; 

  if ( !outSubTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 50, ASSERT_TYPE_ASSERT, "(outSubTreeID)", (const char *)&queryFormat, "outSubTreeID") )
    __debugbreak();
  if ( !outAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 51, ASSERT_TYPE_ASSERT, "(outAnimIndex)", (const char *)&queryFormat, "outAnimIndex") )
    __debugbreak();
  if ( !outGraftAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 52, ASSERT_TYPE_ASSERT, "(outGraftAnimIndex)", (const char *)&queryFormat, "outGraftAnimIndex") )
    __debugbreak();
  if ( !outAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 53, ASSERT_TYPE_ASSERT, "(outAnimIndex)", (const char *)&queryFormat, "outAnimIndex") )
    __debugbreak();
  v10 = 0;
  *outGraftAnimIndex = 0;
  *outSubTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > firstParamIndex && Scr_GetType(scrContext, firstParamIndex) == VAR_ANIMATION )
  {
    *outGraftAnimIndex = *outAnimIndex;
    linkPointer = Scr_GetAnim(scrContext, firstParamIndex, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    *outAnimIndex = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( (unsigned __int16)linkPointer >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    *outSubTreeID = subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v10 = 1;
    ++firstParamIndex;
  }
  if ( !outBlendCurveID || Scr_GetNumParam(scrContext) <= firstParamIndex || Scr_GetType(scrContext, firstParamIndex) != VAR_STRING )
    return v10;
  ConstString = Scr_GetConstString(scrContext, firstParamIndex);
  ID = XAnimCurve_GetID(ConstString);
  if ( ID == CURVE_ASSET_END )
  {
    v16 = Scr_GetConstString(scrContext, firstParamIndex);
    v17 = SL_ConvertToString(v16);
    v18 = j_va("Invalid blend curve name '%s'", v17);
    Scr_Error(COM_ERR_3437, scrContext, v18);
  }
  *outBlendCurveID = ID;
  return v10 + 1;
}

/*
==============
ShouldDumpAnimCommand
==============
*/
bool ShouldDumpAnimCommand(scrContext_t *scrContext, int entNum, unsigned int verboseParamNumber)
{
  const dvar_t *v3; 
  bool enabled; 
  const dvar_t *v8; 
  int integer; 

  v3 = DVARBOOL_g_animsCommandsVerbose;
  if ( !DVARBOOL_g_animsCommandsVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_animsCommandsVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v8 = DVARINT_g_dumpAnimsCommands;
  if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( enabled || Scr_GetNumParam(scrContext) - 1 < verboseParamNumber || !Scr_GetInt(scrContext, verboseParamNumber) )
    ++g_animSP_commandCounter;
  return integer == entNum && (enabled || Scr_GetNumParam(scrContext) - 1 < verboseParamNumber || !Scr_GetInt(scrContext, verboseParamNumber));
}

