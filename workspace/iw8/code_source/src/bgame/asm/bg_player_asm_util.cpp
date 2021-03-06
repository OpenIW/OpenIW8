/*
==============
BG_PlayerASM_GetAnimsetName
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetAnimsetName(const PlayerASM_Context *context)
{
  return ?BG_PlayerASM_GetAnimsetName@@YA?AW4scr_string_t@@PEBUPlayerASM_Context@@@Z(context);
}

/*
==============
BG_PlayerASM_CopyAnimDataToEntity
==============
*/

void __fastcall BG_PlayerASM_CopyAnimDataToEntity(const playerState_s *fromPs, entityState_t *es)
{
  ?BG_PlayerASM_CopyAnimDataToEntity@@YAXPEBUplayerState_s@@PEAUentityState_t@@@Z(fromPs, es);
}

/*
==============
BG_PlayerASM_IsGestureAlias
==============
*/

int __fastcall BG_PlayerASM_IsGestureAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsGestureAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsNoAimingIfProneAlias
==============
*/

int __fastcall BG_PlayerASM_IsNoAimingIfProneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsNoAimingIfProneAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAssetNameBySuit
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetAssetNameBySuit(unsigned int suitIndex)
{
  return ?BG_PlayerASM_GetAssetNameBySuit@@YA?AW4scr_string_t@@I@Z(suitIndex);
}

/*
==============
BG_PlayerASM_GetAnimLength
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimLength(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetAnimLength@@YAIPEBUplayerState_s@@W4PlayerASM_AnimSlot@@@Z(ps, slot);
}

/*
==============
BG_PlayerASM_VerifyAnim
==============
*/

void __fastcall BG_PlayerASM_VerifyAnim(unsigned int animsetIndex, unsigned int packedAnimIndex)
{
  ?BG_PlayerASM_VerifyAnim@@YAXII@Z(animsetIndex, packedAnimIndex);
}

/*
==============
BG_PlayerASM_IsExecutionAttackerAlias
==============
*/

int __fastcall BG_PlayerASM_IsExecutionAttackerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsExecutionAttackerAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsNoAimingAlias
==============
*/

int __fastcall BG_PlayerASM_IsNoAimingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsNoAimingAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsRaiseWeaponAlias
==============
*/

int __fastcall BG_PlayerASM_IsRaiseWeaponAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsRaiseWeaponAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_UnpackAnimFromEntity
==============
*/

unsigned int __fastcall BG_PlayerASM_UnpackAnimFromEntity(const entityState_t *es, const PlayerASM_AnimSlot slot, unsigned int *outAnimsetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  return ?BG_PlayerASM_UnpackAnimFromEntity@@YAIPEBUentityState_t@@W4PlayerASM_AnimSlot@@PEAI22@Z(es, slot, outAnimsetIndex, outAnimState, outAnimEntry);
}

/*
==============
BG_PlayerASM_IsFiringAlias
==============
*/

int __fastcall BG_PlayerASM_IsFiringAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsFiringAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>
==============
*/

int __fastcall BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const scr_string_t stateName, const scr_string_t aliasName, int animEntryToSkip)
{
  return ??$BG_PlayerASM_GetIndexOfRandomAnimFromAlias@$0A@@@YAHPEAIIIW4scr_string_t@@1H@Z(holdrand, entNum, animsetIndex, stateName, aliasName, animEntryToSkip);
}

/*
==============
BG_PlayerASM_IsLadderAlias
==============
*/

int __fastcall BG_PlayerASM_IsLadderAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsLadderAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_EvaluateCondition
==============
*/

int __fastcall BG_PlayerASM_EvaluateCondition(const characterInfo_t *ci, unsigned int index, unsigned int *value)
{
  return ?BG_PlayerASM_EvaluateCondition@@YAHPEBUcharacterInfo_t@@IQEAI@Z(ci, index, value);
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>
==============
*/

int __fastcall BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const AnimsetState *pState, const scr_string_t aliasName, int animEntryToSkip)
{
  return ??$BG_PlayerASM_GetIndexOfRandomAnimFromAlias@$0A@@@YAHPEAIIIPEBUAnimsetState@@W4scr_string_t@@H@Z(holdrand, entNum, animsetIndex, pState, aliasName, animEntryToSkip);
}

/*
==============
BG_PlayerASM_GetXAnimLength
==============
*/

unsigned int __fastcall BG_PlayerASM_GetXAnimLength(const XAnimParts *parts, const float rate)
{
  return ?BG_PlayerASM_GetXAnimLength@@YAIPEBUXAnimParts@@M@Z(parts, rate);
}

/*
==============
BG_PlayerASM_IsPrepareAlias
==============
*/

int __fastcall BG_PlayerASM_IsPrepareAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsPrepareAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsTurretAlias
==============
*/

int __fastcall BG_PlayerASM_IsTurretAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsTurretAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_flrand
==============
*/

double __fastcall BG_PlayerASM_flrand(unsigned int entNum, const scr_string_t animsetName, const scr_string_t stateName, float min, float max)
{
  double result; 

  *(float *)&result = ?BG_PlayerASM_flrand@@YAMIW4scr_string_t@@0MM@Z(entNum, animsetName, stateName, min, max);
  return result;
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_GetNumEntries
==============
*/

int __fastcall BG_PlayerASM_DebugAnimEventLog_GetNumEntries()
{
  return ?BG_PlayerASM_DebugAnimEventLog_GetNumEntries@@YAHXZ();
}

/*
==============
BG_PlayerASM_IsClearSyncGroupAlias
==============
*/

int __fastcall BG_PlayerASM_IsClearSyncGroupAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsClearSyncGroupAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimset(const playerState_s *ps)
{
  return ?BG_PlayerASM_GetAnimset@@YAIPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_PlayerASM_IsSlideAlias
==============
*/

int __fastcall BG_PlayerASM_IsSlideAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsSlideAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnim(const entityState_t *es, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetAnim@@YAIPEBUentityState_t@@W4PlayerASM_AnimSlot@@@Z(es, slot);
}

/*
==============
BG_PlayerASM_IsCrouchingAlias
==============
*/

int __fastcall BG_PlayerASM_IsCrouchingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsCrouchingAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>
==============
*/

int __fastcall BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const scr_string_t stateName, const scr_string_t aliasName, int animEntryToSkip)
{
  return ??$BG_PlayerASM_GetIndexOfRandomAnimFromAlias@$00@@YAHPEAIIIW4scr_string_t@@1H@Z(holdrand, entNum, animsetIndex, stateName, aliasName, animEntryToSkip);
}

/*
==============
BG_PlayerASM_IsExecutionVictimAlias
==============
*/

int __fastcall BG_PlayerASM_IsExecutionVictimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsExecutionVictimAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsDropWeaponAlias
==============
*/

int __fastcall BG_PlayerASM_IsDropWeaponAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsDropWeaponAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnimEntry
==============
*/

bool __fastcall BG_PlayerASM_GetAnimEntry(const PlayerASM_Context *context, int entNum, const scr_string_t stateName, const scr_string_t alias, int *outStateIndex, int *outEntryIndex)
{
  return ?BG_PlayerASM_GetAnimEntry@@YA_NPEBUPlayerASM_Context@@HW4scr_string_t@@1PEAH2@Z(context, entNum, stateName, alias, outStateIndex, outEntryIndex);
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnim(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetAnim@@YAIPEBUplayerState_s@@W4PlayerASM_AnimSlot@@@Z(ps, slot);
}

/*
==============
BG_PlayerASM_GetAssetBySuit
==============
*/

const ASM *__fastcall BG_PlayerASM_GetAssetBySuit(unsigned int suitIndex)
{
  return ?BG_PlayerASM_GetAssetBySuit@@YAPEBUASM@@I@Z(suitIndex);
}

/*
==============
BG_PlayerASM_ShouldSyncAnims
==============
*/

bool __fastcall BG_PlayerASM_ShouldSyncAnims(const unsigned int animsetIndex, const unsigned int oldPackedAnim, const unsigned int anim, unsigned int *inOutTimer)
{
  return ?BG_PlayerASM_ShouldSyncAnims@@YA_NIIIPEAI@Z(animsetIndex, oldPackedAnim, anim, inOutTimer);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_GetEntry
==============
*/

const PlayerASM_DebugAnimEventInfoEntry *__fastcall BG_PlayerASM_DebugAnimEventLog_GetEntry(int entryIndex)
{
  return ?BG_PlayerASM_DebugAnimEventLog_GetEntry@@YAPEBUPlayerASM_DebugAnimEventInfoEntry@@H@Z(entryIndex);
}

/*
==============
BG_PlayerASM_IsMeleeExecutionVictimAlias
==============
*/

int __fastcall BG_PlayerASM_IsMeleeExecutionVictimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsMeleeExecutionVictimAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayersASM_ResetAnimTree
==============
*/

bool __fastcall BG_PlayersASM_ResetAnimTree(const unsigned int animsetIndex, void *(__fastcall *alloc)(unsigned __int64), const XAnimOwner owner, characterInfo_t *inOutCharacterInfo)
{
  return ?BG_PlayersASM_ResetAnimTree@@YA_NIP6APEAX_K@ZW4XAnimOwner@@PEAUcharacterInfo_t@@@Z(animsetIndex, alloc, owner, inOutCharacterInfo);
}

/*
==============
BG_PlayerASM_flrand
==============
*/

double __fastcall BG_PlayerASM_flrand(unsigned int *holdrand, float min, float max)
{
  double result; 

  *(float *)&result = ?BG_PlayerASM_flrand@@YAMPEAIMM@Z(holdrand, min, max);
  return result;
}

/*
==============
BG_PlayerASM_FindValidAliasAddonOverrides
==============
*/

bool __fastcall BG_PlayerASM_FindValidAliasAddonOverrides(PlayerASM_AnimOverrides *animOverride, scr_string_t overrideType, PlayerASM_AnimOverrideEntry **overrideEntry)
{
  return ?BG_PlayerASM_FindValidAliasAddonOverrides@@YA_NPEAUPlayerASM_AnimOverrides@@W4scr_string_t@@PEAPEAUPlayerASM_AnimOverrideEntry@@@Z(animOverride, overrideType, overrideEntry);
}

/*
==============
BG_PlayerASM_GetAnimsetNameBySuit
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetAnimsetNameBySuit(unsigned int suitIndex)
{
  return ?BG_PlayerASM_GetAnimsetNameBySuit@@YA?AW4scr_string_t@@I@Z(suitIndex);
}

/*
==============
BG_PlayerASM_UnpackAnimFromCi
==============
*/

unsigned int __fastcall BG_PlayerASM_UnpackAnimFromCi(const characterInfo_t *ci, const PlayerASM_AnimSlot slot, unsigned int *outAnimsetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  return ?BG_PlayerASM_UnpackAnimFromCi@@YAIPEBUcharacterInfo_t@@W4PlayerASM_AnimSlot@@PEAI22@Z(ci, slot, outAnimsetIndex, outAnimState, outAnimEntry);
}

/*
==============
BG_PlayerASM_HasAnimAlias
==============
*/

bool __fastcall BG_PlayerASM_HasAnimAlias(const PlayerASM_Context *context, const scr_string_t stateName, const scr_string_t aliasName)
{
  return ?BG_PlayerASM_HasAnimAlias@@YA_NPEBUPlayerASM_Context@@W4scr_string_t@@1@Z(context, stateName, aliasName);
}

/*
==============
BG_PlayerASM_GetEntityState
==============
*/

entityState_t *__fastcall BG_PlayerASM_GetEntityState(const PlayerASM_Context *context)
{
  return ?BG_PlayerASM_GetEntityState@@YAPEAUentityState_t@@PEBUPlayerASM_Context@@@Z(context);
}

/*
==============
BG_PlayerASM_StoreCommandDir
==============
*/

void __fastcall BG_PlayerASM_StoreCommandDir(const int clientNum, const int serverTime, const float oldMoveForward, const float oldMoveRight, const float moveForward, const float moveRight)
{
  ?BG_PlayerASM_StoreCommandDir@@YAXHHMMMM@Z(clientNum, serverTime, oldMoveForward, oldMoveRight, moveForward, moveRight);
}

/*
==============
BG_PlayerASM_IsAdsAlias
==============
*/

int __fastcall BG_PlayerASM_IsAdsAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsAdsAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsKnockbackAlias
==============
*/

int __fastcall BG_PlayerASM_IsKnockbackAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsKnockbackAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsMeleeExecutionAttackerAlias
==============
*/

int __fastcall BG_PlayerASM_IsMeleeExecutionAttackerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsMeleeExecutionAttackerAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_AddEntry
==============
*/

void __fastcall BG_PlayerASM_DebugAnimEventLog_AddEntry(const int entNum, const int serverTime, events_t *events)
{
  ?BG_PlayerASM_DebugAnimEventLog_AddEntry@@YAXHHPEAUevents_t@@@Z(entNum, serverTime, events);
}

/*
==============
BG_PlayerASM_UnpackAnimFromPs
==============
*/

unsigned int __fastcall BG_PlayerASM_UnpackAnimFromPs(const playerState_s *ps, const PlayerASM_AnimSlot slot, unsigned int *outAnimSetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  return ?BG_PlayerASM_UnpackAnimFromPs@@YAIPEBUplayerState_s@@W4PlayerASM_AnimSlot@@PEAI22@Z(ps, slot, outAnimSetIndex, outAnimState, outAnimEntry);
}

/*
==============
BG_PlayerASM_GetFingerPoseSlot
==============
*/

PlayerFingerPoseSlot __fastcall BG_PlayerASM_GetFingerPoseSlot(const unsigned int packedAnimIndex, const unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetFingerPoseSlot@@YA?AW4PlayerFingerPoseSlot@@II@Z(packedAnimIndex, animsetIndex);
}

/*
==============
BG_PlayerASM_ClearAnimOverrides
==============
*/

void __fastcall BG_PlayerASM_ClearAnimOverrides(PlayerASM_AnimOverrides *animOverride)
{
  ?BG_PlayerASM_ClearAnimOverrides@@YAXPEAUPlayerASM_AnimOverrides@@@Z(animOverride);
}

/*
==============
BG_PlayerASM_IsReloadAlias
==============
*/

int __fastcall BG_PlayerASM_IsReloadAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsReloadAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsStopAlias
==============
*/

int __fastcall BG_PlayerASM_IsStopAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsStopAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsRootMotionAlias
==============
*/

int __fastcall BG_PlayerASM_IsRootMotionAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsRootMotionAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnim(const characterInfo_t *ci, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetAnim@@YAIPEBUcharacterInfo_t@@W4PlayerASM_AnimSlot@@@Z(ci, slot);
}

/*
==============
BG_PlayerASM_LookupAnimFromAlias
==============
*/

int __fastcall BG_PlayerASM_LookupAnimFromAlias(const PlayerASM_Context *context, BgPlayer_Asm *pAsm, int entNum, const scr_string_t stateName, const scr_string_t alias)
{
  return ?BG_PlayerASM_LookupAnimFromAlias@@YAHPEBUPlayerASM_Context@@PEAVBgPlayer_Asm@@HW4scr_string_t@@2@Z(context, pAsm, entNum, stateName, alias);
}

/*
==============
BG_PlayerASM_IsProneAlias
==============
*/

int __fastcall BG_PlayerASM_IsProneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsProneAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetXAnimParts
==============
*/

const XAnimParts *__fastcall BG_PlayerASM_GetXAnimParts(const XAnim_s *const anims, unsigned int animIndex, unsigned int *outAnimPartsIndex)
{
  return ?BG_PlayerASM_GetXAnimParts@@YAPEBUXAnimParts@@QEBUXAnim_s@@IPEAI@Z(anims, animIndex, outAnimPartsIndex);
}

/*
==============
BG_PlayerASM_GetAnimsetNameByIndex
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetAnimsetNameByIndex(unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetAnimsetNameByIndex@@YA?AW4scr_string_t@@I@Z(animsetIndex);
}

/*
==============
BG_PlayerASM_IsMoveForwardAlias
==============
*/

int __fastcall BG_PlayerASM_IsMoveForwardAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsMoveForwardAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsOnLadder
==============
*/

bool __fastcall BG_PlayerASM_IsOnLadder(const characterInfo_t *ci)
{
  return ?BG_PlayerASM_IsOnLadder@@YA_NPEBUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_PlayerASM_GetAnimsetIndexBySuit
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimsetIndexBySuit(unsigned int suitIndex)
{
  return ?BG_PlayerASM_GetAnimsetIndexBySuit@@YAII@Z(suitIndex);
}

/*
==============
BG_PlayersASM_ResetSmallAnimTree
==============
*/

bool __fastcall BG_PlayersASM_ResetSmallAnimTree(const unsigned int animsetIndex, const XAnimOwner owner, characterInfo_t *inOutCharacterInfo)
{
  return ?BG_PlayersASM_ResetSmallAnimTree@@YA_NIW4XAnimOwner@@PEAUcharacterInfo_t@@@Z(animsetIndex, owner, inOutCharacterInfo);
}

/*
==============
BG_PlayerASM_UnpackAnim
==============
*/

void __fastcall BG_PlayerASM_UnpackAnim(const unsigned int animsetIndex, const unsigned int packedAnimIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  ?BG_PlayerASM_UnpackAnim@@YAXIIPEAI0@Z(animsetIndex, packedAnimIndex, outAnimState, outAnimEntry);
}

/*
==============
BG_PlayerASM_PackAnim
==============
*/

unsigned int __fastcall BG_PlayerASM_PackAnim(const unsigned int animsetIndex, const unsigned int animState, const unsigned int animEntry)
{
  return ?BG_PlayerASM_PackAnim@@YAIIII@Z(animsetIndex, animState, animEntry);
}

/*
==============
BG_PlayerASM_IsStrafeAlias
==============
*/

int __fastcall BG_PlayerASM_IsStrafeAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsStrafeAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsTurnAlias
==============
*/

int __fastcall BG_PlayerASM_IsTurnAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsTurnAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsSceneAlias
==============
*/

int __fastcall BG_PlayerASM_IsSceneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsSceneAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_EvalConditionMasks
==============
*/

bool __fastcall BG_PlayerASM_EvalConditionMasks(const characterInfo_t *const ci, const ASM_Instance *pInst, const PlayerASM_ConditionMask *conditionMask, scr_string_t stateName)
{
  return ?BG_PlayerASM_EvalConditionMasks@@YA_NQEBUcharacterInfo_t@@PEBUASM_Instance@@PEBUPlayerASM_ConditionMask@@W4scr_string_t@@@Z(ci, pInst, conditionMask, stateName);
}

/*
==============
BG_PlayerASM_GetAnimsetIndexByName
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimsetIndexByName(scr_string_t animSetName)
{
  return ?BG_PlayerASM_GetAnimsetIndexByName@@YAIW4scr_string_t@@@Z(animSetName);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_IsEnabled
==============
*/

bool __fastcall BG_PlayerASM_DebugAnimEventLog_IsEnabled(const int entNum)
{
  return ?BG_PlayerASM_DebugAnimEventLog_IsEnabled@@YA_NH@Z(entNum);
}

/*
==============
BG_PlayersASM_ResetCorpseAnimTree
==============
*/

void __fastcall BG_PlayersASM_ResetCorpseAnimTree(void *(__fastcall *alloc)(unsigned __int64), XAnimOwner owner, const characterInfo_t *ci, XAnimTree **inOutAnimTree)
{
  ?BG_PlayersASM_ResetCorpseAnimTree@@YAXP6APEAX_K@ZW4XAnimOwner@@PEBUcharacterInfo_t@@PEAPEAUXAnimTree@@@Z(alloc, owner, ci, inOutAnimTree);
}

/*
==============
BG_PlayerASM_ApplyAliasAddonOverrides
==============
*/

void __fastcall BG_PlayerASM_ApplyAliasAddonOverrides(DObj *obj, const characterInfo_t *ci, PlayerASM_AnimOverrides *animOverrides, scr_string_t overrideType, bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  ?BG_PlayerASM_ApplyAliasAddonOverrides@@YAXPEAUDObj@@PEBUcharacterInfo_t@@PEAUPlayerASM_AnimOverrides@@W4scr_string_t@@_NPEAUXModelNameMap@@I@Z(obj, ci, animOverrides, overrideType, clear, modelNameMap, flags);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimset(const PlayerASM_Context *context)
{
  return ?BG_PlayerASM_GetAnimset@@YAIPEBUPlayerASM_Context@@@Z(context);
}

/*
==============
BG_PlayerASM_GetPlayerState
==============
*/

playerState_s *__fastcall BG_PlayerASM_GetPlayerState(const PlayerASM_Context *context)
{
  return ?BG_PlayerASM_GetPlayerState@@YAPEAUplayerState_s@@PEBUPlayerASM_Context@@@Z(context);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_Compact
==============
*/

void __fastcall BG_PlayerASM_DebugAnimEventLog_Compact(const int serverTime)
{
  ?BG_PlayerASM_DebugAnimEventLog_Compact@@YAXH@Z(serverTime);
}

/*
==============
BG_PlayerASM_IsLadderSlideAlias
==============
*/

int __fastcall BG_PlayerASM_IsLadderSlideAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsLadderSlideAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsDeathAlias
==============
*/

int __fastcall BG_PlayerASM_IsDeathAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsDeathAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_SetAnimState
==============
*/

void __fastcall BG_PlayerASM_SetAnimState(const PlayerASM_Context *context, BgPlayer_Asm *pAsm, int entNum, const scr_string_t asmName, scr_string_t stateName, int entryIndex, int gameTime, float animRate, PlayerASM_AnimSlot slot)
{
  ?BG_PlayerASM_SetAnimState@@YAXPEBUPlayerASM_Context@@PEAVBgPlayer_Asm@@HW4scr_string_t@@W43@HHMW4PlayerASM_AnimSlot@@@Z(context, pAsm, entNum, asmName, stateName, entryIndex, gameTime, animRate, slot);
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>
==============
*/

int __fastcall BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const AnimsetState *pState, const scr_string_t aliasName, int animEntryToSkip)
{
  return ??$BG_PlayerASM_GetIndexOfRandomAnimFromAlias@$00@@YAHPEAIIIPEBUAnimsetState@@W4scr_string_t@@H@Z(holdrand, entNum, animsetIndex, pState, aliasName, animEntryToSkip);
}

/*
==============
BG_PlayerASM_ShouldSkipAddon
==============
*/

bool __fastcall BG_PlayerASM_ShouldSkipAddon(const characterInfo_t *ci, const unsigned int animsetIndex, int addonStateIndex, int entryIndex)
{
  return ?BG_PlayerASM_ShouldSkipAddon@@YA_NPEBUcharacterInfo_t@@IHH@Z(ci, animsetIndex, addonStateIndex, entryIndex);
}

/*
==============
BG_PlayerASM_GetVelocityDir
==============
*/

__int16 __fastcall BG_PlayerASM_GetVelocityDir(const playerState_s *ps, const BgHandler *handler)
{
  return ?BG_PlayerASM_GetVelocityDir@@YAFPEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimset(const entityState_t *es)
{
  return ?BG_PlayerASM_GetAnimset@@YAIPEBUentityState_t@@@Z(es);
}

/*
==============
BG_PlayerASM_ClearState
==============
*/

void __fastcall BG_PlayerASM_ClearState(const PlayerASM_Context *context, const PlayerASM_AnimSlot animSlot)
{
  ?BG_PlayerASM_ClearState@@YAXPEBUPlayerASM_Context@@W4PlayerASM_AnimSlot@@@Z(context, animSlot);
}

/*
==============
BG_PlayerASM_IsAnimEntryValid
==============
*/

bool __fastcall BG_PlayerASM_IsAnimEntryValid(const Animset *pAnimset, const unsigned int stateIndex, const unsigned int entryIndex)
{
  return ?BG_PlayerASM_IsAnimEntryValid@@YA_NPEBUAnimset@@II@Z(pAnimset, stateIndex, entryIndex);
}

/*
==============
BG_PlayerASM_GetAnimsetNameByIndexNetConst
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetAnimsetNameByIndexNetConst(unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetAnimsetNameByIndexNetConst@@YA?AW4scr_string_t@@I@Z(animsetIndex);
}

/*
==============
BG_PlayerASM_IsMoveBackwardAlias
==============
*/

int __fastcall BG_PlayerASM_IsMoveBackwardAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsMoveBackwardAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsAirAlias
==============
*/

int __fastcall BG_PlayerASM_IsAirAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsAirAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsRocketHideShowAlias
==============
*/

int __fastcall BG_PlayerASM_IsRocketHideShowAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsRocketHideShowAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_UpdateAngles
==============
*/

void __fastcall BG_PlayerASM_UpdateAngles(const float velocityAngle, characterInfo_t *ci)
{
  ?BG_PlayerASM_UpdateAngles@@YAXMPEAUcharacterInfo_t@@@Z(velocityAngle, ci);
}

/*
==============
BG_PlayerASM_IsThrowAlias
==============
*/

int __fastcall BG_PlayerASM_IsThrowAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsThrowAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsNoPitchAimingAlias
==============
*/

int __fastcall BG_PlayerASM_IsNoPitchAimingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsNoPitchAimingAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnimUser
==============
*/

int __fastcall BG_PlayerASM_GetAnimUser()
{
  return ?BG_PlayerASM_GetAnimUser@@YAHXZ();
}

/*
==============
BG_PlayerASM_IsLadderAimAlias
==============
*/

int __fastcall BG_PlayerASM_IsLadderAimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsLadderAimAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_CopyAnimDataToCharacterInfo
==============
*/

void __fastcall BG_PlayerASM_CopyAnimDataToCharacterInfo(const playerState_s *fromPs, characterInfo_t *ci)
{
  ?BG_PlayerASM_CopyAnimDataToCharacterInfo@@YAXPEBUplayerState_s@@PEAUcharacterInfo_t@@@Z(fromPs, ci);
}

/*
==============
BG_PlayerASM_IsSceneSkipDoneEventAlias
==============
*/

int __fastcall BG_PlayerASM_IsSceneSkipDoneEventAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsSceneSkipDoneEventAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnimEntryCount
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimEntryCount(const PlayerASM_Context *context, const scr_string_t stateName)
{
  return ?BG_PlayerASM_GetAnimEntryCount@@YAIPEBUPlayerASM_Context@@W4scr_string_t@@@Z(context, stateName);
}

/*
==============
BG_PlayerASM_IsKillstreakTriggerAlias
==============
*/

int __fastcall BG_PlayerASM_IsKillstreakTriggerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsKillstreakTriggerAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_SetState
==============
*/

void __fastcall BG_PlayerASM_SetState(const PlayerASM_Context *context, const PlayerASM_AnimSlot animSlot, const unsigned int animState, const unsigned int animEntry)
{
  ?BG_PlayerASM_SetState@@YAXPEBUPlayerASM_Context@@W4PlayerASM_AnimSlot@@II@Z(context, animSlot, animState, animEntry);
}

/*
==============
BG_PlayerASM_IsSprintAlias
==============
*/

int __fastcall BG_PlayerASM_IsSprintAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsSprintAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsAnimRestart
==============
*/

bool __fastcall BG_PlayerASM_IsAnimRestart(const Animset *pAnimset, const unsigned int animstateIndex, const unsigned int animEntryIndex, const unsigned int lastAnimstateIndex, const unsigned int lastAnimEntryIndex)
{
  return ?BG_PlayerASM_IsAnimRestart@@YA_NPEBUAnimset@@IIII@Z(pAnimset, animstateIndex, animEntryIndex, lastAnimstateIndex, lastAnimEntryIndex);
}

/*
==============
BG_PlayerASM_IsSyncAnim
==============
*/

bool __fastcall BG_PlayerASM_IsSyncAnim(const XAnim_s *baseAnims, unsigned int graftIndex, const XAnim_s *subtreeAnims, unsigned int animIndex, XAnimSyncGroupID *outSyncGroupID, const XAnim_s **outSyncRootAnims, unsigned int *outSyncRoot)
{
  return ?BG_PlayerASM_IsSyncAnim@@YA_NPEBUXAnim_s@@I0IPEAW4XAnimSyncGroupID@@PEAPEBU1@PEAI@Z(baseAnims, graftIndex, subtreeAnims, animIndex, outSyncGroupID, outSyncRootAnims, outSyncRoot);
}

/*
==============
BG_PlayerASM_IsThrowOrPrepareAlias
==============
*/

int __fastcall BG_PlayerASM_IsThrowOrPrepareAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsThrowOrPrepareAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_IsUpdateNeededForFunction
==============
*/

bool __fastcall BG_PlayerASM_IsUpdateNeededForFunction(const ASM_Context *context, const ASM_Instance *pInst, PlayerASM_Parameters *parameters, const ASM_Transition *pTransition, const ASM_Function *pFunc)
{
  return ?BG_PlayerASM_IsUpdateNeededForFunction@@YA_NPEBUASM_Context@@PEBUASM_Instance@@PEAUPlayerASM_Parameters@@PEBUASM_Transition@@PEBUASM_Function@@@Z(context, pInst, parameters, pTransition, pFunc);
}

/*
==============
BG_PlayerASM_GetAnims
==============
*/

XAnim_s *__fastcall BG_PlayerASM_GetAnims(const unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetAnims@@YAPEAUXAnim_s@@I@Z(animsetIndex);
}

/*
==============
BG_PlayerASM_CopyAnimDataToCharacterInfo
==============
*/

void __fastcall BG_PlayerASM_CopyAnimDataToCharacterInfo(const entityState_t *fromEs, characterInfo_t *ci)
{
  ?BG_PlayerASM_CopyAnimDataToCharacterInfo@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@@Z(fromEs, ci);
}

/*
==============
BG_PlayerASM_GetAnimsetByIndex
==============
*/

const Animset *__fastcall BG_PlayerASM_GetAnimsetByIndex(unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetAnimsetByIndex@@YAPEBUAnimset@@I@Z(animsetIndex);
}

/*
==============
BG_PlayerASM_IsTransitionalAlias
==============
*/

int __fastcall BG_PlayerASM_IsTransitionalAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return ?BG_PlayerASM_IsTransitionalAlias@@YAHII@Z(packedAnimIndex, animSet);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/

unsigned int __fastcall BG_PlayerASM_GetAnimset(const characterInfo_t *ci)
{
  return ?BG_PlayerASM_GetAnimset@@YAIPEBUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>
==============
*/
__int64 BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const AnimsetState *pState, const scr_string_t aliasName, int animEntryToSkip)
{
  unsigned int v6; 
  const AnimsetState *v7; 
  __int64 v9; 
  scr_string_t v10; 
  unsigned int v11; 
  AnimsetAlias *animAliases; 
  __int64 numAnims; 
  const Animset *AnimsetByIndex; 
  __int64 v15; 
  double v16; 
  float v17; 
  __int64 v18; 
  __int128 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int128 v22; 
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  __int64 result; 
  bool v32; 
  unsigned int v33; 
  unsigned int numAnimAliases; 
  int v35; 
  unsigned int seed; 
  const Animset *v37; 
  unsigned int v39; 

  v39 = animsetIndex;
  v6 = 0;
  v33 = 0;
  v7 = pState;
  if ( !pState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 155, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    animsetIndex = v39;
  }
  numAnimAliases = v7->numAnimAliases;
  v35 = 0;
  if ( !numAnimAliases )
    return 0xFFFFFFFFi64;
  v9 = 0i64;
  v10 = aliasName;
  v11 = v7->numAnimAliases;
  while ( 1 )
  {
    animAliases = v7->animAliases;
    numAnims = (int)animAliases[v9].numAnims;
    if ( animAliases[v9].name == v10 )
      break;
    v6 += numAnims;
    v33 = v6;
LABEL_34:
    ++v9;
    if ( ++v35 >= v11 )
      return 0xFFFFFFFFi64;
    animsetIndex = v39;
  }
  if ( (_DWORD)numAnims == 1 )
    return v6;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v37 = AnimsetByIndex;
  if ( (_DWORD)numAnims == 2 )
  {
    result = v6 + 1;
    if ( animEntryToSkip == v6 )
      return result;
    if ( animEntryToSkip != (_DWORD)result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 175, ASSERT_TYPE_ASSERT, "(animEntryToSkip == index || animEntryToSkip == index + 1)", (const char *)&queryFormat, "animEntryToSkip == index || animEntryToSkip == index + 1") )
      __debugbreak();
    return v6;
  }
  v32 = holdrand && (int)numAnims > 2;
  v15 = numAnims;
  while ( 1 )
  {
    if ( holdrand )
    {
      v16 = BG_flrand(0.1, 1.0, holdrand);
      v17 = *(float *)&v16;
    }
    else
    {
      seed = entNum + v7->name + 7 * AnimsetByIndex->constName;
      v17 = (float)((float)BgPlayer_Asm::irandWithSeed(&seed, 0, 0x7FFF) * 0.00002746582) + 0.1;
    }
    v18 = 0i64;
    v19 = 0i64;
    if ( v15 > 0 )
      break;
LABEL_26:
    v7 = pState;
    AnimsetByIndex = v37;
    if ( !v32 )
    {
      if ( (int)v15 > 0 )
      {
        v7 = pState;
        v25 = (__int64)v37;
      }
      else
      {
        v23 = SL_ConvertToString(aliasName);
        v24 = SL_ConvertToString(pState->name);
        v25 = (__int64)v37;
        v26 = v24;
        v27 = SL_ConvertToString(v37->constName);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 209, ASSERT_TYPE_ASSERT, "(numAnims > 0)", "%s\n\tanimset '%s' state %s alias '%s' has no anims!", "numAnims > 0", v27, v26, v23) )
          __debugbreak();
      }
      v28 = SL_ConvertToString(aliasName);
      v29 = SL_ConvertToString(v7->name);
      v30 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v25 + 8));
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 210, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "animset '%s' state '%s' alias %s has bad weights!", v30, v29, v28) )
        __debugbreak();
      v11 = numAnimAliases;
      v10 = aliasName;
      v6 = v33;
      goto LABEL_34;
    }
  }
  v20 = v33;
  v21 = 0i64;
  while ( 1 )
  {
    if ( v15 <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 197, ASSERT_TYPE_ASSERT, "(!skipAnim || (skipAnim && numAnims > 2))", (const char *)&queryFormat, "!skipAnim || (skipAnim && numAnims > 2)") )
      __debugbreak();
    v22 = v19;
    *(float *)&v22 = *(float *)&v19 + animAliases[v9].anims[v21].weight;
    v19 = v22;
    if ( *(float *)&v22 >= v17 && animEntryToSkip != v20 )
      return v20;
    ++v20;
    ++v18;
    ++v21;
    if ( v18 >= v15 )
      goto LABEL_26;
  }
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>
==============
*/
int BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const scr_string_t stateName, const scr_string_t aliasName, int animEntryToSkip)
{
  AnimsetState *outState; 

  outState = NULL;
  if ( BG_PlayerASM_GetStateInfoByName(animsetIndex, stateName, &outState, NULL) )
    return BG_PlayerASM_GetIndexOfRandomAnimFromAlias<1>(holdrand, entNum, animsetIndex, outState, aliasName, animEntryToSkip);
  else
    return -1;
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>
==============
*/
__int64 BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const AnimsetState *pState, const scr_string_t aliasName)
{
  unsigned int v5; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  AnimsetAlias *animAliases; 
  __int64 numAnims; 
  const Animset *AnimsetByIndex; 
  double v13; 
  float v14; 
  __int64 v15; 
  __int128 v16; 
  unsigned int v17; 
  float *p_weight; 
  __int128 v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  unsigned int seed[4]; 
  unsigned int v30; 
  unsigned int numAnimAliases; 

  v30 = animsetIndex;
  v5 = 0;
  if ( !pState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 155, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    animsetIndex = v30;
  }
  v7 = 0;
  numAnimAliases = pState->numAnimAliases;
  if ( numAnimAliases )
  {
    v8 = 0i64;
    v9 = pState->numAnimAliases;
    while ( 1 )
    {
      animAliases = pState->animAliases;
      numAnims = (int)animAliases[v8].numAnims;
      if ( animAliases[v8].name == aliasName )
      {
        if ( (_DWORD)numAnims == 1 )
          return v5;
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( holdrand )
        {
          v13 = BG_flrand(0.1, 1.0, holdrand);
          v14 = *(float *)&v13;
        }
        else
        {
          seed[0] = entNum + pState->name + 7 * AnimsetByIndex->constName;
          v14 = (float)((float)BgPlayer_Asm::irandWithSeed(seed, 0, 0x7FFF) * 0.00002746582) + 0.1;
        }
        v15 = 0i64;
        v16 = 0i64;
        if ( (int)numAnims > 0 )
        {
          v17 = v5;
          p_weight = &animAliases[v8].anims->weight;
          do
          {
            v19 = v16;
            *(float *)&v19 = *(float *)&v16 + *p_weight;
            v16 = v19;
            if ( *(float *)&v19 >= v14 )
              return v17;
            ++v17;
            ++v15;
            p_weight += 6;
          }
          while ( v15 < numAnims );
          if ( (int)numAnims > 0 )
            goto LABEL_19;
        }
        v20 = SL_ConvertToString(aliasName);
        v21 = SL_ConvertToString(pState->name);
        v22 = SL_ConvertToString(AnimsetByIndex->constName);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 209, ASSERT_TYPE_ASSERT, "(numAnims > 0)", "%s\n\tanimset '%s' state %s alias '%s' has no anims!", "numAnims > 0", v22, v21, v20) )
          __debugbreak();
LABEL_19:
        v23 = SL_ConvertToString(aliasName);
        v24 = SL_ConvertToString(pState->name);
        v25 = SL_ConvertToString(AnimsetByIndex->constName);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 210, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "animset '%s' state '%s' alias %s has bad weights!", v25, v24, v23) )
          __debugbreak();
        v9 = numAnimAliases;
      }
      else
      {
        v5 += numAnims;
      }
      ++v7;
      ++v8;
      if ( v7 >= v9 )
        return 0xFFFFFFFFi64;
      animsetIndex = v30;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>
==============
*/
int BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(unsigned int *holdrand, unsigned int entNum, const unsigned int animsetIndex, const scr_string_t stateName, const scr_string_t aliasName, int animEntryToSkip)
{
  AnimsetState *outState; 

  outState = NULL;
  if ( BG_PlayerASM_GetStateInfoByName(animsetIndex, stateName, &outState, NULL) )
    return BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(holdrand, entNum, animsetIndex, outState, aliasName, animEntryToSkip);
  else
    return -1;
}

/*
==============
BG_PlayerASM_ApplyAliasAddonOverrides
==============
*/
void BG_PlayerASM_ApplyAliasAddonOverrides(DObj *obj, const characterInfo_t *ci, PlayerASM_AnimOverrides *animOverrides, scr_string_t overrideType, bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned int count; 
  int v10; 
  PlayerASM_AnimOverrideEntry *v11; 
  unsigned int i; 
  PlayerASM_AnimOverrideEntry *v13; 
  int entryIndex; 
  int v15; 
  unsigned int animsetIndex; 
  const Animset *AnimsetByIndex; 
  char redAnims; 
  bool v19; 
  float blendTime; 
  XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v23; 
  const XAnim_s *v24; 
  double GoalWeight; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimSubTreeID v28[2]; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutStateIndex; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  AnimsetState *outState; 
  XAnimCurveID v37; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1870, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animOverrides )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1871, ASSERT_TYPE_ASSERT, "(animOverrides)", (const char *)&queryFormat, "animOverrides") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1804, ASSERT_TYPE_ASSERT, "(animOverride)", (const char *)&queryFormat, "animOverride") )
      __debugbreak();
  }
  count = animOverrides->count;
  v10 = 0;
  if ( count )
  {
    while ( 1 )
    {
      v11 = &animOverrides->entries[v10];
      if ( (!overrideType || v11->overrideType == overrideType) && v11->stateName && v11->overrideType )
        break;
      if ( ++v10 >= count )
        return;
    }
    if ( v11->animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1813, ASSERT_TYPE_ASSERT, "(!isValid || (entry->animsetIndex < (1 << 2)))", (const char *)&queryFormat, "!isValid || (entry->animsetIndex < MAX_PLAYERANIM_ANIMSET_COUNT)") )
      __debugbreak();
    for ( i = 0; i < animOverrides->count; ++i )
    {
      v13 = &animOverrides->entries[i];
      if ( (!overrideType || overrideType == v13->overrideType) && v13->stateName )
      {
        if ( !BG_PlayerASM_GetStateInfoByName(v13->animsetIndex, (const scr_string_t)v13->stateName, &outState, &pOutStateIndex) )
          return;
        BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(v13->animsetIndex, pOutStateIndex, v13->entryIndex, &pOutAnimIndex, &pOutGraftNode, v28, &v37);
        entryIndex = v13->entryIndex;
        v15 = pOutStateIndex;
        animsetIndex = v13->animsetIndex;
        if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1833, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        ppOutAlias = NULL;
        ppOutAnim = NULL;
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1840, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
          __debugbreak();
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v15, entryIndex, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
        if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1843, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
          __debugbreak();
        redAnims = (char)ppOutAlias->u.m_AIAnimsetAlias[5].redAnims;
        if ( redAnims == 10 )
        {
          v19 = !ci->useShadowAnims;
        }
        else
        {
          if ( redAnims != 11 )
            goto LABEL_38;
          v19 = ci->isFemale == 0;
        }
        if ( !v19 )
        {
LABEL_38:
          if ( (flags & 4) != 0 )
            blendTime = 0.0;
          else
            blendTime = v13->blendTime;
          tree = obj->tree;
          if ( clear )
          {
            SubTreeAnims = XAnimGetSubTreeAnims(tree, v28[0]);
            v23 = pOutAnimIndex;
            v24 = SubTreeAnims;
            if ( pOutAnimIndex >= SubTreeAnims->size )
            {
              LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
              LODWORD(pOutAnimSubtreeID) = pOutAnimIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1912, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
                __debugbreak();
              v23 = pOutAnimIndex;
            }
            if ( XAnimIsCustomNodeType(v24->entries[v23].nodeType) )
              XAnimSetGoalWeight(obj, pOutGraftNode, v28[0], pOutAnimIndex, 0.0, blendTime, v13->rate, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
            else
              XAnimClearTreeGoalWeights(obj->tree, pOutGraftNode, v28[0], pOutAnimIndex, blendTime, 0, obj, LINEAR);
          }
          else
          {
            GoalWeight = XAnimGetGoalWeight(tree, pOutGraftNode, v28[0], pOutAnimIndex);
            if ( *(float *)&GoalWeight != 1.0 )
              XAnimSetCompleteGoalWeight(obj, pOutGraftNode, v28[0], pOutAnimIndex, 1.0, blendTime, v13->rate, (scr_string_t)0, 0, v13->restart, LINEAR, modelNameMap);
          }
        }
      }
    }
  }
}

/*
==============
BG_PlayerASM_ClearAnimOverrides
==============
*/
void BG_PlayerASM_ClearAnimOverrides(PlayerASM_AnimOverrides *animOverride)
{
  memset_0(animOverride, 0, sizeof(PlayerASM_AnimOverrides));
}

/*
==============
BG_PlayerASM_ClearState
==============
*/
void BG_PlayerASM_ClearState(const PlayerASM_Context *context, const PlayerASM_AnimSlot animSlot)
{
  unsigned __int8 v2; 
  playerState_s *ps; 
  int v5; 
  __int64 v6; 

  v2 = animSlot;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1454, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( v2 >= 2u )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1455, ASSERT_TYPE_ASSERT, "(unsigned)( animSlot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "animSlot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  ps = context->ps;
  if ( context->useEntityState )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1461, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    v5 = -1610547201;
    if ( !v2 )
      v5 = -536936441;
    ps->fallStartTime &= v5;
  }
  else
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1476, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    ps->animState.slot[v2] = 0i64;
  }
}

/*
==============
BG_PlayerASM_CopyAnimDataToCharacterInfo
==============
*/
void BG_PlayerASM_CopyAnimDataToCharacterInfo(const entityState_t *fromEs, characterInfo_t *ci)
{
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 

  if ( !fromEs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 580, ASSERT_TYPE_ASSERT, "(fromEs)", (const char *)&queryFormat, "fromEs") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 581, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ci->playerASMAnim.animSet = BG_PlayerASM_GetAnimset(fromEs);
  ci->playerAnim.legsAnim = BG_PlayerASM_GetAnim(fromEs, MOVEMENT);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 511, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !fromEs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 512, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v4 = fromEs->animInfo.animData & 0x1FFF0000;
  v5 = fromEs->animInfo.animData >> 1;
  v6 = v5 & 3;
  v7 = (v4 | v5 & 0x20000000) >> 16;
  BG_PlayerASM_VerifyAnim(v6, v7);
  ci->playerAnim.torsoAnim = v7;
}

/*
==============
BG_PlayerASM_CopyAnimDataToCharacterInfo
==============
*/
void BG_PlayerASM_CopyAnimDataToCharacterInfo(const playerState_s *fromPs, characterInfo_t *ci)
{
  unsigned int packedAnim; 

  if ( !fromPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 567, ASSERT_TYPE_ASSERT, "(fromPs)", (const char *)&queryFormat, "fromPs") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 568, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ci->playerASMAnim.animSet = BG_PlayerASM_GetAnimset(fromPs);
  ci->playerAnim.legsAnim = BG_PlayerASM_GetAnim(fromPs, MOVEMENT);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 528, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !fromPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 529, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  packedAnim = fromPs->animState.slot[1].packedAnim;
  if ( packedAnim >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 535, ASSERT_TYPE_ASSERT, "(slot != PlayerASM_AnimSlot::SECONDARY || anim < (1 << 14))", (const char *)&queryFormat, "slot != PlayerASM_AnimSlot::SECONDARY || anim < MAX_PLAYERANIM_ENTRY_COUNT") )
    __debugbreak();
  BG_PlayerASM_VerifyAnim(fromPs->animState.animSet, packedAnim);
  ci->playerAnim.torsoAnim = packedAnim;
}

/*
==============
BG_PlayerASM_CopyAnimDataToEntity
==============
*/
void BG_PlayerASM_CopyAnimDataToEntity(const playerState_s *fromPs, entityState_t *es)
{
  char Animset; 
  $6F846F8762124C99A58E7E51263A35C4 *v5; 
  unsigned int Anim; 
  unsigned int packedAnim; 

  if ( !fromPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 593, ASSERT_TYPE_ASSERT, "(fromPs)", (const char *)&queryFormat, "fromPs") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 594, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Animset = BG_PlayerASM_GetAnimset(fromPs);
  v5 = &es->animInfo.4;
  es->animInfo.animData &= 0xFFFFFFF9;
  es->animInfo.animData |= 2 * (Animset & 3);
  Anim = BG_PlayerASM_GetAnim(fromPs, MOVEMENT);
  playerAnim_t::SetPrimaryAnim((playerAnim_t *)&es->animInfo.4, Anim);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 528, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !fromPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 529, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  packedAnim = fromPs->animState.slot[1].packedAnim;
  if ( packedAnim >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 535, ASSERT_TYPE_ASSERT, "(slot != PlayerASM_AnimSlot::SECONDARY || anim < (1 << 14))", (const char *)&queryFormat, "slot != PlayerASM_AnimSlot::SECONDARY || anim < MAX_PLAYERANIM_ENTRY_COUNT") )
    __debugbreak();
  BG_PlayerASM_VerifyAnim(fromPs->animState.animSet, packedAnim);
  playerAnim_t::SetSecondaryAnim((playerAnim_t *)v5, packedAnim);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_AddEntry
==============
*/
void BG_PlayerASM_DebugAnimEventLog_AddEntry(const int entNum, const int serverTime, events_t *events)
{
  const dvar_t *v3; 
  int integer; 
  bool IsServerThread; 
  PlayerASM_DebugAnimEventInfoEntry *v9; 
  bool v10; 
  int v11; 
  bool *p_isServer; 
  PlayerASM_DebugAnimEventInfoLog *v13; 

  v3 = DVARINT_animscript_debug;
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer != -1 && integer == entNum && BG_CheckAnyOn(events->events) )
  {
    Sys_EnterCriticalSection(CRITSECT_DEBUG_ANIM_EVENT_LOG);
    IsServerThread = ASM_IsServerThread();
    v9 = NULL;
    v10 = IsServerThread;
    v11 = 0;
    if ( s_debugAnimEventInfoLog.entryCount <= 0 )
    {
LABEL_13:
      if ( s_debugAnimEventInfoLog.entryCount == 8 )
      {
        v9 = &s_debugAnimEventInfoLog.entries[7];
      }
      else
      {
        v13 = &s_debugAnimEventInfoLog;
        while ( v13->entries[0].isUsed )
        {
          v13 = (PlayerASM_DebugAnimEventInfoLog *)((char *)v13 + 108);
          if ( (__int64)v13 >= (__int64)&s_debugAnimEventInfoLog.entryCount )
            goto LABEL_20;
        }
        v9 = (PlayerASM_DebugAnimEventInfoEntry *)v13;
        ++s_debugAnimEventInfoLog.entryCount;
      }
LABEL_20:
      v9->isUsed = 1;
      v9->serverTime = serverTime;
      v9->isServer = v10;
      *(__m256i *)v9->events.events = *(__m256i *)events->events;
      *(__m256i *)v9->events.isContinue = *(__m256i *)events->isContinue;
      *(__m256i *)v9->events.force = *(__m256i *)events->force;
      *(_DWORD *)&v9->events.hasEvents = *(_DWORD *)&events->hasEvents;
      std::_Sort_unchecked<PlayerASM_DebugAnimEventInfoEntry *,bool (*)(PlayerASM_DebugAnimEventInfoEntry &,PlayerASM_DebugAnimEventInfoEntry &)>(s_debugAnimEventInfoLog.entries, (PlayerASM_DebugAnimEventInfoEntry *)&s_debugAnimEventInfoLog.entryCount, 8i64, BG_PlayerASM_DebugAnimEventLog_Sorter);
    }
    else
    {
      p_isServer = &s_debugAnimEventInfoLog.entries[0].isServer;
      while ( !*(p_isServer - 1) || *(_DWORD *)(p_isServer - 105) != serverTime || *p_isServer != IsServerThread )
      {
        ++v11;
        p_isServer += 108;
        if ( v11 >= s_debugAnimEventInfoLog.entryCount )
          goto LABEL_13;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_ANIM_EVENT_LOG);
  }
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_Compact
==============
*/
void BG_PlayerASM_DebugAnimEventLog_Compact(const int serverTime)
{
  char v2; 
  int v3; 
  bool v4; 
  int v5; 
  bool v6; 
  int v7; 
  bool v8; 
  int v9; 
  bool v10; 
  int v11; 
  bool v12; 
  int v13; 
  bool v14; 
  int v15; 
  bool v16; 
  int v17; 
  bool v18; 

  Sys_EnterCriticalSection(CRITSECT_DEBUG_ANIM_EVENT_LOG);
  v2 = 0;
  if ( s_debugAnimEventInfoLog.entries[0].isUsed )
  {
    v3 = s_debugAnimEventInfoLog.entries[0].serverTime - serverTime;
    v4 = s_debugAnimEventInfoLog.entries[0].isServer && (unsigned int)(v3 - 1) <= 0x1F2;
    if ( v3 > 0 && !v4 || serverTime - s_debugAnimEventInfoLog.entries[0].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog, 0, 0x6Cui64);
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[1].isUsed )
  {
    v5 = s_debugAnimEventInfoLog.entries[1].serverTime - serverTime;
    v6 = s_debugAnimEventInfoLog.entries[1].isServer && (unsigned int)(v5 - 1) <= 0x1F2;
    if ( v5 > 0 && !v6 || serverTime - s_debugAnimEventInfoLog.entries[1].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[1], 0, sizeof(s_debugAnimEventInfoLog.entries[1]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[2].isUsed )
  {
    v7 = s_debugAnimEventInfoLog.entries[2].serverTime - serverTime;
    v8 = s_debugAnimEventInfoLog.entries[2].isServer && (unsigned int)(v7 - 1) <= 0x1F2;
    if ( v7 > 0 && !v8 || serverTime - s_debugAnimEventInfoLog.entries[2].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[2], 0, sizeof(s_debugAnimEventInfoLog.entries[2]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[3].isUsed )
  {
    v9 = s_debugAnimEventInfoLog.entries[3].serverTime - serverTime;
    v10 = s_debugAnimEventInfoLog.entries[3].isServer && (unsigned int)(v9 - 1) <= 0x1F2;
    if ( v9 > 0 && !v10 || serverTime - s_debugAnimEventInfoLog.entries[3].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[3], 0, sizeof(s_debugAnimEventInfoLog.entries[3]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[4].isUsed )
  {
    v11 = s_debugAnimEventInfoLog.entries[4].serverTime - serverTime;
    v12 = s_debugAnimEventInfoLog.entries[4].isServer && (unsigned int)(v11 - 1) <= 0x1F2;
    if ( v11 > 0 && !v12 || serverTime - s_debugAnimEventInfoLog.entries[4].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[4], 0, sizeof(s_debugAnimEventInfoLog.entries[4]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[5].isUsed )
  {
    v13 = s_debugAnimEventInfoLog.entries[5].serverTime - serverTime;
    v14 = s_debugAnimEventInfoLog.entries[5].isServer && (unsigned int)(v13 - 1) <= 0x1F2;
    if ( v13 > 0 && !v14 || serverTime - s_debugAnimEventInfoLog.entries[5].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[5], 0, sizeof(s_debugAnimEventInfoLog.entries[5]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[6].isUsed )
  {
    v15 = s_debugAnimEventInfoLog.entries[6].serverTime - serverTime;
    v16 = s_debugAnimEventInfoLog.entries[6].isServer && (unsigned int)(v15 - 1) <= 0x1F2;
    if ( v15 > 0 && !v16 || serverTime - s_debugAnimEventInfoLog.entries[6].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[6], 0, sizeof(s_debugAnimEventInfoLog.entries[6]));
      --s_debugAnimEventInfoLog.entryCount;
      v2 = 1;
    }
  }
  if ( s_debugAnimEventInfoLog.entries[7].isUsed )
  {
    v17 = s_debugAnimEventInfoLog.entries[7].serverTime - serverTime;
    v18 = s_debugAnimEventInfoLog.entries[7].isServer && (unsigned int)(v17 - 1) <= 0x1F2;
    if ( v17 > 0 && !v18 || serverTime - s_debugAnimEventInfoLog.entries[7].serverTime > 500 )
    {
      memset_0(&s_debugAnimEventInfoLog.entries[7], 0, sizeof(s_debugAnimEventInfoLog.entries[7]));
      --s_debugAnimEventInfoLog.entryCount;
LABEL_74:
      std::_Sort_unchecked<PlayerASM_DebugAnimEventInfoEntry *,bool (*)(PlayerASM_DebugAnimEventInfoEntry &,PlayerASM_DebugAnimEventInfoEntry &)>(s_debugAnimEventInfoLog.entries, (PlayerASM_DebugAnimEventInfoEntry *)&s_debugAnimEventInfoLog.entryCount, 8i64, BG_PlayerASM_DebugAnimEventLog_Sorter);
      goto LABEL_75;
    }
  }
  if ( v2 )
    goto LABEL_74;
LABEL_75:
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_ANIM_EVENT_LOG);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_GetEntry
==============
*/
const PlayerASM_DebugAnimEventInfoEntry *BG_PlayerASM_DebugAnimEventLog_GetEntry(int entryIndex)
{
  __int64 v1; 
  int entryCount; 

  v1 = entryIndex;
  if ( (unsigned int)entryIndex >= s_debugAnimEventInfoLog.entryCount )
  {
    entryCount = s_debugAnimEventInfoLog.entryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2262, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( s_debugAnimEventInfoLog.entryCount )", "entryIndex doesn't index s_debugAnimEventInfoLog.entryCount\n\t%i not in [0, %i)", entryIndex, entryCount) )
      __debugbreak();
  }
  return (const PlayerASM_DebugAnimEventInfoEntry *)((char *)&s_debugAnimEventInfoLog + 108 * v1);
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_GetNumEntries
==============
*/
__int64 BG_PlayerASM_DebugAnimEventLog_GetNumEntries()
{
  return (unsigned int)s_debugAnimEventInfoLog.entryCount;
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_IsEnabled
==============
*/
bool BG_PlayerASM_DebugAnimEventLog_IsEnabled(const int entNum)
{
  const dvar_t *v1; 
  int integer; 

  v1 = DVARINT_animscript_debug;
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  return integer != -1 && integer == entNum;
}

/*
==============
BG_PlayerASM_DebugAnimEventLog_Sorter
==============
*/
bool BG_PlayerASM_DebugAnimEventLog_Sorter(PlayerASM_DebugAnimEventInfoEntry *sortItem1, PlayerASM_DebugAnimEventInfoEntry *sortItem2)
{
  return sortItem1->isUsed && !sortItem2->isUsed || sortItem1->serverTime > sortItem2->serverTime;
}

/*
==============
BG_PlayerASM_DoesAliasHaveAnyFlags
==============
*/
_BOOL8 BG_PlayerASM_DoesAliasHaveAnyFlags(const unsigned int packedAnimIndex, const unsigned int animsetIndex, const unsigned __int64 flags)
{
  const Animset *AnimsetByIndex; 
  int v6; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  unsigned int outAnimState; 
  unsigned int outAnimEntry; 

  if ( !packedAnimIndex )
    return 0i64;
  BG_PlayerASM_UnpackAnim(animsetIndex, packedAnimIndex, &outAnimState, &outAnimEntry);
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 773, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  v6 = outAnimState;
  if ( !BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, outAnimState) )
    return 0i64;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v6, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
  if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 780, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  return (flags & *(_QWORD *)&ppOutAlias->u.m_AIAnimsetAlias->numRedAnims) != 0;
}

/*
==============
BG_PlayerASM_DoesAliasHaveAnyMoveTypes
==============
*/
int BG_PlayerASM_DoesAliasHaveAnyMoveTypes(const unsigned int packedAnimIndex, const unsigned int animsetIndex, unsigned int *moveTypes)
{
  const Animset *AnimsetByIndex; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  unsigned int outAnimState; 
  unsigned int outAnimEntry; 

  if ( !packedAnimIndex )
    return 0;
  BG_PlayerASM_UnpackAnim(animsetIndex, packedAnimIndex, &outAnimState, &outAnimEntry);
  if ( !BG_PlayerASM_GetNumEntriesForStateIndex(animsetIndex, outAnimState) )
    return 0;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 801, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, outAnimState, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
  if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 806, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  return BG_CheckAnyBits((const unsigned int *)&ppOutAlias->u.m_AIAnimsetAlias[1], moveTypes);
}

/*
==============
BG_PlayerASM_EvalConditionMasks
==============
*/
char BG_PlayerASM_EvalConditionMasks(const characterInfo_t *const ci, const ASM_Instance *pInst, const PlayerASM_ConditionMask *conditionMask, scr_string_t stateName)
{
  const characterInfo_t *v7; 
  bool v8; 
  bool v9; 
  const dvar_t *v10; 
  const char *v11; 
  const char *v12; 
  unsigned int *animConditions; 
  unsigned int *animEvents; 
  int v16; 
  unsigned int *v17; 
  int v18; 
  bool v19; 
  int v20; 
  bool v21; 
  const dvar_t *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const characterInfo_t *v26; 
  scr_string_t v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 

  v7 = ci;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1938, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !conditionMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1939, ASSERT_TYPE_ASSERT, "(conditionMask)", (const char *)&queryFormat, "conditionMask") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  if ( conditionMask->usesNotetrackEvents )
  {
    if ( !pInst )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm.h", 220, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1950, ASSERT_TYPE_ASSERT, "(playerInst)", (const char *)&queryFormat, "playerInst") )
        __debugbreak();
    }
    if ( BYTE1(pInst[1].m_pASM) )
    {
      v10 = DVARINT_playerasm_condition_mask_debug;
      if ( !DVARINT_playerasm_condition_mask_debug )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_condition_mask_debug") )
          __debugbreak();
        v7 = ci;
      }
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.integer == 3 )
      {
        v11 = "Server";
        if ( v7->pXAnimTree->owner[0] == 1 )
          v11 = "Client";
        v12 = SL_ConvertToString(stateName);
        Com_PrintWarning(19, "PlayerASM: Updating alias: '%s' on '%s' - notetrack triggered. \n", v12, v11);
        return 0;
      }
      return 0;
    }
  }
  animConditions = conditionMask->animConditions;
  animEvents = conditionMask->animEvents;
  v16 = BG_CheckAnyOn(conditionMask->animConditions);
  v17 = conditionMask->animEvents;
  v18 = v16;
  v19 = v16 != 0;
  v20 = BG_CheckAnyOn(v17);
  v21 = v20 != 0;
  if ( v18 || v20 )
  {
    if ( v19 )
      v8 = BG_CheckAnyBits(animConditions, v7->dirtyConditions) == 0;
    if ( v21 )
      v9 = BG_CheckAnyBits(animEvents, v7->clientEvents.events) == 0;
    if ( v19 && !v8 || v21 && !v9 )
      return 0;
    v25 = "Server";
    if ( v19 && v8 )
    {
      v26 = ci;
      v27 = stateName;
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_playerasm_condition_mask_debug, "playerasm_condition_mask_debug") == 1 )
      {
        v28 = "Server";
        if ( ci->pXAnimTree->owner[0] == 1 )
          v28 = "Client";
        v29 = SL_ConvertToString(stateName);
        Com_PrintWarning(19, "PlayerASM: Skipped alias: '%s' on '%s' - anim condition mask used. \n", v29, v28);
      }
    }
    else
    {
      v27 = stateName;
      v26 = ci;
    }
    if ( v21 && v9 && Dvar_GetInt_Internal_DebugName(DVARINT_playerasm_condition_mask_debug, "playerasm_condition_mask_debug") == 1 )
    {
      if ( v26->pXAnimTree->owner[0] == 1 )
        v25 = "Client";
      v30 = SL_ConvertToString(v27);
      Com_PrintWarning(19, "PlayerASM: Skipped alias: '%s' on '%s' - event mask used. \n", v30, v25);
    }
    return 1;
  }
  else
  {
    v22 = DVARINT_playerasm_condition_mask_debug;
    if ( !DVARINT_playerasm_condition_mask_debug )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_condition_mask_debug") )
        __debugbreak();
      v7 = ci;
    }
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.integer != 3 )
      return 0;
    v23 = "Server";
    if ( v7->pXAnimTree->owner[0] == 1 )
      v23 = "Client";
    v24 = SL_ConvertToString(stateName);
    Com_PrintWarning(19, "PlayerASM: Updating alias: '%s' on '%s' - mask not found. \n", v24, v23);
    return 0;
  }
}

/*
==============
BG_PlayerASM_EvaluateCondition
==============
*/
_BOOL8 BG_PlayerASM_EvaluateCondition(const characterInfo_t *ci, unsigned int index, unsigned int *value)
{
  __int64 v3; 
  PlayerAnimScriptConditionTypes AnimConditionType; 
  unsigned int *v7; 
  unsigned int v8; 
  signed __int64 v9; 

  v3 = index;
  if ( !ci )
    return 1i64;
  AnimConditionType = BG_GetAnimConditionType(index);
  if ( AnimConditionType )
  {
    if ( AnimConditionType == ANIM_CONDTYPE_VALUE )
    {
      v7 = ci->clientConditions[(unsigned int)v3];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1057, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1058, ASSERT_TYPE_ASSERT, "(array2)", (const char *)&queryFormat, "array2") )
        __debugbreak();
      v8 = 0;
      v9 = (char *)v7 - (char *)value;
      while ( *(unsigned int *)((char *)value + v9) == *value )
      {
        ++v8;
        ++value;
        if ( v8 >= 8 )
          return 1i64;
      }
      return 0i64;
    }
    return 1i64;
  }
  return BG_CheckAnyBits(ci->clientConditions[v3], value) != 0;
}

/*
==============
BG_PlayerASM_FindValidAliasAddonOverrides
==============
*/
char BG_PlayerASM_FindValidAliasAddonOverrides(PlayerASM_AnimOverrides *animOverride, scr_string_t overrideType, PlayerASM_AnimOverrideEntry **overrideEntry)
{
  unsigned int count; 
  int v7; 
  PlayerASM_AnimOverrideEntry *v8; 

  if ( !animOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1804, ASSERT_TYPE_ASSERT, "(animOverride)", (const char *)&queryFormat, "animOverride") )
    __debugbreak();
  count = animOverride->count;
  v7 = 0;
  if ( !count )
    return 0;
  while ( 1 )
  {
    v8 = &animOverride->entries[v7];
    if ( (!overrideType || v8->overrideType == overrideType) && v8->stateName && v8->overrideType )
      break;
    if ( ++v7 >= count )
      return 0;
  }
  if ( v8->animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1813, ASSERT_TYPE_ASSERT, "(!isValid || (entry->animsetIndex < (1 << 2)))", (const char *)&queryFormat, "!isValid || (entry->animsetIndex < MAX_PLAYERANIM_ANIMSET_COUNT)") )
    __debugbreak();
  if ( overrideEntry )
    *overrideEntry = v8;
  return 1;
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/
__int64 BG_PlayerASM_GetAnim(const characterInfo_t *ci, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v3; 
  unsigned int v4; 
  const char *v5; 
  int v6; 
  const char *v7; 
  __int64 v9; 

  v3 = slot;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 548, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 549, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( v3 >= 2u )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v4 = *(&ci->playerAnim.legsAnim + v3);
  if ( v3 )
  {
    if ( v3 != 1 || v4 < 0x4000 )
      goto LABEL_18;
    v5 = "slot != PlayerASM_AnimSlot::SECONDARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
    v6 = 555;
    v7 = "(slot != PlayerASM_AnimSlot::SECONDARY || anim < (1 << 14))";
  }
  else
  {
    if ( v4 < 0x4000 )
      goto LABEL_18;
    v5 = "slot != PlayerASM_AnimSlot::PRIMARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
    v6 = 554;
    v7 = "(slot != PlayerASM_AnimSlot::PRIMARY || anim < (1 << 14))";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
    __debugbreak();
LABEL_18:
  BG_PlayerASM_VerifyAnim(ci->playerASMAnim.animSet, v4);
  return v4;
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/
__int64 BG_PlayerASM_GetAnim(const entityState_t *es, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v3; 
  unsigned int animData; 
  unsigned int v5; 
  __int64 v7; 

  v3 = slot;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 511, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 512, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( v3 >= 2u )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 513, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  animData = es->animInfo.animData;
  if ( v3 )
    v5 = (animData & 0x1FFF0000 | (animData >> 1) & 0x20000000) >> 16;
  else
    v5 = ((unsigned __int16)animData >> 3) | *((_WORD *)&es->animInfo.stateAnim + 1) & 0x2000;
  BG_PlayerASM_VerifyAnim((animData >> 1) & 3, v5);
  return v5;
}

/*
==============
BG_PlayerASM_GetAnim
==============
*/
__int64 BG_PlayerASM_GetAnim(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v3; 
  unsigned int packedAnim; 
  const char *v5; 
  int v6; 
  const char *v7; 
  __int64 v9; 

  v3 = slot;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 528, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 529, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v3 >= 2u )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  packedAnim = ps->animState.slot[v3].packedAnim;
  if ( v3 )
  {
    if ( v3 != 1 || packedAnim < 0x4000 )
      goto LABEL_18;
    v5 = "slot != PlayerASM_AnimSlot::SECONDARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
    v6 = 535;
    v7 = "(slot != PlayerASM_AnimSlot::SECONDARY || anim < (1 << 14))";
  }
  else
  {
    if ( packedAnim < 0x4000 )
      goto LABEL_18;
    v5 = "slot != PlayerASM_AnimSlot::PRIMARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
    v6 = 534;
    v7 = "(slot != PlayerASM_AnimSlot::PRIMARY || anim < (1 << 14))";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
    __debugbreak();
LABEL_18:
  BG_PlayerASM_VerifyAnim(ps->animState.animSet, packedAnim);
  return packedAnim;
}

/*
==============
BG_PlayerASM_GetAnimEntry
==============
*/
char BG_PlayerASM_GetAnimEntry(const PlayerASM_Context *context, int entNum, const scr_string_t stateName, const scr_string_t alias, int *outStateIndex, int *outEntryIndex)
{
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v12; 
  const Animset *v13; 
  const char *v14; 
  const char *v15; 
  int IndexOfRandomAnimFrom; 
  const Animset *AnimsetByIndex; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  AnimsetState *outState; 

  const_ps = context->const_ps;
  if ( context->useEntityState )
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  v12 = Animset;
  if ( Animset >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", Animset, 4) )
    __debugbreak();
  outState = NULL;
  if ( BG_PlayerASM_GetStateInfoByName(v12, stateName, &outState, outStateIndex) )
  {
    IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(context->holdrand, entNum, v12, outState, alias, 0);
    *outEntryIndex = IndexOfRandomAnimFrom;
    if ( IndexOfRandomAnimFrom >= 0 )
    {
      return 1;
    }
    else
    {
      AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v12);
      if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 257, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      v19 = SL_ConvertToString(AnimsetByIndex->constName);
      v20 = SL_ConvertToString(stateName);
      v21 = SL_ConvertToString(alias);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C93100, 1097i64, v21, v20, v19);
      return 0;
    }
  }
  else
  {
    v13 = BG_PlayerASM_GetAnimsetByIndex(v12);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 246, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
      __debugbreak();
    v14 = SL_ConvertToString(v13->constName);
    v15 = SL_ConvertToString(stateName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C930A0, 1096i64, v15, v14);
    return 0;
  }
}

/*
==============
BG_PlayerASM_GetAnimEntryCount
==============
*/
int BG_PlayerASM_GetAnimEntryCount(const PlayerASM_Context *context, const scr_string_t stateName)
{
  bool v3; 
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v6; 
  unsigned int v8; 
  int v9; 
  int pOutStateIndex; 
  AnimsetState *outState; 

  v3 = !context->useEntityState;
  const_ps = context->const_ps;
  if ( v3 )
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  v6 = Animset;
  if ( Animset >= 4 )
  {
    v9 = 4;
    v8 = Animset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  BG_PlayerASM_GetStateInfoByName(v6, stateName, &outState, &pOutStateIndex);
  if ( outState )
    return BG_PlayerASM_GetNumEntriesForStateIndex(v6, pOutStateIndex);
  else
    return 0;
}

/*
==============
BG_PlayerASM_GetAnimLength
==============
*/
int BG_PlayerASM_GetAnimLength(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  unsigned int XAnimIndex; 
  unsigned int v4; 
  unsigned int Animset; 
  const XAnim_s *Anims; 
  unsigned int outAnimPartsIndex; 

  XAnimIndex = BG_PlayerASM_GetXAnimIndex(ps, slot);
  v4 = XAnimIndex;
  if ( !XAnimIndex )
    return 0;
  outAnimPartsIndex = XAnimIndex;
  Animset = BG_PlayerASM_GetAnimset(ps);
  Anims = BG_PlayerASM_GetAnims(Animset);
  if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 669, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( BG_PlayerASM_GetXAnimParts(Anims, v4, &outAnimPartsIndex) )
    return XAnimGetLengthMsec(Anims, outAnimPartsIndex);
  else
    return 0;
}

/*
==============
BG_PlayerASM_GetAnimUser
==============
*/
__int64 BG_PlayerASM_GetAnimUser()
{
  BgStatic *ActiveStatics; 
  __int64 v1; 

  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v1 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( v1 )
    return *(unsigned int *)(v1 + 19544);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 345, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  return MEMORY[0x4C58];
}

/*
==============
BG_PlayerASM_GetAnims
==============
*/
XAnim_s *BG_PlayerASM_GetAnims(const unsigned int animsetIndex)
{
  __int64 v1; 
  BgStatic *ActiveStatics; 
  __int64 v3; 

  v1 = animsetIndex;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( v3 )
    return *(XAnim_s **)(v3 + 8 * v1 + 18504);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 328, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  return *(XAnim_s **)(8 * v1 + 0x4848);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/
unsigned int BG_PlayerASM_GetAnimset(const PlayerASM_Context *context)
{
  bool v1; 
  const playerState_s *const_ps; 

  v1 = !context->useEntityState;
  const_ps = context->const_ps;
  if ( v1 )
    return BG_PlayerASM_GetAnimset(const_ps);
  else
    return BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/
__int64 BG_PlayerASM_GetAnimset(const characterInfo_t *ci)
{
  __int64 result; 
  __int64 v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 501, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 502, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  result = ci->playerASMAnim.animSet;
  if ( (unsigned int)result >= 4 )
  {
    LODWORD(v3) = ci->playerAnim.suitAnimIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 503, ASSERT_TYPE_ASSERT, "(unsigned)( ci->playerASMAnim.animSet ) < (unsigned)( (1 << 2) )", "ci->playerASMAnim.animSet doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v3, 4) )
      __debugbreak();
    return ci->playerASMAnim.animSet;
  }
  return result;
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/
__int64 BG_PlayerASM_GetAnimset(const entityState_t *es)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 481, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 482, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return (es->animInfo.animData >> 1) & 3;
}

/*
==============
BG_PlayerASM_GetAnimset
==============
*/
__int64 BG_PlayerASM_GetAnimset(const playerState_s *ps)
{
  __int64 result; 
  __int64 v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 491, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = ps->animState.animSet;
  if ( (unsigned int)result >= 4 )
  {
    LODWORD(v3) = ps->animState.animSet;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 493, ASSERT_TYPE_ASSERT, "(unsigned)( ps->animState.animSet ) < (unsigned)( (1 << 2) )", "ps->animState.animSet doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v3, 4) )
      __debugbreak();
    return ps->animState.animSet;
  }
  return result;
}

/*
==============
BG_PlayerASM_GetAnimsetByIndex
==============
*/
const Animset *BG_PlayerASM_GetAnimsetByIndex(unsigned int animsetIndex)
{
  __int64 v1; 
  BgStatic *ActiveStatics; 
  __int64 v3; 
  __int64 v4; 

  v1 = animsetIndex;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v4 = v3;
  if ( (unsigned int)v1 < 4 && *(_QWORD *)(v3 + 8 * v1 + 19016) )
    return *(const Animset **)(v3 + 8 * v1 + 19016);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 97, ASSERT_TYPE_ASSERT, "((animsetIndex < (1 << 2)) && bgameAnim->playerAnimset[animsetIndex])", (const char *)&queryFormat, "(animsetIndex < MAX_PLAYERANIM_ANIMSET_COUNT) && bgameAnim->playerAnimset[animsetIndex]") )
    __debugbreak();
  return *(const Animset **)(v4 + 8 * v1 + 19016);
}

/*
==============
BG_PlayerASM_GetAnimsetIndexByName
==============
*/
__int64 BG_PlayerASM_GetAnimsetIndexByName(scr_string_t animSetName)
{
  const char *v1; 
  bool IndexFromName; 
  unsigned int v3; 
  unsigned int outIndex; 

  v1 = SL_ConvertToString(animSetName);
  IndexFromName = NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_PLAYERANIMSET, v1, &outIndex);
  v3 = 0;
  if ( IndexFromName )
    return outIndex;
  return v3;
}

/*
==============
BG_PlayerASM_GetAnimsetIndexBySuit
==============
*/
__int64 BG_PlayerASM_GetAnimsetIndexBySuit(unsigned int suitIndex)
{
  const SuitDef *SuitDef; 
  Animset *animsetAsset; 
  const char *v3; 
  bool IndexFromName; 
  unsigned int v5; 
  unsigned int outIndex; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1597, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  animsetAsset = SuitDef->animsetAsset;
  if ( !animsetAsset )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C947C8, 1104i64, SuitDef->name);
    animsetAsset = SuitDef->animsetAsset;
  }
  v3 = SL_ConvertToString(animsetAsset->constName);
  IndexFromName = NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_PLAYERANIMSET, v3, &outIndex);
  v5 = 0;
  if ( IndexFromName )
    return outIndex;
  return v5;
}

/*
==============
BG_PlayerASM_GetAnimsetName
==============
*/
scr_string_t BG_PlayerASM_GetAnimsetName(const PlayerASM_Context *context)
{
  bool v1; 
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v4; 

  v1 = !context->useEntityState;
  const_ps = context->const_ps;
  if ( v1 )
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  v4 = Animset;
  if ( Animset >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 127, ASSERT_TYPE_ASSERT, "(animSet < (1 << 2))", (const char *)&queryFormat, "animSet < MAX_PLAYERANIM_ANIMSET_COUNT") )
    __debugbreak();
  return BG_PlayerASM_GetAnimsetNameByIndex(v4);
}

/*
==============
BG_PlayerASM_GetAnimsetNameByIndex
==============
*/
__int64 BG_PlayerASM_GetAnimsetNameByIndex(unsigned int animsetIndex)
{
  __int64 v1; 
  BgStatic *ActiveStatics; 
  __int64 v3; 
  __int64 v4; 

  v1 = animsetIndex;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v4 = v3;
  if ( (unsigned int)v1 < 4 && *(_QWORD *)(v3 + 8 * v1 + 19016) )
    return *(unsigned int *)(*(_QWORD *)(v3 + 8 * v1 + 19016) + 8i64);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 79, ASSERT_TYPE_ASSERT, "((animsetIndex < (1 << 2)) && bgameAnim->playerAnimset[animsetIndex])", (const char *)&queryFormat, "(animsetIndex < MAX_PLAYERANIM_ANIMSET_COUNT) && bgameAnim->playerAnimset[animsetIndex]") )
    __debugbreak();
  return *(unsigned int *)(*(_QWORD *)(v4 + 8 * v1 + 19016) + 8i64);
}

/*
==============
BG_PlayerASM_GetAnimsetNameByIndexNetConst
==============
*/
scr_string_t BG_PlayerASM_GetAnimsetNameByIndexNetConst(unsigned int animsetIndex)
{
  char *outName; 

  if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_PLAYERANIMSET, animsetIndex, (const char **)&outName) )
    return SL_FindString(outName);
  else
    return 0;
}

/*
==============
BG_PlayerASM_GetAnimsetNameBySuit
==============
*/
__int64 BG_PlayerASM_GetAnimsetNameBySuit(unsigned int suitIndex)
{
  const SuitDef *SuitDef; 
  Animset *animsetAsset; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1597, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  animsetAsset = SuitDef->animsetAsset;
  if ( !animsetAsset )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C947C8, 1104i64, SuitDef->name);
    animsetAsset = SuitDef->animsetAsset;
  }
  return (unsigned int)animsetAsset->constName;
}

/*
==============
BG_PlayerASM_GetAssetBySuit
==============
*/
const ASM *BG_PlayerASM_GetAssetBySuit(unsigned int suitIndex)
{
  const SuitDef *SuitDef; 
  const ASM *result; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1569, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  result = SuitDef->asmAsset;
  if ( !result )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C94780, 1102i64, SuitDef->name);
    return SuitDef->asmAsset;
  }
  return result;
}

/*
==============
BG_PlayerASM_GetAssetNameBySuit
==============
*/
__int64 BG_PlayerASM_GetAssetNameBySuit(unsigned int suitIndex)
{
  const SuitDef *SuitDef; 
  ASM *asmAsset; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1583, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  asmAsset = SuitDef->asmAsset;
  if ( !asmAsset )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C94780, 1103i64, SuitDef->name);
    asmAsset = SuitDef->asmAsset;
  }
  return (unsigned int)asmAsset->m_Name;
}

/*
==============
BG_PlayerASM_GetEntityState
==============
*/
playerState_s *BG_PlayerASM_GetEntityState(const PlayerASM_Context *context)
{
  if ( context )
    return context->ps;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 46, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  return (playerState_s *)MEMORY[0];
}

/*
==============
BG_PlayerASM_GetFingerPoseSlot
==============
*/
PlayerFingerPoseSlot BG_PlayerASM_GetFingerPoseSlot(const unsigned int packedAnimIndex, const unsigned int animsetIndex)
{
  const Animset *AnimsetByIndex; 
  int v4; 
  AnimsetAnim *ppOutAnim; 
  unsigned int outAnimState; 
  unsigned int outAnimEntry; 
  AnimsetAlias *ppOutAlias; 

  if ( !packedAnimIndex )
    return 0;
  BG_PlayerASM_UnpackAnim(animsetIndex, packedAnimIndex, &outAnimState, &outAnimEntry);
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 927, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  v4 = outAnimState;
  if ( !BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, outAnimState) )
    return 0;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v4, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
  if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 932, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  return ppOutAlias->u.m_AIAnimsetAlias[8].numRedAnims;
}

/*
==============
BG_PlayerASM_GetPlayerState
==============
*/
playerState_s *BG_PlayerASM_GetPlayerState(const PlayerASM_Context *context)
{
  if ( context )
    return context->ps;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 53, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  return (playerState_s *)MEMORY[0];
}

/*
==============
BG_PlayerASM_GetVelocityDir
==============
*/
__int64 BG_PlayerASM_GetVelocityDir(const playerState_s *ps, const BgHandler *handler)
{
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  double v11; 
  double v12; 
  double v13; 
  unsigned __int16 v14; 
  vec2_t vec; 
  vec3_t inOutPlayerVelocity; 
  WorldUpReferenceFrame v18; 

  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1686, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1687, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v18, ps, handler);
  v4 = ps->velocity.v[1];
  inOutPlayerVelocity.v[0] = ps->velocity.v[0];
  inOutPlayerVelocity.v[2] = ps->velocity.v[2];
  v5 = LODWORD(inOutPlayerVelocity.v[2]);
  inOutPlayerVelocity.v[1] = v4;
  BG_PlayerSecondaryCollision_ClipToVelocityPlane(ps, &inOutPlayerVelocity);
  *(double *)&v5 = WorldUpReferenceFrame::GetForwardContribution(&v18, &inOutPlayerVelocity);
  vec.v[0] = *(float *)&v5;
  *(double *)&v5 = WorldUpReferenceFrame::GetRightContribution(&v18, &inOutPlayerVelocity);
  v7 = v5;
  vec.v[1] = *(float *)&v5;
  v6 = *(float *)&v5;
  *(float *)&v7 = (float)(*(float *)&v5 * *(float *)&v5) + (float)(vec.v[0] * vec.v[0]);
  if ( *(float *)&v7 <= 0.0 )
  {
    *(float *)&v11 = ps->viewangles.v[1];
  }
  else
  {
    *(float *)&v7 = fsqrt(*(float *)&v7);
    _XMM3 = v7;
    __asm
    {
      vcmpless xmm1, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm2, xmm1
    }
    vec.v[1] = v6 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v11 = vectoyaw(&vec);
  }
  v12 = AngleNormalize360(*(const float *)&v11);
  v13 = I_fclamp(*(float *)&v12, 0.0, 360.0);
  v14 = BG_DegreesToMovementDir(*(float *)&v13);
  if ( (unsigned __int8)v14 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1714, ASSERT_TYPE_ASSERT, "((velocityDir & ((1 << 8) - 1)) == velocityDir)", (const char *)&queryFormat, "(velocityDir & ((1 << MOVEMENTDIR_BITS) - 1)) == velocityDir") )
    __debugbreak();
  return v14;
}

/*
==============
BG_PlayerASM_GetXAnimLength
==============
*/
__int64 BG_PlayerASM_GetXAnimLength(const XAnimParts *parts, const float rate)
{
  __int64 v3; 
  float v4; 

  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 641, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  LODWORD(v3) = XAnimGetLengthFromPartsMsec(parts);
  if ( (unsigned int)v3 < 0x32 )
    v3 = 50i64;
  v4 = (float)v3;
  return (unsigned int)(10 * (int)(float)(v4 / rate));
}

/*
==============
BG_PlayerASM_GetXAnimParts
==============
*/
const XAnimParts *BG_PlayerASM_GetXAnimParts(const XAnim_s *const anims, unsigned int animIndex, unsigned int *outAnimPartsIndex)
{
  const XAnimParts *Parts; 
  const XAnimParts *result; 
  unsigned int ChildAt; 

  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, anims->size) )
    __debugbreak();
  if ( XAnimIsLeafNode(anims, animIndex) )
  {
    Parts = XAnimGetParts(anims, animIndex);
    if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 613, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    result = Parts;
    if ( outAnimPartsIndex )
      *outAnimPartsIndex = animIndex;
  }
  else if ( XAnimGetNumChildren(anims, animIndex) > 0 && (ChildAt = XAnimGetChildAt(anims, animIndex, 0), XAnimIsLeafNode(anims, ChildAt)) )
  {
    result = XAnimGetParts(anims, ChildAt);
    if ( outAnimPartsIndex )
      *outAnimPartsIndex = ChildAt;
  }
  else
  {
    return 0i64;
  }
  return result;
}

/*
==============
BG_PlayerASM_HasAnimAlias
==============
*/
bool BG_PlayerASM_HasAnimAlias(const PlayerASM_Context *context, const scr_string_t stateName, const scr_string_t aliasName)
{
  int v3; 
  bool v4; 
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v9; 
  const Animset *AnimsetByIndex; 
  const char *v11; 
  const char *v12; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  int v19; 
  int pOutStateIndex; 
  AnimsetState *outState; 

  v3 = 0;
  v4 = !context->useEntityState;
  outState = NULL;
  const_ps = context->const_ps;
  if ( v4 )
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  v9 = Animset;
  if ( Animset >= 4 )
  {
    v19 = 4;
    v17 = Animset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
  if ( !BG_PlayerASM_GetStateInfoByName(v9, stateName, &outState, &pOutStateIndex) )
  {
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v9);
    if ( v9 >= 4 )
    {
      LODWORD(v18) = 4;
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v16, v18) )
        __debugbreak();
    }
    v11 = SL_ConvertToString(AnimsetByIndex->constName);
    v12 = SL_ConvertToString(stateName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C93170, 1098i64, v12, v11);
  }
  numAnimAliases = outState->numAnimAliases;
  if ( !numAnimAliases )
    return 0;
  animAliases = outState->animAliases;
  while ( animAliases[v3].name != aliasName )
  {
    if ( ++v3 >= numAnimAliases )
      return 0;
  }
  return animAliases[v3].numAnims != 0;
}

/*
==============
BG_PlayerASM_IsAdsAlias
==============
*/
int BG_PlayerASM_IsAdsAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 469763070;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsAirAlias
==============
*/
int BG_PlayerASM_IsAirAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[0] = 0;
  moveTypes[1] = 4;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsAnimEntryValid
==============
*/
bool BG_PlayerASM_IsAnimEntryValid(const Animset *pAnimset, const unsigned int stateIndex, const unsigned int entryIndex)
{
  return entryIndex < BG_Animset_GetNumEntriesForStateIndex(pAnimset, stateIndex);
}

/*
==============
BG_PlayerASM_IsAnimRestart
==============
*/
bool BG_PlayerASM_IsAnimRestart(const Animset *pAnimset, const unsigned int animstateIndex, const unsigned int animEntryIndex, const unsigned int lastAnimstateIndex, const unsigned int lastAnimEntryIndex)
{
  bool result; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAlias *v11; 
  AnimsetAnim *ppOutAnim; 
  AnimsetAnim *v13; 

  ppOutAnim = NULL;
  ppOutAlias = NULL;
  v13 = NULL;
  v11 = NULL;
  result = 0;
  if ( animstateIndex != -1 && animEntryIndex != -1 && lastAnimstateIndex != -1 && lastAnimEntryIndex != -1 && animEntryIndex < BG_Animset_GetNumEntriesForStateIndex(pAnimset, animstateIndex) && lastAnimEntryIndex < BG_Animset_GetNumEntriesForStateIndex(pAnimset, lastAnimstateIndex) && animstateIndex == lastAnimstateIndex )
  {
    BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(pAnimset, animstateIndex, animEntryIndex, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
    BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(pAnimset, lastAnimstateIndex, lastAnimEntryIndex, (const AnimsetAlias **)&v11, (const AnimsetAnim **)&v13);
    if ( ppOutAlias )
    {
      if ( v11 && ppOutAlias == v11 && (*(_QWORD *)&ppOutAlias->u.m_AIAnimsetAlias->numRedAnims & 0x8000000000i64) != 0 && ppOutAnim && v13 )
        return 1;
    }
  }
  return result;
}

/*
==============
BG_PlayerASM_IsClearSyncGroupAlias
==============
*/
_BOOL8 BG_PlayerASM_IsClearSyncGroupAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x2000000000ui64);
}

/*
==============
BG_PlayerASM_IsCrouchingAlias
==============
*/
int BG_PlayerASM_IsCrouchingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 12484;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsDeathAlias
==============
*/
_BOOL8 BG_PlayerASM_IsDeathAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x80ui64);
}

/*
==============
BG_PlayerASM_IsDropWeaponAlias
==============
*/
_BOOL8 BG_PlayerASM_IsDropWeaponAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x2000ui64);
}

/*
==============
BG_PlayerASM_IsExecutionAttackerAlias
==============
*/
_BOOL8 BG_PlayerASM_IsExecutionAttackerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x200000000ui64);
}

/*
==============
BG_PlayerASM_IsExecutionVictimAlias
==============
*/
_BOOL8 BG_PlayerASM_IsExecutionVictimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x400000000ui64);
}

/*
==============
BG_PlayerASM_IsFiringAlias
==============
*/
_BOOL8 BG_PlayerASM_IsFiringAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 8ui64);
}

/*
==============
BG_PlayerASM_IsGestureAlias
==============
*/
_BOOL8 BG_PlayerASM_IsGestureAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x4000000ui64);
}

/*
==============
BG_PlayerASM_IsKillstreakTriggerAlias
==============
*/
_BOOL8 BG_PlayerASM_IsKillstreakTriggerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x4000ui64);
}

/*
==============
BG_PlayerASM_IsKnockbackAlias
==============
*/
int BG_PlayerASM_IsKnockbackAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[0] = 0;
  moveTypes[1] = 24;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsLadderAimAlias
==============
*/
_BOOL8 BG_PlayerASM_IsLadderAimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x100000000ui64);
}

/*
==============
BG_PlayerASM_IsLadderAlias
==============
*/
_BOOL8 BG_PlayerASM_IsLadderAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 2ui64);
}

/*
==============
BG_PlayerASM_IsLadderSlideAlias
==============
*/
int BG_PlayerASM_IsLadderSlideAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 0x8000;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsMeleeExecutionAttackerAlias
==============
*/
_BOOL8 BG_PlayerASM_IsMeleeExecutionAttackerAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x200000000ui64);
}

/*
==============
BG_PlayerASM_IsMeleeExecutionVictimAlias
==============
*/
_BOOL8 BG_PlayerASM_IsMeleeExecutionVictimAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x400000000ui64);
}

/*
==============
BG_PlayerASM_IsMoveBackwardAlias
==============
*/
int BG_PlayerASM_IsMoveBackwardAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 10912;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsMoveForwardAlias
==============
*/
int BG_PlayerASM_IsMoveForwardAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 922960;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsNoAimingAlias
==============
*/
_BOOL8 BG_PlayerASM_IsNoAimingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x800000000ui64);
}

/*
==============
BG_PlayerASM_IsNoAimingIfProneAlias
==============
*/
_BOOL8 BG_PlayerASM_IsNoAimingIfProneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x8000ui64);
}

/*
==============
BG_PlayerASM_IsNoPitchAimingAlias
==============
*/
_BOOL8 BG_PlayerASM_IsNoPitchAimingAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x10000ui64);
}

/*
==============
BG_PlayerASM_IsOnLadder
==============
*/
bool BG_PlayerASM_IsOnLadder(const characterInfo_t *ci)
{
  unsigned int Animset; 
  unsigned int Anim; 
  BOOL HaveAnyFlags; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2102, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(ci);
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    if ( BG_PlayerASM_DoesAliasHaveAnyFlags(Anim, Animset, 2ui64) || (HaveAnyFlags = BG_PlayerASM_DoesAliasHaveAnyFlags(Anim, Animset, 0x100000000ui64)) )
      LOBYTE(HaveAnyFlags) = 1;
  }
  else
  {
    LOBYTE(HaveAnyFlags) = 0;
  }
  return HaveAnyFlags;
}

/*
==============
BG_PlayerASM_IsPrepareAlias
==============
*/
_BOOL8 BG_PlayerASM_IsPrepareAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x1000ui64);
}

/*
==============
BG_PlayerASM_IsProneAlias
==============
*/
int BG_PlayerASM_IsProneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 776;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsRaiseWeaponAlias
==============
*/
_BOOL8 BG_PlayerASM_IsRaiseWeaponAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x10000000000ui64);
}

/*
==============
BG_PlayerASM_IsReloadAlias
==============
*/
_BOOL8 BG_PlayerASM_IsReloadAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x10ui64);
}

/*
==============
BG_PlayerASM_IsRocketHideShowAlias
==============
*/
_BOOL8 BG_PlayerASM_IsRocketHideShowAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x4000000000ui64);
}

/*
==============
BG_PlayerASM_IsRootMotionAlias
==============
*/
_BOOL8 BG_PlayerASM_IsRootMotionAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x20000ui64);
}

/*
==============
BG_PlayerASM_IsSceneAlias
==============
*/
_BOOL8 BG_PlayerASM_IsSceneAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x20000000ui64);
}

/*
==============
BG_PlayerASM_IsSceneSkipDoneEventAlias
==============
*/
_BOOL8 BG_PlayerASM_IsSceneSkipDoneEventAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x20000000000ui64);
}

/*
==============
BG_PlayerASM_IsSlideAlias
==============
*/
int BG_PlayerASM_IsSlideAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 0x1000000;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsSprintAlias
==============
*/
int BG_PlayerASM_IsSprintAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  unsigned int moveTypes[2]; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  moveTypes[1] = 0;
  moveTypes[0] = 786432;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  return BG_PlayerASM_DoesAliasHaveAnyMoveTypes(packedAnimIndex, animSet, moveTypes);
}

/*
==============
BG_PlayerASM_IsStopAlias
==============
*/
_BOOL8 BG_PlayerASM_IsStopAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x1000000000ui64);
}

/*
==============
BG_PlayerASM_IsStrafeAlias
==============
*/
_BOOL8 BG_PlayerASM_IsStrafeAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x60ui64);
}

/*
==============
BG_PlayerASM_IsSyncAnim
==============
*/
bool BG_PlayerASM_IsSyncAnim(const XAnim_s *baseAnims, unsigned int graftIndex, const XAnim_s *subtreeAnims, unsigned int animIndex, XAnimSyncGroupID *outSyncGroupID, const XAnim_s **outSyncRootAnims, unsigned int *outSyncRoot)
{
  __int64 v7; 
  __int64 v9; 
  const XAnim_s *v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  bool result; 
  char v16; 
  __int64 v17; 

  v7 = animIndex;
  v9 = graftIndex;
  if ( !baseAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 681, ASSERT_TYPE_ASSERT, "(baseAnims)", (const char *)&queryFormat, "baseAnims") )
    __debugbreak();
  if ( (_DWORD)v9 && (unsigned int)v9 > baseAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 682, ASSERT_TYPE_ASSERT, "(graftIndex == 0 || graftIndex <= baseAnims->size)", (const char *)&queryFormat, "graftIndex == XANIM_DEFAULT_GRAFT_ANIM_INDEX || graftIndex <= baseAnims->size") )
    __debugbreak();
  if ( subtreeAnims && (unsigned int)v7 > subtreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 683, ASSERT_TYPE_ASSERT, "(!subtreeAnims || animIndex <= subtreeAnims->size)", (const char *)&queryFormat, "!subtreeAnims || animIndex <= subtreeAnims->size") )
    __debugbreak();
  if ( !outSyncGroupID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 684, ASSERT_TYPE_ASSERT, "(outSyncGroupID)", (const char *)&queryFormat, "outSyncGroupID") )
    __debugbreak();
  if ( !outSyncRootAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 685, ASSERT_TYPE_ASSERT, "(outSyncRootAnims)", (const char *)&queryFormat, "outSyncRootAnims") )
    __debugbreak();
  if ( !outSyncRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 686, ASSERT_TYPE_ASSERT, "(outSyncRoot)", (const char *)&queryFormat, "outSyncRoot") )
    __debugbreak();
  *(_BYTE *)outSyncGroupID = 4;
  *outSyncRootAnims = NULL;
  v11 = baseAnims;
  *outSyncRoot = 0;
  if ( subtreeAnims )
    v11 = subtreeAnims;
  if ( XAnimIsLeafNode(v11, v7) && (_DWORD)v7 )
    LODWORD(v7) = v11->entries[v7].parent;
  v12 = (unsigned int)v7;
  if ( ((__int64)v11->entries[v12].parts & 3) == 0 )
  {
    if ( !subtreeAnims )
      return 0;
    if ( XAnimIsLeafNode(baseAnims, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 731, ASSERT_TYPE_ASSERT, "(!XAnimIsLeafNode( baseAnims, graftIndex ))", (const char *)&queryFormat, "!XAnimIsLeafNode( baseAnims, graftIndex )") )
      __debugbreak();
    if ( ((__int64)baseAnims->entries[v9].parts & 3) == 0 )
      return 0;
    v16 = baseAnims->entries[v9].animParent.syncGroup[0];
    *(_BYTE *)outSyncGroupID = v16;
    if ( v16 == 4 && (_DWORD)v9 )
    {
      while ( 1 )
      {
        v17 = (unsigned int)v9;
        if ( ((__int64)baseAnims->entries[v17].parts & 4) != 0 )
          break;
        LODWORD(v9) = baseAnims->entries[v17].parent;
        if ( !baseAnims->entries[v17].parent )
          return 1;
      }
      *outSyncRootAnims = baseAnims;
      *outSyncRoot = v9;
    }
    return 1;
  }
  v13 = v11->entries[v12].animParent.syncGroup[0];
  *(_BYTE *)outSyncGroupID = v13;
  if ( v13 != 4 || !(_DWORD)v7 )
    return 1;
  while ( 1 )
  {
    v14 = (unsigned int)v7;
    if ( ((__int64)v11->entries[v14].parts & 4) != 0 )
      break;
    LODWORD(v7) = v11->entries[v14].parent;
    if ( !v11->entries[v14].parent )
      return 1;
  }
  *outSyncRootAnims = v11;
  result = 1;
  *outSyncRoot = v7;
  return result;
}

/*
==============
BG_PlayerASM_IsThrowAlias
==============
*/
_BOOL8 BG_PlayerASM_IsThrowAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x800ui64);
}

/*
==============
BG_PlayerASM_IsThrowOrPrepareAlias
==============
*/
_BOOL8 BG_PlayerASM_IsThrowOrPrepareAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x1800ui64);
}

/*
==============
BG_PlayerASM_IsTransitionalAlias
==============
*/
_BOOL8 BG_PlayerASM_IsTransitionalAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x40000ui64);
}

/*
==============
BG_PlayerASM_IsTurnAlias
==============
*/
_BOOL8 BG_PlayerASM_IsTurnAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 0x200000ui64);
}

/*
==============
BG_PlayerASM_IsTurretAlias
==============
*/
_BOOL8 BG_PlayerASM_IsTurretAlias(const unsigned int packedAnimIndex, const unsigned int animSet)
{
  return BG_PlayerASM_DoesAliasHaveAnyFlags(packedAnimIndex, animSet, 4ui64);
}

/*
==============
BG_PlayerASM_IsUpdateNeededForFunction
==============
*/
char BG_PlayerASM_IsUpdateNeededForFunction(const ASM_Context *context, const ASM_Instance *pInst, PlayerASM_Parameters *parameters, const ASM_Transition *pTransition, const ASM_Function *pFunc)
{
  const dvar_t *v7; 
  unsigned __int8 m_Flags; 
  char v9; 
  char v10; 
  characterInfo_t *ci; 
  char v12; 
  const PlayerASM_Instance *PlayerASMInstance; 
  const char *v15; 
  const char *v16; 

  if ( !pTransition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2032, ASSERT_TYPE_ASSERT, "(pTransition)", (const char *)&queryFormat, "pTransition") )
    __debugbreak();
  if ( !pFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2033, ASSERT_TYPE_ASSERT, "(pFunc)", (const char *)&queryFormat, "pFunc") )
    __debugbreak();
  v7 = DCONST_DVARBOOL_playerasm_enableConditionMask;
  if ( !DCONST_DVARBOOL_playerasm_enableConditionMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_enableConditionMask") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    return 1;
  m_Flags = pFunc->m_Flags;
  v9 = m_Flags & 1;
  if ( (m_Flags & 2) != 0 )
    return 1;
  v10 = m_Flags & 4;
  if ( !v9 && !v10 )
    return 1;
  if ( pFunc->m_NumParams > 0 && pFunc->m_bNegate )
    return 1;
  ci = parameters->ci;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2063, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v12 = 0;
  if ( v9 && ci->clientEvents.hasEvents )
    v12 = 1;
  if ( v10 )
  {
    PlayerASMInstance = GetPlayerASMInstance(pInst);
    if ( !PlayerASMInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 2076, ASSERT_TYPE_ASSERT, "(playerInst)", (const char *)&queryFormat, "playerInst") )
      __debugbreak();
    if ( PlayerASMInstance->m_NumEvents )
      return 1;
  }
  if ( !v12 && Dvar_GetInt_Internal_DebugName(DVARINT_playerasm_condition_mask_debug, "playerasm_condition_mask_debug") == 2 )
  {
    v15 = "Server";
    if ( ci->pXAnimTree->owner[0] == 1 )
      v15 = "Client";
    v16 = SL_ConvertToString(parameters->stateName);
    Com_PrintWarning(19, "PlayerASM: Skipped transition function: '%s' on state '%s' on '%s'.\n", s_PlayerASMBuiltinFuncs_3[pFunc->m_FuncID].m_Name, v16, v15);
  }
  return v12;
}

/*
==============
BG_PlayerASM_LookupAnimFromAlias
==============
*/
__int64 BG_PlayerASM_LookupAnimFromAlias(const PlayerASM_Context *context, BgPlayer_Asm *pAsm, int entNum, const scr_string_t stateName, const scr_string_t alias)
{
  int outEntryIndex; 
  int outStateIndex[5]; 

  BG_PlayerASM_GetAnimEntry(context, entNum, stateName, alias, outStateIndex, &outEntryIndex);
  return (unsigned int)outEntryIndex;
}

/*
==============
BG_PlayerASM_PackAnim
==============
*/
__int64 BG_PlayerASM_PackAnim(const unsigned int animsetIndex, const unsigned int animState, const unsigned int animEntry)
{
  __int64 v3; 
  const Animset *AnimsetByIndex; 
  unsigned int NumEntriesForStateIndex; 
  Animset_Union v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = animState;
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 353, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 356, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 357, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
    __debugbreak();
  if ( (unsigned int)v3 >= LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftOffset.leanYaw) )
  {
    LODWORD(v11) = LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftOffset.leanYaw);
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( animset->u.m_PlayerAnimset->numPackMapEntries )", "animState doesn't index animset->u.m_PlayerAnimset->numPackMapEntries\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  NumEntriesForStateIndex = BG_PlayerASM_GetNumEntriesForStateIndex(animsetIndex, v3);
  if ( NumEntriesForStateIndex && animEntry >= NumEntriesForStateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 362, ASSERT_TYPE_ASSERT, "(!numAnims || animEntry < numAnims)", (const char *)&queryFormat, "!numAnims || animEntry < numAnims") )
    __debugbreak();
  v8.m_AIAnimset = (AIAnimset *)AnimsetByIndex->u;
  if ( animEntry + *(unsigned __int16 *)(*(_QWORD *)v8.m_AIAnimset + 2 * v3) >= LOWORD(v8.m_AIAnimset->coverLeftCrouchOffset.leanYaw) )
  {
    LODWORD(v11) = LOWORD(v8.m_AIAnimset->coverLeftCrouchOffset.leanYaw);
    LODWORD(v10) = animEntry + *(unsigned __int16 *)(*(_QWORD *)v8.m_AIAnimset + 2 * v3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( animset->u.m_PlayerAnimset->packMap[animState] + animEntry ) < (unsigned)( animset->u.m_PlayerAnimset->numUnpackMapEntries )", "animset->u.m_PlayerAnimset->packMap[animState] + animEntry doesn't index animset->u.m_PlayerAnimset->numUnpackMapEntries\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw) > 0x4000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 365, ASSERT_TYPE_ASSERT, "(animset->u.m_PlayerAnimset->numUnpackMapEntries <= (1 << 14))", (const char *)&queryFormat, "animset->u.m_PlayerAnimset->numUnpackMapEntries <= MAX_PLAYERANIM_ENTRY_COUNT") )
    __debugbreak();
  if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 367, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
    __debugbreak();
  return *(unsigned __int16 *)(*(_QWORD *)AnimsetByIndex->u.m_AIAnimset + 2 * v3) + animEntry + 1;
}

/*
==============
BG_PlayerASM_SetAnimState
==============
*/
void BG_PlayerASM_SetAnimState(const PlayerASM_Context *context, BgPlayer_Asm *pAsm, int entNum, const scr_string_t asmName, scr_string_t stateName, int entryIndex, int gameTime, float animRate, PlayerASM_AnimSlot slot)
{
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v12; 
  scr_string_t v13; 
  const Animset *AnimsetByIndex; 
  const char *v15; 
  const char *v16; 
  int v17; 
  const Animset *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  unsigned __int8 v22; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  const_ps = context->const_ps;
  if ( context->useEntityState )
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  v12 = Animset;
  if ( Animset >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1491, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", Animset, 4) )
    __debugbreak();
  v13 = stateName;
  if ( !BG_PlayerASM_GetStateInfoByName(v12, stateName, &outState, &pOutStateIndex) )
  {
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v12);
    v15 = SL_ConvertToString(AnimsetByIndex->constName);
    v16 = SL_ConvertToString(v13);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C94530, 1099i64, v16, v15);
  }
  v17 = entryIndex;
  if ( entryIndex < 0 || v17 > BG_PlayerASM_GetNumEntriesForStateIndex(v12, pOutStateIndex) )
  {
    v18 = BG_PlayerASM_GetAnimsetByIndex(v12);
    v19 = SL_ConvertToString(v18->constName);
    v20 = SL_ConvertToString(v13);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C94580, 1100i64, (unsigned int)v17, v20, v19);
  }
  if ( !outState->u.m_AIAnimsetState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1510, ASSERT_TYPE_ASSERT, "(pAnimsetState->u.m_PlayerAnimsetState)", (const char *)&queryFormat, "pAnimsetState->u.m_PlayerAnimsetState") )
    __debugbreak();
  if ( outState->u.m_AIAnimsetState[80] )
  {
    v21 = SL_ConvertToString(v13);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C94680, 5711i64, v21);
  }
  v22 = slot;
  if ( (_BYTE)slot == COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1517, ASSERT_TYPE_ASSERT, "(slot != PlayerASM_AnimSlot::INVALID)", (const char *)&queryFormat, "slot != PlayerASM_AnimSlot::INVALID") )
    __debugbreak();
  BG_PlayerASM_SetState(context, (const PlayerASM_AnimSlot)v22, pOutStateIndex, v17);
}

/*
==============
BG_PlayerASM_SetState
==============
*/
void BG_PlayerASM_SetState(const PlayerASM_Context *context, const PlayerASM_AnimSlot animSlot, const unsigned int animState, const unsigned int animEntry)
{
  unsigned __int8 v6; 
  const playerState_s *const_ps; 
  unsigned int Animset; 
  unsigned int v10; 
  unsigned int NumEntriesForStateIndex; 
  scr_string_t AnimsetNameByIndex; 
  scr_string_t v13; 
  unsigned int v14; 
  playerState_s *ps; 
  const char *v16; 
  int v17; 
  const char *v18; 
  unsigned int packedAnim; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int inOutTimer; 

  v6 = animSlot;
  if ( animState >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1384, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( (1 << 10) )", "animState doesn't index MAX_ANIM_STATE_COUNT\n\t%i not in [0, %i)", animState, 1024) )
    __debugbreak();
  const_ps = context->const_ps;
  if ( context->useEntityState )
    Animset = BG_PlayerASM_GetAnimset((const entityState_t *)const_ps);
  else
    Animset = BG_PlayerASM_GetAnimset(const_ps);
  v10 = Animset;
  if ( Animset >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v21) = Animset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1387, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  NumEntriesForStateIndex = BG_PlayerASM_GetNumEntriesForStateIndex(v10, animState);
  AnimsetNameByIndex = BG_PlayerASM_GetAnimsetNameByIndex(v10);
  if ( animState >= BG_Animset_GetNumStates(AnimsetNameByIndex) )
  {
    v13 = BG_PlayerASM_GetAnimsetNameByIndex(v10);
    LODWORD(v22) = BG_Animset_GetNumStates(v13);
    LODWORD(v21) = animState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1391, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( BG_Animset_GetNumStates( BG_PlayerASM_GetAnimsetNameByIndex( animsetIndex ) ) )", "animState doesn't index BG_Animset_GetNumStates( BG_PlayerASM_GetAnimsetNameByIndex( animsetIndex ) )\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( NumEntriesForStateIndex && animEntry >= NumEntriesForStateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1392, ASSERT_TYPE_ASSERT, "(!numAnims || animEntry < numAnims)", (const char *)&queryFormat, "!numAnims || animEntry < numAnims") )
    __debugbreak();
  v14 = BG_PlayerASM_PackAnim(v10, animState, animEntry);
  ps = context->ps;
  if ( context->useEntityState )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1401, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( v6 )
    {
      if ( v14 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1410, ASSERT_TYPE_ASSERT, "(anim < (1 << 14))", (const char *)&queryFormat, "anim < MAX_PLAYERANIM_ENTRY_COUNT") )
        __debugbreak();
      playerAnim_t::SetSecondaryAnim((playerAnim_t *)&ps->fallStartTime, v14);
    }
    else
    {
      if ( v14 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1405, ASSERT_TYPE_ASSERT, "(anim < (1 << 14))", (const char *)&queryFormat, "anim < MAX_PLAYERANIM_ENTRY_COUNT") )
        __debugbreak();
      playerAnim_t::SetPrimaryAnim((playerAnim_t *)&ps->fallStartTime, v14);
    }
    return;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v6 )
  {
    if ( v6 == 1 && v14 >= 0x4000 )
    {
      v16 = "animSlot != PlayerASM_AnimSlot::SECONDARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
      v17 = 1420;
      v18 = "(animSlot != PlayerASM_AnimSlot::SECONDARY || anim < (1 << 14))";
LABEL_39:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", v17, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v16) )
        __debugbreak();
    }
  }
  else if ( v14 >= 0x4000 )
  {
    v16 = "animSlot != PlayerASM_AnimSlot::PRIMARY || anim < MAX_PLAYERANIM_ENTRY_COUNT";
    v17 = 1419;
    v18 = "(animSlot != PlayerASM_AnimSlot::PRIMARY || anim < (1 << 14))";
    goto LABEL_39;
  }
  packedAnim = ps->animState.slot[v6].packedAnim;
  if ( packedAnim != v14 )
  {
    inOutTimer = ps->animState.slot[v6].m_Timer;
    if ( packedAnim && v14 && BG_PlayerASM_ShouldSyncAnims(v10, packedAnim, v14, &inOutTimer) )
    {
      v20 = inOutTimer;
      if ( inOutTimer > 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1438, ASSERT_TYPE_ASSERT, "(newTimer <= (1 << 19) - 1)", (const char *)&queryFormat, "newTimer <= (1 << ANIM_TIMER_BITS) - 1") )
        __debugbreak();
      ps->animState.slot[v6].m_Timer = v20;
    }
    else
    {
      ps->animState.slot[v6].m_Timer = 0;
    }
  }
  ps->animState.slot[v6].packedAnim = v14;
}

/*
==============
BG_PlayerASM_ShouldSkipAddon
==============
*/
bool BG_PlayerASM_ShouldSkipAddon(const characterInfo_t *ci, const unsigned int animsetIndex, int addonStateIndex, int entryIndex)
{
  const Animset *AnimsetByIndex; 
  char redAnims; 
  AnimsetAnim *ppOutAnim; 
  AnimsetAlias *ppOutAlias; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1833, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ppOutAlias = NULL;
  ppOutAnim = NULL;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1840, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset", ppOutAnim) )
    __debugbreak();
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, addonStateIndex, entryIndex, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
  if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1843, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  redAnims = (char)ppOutAlias->u.m_AIAnimsetAlias[5].redAnims;
  if ( redAnims == 10 )
    return !ci->useShadowAnims;
  if ( redAnims == 11 )
    return ci->isFemale == 0;
  return 0;
}

/*
==============
BG_PlayerASM_ShouldSyncAnims
==============
*/
char BG_PlayerASM_ShouldSyncAnims(const unsigned int animsetIndex, const unsigned int oldPackedAnim, const unsigned int anim, unsigned int *inOutTimer)
{
  unsigned int v7; 
  const Animset *AnimsetByIndex; 
  int v9; 
  unsigned int NumEntriesForStateIndex; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  XAnim_s *v14; 
  XAnim_s *v15; 
  char v16; 
  unsigned int v17; 
  AnimsetAnim *XAnimParts; 
  bool IsBlendspaceNode; 
  bool v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  float XAnimLength; 
  int v26; 
  float v27; 
  unsigned int v28; 
  float v29; 
  float v30; 
  double v31; 
  __int64 v34; 
  unsigned int v35; 
  float v36; 
  float v37; 
  __int64 v38; 
  double v39; 
  float v40; 
  XAnimSyncGroupID outSyncGroupID; 
  unsigned int v43; 
  AnimsetAlias *outSyncRoot; 
  unsigned int animIndex; 
  unsigned int pOutAnimIndex; 
  unsigned int outAnimEntry[2]; 
  XAnim_s *pSubtreeAnims; 
  XAnim_s *subtreeAnims; 
  AnimsetAnim *v50; 
  XAnim_s *anims; 
  unsigned int graftIndex; 
  unsigned int pOutGraftNode; 
  XAnim_s *v54; 
  XAnim_s *outSyncRootAnims; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  const AnimsetAlias *outAnimState; 

  if ( *inOutTimer )
  {
    v7 = 0;
    BG_PlayerASM_UnpackAnim(animsetIndex, anim, (unsigned int *)&outAnimState, outAnimEntry);
    BG_PlayerASM_UnpackAnim(animsetIndex, oldPackedAnim, (unsigned int *)&outSyncRoot, &v43);
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
    if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1261, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
      __debugbreak();
    v9 = (int)outAnimState;
    NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, (int)outAnimState);
    v11 = outAnimEntry[0];
    if ( outAnimEntry[0] < NumEntriesForStateIndex )
    {
      v12 = (int)outSyncRoot;
      v13 = BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, (int)outSyncRoot);
      if ( v43 < v13 && (v9 == v12 || !BG_PlayerASM_DoesAliasHaveAnyFlags(anim, animsetIndex, 0x2000000000ui64)) )
      {
        subtreeAnims = BG_PlayerASM_GetAnims(animsetIndex);
        if ( !subtreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1276, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(animsetIndex, v9, v11, &pOutAnimIndex, &pOutGraftNode, (const XAnim_s **)&pSubtreeAnims);
        BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(animsetIndex, v12, v43, &animIndex, &graftIndex, (const XAnim_s **)&anims);
        v14 = pSubtreeAnims;
        v15 = anims;
        if ( !pSubtreeAnims )
          v14 = subtreeAnims;
        pSubtreeAnims = v14;
        if ( !anims )
          v15 = subtreeAnims;
        anims = v15;
        v16 = 0;
        if ( !BG_PlayerASM_IsSyncAnim(subtreeAnims, graftIndex, v15, animIndex, &outSyncGroupID, (const XAnim_s **)&outSyncRootAnims, (unsigned int *)&outSyncRoot) )
          goto LABEL_66;
        if ( !BG_PlayerASM_IsSyncAnim(subtreeAnims, pOutGraftNode, pSubtreeAnims, pOutAnimIndex, (XAnimSyncGroupID *)&outAnimState, (const XAnim_s **)&v54, outAnimEntry) )
          goto LABEL_66;
        ppOutAnim = NULL;
        subtreeAnims = NULL;
        v50 = NULL;
        ppOutAlias = NULL;
        if ( v9 != -1 && v11 != -1 && v12 != -1 && v43 != -1 && v11 < BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, v9) )
        {
          v17 = BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, v12);
          if ( v43 < v17 && v9 == v12 )
          {
            BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v9, v11, (const AnimsetAlias **)&subtreeAnims, (const AnimsetAnim **)&ppOutAnim);
            BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v12, v43, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&v50);
            if ( subtreeAnims )
            {
              if ( ppOutAlias && subtreeAnims == (XAnim_s *)ppOutAlias && (*(_QWORD *)(*(_QWORD *)&subtreeAnims->lodDistances[2] + 8i64) & 0x8000000000i64) != 0 && ppOutAnim && v50 )
                goto LABEL_66;
            }
          }
        }
        if ( (_BYTE)outSyncGroupID != (_BYTE)outAnimState || (_BYTE)outAnimState == 4 && (outAnimEntry[0] != (_DWORD)outSyncRoot || outSyncRootAnims != v54) )
          goto LABEL_66;
        *(_QWORD *)outAnimEntry = BG_PlayerASM_GetXAnimParts(anims, animIndex, NULL);
        XAnimParts = (AnimsetAnim *)BG_PlayerASM_GetXAnimParts(pSubtreeAnims, pOutAnimIndex, NULL);
        v16 = 1;
        v50 = XAnimParts;
        if ( !*(_QWORD *)outAnimEntry || !XAnimParts )
          goto LABEL_66;
        outSyncRootAnims = NULL;
        outSyncRoot = NULL;
        v54 = NULL;
        outAnimState = NULL;
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v9, v11, (const AnimsetAlias **)&outSyncRoot, (const AnimsetAnim **)&outSyncRootAnims);
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v12, v43, &outAnimState, (const AnimsetAnim **)&v54);
        if ( !outAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1337, ASSERT_TYPE_ASSERT, "(oldAnimsetAlias)", (const char *)&queryFormat, "oldAnimsetAlias") )
          __debugbreak();
        if ( !outSyncRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1338, ASSERT_TYPE_ASSERT, "(animsetAlias)", (const char *)&queryFormat, "animsetAlias") )
          __debugbreak();
        if ( !*inOutTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1339, ASSERT_TYPE_ASSERT, "(*inOutTimer > 0)", (const char *)&queryFormat, "*inOutTimer > 0") )
          __debugbreak();
        IsBlendspaceNode = XAnimBlendSpace_IsBlendspaceNode(anims, animIndex);
        v20 = XAnimBlendSpace_IsBlendspaceNode(pSubtreeAnims, pOutAnimIndex);
        if ( IsBlendspaceNode )
        {
          v21 = *inOutTimer;
          if ( v20 )
          {
            v7 = *inOutTimer;
LABEL_65:
            v16 = 1;
LABEL_66:
            *inOutTimer = v7;
            return v16;
          }
          if ( (_DWORD)v21 == 0x7FFFF )
          {
            v22 = FLOAT_1_0;
          }
          else
          {
            v23 = (float)v21;
            v24 = v23 * 0.0000019073486;
            v22 = v24;
            if ( (v24 < 0.0 || v24 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1353, ASSERT_TYPE_ASSERT, "(oldTimer >= 0.f && oldTimer <= 1.f)", (const char *)&queryFormat, "oldTimer >= 0.f && oldTimer <= 1.f") )
              __debugbreak();
          }
          XAnimLength = (float)BG_PlayerASM_GetXAnimLength((const XAnimParts *)v50, *((const float *)&outSyncRoot->u.m_AIAnimsetAlias->redAnims + 1));
          v26 = (int)(float)(XAnimLength * v22);
        }
        else
        {
          v27 = *((float *)&outAnimState->u.m_AIAnimsetAlias->redAnims + 1);
          if ( v20 )
          {
            v28 = BG_PlayerASM_GetXAnimLength(*(const XAnimParts **)outAnimEntry, v27);
            v29 = (float)*inOutTimer;
            v30 = (float)v28;
            v31 = I_fclamp(v29 / v30, 0.0, 1.0);
            if ( *(float *)&v31 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.h", 182, ASSERT_TYPE_ASSERT, "(value >= 0.f)", (const char *)&queryFormat, "value >= 0.f") )
              __debugbreak();
            _XMM1 = 0i64;
            __asm { vroundss xmm1, xmm1, xmm0, 1 }
            v26 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 0x7FFFF )
              v26 = 0x7FFFF;
          }
          else
          {
            v34 = BG_PlayerASM_GetXAnimLength(*(const XAnimParts **)outAnimEntry, v27);
            v35 = BG_PlayerASM_GetXAnimLength((const XAnimParts *)v50, *((const float *)&outSyncRoot->u.m_AIAnimsetAlias->redAnims + 1));
            v36 = (float)*inOutTimer;
            v37 = (float)v34;
            v38 = v35;
            v39 = I_fclamp(v36 / v37, 0.0, 1.0);
            v40 = (float)v38;
            v26 = (int)(float)(*(float *)&v39 * v40);
          }
        }
        v7 = v26;
        goto LABEL_65;
      }
    }
  }
  return 0;
}

/*
==============
BG_PlayerASM_StoreCommandDir
==============
*/
void BG_PlayerASM_StoreCommandDir(const int clientNum, const int serverTime, const float oldMoveForward, const float oldMoveRight, const float moveForward, const float moveRight)
{
  __int64 v7; 
  BgStatic *ActiveStatics; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 v11; 
  unsigned int v12; 
  _DWORD *v13; 
  double v14; 
  __int64 v15; 
  vec2_t vec; 

  v7 = clientNum;
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics->IsClient(ActiveStatics) )
  {
    CharacterInfo = (characterInfo_t *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].GetAnimStatics)(ActiveStatics, (unsigned int)v7);
    goto LABEL_12;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v7);
LABEL_12:
    v11 = (__int64)CharacterInfo;
    goto LABEL_13;
  }
  if ( (unsigned int)v7 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v15, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
      __debugbreak();
  }
  v11 = *(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v7;
LABEL_13:
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1765, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  vec.v[0] = moveRight;
  vec.v[1] = moveForward;
  if ( serverTime <= 0 )
  {
LABEL_20:
    memmove_0((void *)(v11 + 2644), (const void *)(v11 + 2636), 0x28ui64);
    *(_QWORD *)(v11 + 2636) = 0i64;
    *(_DWORD *)(v11 + 2640) = serverTime;
    v14 = vectoyaw(&vec);
    *(_WORD *)(v11 + 2636) = (int)*(float *)&v14;
    *(_WORD *)(v11 + 2638) = (int)fsqrt((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0]));
  }
  else
  {
    v12 = 0;
    v13 = (_DWORD *)(v11 + 2640);
    while ( *v13 != serverTime )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= 6 )
        goto LABEL_20;
    }
  }
}

/*
==============
BG_PlayerASM_UnpackAnim
==============
*/
void BG_PlayerASM_UnpackAnim(const unsigned int animsetIndex, const unsigned int packedAnimIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  bool v8; 
  const Animset *AnimsetByIndex; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !outAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 374, ASSERT_TYPE_ASSERT, "(outAnimState)", (const char *)&queryFormat, "outAnimState") )
    __debugbreak();
  if ( !outAnimEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 375, ASSERT_TYPE_ASSERT, "(outAnimEntry)", (const char *)&queryFormat, "outAnimEntry") )
    __debugbreak();
  if ( packedAnimIndex )
  {
    if ( packedAnimIndex < 0x4000 )
      goto LABEL_13;
    LODWORD(v12) = packedAnimIndex;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( packedAnimIndex ) < (unsigned)( (1 << 14) )", "packedAnimIndex doesn't index MAX_PLAYERANIM_ENTRY_COUNT\n\t%i not in [0, %i)", v12, 0x4000);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 376, ASSERT_TYPE_ASSERT, "(packedAnimIndex != (0))", (const char *)&queryFormat, "packedAnimIndex != BG_PLAYERASM_PACKED_ANIM_INVALID");
  }
  if ( v8 )
    __debugbreak();
LABEL_13:
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 380, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 381, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
    __debugbreak();
  v10 = packedAnimIndex - 1;
  if ( (unsigned int)v10 >= LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw) )
  {
    LODWORD(v13) = LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw);
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( anim ) < (unsigned)( animset->u.m_PlayerAnimset->numUnpackMapEntries )", "anim doesn't index animset->u.m_PlayerAnimset->numUnpackMapEntries\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v11 = *(unsigned __int16 *)(*(_QWORD *)&AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.hideYaw + 2 * v10);
  if ( (unsigned int)v11 >= AnimsetByIndex->numStates )
  {
    LODWORD(v13) = AnimsetByIndex->numStates;
    LODWORD(v12) = *(unsigned __int16 *)(*(_QWORD *)&AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.hideYaw + 2 * v10);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( animset->numStates )", "animState doesn't index animset->numStates\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v10 < *(unsigned __int16 *)(*(_QWORD *)AnimsetByIndex->u.m_AIAnimset + 2 * v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 389, ASSERT_TYPE_ASSERT, "(anim >= animset->u.m_PlayerAnimset->packMap[animState])", (const char *)&queryFormat, "anim >= animset->u.m_PlayerAnimset->packMap[animState]") )
    __debugbreak();
  *outAnimEntry = v10 - *(unsigned __int16 *)(*(_QWORD *)AnimsetByIndex->u.m_AIAnimset + 2 * v11);
  *outAnimState = v11;
}

/*
==============
BG_PlayerASM_UnpackAnimFromCi
==============
*/
__int64 BG_PlayerASM_UnpackAnimFromCi(const characterInfo_t *ci, const PlayerASM_AnimSlot slot, unsigned int *outAnimsetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  unsigned __int8 v7; 
  unsigned int Anim; 
  unsigned int Animset; 
  __int64 v12; 

  v7 = slot;
  if ( !outAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 398, ASSERT_TYPE_ASSERT, "(outAnimState)", (const char *)&queryFormat, "outAnimState") )
    __debugbreak();
  if ( !outAnimEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 399, ASSERT_TYPE_ASSERT, "(outAnimEntry)", (const char *)&queryFormat, "outAnimEntry") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 400, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( v7 >= 2u )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 401, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  Anim = BG_PlayerASM_GetAnim(ci, (const PlayerASM_AnimSlot)v7);
  Animset = BG_PlayerASM_GetAnimset(ci);
  *outAnimsetIndex = Animset;
  if ( Anim )
    BG_PlayerASM_UnpackAnim(Animset, Anim, outAnimState, outAnimEntry);
  return Anim;
}

/*
==============
BG_PlayerASM_UnpackAnimFromEntity
==============
*/
__int64 BG_PlayerASM_UnpackAnimFromEntity(const entityState_t *es, const PlayerASM_AnimSlot slot, unsigned int *outAnimsetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  unsigned __int8 v7; 
  unsigned int Anim; 
  unsigned int Animset; 
  __int64 v12; 

  v7 = slot;
  if ( !outAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 419, ASSERT_TYPE_ASSERT, "(outAnimState)", (const char *)&queryFormat, "outAnimState") )
    __debugbreak();
  if ( !outAnimEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 420, ASSERT_TYPE_ASSERT, "(outAnimEntry)", (const char *)&queryFormat, "outAnimEntry") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 421, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( v7 >= 2u )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  Anim = BG_PlayerASM_GetAnim(es, (const PlayerASM_AnimSlot)v7);
  Animset = BG_PlayerASM_GetAnimset(es);
  *outAnimsetIndex = Animset;
  if ( Anim )
    BG_PlayerASM_UnpackAnim(Animset, Anim, outAnimState, outAnimEntry);
  return Anim;
}

/*
==============
BG_PlayerASM_UnpackAnimFromPs
==============
*/
__int64 BG_PlayerASM_UnpackAnimFromPs(const playerState_s *ps, const PlayerASM_AnimSlot slot, unsigned int *outAnimSetIndex, unsigned int *outAnimState, unsigned int *outAnimEntry)
{
  unsigned __int8 v7; 
  unsigned int Anim; 
  unsigned int Animset; 
  __int64 v12; 

  v7 = slot;
  if ( !outAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 440, ASSERT_TYPE_ASSERT, "(outAnimState)", (const char *)&queryFormat, "outAnimState") )
    __debugbreak();
  if ( !outAnimEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 441, ASSERT_TYPE_ASSERT, "(outAnimEntry)", (const char *)&queryFormat, "outAnimEntry") )
    __debugbreak();
  if ( !outAnimSetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 442, ASSERT_TYPE_ASSERT, "(outAnimSetIndex)", (const char *)&queryFormat, "outAnimSetIndex") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 443, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v7 >= 2u )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  Anim = BG_PlayerASM_GetAnim(ps, (const PlayerASM_AnimSlot)v7);
  Animset = BG_PlayerASM_GetAnimset(ps);
  *outAnimSetIndex = Animset;
  if ( Anim )
    BG_PlayerASM_UnpackAnim(Animset, Anim, outAnimState, outAnimEntry);
  return Anim;
}

/*
==============
BG_PlayerASM_UpdateAngles
==============
*/

void __fastcall BG_PlayerASM_UpdateAngles(double velocityAngle, characterInfo_t *ci)
{
  __int128 v3; 
  float yawAngle; 
  __int128 v6; 
  int v7; 
  int v8; 
  int v9; 
  __int128 v10; 

  v3 = *(_OWORD *)&velocityAngle;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1751, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  yawAngle = ci->legs.yawAngle;
  LODWORD(_XMM6) = 0;
  ci->playerASMLocomotion.lerpVelocityDir = *(float *)&v3;
  if ( yawAngle != 0.0 || *(float *)&v3 != 0.0 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&v3 + 1);
    v7 = BG_DegreesToMovementDir(yawAngle);
    v8 = BG_DegreesToMovementDir(*(float *)&v3);
    v9 = BG_MovementDirNormalize180(v8 - v7);
    *(double *)&v6 = BG_MovementDirToDegrees(v9);
    v10 = v6;
    *(float *)&v10 = *(float *)&v6 * 0.0027777778;
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    *(float *)&v10 = (float)(*(float *)&v10 - *(float *)&_XMM4) * 360.0;
    _XMM2 = v10;
    if ( *(float *)&v10 != 180.0 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm2, cs:__real@c3340000
        vblendvps xmm6, xmm2, xmm3, xmm0
      }
    }
  }
  ci->playerASMLocomotion.strafeAngle = *(float *)&_XMM6;
}

/*
==============
BG_PlayerASM_VerifyAnim
==============
*/
void BG_PlayerASM_VerifyAnim(unsigned int animsetIndex, unsigned int packedAnimIndex)
{
  const Animset *AnimsetByIndex; 

  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( packedAnimIndex )
  {
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
    if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 471, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
      __debugbreak();
    if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 472, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
      __debugbreak();
    if ( packedAnimIndex - 1 >= LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 474, ASSERT_TYPE_ASSERT, "(packedAnimIndex == (0) || packedAnimIndex - (1) < animset->u.m_PlayerAnimset->numUnpackMapEntries)", (const char *)&queryFormat, "packedAnimIndex == BG_PLAYERASM_PACKED_ANIM_INVALID || packedAnimIndex - BG_PLAYERASM_PACKED_ANIM_OFFSET < animset->u.m_PlayerAnimset->numUnpackMapEntries") )
      __debugbreak();
  }
}

/*
==============
BG_PlayerASM_flrand
==============
*/
float BG_PlayerASM_flrand(unsigned int entNum, const scr_string_t animsetName, const scr_string_t stateName, float min, float max)
{
  int v5; 
  unsigned int seed; 

  seed = stateName + entNum + 7 * animsetName;
  v5 = BgPlayer_Asm::irandWithSeed(&seed, 0, 0x7FFF);
  return (float)((float)((float)v5 * (float)(max - min)) * 0.000030517578) + min;
}

/*
==============
BG_PlayerASM_flrand
==============
*/
double BG_PlayerASM_flrand(unsigned int *holdrand, float min, float max)
{
  return BG_flrand(min, max, holdrand);
}

/*
==============
BG_PlayersASM_ResetAnimTree
==============
*/
char BG_PlayersASM_ResetAnimTree(const unsigned int animsetIndex, void *(*alloc)(unsigned __int64), const XAnimOwner owner, characterInfo_t *inOutCharacterInfo)
{
  unsigned __int8 v5; 
  XAnim_s *Anims; 
  XAnim_s *v9; 
  XAnimTree *pXAnimTree; 

  v5 = owner;
  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1617, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !inOutCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1618, ASSERT_TYPE_ASSERT, "(inOutCharacterInfo)", (const char *)&queryFormat, "inOutCharacterInfo") )
    __debugbreak();
  if ( inOutCharacterInfo->usingAnimState )
    return 0;
  if ( !inOutCharacterInfo->pXAnimTree )
    return 0;
  Anims = BG_PlayerASM_GetAnims(animsetIndex);
  v9 = Anims;
  if ( !Anims )
    return 0;
  pXAnimTree = inOutCharacterInfo->pXAnimTree;
  if ( pXAnimTree->anims == Anims )
    return 0;
  inOutCharacterInfo->animTreeDirty = 1;
  inOutCharacterInfo->dobjDirty = 1;
  XAnimFreeTree(pXAnimTree, NULL);
  inOutCharacterInfo->pXAnimTree = XAnimCreateTree(v9, alloc, (XAnimOwner)v5);
  return 1;
}

/*
==============
BG_PlayersASM_ResetCorpseAnimTree
==============
*/
void BG_PlayersASM_ResetCorpseAnimTree(void *(*alloc)(unsigned __int64), XAnimOwner owner, const characterInfo_t *ci, XAnimTree **inOutAnimTree)
{
  unsigned __int8 v6; 

  v6 = owner;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1662, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !inOutAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1663, ASSERT_TYPE_ASSERT, "(inOutAnimTree)", (const char *)&queryFormat, "inOutAnimTree") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1664, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !ci->usingAnimState )
  {
    if ( *inOutAnimTree )
    {
      if ( XAnimGetAnims(*inOutAnimTree) == ci->pXAnimTree->anims )
        return;
      if ( *inOutAnimTree )
        XAnimFreeTree(*inOutAnimTree, NULL);
    }
    *inOutAnimTree = XAnimCreateTree(ci->pXAnimTree->anims, alloc, (XAnimOwner)v6);
  }
}

/*
==============
BG_PlayersASM_ResetSmallAnimTree
==============
*/
char BG_PlayersASM_ResetSmallAnimTree(const unsigned int animsetIndex, const XAnimOwner owner, characterInfo_t *inOutCharacterInfo)
{
  unsigned __int8 v4; 
  XAnim_s *Anims; 
  XAnim_s *v7; 
  XAnimTree *pXAnimTree; 

  v4 = owner;
  if ( !inOutCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1640, ASSERT_TYPE_ASSERT, "(inOutCharacterInfo)", (const char *)&queryFormat, "inOutCharacterInfo") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_util.cpp", 1641, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( inOutCharacterInfo->usingAnimState )
    return 0;
  if ( !inOutCharacterInfo->pXAnimTree )
    return 0;
  Anims = BG_PlayerASM_GetAnims(animsetIndex);
  v7 = Anims;
  if ( !Anims )
    return 0;
  pXAnimTree = inOutCharacterInfo->pXAnimTree;
  if ( pXAnimTree->anims == Anims )
    return 0;
  inOutCharacterInfo->animTreeDirty = 1;
  Com_XAnimFreeSmallTree(pXAnimTree);
  inOutCharacterInfo->pXAnimTree = Com_XAnimCreateSmallTree(v7, (XAnimOwner)v4);
  return 1;
}

