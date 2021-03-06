/*
==============
BG_GetSurfacePenetrationDepth
==============
*/

double __fastcall BG_GetSurfacePenetrationDepth(const Weapon *r_weapon, bool isAlternate, int surfaceType)
{
  double result; 

  *(float *)&result = ?BG_GetSurfacePenetrationDepth@@YAMAEBUWeapon@@_NH@Z(r_weapon, isAlternate, surfaceType);
  return result;
}

/*
==============
BG_LoadWeaponCompleteDef
==============
*/

WeaponCompleteDef *__fastcall BG_LoadWeaponCompleteDef(const char *name)
{
  return ?BG_LoadWeaponCompleteDef@@YAPEAUWeaponCompleteDef@@PEBD@Z(name);
}

/*
==============
BG_GetViewmodelWeapon
==============
*/

const Weapon *__fastcall BG_GetViewmodelWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetViewmodelWeapon@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_FillInAllWeaponItems
==============
*/

void BG_FillInAllWeaponItems(void)
{
  ?BG_FillInAllWeaponItems@@YAXXZ();
}

/*
==============
BG_Weapons_RegisterWeaponForName
==============
*/

Weapon *__fastcall BG_Weapons_RegisterWeaponForName(Weapon *result, const char *name, void (__fastcall *regWeap)(unsigned int), const GameTypeQuick_t gameType, BgHandler *bgHandle)
{
  return ?BG_Weapons_RegisterWeaponForName@@YA?AUWeapon@@PEBDP6AXI@ZW4GameTypeQuick_t@@PEAVBgHandler@@@Z(result, name, regWeap, gameType, bgHandle);
}

/*
==============
BG_GetViewmodelOrOffhandADSSupportWeapon
==============
*/

const Weapon *__fastcall BG_GetViewmodelOrOffhandADSSupportWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, bool *outIsAlternate)
{
  return ?BG_GetViewmodelOrOffhandADSSupportWeapon@@YAAEBUWeapon@@QEBVBgWeaponMap@@QEBUplayerState_s@@PEA_N@Z(weaponMap, ps, outIsAlternate);
}

/*
==============
BG_GetWeaponBaseName
==============
*/

const char *__fastcall BG_GetWeaponBaseName(const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_GetWeaponBaseName@@YAPEBDAEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_GetWeaponName
==============
*/

char *__fastcall BG_GetWeaponName(const Weapon *r_weapon, char *output, unsigned int maxStringLen)
{
  return ?BG_GetWeaponName@@YAPEADAEBUWeapon@@PEADI@Z(r_weapon, output, maxStringLen);
}

/*
==============
BG_InitializeWeaponSetup
==============
*/

void BG_InitializeWeaponSetup(void)
{
  ?BG_InitializeWeaponSetup@@YAXXZ();
}

/*
==============
BG_WeaponOverrides_GetMaxAmmo
==============
*/

int __fastcall BG_WeaponOverrides_GetMaxAmmo(const Weapon *weapon)
{
  return ?BG_WeaponOverrides_GetMaxAmmo@@YAHAEBUWeapon@@@Z(weapon);
}

/*
==============
BG_LoadPenetrationDepthTable
==============
*/

void BG_LoadPenetrationDepthTable(void)
{
  ?BG_LoadPenetrationDepthTable@@YAXXZ();
}

/*
==============
BG_WeaponOverrides_GetSharedAmmo
==============
*/

bool __fastcall BG_WeaponOverrides_GetSharedAmmo(const Weapon *weapon)
{
  return ?BG_WeaponOverrides_GetSharedAmmo@@YA_NAEBUWeapon@@@Z(weapon);
}

/*
==============
BG_Weapons_GetFullWeaponForName
==============
*/

bool __fastcall BG_Weapons_GetFullWeaponForName(const char *name, Weapon *outWeapon, Weapon *(__fastcall *getWeaponFunc)(Weapon *result, const char *))
{
  return ?BG_Weapons_GetFullWeaponForName@@YA_NPEBDPEAUWeapon@@P6A?AU1@0@Z@Z(name, outWeapon, getWeaponFunc);
}

/*
==============
BG_GetNumWeapons
==============
*/

unsigned int __fastcall BG_GetNumWeapons()
{
  return ?BG_GetNumWeapons@@YAIXZ();
}

/*
==============
BG_WeaponsSetup_InitDefaultsAndAnimations
==============
*/

void __fastcall BG_WeaponsSetup_InitDefaultsAndAnimations(bool isGameServer)
{
  ?BG_WeaponsSetup_InitDefaultsAndAnimations@@YAX_N@Z(isGameServer);
}

/*
==============
BG_BrAmmoOverride
==============
*/

void __fastcall BG_BrAmmoOverride(const Weapon *weapon, const GameTypeQuick_t gameType, const BG_SpawnGroup_Loot_Table *lootTable)
{
  ?BG_BrAmmoOverride@@YAXAEBUWeapon@@W4GameTypeQuick_t@@PEBUBG_SpawnGroup_Loot_Table@@@Z(weapon, gameType, lootTable);
}

/*
==============
BG_AreWeaponNamesEquivalent
==============
*/

bool __fastcall BG_AreWeaponNamesEquivalent(const char *nameA, const char *nameB)
{
  return ?BG_AreWeaponNamesEquivalent@@YA_NPEBD0@Z(nameA, nameB);
}

/*
==============
BG_FindBaseWeaponForName
==============
*/

Weapon *__fastcall BG_FindBaseWeaponForName(Weapon *result, const char *name)
{
  return ?BG_FindBaseWeaponForName@@YA?AUWeapon@@PEBD@Z(result, name);
}

/*
==============
BG_GetWeaponNameComplete
==============
*/

char *__fastcall BG_GetWeaponNameComplete(const Weapon *r_weapon, bool isAlternate, char *output, unsigned int maxStringLen)
{
  return ?BG_GetWeaponNameComplete@@YAPEADAEBUWeapon@@_NPEADI@Z(r_weapon, isAlternate, output, maxStringLen);
}

/*
==============
BG_GetViewmodelOrOffhandADSWeapon
==============
*/

const Weapon *__fastcall BG_GetViewmodelOrOffhandADSWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, bool *outIsAlternate)
{
  return ?BG_GetViewmodelOrOffhandADSWeapon@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@PEA_N@Z(weaponMap, ps, outIsAlternate);
}

/*
==============
BG_GetPointerToWeaponCompleteDefConst
==============
*/

const WeaponCompleteDef *__fastcall BG_GetPointerToWeaponCompleteDefConst(unsigned int weaponIndex)
{
  return ?BG_GetPointerToWeaponCompleteDefConst@@YAPEBUWeaponCompleteDef@@I@Z(weaponIndex);
}

/*
==============
BG_ShutdownWeaponDefFiles
==============
*/

void BG_ShutdownWeaponDefFiles(void)
{
  ?BG_ShutdownWeaponDefFiles@@YAXXZ();
}

/*
==============
BG_GetDynamicAttachmentImageIndex
==============
*/

unsigned int __fastcall BG_GetDynamicAttachmentImageIndex(const WeaponAttachment *const attachment, const unsigned int variantID)
{
  return ?BG_GetDynamicAttachmentImageIndex@@YAIQEBUWeaponAttachment@@I@Z(attachment, variantID);
}

/*
==============
BG_BrAmmoOverrideAll
==============
*/

void __fastcall BG_BrAmmoOverrideAll(const GameTypeQuick_t gameType, const BG_SpawnGroup_Loot_Table *const lootTable)
{
  ?BG_BrAmmoOverrideAll@@YAXW4GameTypeQuick_t@@QEBUBG_SpawnGroup_Loot_Table@@@Z(gameType, lootTable);
}

/*
==============
BG_WeaponSetup_Initialized
==============
*/

bool __fastcall BG_WeaponSetup_Initialized()
{
  return ?BG_WeaponSetup_Initialized@@YA_NXZ();
}

/*
==============
BG_AreWeaponNamesEquivalent
==============
*/
bool BG_AreWeaponNamesEquivalent(const char *nameA, const char *nameB)
{
  char v2; 
  const char *v3; 
  signed __int64 v4; 
  char v5; 
  char v6; 

  v2 = *nameA;
  v3 = nameB;
  if ( !*nameA )
    return v2 == *v3;
  v4 = nameA - nameB;
  while ( 1 )
  {
    v5 = *v3;
    if ( v2 != *v3 && (v2 != 95 || v5 != 43) )
    {
      v6 = v3[v4];
      if ( v2 != 95 )
        v6 = v2;
      if ( v6 != 43 || v5 != 95 )
        break;
    }
    v2 = (v3++)[v4 + 1];
    if ( !v2 )
      return v2 == *v3;
  }
  return 0;
}

/*
==============
BG_BrAmmoOverride
==============
*/
void BG_BrAmmoOverride(const Weapon *weapon, const GameTypeQuick_t gameType, const BG_SpawnGroup_Loot_Table *lootTable)
{
  WeaponDefOverrides *WeaponDefOverrides; 
  const WeaponCompleteDef *v6; 
  WeaponDef *weapDef; 

  if ( (_BYTE)gameType == DODGE )
  {
    WeaponDefOverrides = BG_WeaponSetup_GetWeaponDefOverrides(weapon->weaponIdx);
    v6 = BG_WeaponCompleteDef(weapon, 0);
    if ( v6 )
    {
      WeaponDefOverrides->sharedAmmo = 0;
      if ( lootTable )
      {
        weapDef = v6->weapDef;
        switch ( weapDef->weapClass )
        {
          case WEAPCLASS_RIFLE:
          case WEAPCLASS_MG:
            WeaponDefOverrides->iMaxAmmo = lootTable->ammoMaximums[2];
            break;
          case WEAPCLASS_SNIPER:
            WeaponDefOverrides->iMaxAmmo = lootTable->ammoMaximums[1];
            break;
          case WEAPCLASS_SMG:
          case WEAPCLASS_PISTOL:
            WeaponDefOverrides->iMaxAmmo = lootTable->ammoMaximums[3];
            break;
          case WEAPCLASS_SPREAD:
            WeaponDefOverrides->iMaxAmmo = lootTable->ammoMaximums[0];
            break;
          case WEAPCLASS_GRENADE:
            if ( weapDef->ammoCounterClip == AMMO_COUNTER_CLIP_ROCKET )
              goto $LN13_40;
            break;
          case WEAPCLASS_ROCKETLAUNCHER:
$LN13_40:
            WeaponDefOverrides->iMaxAmmo = lootTable->ammoMaximums[4];
            break;
          default:
            return;
        }
      }
    }
    else
    {
      Com_Printf(1, "[BG_WEAPONS_SETUP] The weapon at index %i does not produce a valid WeaponCompleteDef.", weapon->weaponIdx);
    }
  }
}

/*
==============
BG_BrAmmoOverrideAll
==============
*/
void BG_BrAmmoOverrideAll(const GameTypeQuick_t gameType, const BG_SpawnGroup_Loot_Table *const lootTable)
{
  unsigned int v3; 
  unsigned __int16 v4; 
  WeaponDefOverrides *WeaponDefOverrides; 
  WeaponCompleteDef *v6; 
  WeaponDef *weapDef; 
  int v8; 
  __int64 v9; 
  __int64 v10; 

  if ( (_BYTE)gameType == DODGE )
  {
    v3 = bg_lastParsedWeaponIndex + 1;
    if ( bg_lastParsedWeaponIndex + 1 > 0x226 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 866, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( 550 )", "weaponCount not in [0, MAX_WEAPONS]\n\t%u not in [0, %u]", bg_lastParsedWeaponIndex + 1, 550) )
      __debugbreak();
    v4 = 1;
    if ( v3 > 1 )
    {
      do
      {
        WeaponDefOverrides = BG_WeaponSetup_GetWeaponDefOverrides(v4);
        if ( v4 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v10) = bg_lastParsedWeaponIndex;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v9, v10) )
            __debugbreak();
        }
        if ( !bg_weaponCompleteDefs[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        v6 = bg_weaponCompleteDefs[v4];
        if ( v6 )
        {
          WeaponDefOverrides->sharedAmmo = 0;
          if ( lootTable )
          {
            weapDef = v6->weapDef;
            switch ( weapDef->weapClass )
            {
              case WEAPCLASS_RIFLE:
              case WEAPCLASS_MG:
                v8 = lootTable->ammoMaximums[2];
                goto LABEL_22;
              case WEAPCLASS_SNIPER:
                v8 = lootTable->ammoMaximums[1];
                goto LABEL_22;
              case WEAPCLASS_SMG:
              case WEAPCLASS_PISTOL:
                v8 = lootTable->ammoMaximums[3];
                goto LABEL_22;
              case WEAPCLASS_SPREAD:
                v8 = lootTable->ammoMaximums[0];
                goto LABEL_22;
              case WEAPCLASS_GRENADE:
                if ( weapDef->ammoCounterClip == AMMO_COUNTER_CLIP_ROCKET )
                  goto LABEL_21;
                break;
              case WEAPCLASS_ROCKETLAUNCHER:
LABEL_21:
                v8 = lootTable->ammoMaximums[4];
LABEL_22:
                WeaponDefOverrides->iMaxAmmo = v8;
                break;
              default:
                break;
            }
          }
        }
        else
        {
          Com_Printf(1, "[BG_WEAPONS_SETUP] The weapon at index %i does not produce a valid WeaponCompleteDef.", v4);
        }
        ++v4;
      }
      while ( v4 < v3 );
    }
  }
}

/*
==============
BG_ClearAmmoPoolIndexes
==============
*/
void BG_ClearAmmoPoolIndexes()
{
  unsigned int i; 
  WeaponDef *PointerToWeaponDef; 
  WeaponCompleteDef *PointerToWeaponCompleteDef; 
  unsigned int v3; 
  WeaponAttachment ***p_attachments; 
  unsigned int j; 
  __int64 v6; 
  unsigned int k; 
  __int64 v8; 
  unsigned int m; 
  __int64 v10; 
  unsigned int n; 
  __int64 v12; 
  unsigned int ii; 
  __int64 v14; 
  unsigned int jj; 
  __int64 v16; 
  unsigned int kk; 
  __int64 v18; 
  unsigned int mm; 
  __int64 v20; 
  unsigned int nn; 
  __int64 v22; 
  unsigned int i1; 
  __int64 v24; 
  unsigned int i2; 
  __int64 v26; 
  unsigned int i3; 
  __int64 v28; 
  unsigned int i4; 
  __int64 v30; 
  unsigned int i5; 
  __int64 v32; 

  for ( i = 0; i < bg_lastParsedWeaponIndex; ++i )
  {
    PointerToWeaponDef = BG_GetPointerToWeaponDef(i);
    if ( !PointerToWeaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 510, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    PointerToWeaponDef->iAmmoIndex = 0;
    PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(i);
    if ( !PointerToWeaponCompleteDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 514, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
      __debugbreak();
    v3 = 0;
    p_attachments = &PointerToWeaponCompleteDef->attachments[2].attachments;
    do
    {
      for ( j = 0; j < *((_DWORD *)p_attachments - 10); (*(p_attachments - 4))[v6]->iAmmoIndex = 0 )
        v6 = j++;
      for ( k = 0; k < *((_DWORD *)p_attachments - 6); (*(p_attachments - 2))[v8]->iAmmoIndex = 0 )
        v8 = k++;
      for ( m = 0; m < *((_DWORD *)p_attachments - 2); (*p_attachments)[v10]->iAmmoIndex = 0 )
        v10 = m++;
      for ( n = 0; n < *((_DWORD *)p_attachments + 2); p_attachments[2][v12]->iAmmoIndex = 0 )
        v12 = n++;
      for ( ii = 0; ii < *((_DWORD *)p_attachments + 6); p_attachments[4][v14]->iAmmoIndex = 0 )
        v14 = ii++;
      for ( jj = 0; jj < *((_DWORD *)p_attachments + 10); p_attachments[6][v16]->iAmmoIndex = 0 )
        v16 = jj++;
      for ( kk = 0; kk < *((_DWORD *)p_attachments + 14); p_attachments[8][v18]->iAmmoIndex = 0 )
        v18 = kk++;
      for ( mm = 0; mm < *((_DWORD *)p_attachments + 18); p_attachments[10][v20]->iAmmoIndex = 0 )
        v20 = mm++;
      for ( nn = 0; nn < *((_DWORD *)p_attachments + 22); p_attachments[12][v22]->iAmmoIndex = 0 )
        v22 = nn++;
      for ( i1 = 0; i1 < *((_DWORD *)p_attachments + 26); p_attachments[14][v24]->iAmmoIndex = 0 )
        v24 = i1++;
      for ( i2 = 0; i2 < *((_DWORD *)p_attachments + 30); p_attachments[16][v26]->iAmmoIndex = 0 )
        v26 = i2++;
      for ( i3 = 0; i3 < *((_DWORD *)p_attachments + 34); p_attachments[18][v28]->iAmmoIndex = 0 )
        v28 = i3++;
      for ( i4 = 0; i4 < *((_DWORD *)p_attachments + 38); p_attachments[20][v30]->iAmmoIndex = 0 )
        v30 = i4++;
      for ( i5 = 0; i5 < *((_DWORD *)p_attachments + 42); p_attachments[22][v32]->iAmmoIndex = 0 )
        v32 = i5++;
      v3 += 14;
      p_attachments += 28;
    }
    while ( v3 < 0xE );
  }
}

/*
==============
BG_CompareAttachmentNames
==============
*/
bool BG_CompareAttachmentNames(AttachmentNameIdPair *nameIdPair1, AttachmentNameIdPair *nameIdPair2)
{
  return I_strncmp(nameIdPair1->attachmentName, nameIdPair2->attachmentName, 0x7FFFFFFFui64) < 0;
}

/*
==============
BG_FillInAllWeaponItems
==============
*/
void BG_FillInAllWeaponItems(void)
{
  WeaponDef *weapDef; 
  unsigned int v1; 
  unsigned __int16 v2; 
  WeaponCompleteDef *v3; 
  __int64 v4; 
  Weapon r_weapon; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 829, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  BG_RefreshTransientWeaponFlagsForMyChanges();
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  weapDef = (WeaponDef *)bg_weaponCompleteDefs[0];
  memset(&r_weapon, 0, 48);
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  if ( bg_weaponCompleteDefs[0] )
    weapDef = bg_weaponCompleteDefs[0]->weapDef;
  v1 = bg_lastParsedWeaponIndex + 1;
  bg_weaponDefs[0] = weapDef;
  if ( bg_lastParsedWeaponIndex + 1 > 0x226 )
  {
    LODWORD(v4) = bg_lastParsedWeaponIndex + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 837, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( 550 )", "weaponCount not in [0, MAX_WEAPONS]\n\t%u not in [0, %u]", v4, 550) )
      __debugbreak();
  }
  v2 = 1;
  r_weapon.weaponIdx = 1;
  if ( v1 > 1 )
  {
    do
    {
      v3 = bg_weaponCompleteDefs[v2];
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 843, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
        __debugbreak();
      if ( !v3->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 846, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      BG_SetupWeaponIndex(&r_weapon);
      BG_SetupWeaponLoot(&r_weapon);
      v2 = ++r_weapon.weaponIdx;
    }
    while ( r_weapon.weaponIdx < v1 );
  }
}

/*
==============
BG_FindAmmoNameMatch
==============
*/
bool BG_FindAmmoNameMatch(const char *assetTypeName, const char *assetName, const char *ammoName, const int weaponCount, int *outAmmoIndex)
{
  unsigned int v5; 
  WeaponCompleteDef *PointerToWeaponCompleteDef; 
  WeaponDefOverrides *WeaponDefOverrides; 
  __int64 v9; 
  const char *szAmmoName; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  const dvar_t *v17; 
  bool result; 
  unsigned int v19; 
  AttachmentList *attachments; 
  __int64 v21; 
  WeaponAttachment *v22; 
  const char **p_szAmmoName; 
  const char *v24; 
  __int64 v25; 
  const char *v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  const dvar_t *v32; 

  v5 = 1;
  *outAmmoIndex = 0;
  if ( weaponCount <= 1 )
    return 0;
  while ( 2 )
  {
    PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(v5);
    if ( !PointerToWeaponCompleteDef->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 401, ASSERT_TYPE_ASSERT, "(weapCompleteDef->weapDef)", (const char *)&queryFormat, "weapCompleteDef->weapDef") )
      __debugbreak();
    WeaponDefOverrides = BG_WeaponSetup_GetWeaponDefOverrides(v5);
    if ( !WeaponDefOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 403, ASSERT_TYPE_ASSERT, "(weapDefOverrides)", (const char *)&queryFormat, "weapDefOverrides") )
      __debugbreak();
    if ( !WeaponDefOverrides->sharedAmmo )
    {
LABEL_31:
      v19 = 0;
      attachments = PointerToWeaponCompleteDef->attachments;
      do
      {
        v21 = 0i64;
        if ( attachments->attachmentCount )
        {
          while ( 1 )
          {
            v22 = attachments->attachments[v21];
            p_szAmmoName = &v22->ammotype->szAmmoName;
            if ( p_szAmmoName )
            {
              v24 = *p_szAmmoName;
              if ( v24 )
                break;
            }
LABEL_54:
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= attachments->attachmentCount )
              goto LABEL_55;
          }
          v25 = 0x7FFFFFFFi64;
          if ( !ammoName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v26 = (const char *)(ammoName - v24);
          do
          {
            v27 = (unsigned __int8)v24[(_QWORD)v26];
            v28 = v25;
            v29 = *(unsigned __int8 *)v24++;
            --v25;
            if ( !v28 )
              break;
            if ( v27 != v29 )
            {
              v30 = v27 + 32;
              if ( (unsigned int)(v27 - 65) > 0x19 )
                v30 = v27;
              v27 = v30;
              v31 = v29 + 32;
              if ( (unsigned int)(v29 - 65) > 0x19 )
                v31 = v29;
              if ( v27 != v31 )
                goto LABEL_54;
            }
          }
          while ( v27 );
          v32 = DVARBOOL_weap_printSharedAmmo;
          if ( DVARBOOL_weap_printSharedAmmo )
          {
            Dvar_CheckFrontendServerThread(DVARBOOL_weap_printSharedAmmo);
            if ( v32->current.enabled )
              Com_Printf(16, "%s %s shares ammo with attachment %s - both are using ammo type '%s'\n", assetTypeName, assetName, v22->szInternalName, v22->ammotype->szAmmoName);
          }
          if ( !v22->iAmmoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 440, ASSERT_TYPE_ASSERT, "( attachment->iAmmoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "attachment->iAmmoIndex", "0", 0, 0i64) )
            __debugbreak();
          *outAmmoIndex = v22->iAmmoIndex;
          return 1;
        }
LABEL_55:
        ++v19;
        ++attachments;
      }
      while ( v19 < 0xE );
      if ( (int)++v5 < weaponCount )
        continue;
      return 0;
    }
    break;
  }
  v9 = 0x7FFFFFFFi64;
  szAmmoName = PointerToWeaponCompleteDef->weapDef->szAmmoName;
  if ( !ammoName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !szAmmoName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v11 = (const char *)(ammoName - szAmmoName);
  do
  {
    v12 = (unsigned __int8)szAmmoName[(_QWORD)v11];
    v13 = v9;
    v14 = *(unsigned __int8 *)szAmmoName++;
    --v9;
    if ( !v13 )
      break;
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( (unsigned int)(v12 - 65) > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        goto LABEL_31;
    }
  }
  while ( v12 );
  v17 = DVARBOOL_weap_printSharedAmmo;
  if ( DVARBOOL_weap_printSharedAmmo )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_weap_printSharedAmmo);
    if ( v17->current.enabled )
      Com_Printf(16, "%s %s shares ammo with weapon %s - both are using ammo type '%s'\n", assetTypeName, assetName, PointerToWeaponCompleteDef->szInternalName, PointerToWeaponCompleteDef->weapDef->szAmmoName);
  }
  if ( !PointerToWeaponCompleteDef->weapDef->iAmmoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 416, ASSERT_TYPE_ASSERT, "( weapCompleteDef->weapDef->iAmmoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "weapCompleteDef->weapDef->iAmmoIndex", "0", 0, 0i64) )
    __debugbreak();
  result = 1;
  *outAmmoIndex = PointerToWeaponCompleteDef->weapDef->iAmmoIndex;
  return result;
}

/*
==============
BG_FindBaseWeaponForName
==============
*/
Weapon *BG_FindBaseWeaponForName(Weapon *result, const char *name)
{
  int v2; 
  __m256i v5; 
  __int128 v6; 
  double v7; 
  const char *WeaponNameComplete; 
  __int64 v9; 
  char *v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int weaponIdx; 
  __int128 v18; 
  double v19; 
  Weapon r_weapon; 
  char output[1024]; 

  v2 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v5 = *(__m256i *)&NULL_WEAPON.weaponIdx;
  v6 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  v7 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  memset(&r_weapon, 0, 48);
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  if ( !name )
    goto LABEL_6;
  if ( bg_lastFoundWeaponIndex )
  {
    if ( bg_lastFoundWeaponIndex < bg_lastParsedWeaponIndex + 1 )
    {
      r_weapon.weaponIdx = truncate_cast<unsigned short,unsigned int>(bg_lastFoundWeaponIndex);
      WeaponNameComplete = BG_GetWeaponNameComplete(&r_weapon, 0, output, 0x400u);
      if ( !I_stricmp(name, WeaponNameComplete) )
      {
        v2 = *(_DWORD *)&r_weapon.weaponCamo;
        v7 = *(double *)&r_weapon.attachmentVariationIndices[21];
        v6 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
        v5 = *(__m256i *)&r_weapon.weaponIdx;
LABEL_6:
        *(__m256i *)&result->weaponIdx = v5;
        *(_OWORD *)&result->attachmentVariationIndices[5] = v6;
        *(double *)&result->attachmentVariationIndices[21] = v7;
        goto LABEL_21;
      }
    }
  }
  r_weapon.weaponIdx = 1;
  if ( bg_lastParsedWeaponIndex + 1 > 1 )
  {
    do
    {
      v9 = 0x7FFFFFFFi64;
      v10 = BG_GetWeaponNameComplete(&r_weapon, 0, output, 0x400u);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v11 = (const char *)(name - v10);
      while ( 1 )
      {
        v12 = (unsigned __int8)v10[(_QWORD)v11];
        v13 = v9;
        v14 = (unsigned __int8)*v10++;
        --v9;
        if ( !v13 )
        {
LABEL_20:
          weaponIdx = r_weapon.weaponIdx;
          v18 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
          *(__m256i *)&result->weaponIdx = *(__m256i *)&r_weapon.weaponIdx;
          v19 = *(double *)&r_weapon.attachmentVariationIndices[21];
          bg_lastFoundWeaponIndex = weaponIdx;
          v2 = *(_DWORD *)&r_weapon.weaponCamo;
          *(_OWORD *)&result->attachmentVariationIndices[5] = v18;
          *(double *)&result->attachmentVariationIndices[21] = v19;
          goto LABEL_21;
        }
        if ( v12 != v14 )
        {
          v15 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v16 = v14;
          if ( v12 != v16 )
            break;
        }
        if ( !v12 )
          goto LABEL_20;
      }
      ++r_weapon.weaponIdx;
    }
    while ( r_weapon.weaponIdx < bg_lastParsedWeaponIndex + 1 );
  }
  v2 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  *(__m256i *)&result->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
  *(_OWORD *)&result->attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  *(double *)&result->attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
LABEL_21:
  *(_DWORD *)&result->weaponCamo = v2;
  return result;
}

/*
==============
BG_GetDynamicAttachmentImageIndex
==============
*/
__int64 BG_GetDynamicAttachmentImageIndex(const WeaponAttachment *const attachment, const unsigned int variantID)
{
  __int64 v2; 
  const char *dynamicAttachmentIcon; 
  unsigned __int16 WeaponAttachmentIndex; 
  __int64 v7; 
  __int64 v8; 

  v2 = variantID;
  if ( !attachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 209, ASSERT_TYPE_ASSERT, "( ( attachment != nullptr ) )", "( attachment ) = %p", NULL) )
    __debugbreak();
  dynamicAttachmentIcon = attachment->dynamicAttachmentIcon;
  if ( (!dynamicAttachmentIcon || !*dynamicAttachmentIcon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 210, ASSERT_TYPE_ASSERT, "(attachment->dynamicAttachmentIcon && !I_strempty( attachment->dynamicAttachmentIcon ))", (const char *)&queryFormat, "attachment->dynamicAttachmentIcon && !I_strempty( attachment->dynamicAttachmentIcon )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB|0x100) )
  {
    WeaponAttachmentIndex = DB_GetWeaponAttachmentIndex(attachment);
    if ( WeaponAttachmentIndex >= 0xC28u )
    {
      LODWORD(v7) = WeaponAttachmentIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentIndex ) < (unsigned)( ( sizeof( *array_counter( s_bgWeaponSetup_dynmaicAttachmentIconMap ) ) + 0 ) )", "attachmentIndex doesn't index s_bgWeaponSetup_dynmaicAttachmentIconMap\n\t%i not in [0, %i)", v7, 3112) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= 0x1E )
    {
      LODWORD(v8) = 30;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 220, ASSERT_TYPE_ASSERT, "(unsigned)( variantID ) < (unsigned)( ( sizeof( *array_counter( s_bgWeaponSetup_dynmaicAttachmentIconMap[attachmentIndex] ) ) + 0 ) )", "variantID doesn't index s_bgWeaponSetup_dynmaicAttachmentIconMap[attachmentIndex]\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    return s_bgWeaponSetup_dynmaicAttachmentIconMap[WeaponAttachmentIndex][v2];
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 214, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Game mode does not support dynamic weapon icons.") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
BG_GetNumWeapons
==============
*/
__int64 BG_GetNumWeapons()
{
  return bg_lastParsedWeaponIndex + 1;
}

/*
==============
BG_GetPointerToWeaponCompleteDef
==============
*/
WeaponCompleteDef *BG_GetPointerToWeaponCompleteDef(unsigned int weaponIndex)
{
  __int64 v1; 
  bool v2; 
  WeaponCompleteDef **v3; 
  unsigned int v6; 

  v1 = weaponIndex;
  if ( weaponIndex > bg_lastParsedWeaponIndex )
  {
    v6 = bg_lastParsedWeaponIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 119, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weaponIndex, v6) )
      __debugbreak();
  }
  v2 = bg_weaponCompleteDefs[v1] == NULL;
  v3 = &bg_weaponCompleteDefs[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 120, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  return *v3;
}

/*
==============
BG_GetPointerToWeaponCompleteDefConst
==============
*/

WeaponCompleteDef *__fastcall BG_GetPointerToWeaponCompleteDefConst(unsigned int weaponIndex)
{
  return BG_GetPointerToWeaponCompleteDef(weaponIndex);
}

/*
==============
BG_GetPointerToWeaponDef
==============
*/
WeaponDef *BG_GetPointerToWeaponDef(unsigned int weaponIndex)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int v5; 

  v1 = weaponIndex;
  if ( weaponIndex > bg_lastParsedWeaponIndex )
  {
    v5 = bg_lastParsedWeaponIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 108, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weaponIndex, v5) )
      __debugbreak();
  }
  v2 = v1;
  if ( !bg_weaponDefs[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 109, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponDefs[weaponIndex]") )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 110, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  if ( bg_weaponDefs[v2] != bg_weaponCompleteDefs[v2]->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 111, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIndex] == bg_weaponCompleteDefs[weaponIndex]->weapDef)", (const char *)&queryFormat, "bg_weaponDefs[weaponIndex] == bg_weaponCompleteDefs[weaponIndex]->weapDef") )
    __debugbreak();
  return bg_weaponDefs[v2];
}

/*
==============
BG_GetSurfacePenetrationDepth
==============
*/
float BG_GetSurfacePenetrationDepth(const Weapon *r_weapon, bool isAlternate, int surfaceType)
{
  __int64 v3; 
  PenetrateType PenetrateType; 
  __int64 v7; 
  double PenetrateMultiplier; 

  v3 = surfaceType;
  if ( (unsigned int)surfaceType >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", surfaceType, 64) )
    __debugbreak();
  if ( !(_DWORD)v3 )
    return 0.0;
  if ( !r_weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 172, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( r_weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( r_weapon )") )
    __debugbreak();
  PenetrateType = BG_GetPenetrateType(r_weapon, isAlternate);
  v7 = PenetrateType;
  if ( (unsigned int)(PenetrateType - 1) > 3 )
    return 0.0;
  PenetrateMultiplier = BG_GetPenetrateMultiplier(r_weapon, isAlternate);
  if ( (_DWORD)v7 == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 181, ASSERT_TYPE_ASSERT, "((penetrateType != PENETRATE_TYPE_NONE) && (penetrateType != PENETRATE_TYPE_MAXIMUM))", (const char *)&queryFormat, "(penetrateType != PENETRATE_TYPE_NONE) && (penetrateType != PENETRATE_TYPE_MAXIMUM)") )
    __debugbreak();
  if ( !s_bulletPenetration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 182, ASSERT_TYPE_ASSERT, "(s_bulletPenetration)", (const char *)&queryFormat, "s_bulletPenetration") )
    __debugbreak();
  return *(float *)&PenetrateMultiplier * s_bulletPenetration->depthTable[v7][v3];
}

/*
==============
BG_GetViewmodelOrOffhandADSSupportWeapon
==============
*/
const Weapon *BG_GetViewmodelOrOffhandADSSupportWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, bool *outIsAlternate)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1249, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !outIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1250, ASSERT_TYPE_ASSERT, "(outIsAlternate)", (const char *)&queryFormat, "outIsAlternate") )
    __debugbreak();
  if ( BG_IsUsingOffhandGestureWeaponADSSupport(weaponMap, ps) )
  {
    *outIsAlternate = 0;
    return BG_GetOffhandGestureWeapon(weaponMap, ps);
  }
  else
  {
    *outIsAlternate = BG_UsingAlternate(ps);
    return BG_GetViewmodelWeapon(weaponMap, ps);
  }
}

/*
==============
BG_GetViewmodelOrOffhandADSWeapon
==============
*/
const Weapon *BG_GetViewmodelOrOffhandADSWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, bool *outIsAlternate)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1230, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !outIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1231, ASSERT_TYPE_ASSERT, "(outIsAlternate)", (const char *)&queryFormat, "outIsAlternate") )
    __debugbreak();
  if ( BG_IsUsingOffhandGestureWeaponADSActive(ps) )
  {
    *outIsAlternate = 0;
    return BG_GetOffhandGestureWeapon(weaponMap, ps);
  }
  else
  {
    *outIsAlternate = BG_UsingAlternate(ps);
    return BG_GetViewmodelWeapon(weaponMap, ps);
  }
}

/*
==============
BG_GetViewmodelWeapon
==============
*/
const Weapon *BG_GetViewmodelWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  unsigned int m_mapEntryId; 

  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
  }
  else
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    m_mapEntryId = ps->weapCommon.weaponHandle.m_mapEntryId;
  }
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, (BgWeaponHandle)m_mapEntryId);
}

/*
==============
BG_GetWeaponBaseName
==============
*/
const char *BG_GetWeaponBaseName(const Weapon *r_weapon, bool isAlternate)
{
  return BG_WeaponCompleteDef(r_weapon, isAlternate)->szInternalName;
}

/*
==============
BG_GetWeaponName
==============
*/
char *BG_GetWeaponName(const Weapon *r_weapon, char *output, unsigned int maxStringLen)
{
  return BG_GetWeaponNameComplete(r_weapon, 0, output, maxStringLen);
}

/*
==============
BG_GetWeaponNameComplete
==============
*/
char *BG_GetWeaponNameComplete(const Weapon *r_weapon, bool isAlternate, char *output, unsigned int maxStringLen)
{
  const WeaponCompleteDef *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  const char *szInternalName; 
  char *v13; 
  Weapon *v14; 
  AttachmentSlot v15; 
  AttachmentList *attachments; 
  unsigned __int16 PrimaryAttachmentIndex; 
  int v18; 
  const char **p_szInternalName; 
  __int64 v20; 
  bool v21; 
  Weapon *v22; 
  char *v23; 
  __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int16 v29; 
  const char **v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int8 *p_attachmentVariationIndex; 
  char *v34; 
  __int64 v35; 
  char *v36; 
  unsigned __int8 v37; 
  __int64 v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  const Camo *Camo; 
  const char *name; 
  char *v44; 
  unsigned __int8 scopeVariation; 
  const char *v46; 
  __int64 v47; 
  int v48; 
  unsigned __int8 weaponLootId; 
  int v50; 
  const char *v51; 
  __int64 v52; 
  int v53; 
  char *v54; 
  __int64 v55; 
  int v56; 
  unsigned __int16 *stickerIndices; 
  int v58; 
  char *result; 
  char *fmt; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  int v64; 
  unsigned int v65; 
  AttachmentSlot slot; 
  Weapon *weapon; 
  const WeaponCompleteDef *v69; 
  char *v70; 
  AttachmentNameIdPair _Last[29]; 

  weapon = (Weapon *)r_weapon;
  v70 = output;
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 902, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  v8 = BG_WeaponCompleteDef(r_weapon, isAlternate);
  v9 = 0i64;
  v69 = v8;
  v10 = 0;
  v64 = 0;
  v11 = 0;
  if ( isAlternate )
  {
    v10 = 4;
    *(_DWORD *)output = 1601465441;
    v64 = 4;
  }
  szInternalName = v8->szInternalName;
  v65 = maxStringLen - 1;
  if ( v10 < maxStringLen - 1 )
  {
    v13 = &output[v10];
    do
    {
      if ( !*szInternalName )
        break;
      *v13++ = *szInternalName++;
      ++v10;
    }
    while ( v10 < maxStringLen - 1 );
    v64 = v10;
  }
  v14 = weapon;
  v15 = ATT_SLOT_RECEIVER;
  attachments = v8->attachments;
  do
  {
    slot = v15;
    PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(v14, &slot);
    v18 = PrimaryAttachmentIndex;
    if ( PrimaryAttachmentIndex )
    {
      if ( PrimaryAttachmentIndex > attachments->attachmentCount )
      {
        LODWORD(v63) = attachments->attachmentCount;
        LODWORD(v62) = 1;
        LODWORD(v61) = PrimaryAttachmentIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 927, ASSERT_TYPE_ASSERT, "( 1 ) <= ( attachmentIndex ) && ( attachmentIndex ) <= ( attList->attachmentCount )", "attachmentIndex not in [1, attList->attachmentCount]\n\t%i not in [%i, %i]", v61, v62, v63) )
          __debugbreak();
      }
      p_szInternalName = &attachments->attachments[v18 - 1]->szInternalName;
      if ( !p_szInternalName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 929, ASSERT_TYPE_ASSERT, "(weapAttachment)", (const char *)&queryFormat, "weapAttachment") )
        __debugbreak();
      v20 = v11++;
      _Last[v20].attachmentName = *p_szInternalName;
      _Last[v20].attachmentVariationIndex = v14->attachmentVariationIndices[v9];
    }
    ++v15;
    ++v9;
    ++attachments;
  }
  while ( (unsigned int)v15 < ATT_SLOT_OTHER );
  v21 = v14->weaponOthers == 0;
  v22 = v14;
  v23 = v70;
  LODWORD(v24) = v64;
  v25 = v65;
  if ( !v21 )
  {
    v26 = (__int64)v69;
    v27 = 0;
    v28 = 0;
    if ( !v69->attachments[13].attachmentCount )
      goto LABEL_38;
    v29 = 1;
    do
    {
      if ( (v22->weaponOthers & (unsigned __int16)v29) != 0 )
      {
        if ( v11 >= 0x1D )
        {
          LODWORD(v62) = 29;
          LODWORD(v61) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 948, ASSERT_TYPE_ASSERT, "(unsigned)( numAttachments ) < (unsigned)( (1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 1 + 1 + 1) )", "numAttachments doesn't index MAX_NUM_WEAPON_ATTACHMENTS\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        v30 = *(const char ***)(*(_QWORD *)(v26 + 256) + 8i64 * v28);
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 950, ASSERT_TYPE_ASSERT, "(weapAttachment)", (const char *)&queryFormat, "weapAttachment") )
          __debugbreak();
        v31 = v11;
        _Last[v11].attachmentName = *v30;
        if ( v28 >= 0x10 )
        {
          LODWORD(v62) = 16;
          LODWORD(v61) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        ++v11;
        _Last[v31].attachmentVariationIndex = v22->attachmentVariationIndices[truncate_cast<unsigned char,unsigned int>(v28 + 13)];
        v26 = (__int64)v69;
      }
      ++v28;
      v29 *= 2;
    }
    while ( v28 < *(_DWORD *)(v26 + 248) );
    LODWORD(v24) = v64;
    v25 = v65;
    v23 = v70;
  }
  v27 = 0;
LABEL_38:
  if ( v11 )
  {
    v32 = v11;
    std::_Sort_unchecked<AttachmentNameIdPair *,bool (*)(AttachmentNameIdPair &,AttachmentNameIdPair &)>(_Last, &_Last[v11], v11, BG_CompareAttachmentNames);
    p_attachmentVariationIndex = &_Last[0].attachmentVariationIndex;
    do
    {
      v34 = (char *)*((_QWORD *)p_attachmentVariationIndex - 1);
      if ( (unsigned int)v24 < v25 )
      {
        v35 = (unsigned int)v24;
        LODWORD(v24) = v24 + 1;
        v23[v35] = 43;
        if ( (unsigned int)v24 < v25 )
        {
          v36 = &v23[(unsigned int)v24];
          do
          {
            if ( !*v34 )
              break;
            *v36++ = *v34++;
            LODWORD(v24) = v24 + 1;
          }
          while ( (unsigned int)v24 < v25 );
        }
      }
      v37 = *p_attachmentVariationIndex;
      if ( *p_attachmentVariationIndex )
      {
        v23[(unsigned int)v24] = 124;
        v38 = (unsigned int)(v24 + 1);
        v24 = (unsigned int)(v24 + 2);
        if ( v37 < 0xAu )
        {
          v23[v38] = v37 + 48;
        }
        else
        {
          v23[v38] = 49;
          v23[v24] = v37 % 0xAu + 48;
          LODWORD(v24) = v24 + 1;
        }
      }
      p_attachmentVariationIndex += 16;
      --v32;
    }
    while ( v32 );
  }
  if ( v22->weaponCamo )
  {
    if ( v22->weaponCamo >= BG_Camo_GetCamoCount() )
    {
      LODWORD(v62) = BG_Camo_GetCamoCount();
      LODWORD(v61) = v22->weaponCamo;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1000, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponCamo ) < (unsigned)( BG_Camo_GetCamoCount() )", "r_weapon.weaponCamo doesn't index BG_Camo_GetCamoCount()\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    v39 = maxStringLen;
    v40 = maxStringLen - 1;
    if ( (unsigned int)v24 < maxStringLen - 1 )
    {
      v41 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 1);
      v23[v41] = 43;
      if ( (unsigned int)v24 < v40 )
      {
        v23[v24] = 99;
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 < v40 )
        {
          v23[v24] = 97;
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 < v40 )
          {
            v23[v24] = 109;
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 < v40 )
            {
              v23[v24] = 111;
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 < v40 )
              {
                v23[v24] = 124;
                LODWORD(v24) = v24 + 1;
              }
            }
          }
        }
      }
    }
    Camo = BG_Camo_GetCamo(v22->weaponCamo);
    if ( !Camo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1009, ASSERT_TYPE_ASSERT, "(camo)", (const char *)&queryFormat, "camo") )
      __debugbreak();
    name = Camo->name;
    if ( (unsigned int)v24 < v25 )
    {
      v44 = &v23[(unsigned int)v24];
      do
      {
        if ( !*name )
          break;
        *v44++ = *name++;
        LODWORD(v24) = v24 + 1;
      }
      while ( (unsigned int)v24 < v25 );
    }
  }
  else
  {
    v39 = maxStringLen;
  }
  scopeVariation = v22->scopeVariation;
  if ( scopeVariation )
  {
    if ( scopeVariation == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1024, ASSERT_TYPE_ASSERT, "(r_weapon.scopeVariation < 0xff)", (const char *)&queryFormat, "r_weapon.scopeVariation < MAX_SCOPE_VARIATIONS") )
      __debugbreak();
    if ( (unsigned int)v24 < v25 )
    {
      v46 = scopeString;
      v47 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 1);
      v23[v47] = *scopeString;
      if ( (unsigned int)v24 < v25 )
      {
        v23[v24] = v46[1];
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 < v25 )
        {
          v23[v24] = v46[2];
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 < v25 )
          {
            v23[v24] = v46[3];
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 < v25 )
            {
              v23[v24] = v46[4];
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 < v25 )
              {
                v23[v24] = v46[5];
                LODWORD(v24) = v24 + 1;
                if ( (unsigned int)v24 < v25 )
                {
                  v48 = Com_sprintf_truncate(&v23[(unsigned int)v24], v25 - (unsigned int)v24, "%d", v22->scopeVariation);
                  if ( v48 >= 0 )
                    LODWORD(v24) = v48 + v24;
                  else
                    LODWORD(v24) = v25;
                }
              }
            }
          }
        }
      }
    }
  }
  weaponLootId = v22->weaponLootId;
  if ( weaponLootId )
  {
    v50 = weaponLootId;
    if ( weaponLootId == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1048, ASSERT_TYPE_ASSERT, "(r_weapon.weaponLootId < 0xff)", (const char *)&queryFormat, "r_weapon.weaponLootId < MAX_WEAPON_LOOT_IDS") )
      __debugbreak();
    if ( (unsigned int)v24 < v25 )
    {
      v51 = lootString;
      v52 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 1);
      v23[v52] = *lootString;
      if ( (unsigned int)v24 < v25 )
      {
        v23[v24] = v51[1];
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 < v25 )
        {
          v23[v24] = v51[2];
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 < v25 )
          {
            v23[v24] = v51[3];
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 < v25 )
            {
              v23[v24] = v51[4];
              LODWORD(v24) = v24 + 1;
              if ( (unsigned int)v24 < v25 )
              {
                v53 = Com_sprintf_truncate(&v23[(unsigned int)v24], v25 - (unsigned int)v24, "%d", (unsigned int)(v50 - 1));
                if ( v53 >= 0 )
                  LODWORD(v24) = v53 + v24;
                else
                  LODWORD(v24) = v25;
              }
            }
          }
        }
      }
    }
  }
  if ( v22->weaponClientLoadout )
  {
    if ( (unsigned int)v24 < v25 )
    {
      v54 = off_147EBF770;
      v55 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 1);
      v23[v55] = *off_147EBF770;
      if ( (unsigned int)v24 < v25 )
      {
        v23[v24] = v54[1];
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 < v25 )
        {
          v23[v24] = v54[2];
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 < v25 )
          {
            v23[v24] = v54[3];
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 < v25 )
            {
              v23[v24] = v54[4];
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 < v25 )
              {
                v23[v24] = v54[5];
                LODWORD(v24) = v24 + 1;
                if ( (unsigned int)v24 < v25 )
                {
                  v56 = Com_sprintf_truncate(&v23[(unsigned int)v24], v25 - (unsigned int)v24, "%d", v22->weaponClientLoadout);
                  if ( v56 >= 0 )
                    LODWORD(v24) = v56 + v24;
                  else
                    LODWORD(v24) = v25;
                }
              }
            }
          }
        }
      }
    }
  }
  stickerIndices = v22->stickerIndices;
  do
  {
    if ( *stickerIndices && (unsigned int)v24 < v25 )
    {
      LODWORD(fmt) = *stickerIndices;
      v58 = Com_sprintf_truncate(&v23[(unsigned int)v24], v39 - (unsigned int)v24 - 1, "+sticker%u|%u", v27, fmt);
      if ( v58 >= 0 )
        LODWORD(v24) = v58 + v24;
      else
        LODWORD(v24) = v25;
    }
    ++v27;
    ++stickerIndices;
  }
  while ( v27 < 4 );
  result = v23;
  v23[(unsigned int)v24] = 0;
  return result;
}

/*
==============
BG_InitializeWeaponSetup
==============
*/
void BG_InitializeWeaponSetup(void)
{
  unsigned int RowCount; 
  int fmt; 
  int v2; 
  StringTable *tablePtr; 

  s_ammoNameIndex = 1;
  if ( !Com_GeneratingConstBaselines() )
  {
    StringTable_GetAsset(off_147EBF740, (const StringTable **)&tablePtr);
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( RowCount )
    {
      if ( RowCount > 0xC28 )
      {
        fmt = 3112;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F53FF0, 6193i64, RowCount, fmt);
      }
    }
    else
    {
      v2 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 196, ASSERT_TYPE_ASSERT, "( rowCount ) != ( 0 )", "%s != %s\n\t%i, %i", "rowCount", "0", v2, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
BG_IsWeaponXModelTransient
==============
*/
bool BG_IsWeaponXModelTransient(const XModel *const model)
{
  return model && DB_IsXAssetTransient(ASSET_TYPE_XMODEL, model->name);
}

/*
==============
BG_LoadPenetrationDepthTable
==============
*/
void BG_LoadPenetrationDepthTable(void)
{
  char ActiveGameMode; 
  const char *v1; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode )
  {
    v1 = "bullet_penetration_sp";
    if ( ActiveGameMode == 1 )
      goto LABEL_6;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 148, ASSERT_TYPE_ASSERT, "(activeGameMode != GameModeType::NONE)", "%s\n\tShould not load penetration table outside of a game mode", "activeGameMode != GameModeType::NONE") )
  {
    __debugbreak();
  }
  v1 = "bullet_penetration_mp";
LABEL_6:
  s_bulletPenetration = BulletPenetration_Register(v1);
  if ( !s_bulletPenetration )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F53E10, 245i64, v1);
}

/*
==============
BG_LoadWeaponCompleteDef
==============
*/
WeaponCompleteDef *BG_LoadWeaponCompleteDef(const char *name)
{
  if ( !*name )
    return 0i64;
  return DB_FindXAssetHeader(ASSET_TYPE_WEAPON, name, 1).weapon;
}

/*
==============
BG_RefreshTransientWeaponFlagsForMyChanges
==============
*/
void BG_RefreshTransientWeaponFlagsForMyChanges()
{
  __int64 AllXAssetOfType; 
  unsigned int v1; 
  XAssetHeader *v2; 
  __int64 v3; 
  WeaponAttachment *physicsLibrary; 
  __int64 v5; 
  XAssetHeader *p_assets; 
  WeaponCompleteDef *v7; 
  XAssetHeader assets; 
  XAssetHeader v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 791, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_usedDebugZone )
  {
    AllXAssetOfType = (unsigned int)DB_GetAllXAssetOfType(ASSET_TYPE_WEAPON, &assets, 650);
    v1 = DB_GetAllXAssetOfType(ASSET_TYPE_ATTACHMENT, &v9, 3112);
    if ( v1 )
    {
      v2 = &v9;
      v3 = v1;
      do
      {
        physicsLibrary = (WeaponAttachment *)v2->physicsLibrary;
        if ( !v2->physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 809, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
          __debugbreak();
        DB_Weapons_FlagAttachmentForMyChanges(physicsLibrary);
        ++v2;
        --v3;
      }
      while ( v3 );
    }
    if ( (_DWORD)AllXAssetOfType )
    {
      v5 = AllXAssetOfType;
      p_assets = &assets;
      do
      {
        v7 = (WeaponCompleteDef *)p_assets->physicsLibrary;
        if ( !p_assets->physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 816, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
          __debugbreak();
        DB_Weapons_FlagWeaponForMyChanges(v7);
        ++p_assets;
        --v5;
      }
      while ( v5 );
    }
  }
}

/*
==============
BG_SetupAmmoCapacityIndexes
==============
*/
void BG_SetupAmmoCapacityIndexes(const Weapon *r_weapon)
{
  unsigned int weaponIdx; 
  WeaponDef *PointerToWeaponDef; 
  const char *szSharedAmmoCapName; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  WeaponDef *v7; 
  const char *v8; 
  WeaponDef *v9; 
  __int64 v10; 
  const char *v11; 
  signed __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int iSharedAmmoCap; 
  char *WeaponNameComplete; 
  int v20; 
  char *v21; 
  char *v22; 
  __int64 v23; 
  char r_weapona[64]; 
  char output[1024]; 
  char v26[1024]; 

  weaponIdx = r_weapon->weaponIdx;
  memset(r_weapona, 0, 48);
  *(double *)&r_weapona[48] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  *(_DWORD *)&r_weapona[56] = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  PointerToWeaponDef = BG_GetPointerToWeaponDef(weaponIdx);
  szSharedAmmoCapName = PointerToWeaponDef->szSharedAmmoCapName;
  PointerToWeaponDef->iSharedAmmoCapIndex = -1;
  if ( *szSharedAmmoCapName )
  {
    v5 = r_weapon->weaponIdx;
    v6 = 1;
    if ( r_weapon->weaponIdx > 1u )
    {
      while ( 2 )
      {
        *(_WORD *)r_weapona = v6;
        v7 = BG_GetPointerToWeaponDef(v6);
        v8 = PointerToWeaponDef->szSharedAmmoCapName;
        v9 = v7;
        v10 = 0x7FFFFFFFi64;
        v11 = v7->szSharedAmmoCapName;
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v12 = v11 - v8;
        while ( 1 )
        {
          v13 = (unsigned __int8)v8[v12];
          v14 = v10;
          v15 = *(unsigned __int8 *)v8++;
          --v10;
          if ( !v14 )
          {
LABEL_18:
            PointerToWeaponDef->iSharedAmmoCapIndex = v6;
            iSharedAmmoCap = v9->iSharedAmmoCap;
            if ( iSharedAmmoCap != PointerToWeaponDef->iSharedAmmoCap )
            {
              WeaponNameComplete = BG_GetWeaponNameComplete((const Weapon *)r_weapona, 0, output, 0x400u);
              v20 = PointerToWeaponDef->iSharedAmmoCap;
              v21 = WeaponNameComplete;
              v22 = BG_GetWeaponNameComplete(r_weapon, 0, v26, 0x400u);
              LODWORD(v23) = v20;
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F54760, 247i64, PointerToWeaponDef->szSharedAmmoCapName, v22, v23, v21, iSharedAmmoCap, *(_OWORD *)r_weapona, *(_OWORD *)&r_weapona[16], *(_OWORD *)&r_weapona[32], *(_QWORD *)&r_weapona[48], *(_QWORD *)&r_weapona[56]);
            }
            return;
          }
          if ( v13 != v15 )
          {
            v16 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v16 = v13;
            v13 = v16;
            v17 = v15 + 32;
            if ( (unsigned int)(v15 - 65) > 0x19 )
              v17 = v15;
            if ( v13 != v17 )
              break;
          }
          if ( !v13 )
            goto LABEL_18;
        }
        v5 = r_weapon->weaponIdx;
        if ( ++v6 < r_weapon->weaponIdx )
          continue;
        break;
      }
    }
    PointerToWeaponDef->iSharedAmmoCapIndex = v5;
  }
}

/*
==============
BG_SetupAmmoPoolIndexes
==============
*/
void BG_SetupAmmoPoolIndexes(const Weapon *r_weapon)
{
  WeaponCompleteDef *PointerToWeaponCompleteDef; 
  WeaponDef *PointerToWeaponDef; 
  int iAmmoIndex; 
  int v5; 
  unsigned int v6; 
  AttachmentList *attachments; 
  unsigned int i; 
  WeaponAttachment *v9; 
  const char **p_szAmmoName; 
  const char *v11; 
  int v12; 
  int outAmmoIndex; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_SetupAmmoPoolIndexes");
  PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(r_weapon->weaponIdx);
  PointerToWeaponDef = BG_GetPointerToWeaponDef(r_weapon->weaponIdx);
  if ( BG_WeaponSetup_GetWeaponDefOverrides(r_weapon->weaponIdx)->sharedAmmo )
  {
    outAmmoIndex = 0;
    if ( BG_FindAmmoNameMatch("weapon", PointerToWeaponCompleteDef->szInternalName, PointerToWeaponDef->szAmmoName, r_weapon->weaponIdx, &outAmmoIndex) )
      PointerToWeaponDef->iAmmoIndex = outAmmoIndex;
  }
  iAmmoIndex = PointerToWeaponDef->iAmmoIndex;
  if ( iAmmoIndex <= 0 )
  {
    v5 = s_ammoNameIndex;
    PointerToWeaponDef->iAmmoIndex = s_ammoNameIndex;
    s_ammoNameIndex = v5 + 1;
    iAmmoIndex = PointerToWeaponDef->iAmmoIndex;
  }
  if ( !iAmmoIndex && r_weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 476, ASSERT_TYPE_ASSERT, "((weapDef->iAmmoIndex != 0) || (r_weapon.weaponIdx == 0))", (const char *)&queryFormat, "(weapDef->iAmmoIndex != 0) || (r_weapon.weaponIdx == WP_NONE)", -2i64) )
    __debugbreak();
  v6 = 0;
  attachments = PointerToWeaponCompleteDef->attachments;
  do
  {
    for ( i = 0; i < attachments->attachmentCount; ++i )
    {
      v9 = attachments->attachments[i];
      p_szAmmoName = &v9->ammotype->szAmmoName;
      if ( p_szAmmoName )
      {
        v11 = *p_szAmmoName;
        if ( *p_szAmmoName )
        {
          outAmmoIndex = 0;
          if ( BG_FindAmmoNameMatch("attachment", v9->szInternalName, v11, r_weapon->weaponIdx, &outAmmoIndex) )
          {
            v9->iAmmoIndex = outAmmoIndex;
          }
          else
          {
            v12 = s_ammoNameIndex;
            v9->iAmmoIndex = s_ammoNameIndex;
            s_ammoNameIndex = v12 + 1;
          }
          if ( !v9->iAmmoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 498, ASSERT_TYPE_ASSERT, "(attachment->iAmmoIndex != 0)", (const char *)&queryFormat, "attachment->iAmmoIndex != 0") )
            __debugbreak();
        }
      }
    }
    ++v6;
    ++attachments;
  }
  while ( v6 < 0xE );
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_SetupDynamicWeaponAttachmentIcons
==============
*/
void BG_SetupDynamicWeaponAttachmentIcons(const WeaponCompleteDef *const weapCompleteDef)
{
  AttachmentList *attachments; 
  __int64 v3; 
  __int64 attachmentCount; 
  __int64 v5; 
  __int64 v6; 
  const WeaponAttachment *v7; 
  const char *dynamicAttachmentIcon; 
  const char *FilenameSubString; 
  char *v10; 
  unsigned int v11; 
  __int64 v12; 
  const char *v13; 
  GfxImage *v14; 
  unsigned __int16 WeaponAttachmentIndex; 
  unsigned int GfxImageIndex; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 
  StringTable *tablePtr; 
  __int64 v21; 
  __int64 v22; 
  AttachmentList *v23; 
  __int64 v24; 
  char Destination[56]; 
  char outPath[272]; 

  if ( !weapCompleteDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 604, ASSERT_TYPE_ASSERT, "( ( weapCompleteDef != nullptr ) )", "( weapCompleteDef ) = %p", NULL) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB|0x100) )
  {
    StringTable_GetAsset("ui/stringTable/weapon_attachments_variant_icon_map.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 612, ASSERT_TYPE_ASSERT, "( ( dynamicAttachmentTablePtr != nullptr ) )", "( dynamicAttachmentTablePtr ) = %p", NULL) )
      __debugbreak();
    attachments = weapCompleteDef->attachments;
    v3 = 14i64;
    v23 = attachments;
    v24 = 14i64;
    do
    {
      attachmentCount = attachments->attachmentCount;
      if ( (_DWORD)attachmentCount )
      {
        v5 = 0i64;
        v21 = 0i64;
        v6 = (unsigned int)attachmentCount;
        v22 = attachmentCount;
        do
        {
          v7 = *(WeaponAttachment **)((char *)attachments->attachments + v5);
          if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 622, ASSERT_TYPE_ASSERT, "( ( attachment != nullptr ) )", "( attachment ) = %p", NULL) )
            __debugbreak();
          if ( DB_IsXAssetTransient(ASSET_TYPE_ATTACHMENT, v7->szInternalName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 623, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetTransient( ASSET_TYPE_ATTACHMENT, attachment->szInternalName ))", (const char *)&queryFormat, "!DB_IsXAssetTransient( ASSET_TYPE_ATTACHMENT, attachment->szInternalName )") )
            __debugbreak();
          dynamicAttachmentIcon = v7->dynamicAttachmentIcon;
          if ( dynamicAttachmentIcon && *dynamicAttachmentIcon )
          {
            FilenameSubString = Com_GetFilenameSubString(dynamicAttachmentIcon);
            Com_CopyAndStripExtension(outPath, 0x104ui64, FilenameSubString);
            v10 = outPath;
            if ( v7->numModelVariations > 0x1E )
            {
              LODWORD(v18) = 30;
              LODWORD(fmt) = v7->numModelVariations;
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F54960, 6443i64, v7->szInternalName, fmt, v18);
            }
            v11 = 0;
            v12 = 0i64;
            do
            {
              if ( !v11 )
                goto LABEL_28;
              Destination[0] = 0;
              strncpy(Destination, v7->szInternalName, 0x32ui64);
              if ( v11 + 1 >= StringTable_GetColumnCount(tablePtr) )
              {
                LODWORD(v19) = StringTable_GetColumnCount(tablePtr);
                LODWORD(v18) = v11 + 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 645, ASSERT_TYPE_ASSERT, "(unsigned)( valueColumn ) < (unsigned)( StringTable_GetColumnCount( dynamicAttachmentTablePtr ) )", "valueColumn doesn't index StringTable_GetColumnCount( dynamicAttachmentTablePtr )\n\t%i not in [0, %i)", v18, v19) )
                  __debugbreak();
              }
              v13 = StringTable_Lookup(tablePtr, 0, Destination, v11 + 1);
              v10 = (char *)v13;
              if ( v13 )
              {
                if ( *v13 )
                {
LABEL_28:
                  v14 = Image_Register(v10, IMAGE_TRACK_HUD);
                  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 658, ASSERT_TYPE_ASSERT, "( ( attachmentImage != nullptr ) )", "( attachmentImage ) = %p", NULL) )
                    __debugbreak();
                  if ( DB_IsXAssetTransient(ASSET_TYPE_IMAGE, v14->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 659, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetTransient( ASSET_TYPE_IMAGE, attachmentImage->name ))", (const char *)&queryFormat, "!DB_IsXAssetTransient( ASSET_TYPE_IMAGE, attachmentImage->name )") )
                    __debugbreak();
                  WeaponAttachmentIndex = DB_GetWeaponAttachmentIndex(v7);
                  GfxImageIndex = DB_GetGfxImageIndex(v14);
                  if ( WeaponAttachmentIndex >= 0xC28u )
                  {
                    LODWORD(v19) = 3112;
                    LODWORD(v18) = WeaponAttachmentIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentIndex ) < (unsigned)( ( sizeof( *array_counter( s_bgWeaponSetup_dynmaicAttachmentIconMap ) ) + 0 ) )", "attachmentIndex doesn't index ARRAY_COUNT( s_bgWeaponSetup_dynmaicAttachmentIconMap )\n\t%i not in [0, %i)", v18, v19) )
                      __debugbreak();
                  }
                  s_bgWeaponSetup_dynmaicAttachmentIconMap[WeaponAttachmentIndex][v12] = GfxImageIndex;
                }
              }
              ++v11;
              ++v12;
            }
            while ( v11 < 0x1E );
            v5 = v21;
            v6 = v22;
            attachments = v23;
          }
          v5 += 8i64;
          --v6;
          v21 = v5;
          v22 = v6;
        }
        while ( v6 );
        v3 = v24;
      }
      ++attachments;
      --v3;
      v23 = attachments;
      v24 = v3;
    }
    while ( v3 );
  }
}

/*
==============
BG_SetupWeaponIndex
==============
*/
void BG_SetupWeaponIndex(const Weapon *r_weapon)
{
  WeaponCompleteDef *v2; 
  WeaponDef *weapDef; 

  v2 = bg_weaponCompleteDefs[r_weapon->weaponIdx];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 733, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
    __debugbreak();
  weapDef = v2->weapDef;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 736, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  bg_weaponDefs[r_weapon->weaponIdx] = weapDef;
  BG_SetupAmmoCapacityIndexes(r_weapon);
  BG_SetupAmmoPoolIndexes(r_weapon);
  if ( !g_usedDebugZone )
    DB_Weapons_ValidateTransientFlags(v2, (bool (__fastcall *)(const XModel *))BG_IsWeaponXModelTransient);
}

/*
==============
BG_SetupWeaponLoot
==============
*/
void BG_SetupWeaponLoot(const Weapon *r_weapon)
{
  WeaponCompleteDef *PointerToWeaponCompleteDef; 
  const char *szLootTable; 
  StringTable *tablePtr; 

  PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(r_weapon->weaponIdx);
  if ( !PointerToWeaponCompleteDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 580, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
    __debugbreak();
  szLootTable = PointerToWeaponCompleteDef->szLootTable;
  PointerToWeaponCompleteDef->numLootVariants = 0;
  if ( szLootTable && *szLootTable )
  {
    StringTable_GetAsset(szLootTable, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 588, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
      __debugbreak();
    PointerToWeaponCompleteDef->numLootVariants = StringTable_GetRowCount(tablePtr);
  }
}

/*
==============
BG_ShutdownWeaponDefFiles
==============
*/
void BG_ShutdownWeaponDefFiles(void)
{
  Com_Printf(14, "Shutting down weaponDef files\n");
  BG_ClearAmmoPoolIndexes();
  BG_ShutdownPlayerAnimTypes();
  bg_lastParsedWeaponIndex = 0;
  bg_defaultWeaponIndex = 0;
}

/*
==============
BG_WeaponOverrides_GetMaxAmmo
==============
*/
__int64 BG_WeaponOverrides_GetMaxAmmo(const Weapon *weapon)
{
  return (unsigned int)BG_WeaponSetup_GetWeaponDefOverrides(weapon->weaponIdx)->iMaxAmmo;
}

/*
==============
BG_WeaponOverrides_GetSharedAmmo
==============
*/
_BOOL8 BG_WeaponOverrides_GetSharedAmmo(const Weapon *weapon)
{
  return BG_WeaponSetup_GetWeaponDefOverrides(weapon->weaponIdx)->sharedAmmo;
}

/*
==============
BG_WeaponSetup_GetWeaponDefOverrides
==============
*/
WeaponDefOverrides *BG_WeaponSetup_GetWeaponDefOverrides(unsigned int weapIdx)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v1 = weapIdx;
  if ( weapIdx > 0x226 )
  {
    v6 = 550;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 134, ASSERT_TYPE_ASSERT, "( weapIdx ) <= ( 550 )", "weapIdx not in [0, MAX_WEAPONS]\n\t%u not in [0, %u]", weapIdx, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v5) = bg_lastParsedWeaponIndex;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 135, ASSERT_TYPE_ASSERT, "( weapIdx ) <= ( bg_lastParsedWeaponIndex )", "weapIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v3, v5) )
      __debugbreak();
  }
  return &bg_weaponDefOverrides[v1];
}

/*
==============
BG_WeaponSetup_InitWeaponDefOverrides
==============
*/
void BG_WeaponSetup_InitWeaponDefOverrides(unsigned int weapIdx)
{
  __int64 v1; 
  WeaponDefOverrides *v2; 
  WeaponCompleteDef *PointerToWeaponCompleteDef; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v1 = weapIdx;
  if ( weapIdx > 0x226 )
  {
    v7 = 550;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 678, ASSERT_TYPE_ASSERT, "( weapIdx ) <= ( 550 )", "weapIdx not in [0, MAX_WEAPONS]\n\t%u not in [0, %u]", weapIdx, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v6) = bg_lastParsedWeaponIndex;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 679, ASSERT_TYPE_ASSERT, "( weapIdx ) <= ( bg_lastParsedWeaponIndex )", "weapIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v4, v6) )
      __debugbreak();
  }
  v2 = &bg_weaponDefOverrides[v1];
  PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(v1);
  v2->iMaxAmmo = PointerToWeaponCompleteDef->weapDef->iMaxAmmo;
  v2->sharedAmmo = PointerToWeaponCompleteDef->weapDef->sharedAmmo;
}

/*
==============
BG_WeaponSetup_Initialized
==============
*/
bool BG_WeaponSetup_Initialized()
{
  return bg_weaponCompleteDefs[0] != NULL;
}

/*
==============
BG_WeaponsSetup_InitDefaultsAndAnimations
==============
*/
void BG_WeaponsSetup_InitDefaultsAndAnimations(bool isGameServer)
{
  WeaponCompleteDef *DefaultWeaponCompleteDef; 
  WeaponCompleteDef *PointerToWeaponCompleteDef; 

  if ( bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 692, ASSERT_TYPE_ASSERT, "(bg_lastParsedWeaponIndex == 0)", (const char *)&queryFormat, "bg_lastParsedWeaponIndex == 0") )
    __debugbreak();
  memset_0(bg_weaponCompleteDefs, 0, sizeof(bg_weaponCompleteDefs));
  memset_0(bg_weaponDefs, 0, sizeof(bg_weaponDefs));
  memset_0(bg_weaponDefOverrides, 0, sizeof(bg_weaponDefOverrides));
  DefaultWeaponCompleteDef = BG_LoadDefaultWeaponCompleteDef();
  bg_weaponCompleteDefs[0] = DefaultWeaponCompleteDef;
  if ( !DefaultWeaponCompleteDef )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 700, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[0])", (const char *)&queryFormat, "bg_weaponCompleteDefs[0]") )
      __debugbreak();
    DefaultWeaponCompleteDef = bg_weaponCompleteDefs[0];
  }
  bg_weaponDefs[0] = DefaultWeaponCompleteDef->weapDef;
  PointerToWeaponCompleteDef = BG_GetPointerToWeaponCompleteDef(0);
  bg_weaponDefOverrides[0].iMaxAmmo = PointerToWeaponCompleteDef->weapDef->iMaxAmmo;
  bg_weaponDefOverrides[0].sharedAmmo = PointerToWeaponCompleteDef->weapDef->sharedAmmo;
  if ( isGameServer && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_LoadPlayerAnimTypes();
}

/*
==============
BG_Weapons_GetFullWeaponForName
==============
*/
char BG_Weapons_GetFullWeaponForName(const char *name, Weapon *outWeapon, Weapon *(*getWeaponFunc)(Weapon *result, const char *))
{
  char *v4; 
  const char *v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  unsigned __int64 v10; 
  char v11; 
  char *v12; 
  char *i; 
  Weapon *v14; 
  Weapon *v15; 
  __int128 v16; 
  double v17; 
  int v18; 
  const WeaponCompleteDef *v20; 
  char v21; 
  unsigned int v22; 
  char *v23; 
  char v24; 
  char *j; 
  __int64 v26; 
  const char *v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  const dvar_t *v31; 
  const char *v32; 
  __int64 v33; 
  char v34; 
  __int64 v35; 
  char v36; 
  unsigned int v37; 
  __int64 v38; 
  const dvar_t *v39; 
  _BYTE *v40; 
  unsigned __int8 v41; 
  char *v42; 
  char *v43; 
  __int64 v44; 
  const char *v45; 
  char *v46; 
  int v47; 
  const char *v48; 
  __int64 v49; 
  char v50; 
  __int64 v51; 
  char v52; 
  const char *v53; 
  __int64 v54; 
  char v55; 
  __int64 v56; 
  char v57; 
  const char *v58; 
  __int64 v59; 
  char v60; 
  __int64 v61; 
  char v62; 
  const dvar_t *v63; 
  unsigned int v64; 
  unsigned __int8 v65; 
  const dvar_t *v66; 
  unsigned int v67; 
  unsigned __int8 v68; 
  const dvar_t *v69; 
  char *v70; 
  unsigned int v71; 
  unsigned __int16 v72; 
  __int64 v73; 
  const dvar_t *v74; 
  scr_string_t String; 
  unsigned int IndexFromScrString; 
  const dvar_t *v77; 
  unsigned __int8 v78; 
  const dvar_t *v79; 
  AttachmentList *v80; 
  AttachmentSlot v81; 
  __int64 attachmentCount; 
  WeaponAttachment **v83; 
  unsigned __int16 k; 
  const char **p_szInternalName; 
  const dvar_t *v86; 
  bool v87; 
  unsigned int AllWeaponAttachments; 
  WeaponAttachment **v89; 
  __int64 v90; 
  const char **v91; 
  unsigned int v92; 
  unsigned int v93; 
  __int64 v94; 
  unsigned int scopeVariation; 
  const dvar_t *v96; 
  const dvar_t *v97; 
  const char *v98; 
  const dvar_t *v99; 
  unsigned int v100; 
  unsigned __int16 weaponOthers; 
  const dvar_t *v102; 
  unsigned __int16 PrimaryAttachmentIndex; 
  int v104; 
  int weaponLootId; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  char *fmt; 
  __int64 v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  char v116; 
  AttachmentSlot v118[2]; 
  AttachmentSlot slot; 
  char *v120; 
  char *v121; 
  AttachmentSlot v122; 
  AttachmentSlot v123; 
  AttachmentSlot v124; 
  __int64 v125; 
  AttachmentList *v126; 
  Weapon v127; 
  WeaponAttachment *attachments[30]; 
  char dest[512]; 
  char v130[512]; 
  char v131[8192]; 
  char Str[15360]; 

  *(_QWORD *)v118 = name;
  v4 = (char *)name;
  v120 = (char *)name;
  if ( !getWeaponFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1404, ASSERT_TYPE_ASSERT, "(getWeaponFunc)", (const char *)&queryFormat, "getWeaponFunc") )
    __debugbreak();
  if ( !bg_weaponCompleteDefs[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1405, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[0])", "%s\n\tWeapons have not yet been initialized, trying to fetch a weapon by name now would break the weapon array. Make sure BG_ClearWeaponDef() got called.", "bg_weaponCompleteDefs[0]") )
    __debugbreak();
  v116 = 1;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1138, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
    __debugbreak();
  v5 = "none";
  v6 = 4i64;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v7 = v5[v4 - "none"];
    v8 = v6;
    v9 = *v5++;
    --v6;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( v4[v10] );
      if ( v10 > 4 && *v4 == 97 && v4[1] == 108 && v4[2] == 116 && v4[3] == 95 )
      {
        v4 += 4;
        *(_QWORD *)v118 = v4;
        v120 = v4;
      }
      break;
    }
  }
  while ( v7 );
  v11 = *v4;
  v12 = v131;
  for ( i = v4; *i; v11 = *i )
  {
    if ( v11 == 43 )
      break;
    ++i;
    *v12++ = v11;
  }
  *v12 = 0;
  v14 = getWeaponFunc(&v127, v131);
  v15 = outWeapon;
  v16 = *(_OWORD *)&v14->attachmentVariationIndices[5];
  v17 = *(double *)&v14->attachmentVariationIndices[21];
  v18 = *(_DWORD *)&v14->weaponCamo;
  *(__m256i *)&outWeapon->weaponIdx = *(__m256i *)&v14->weaponIdx;
  *(_OWORD *)&outWeapon->attachmentVariationIndices[5] = v16;
  *(double *)&outWeapon->attachmentVariationIndices[21] = v17;
  *(_DWORD *)&outWeapon->weaponCamo = v18;
  if ( !outWeapon->weaponIdx )
    return 1;
  v20 = BG_WeaponCompleteDef(outWeapon, 0);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1425, ASSERT_TYPE_ASSERT, "(weapCompleteDef)", (const char *)&queryFormat, "weapCompleteDef") )
    __debugbreak();
  if ( !v20->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1426, ASSERT_TYPE_ASSERT, "(weapCompleteDef->weapDef)", (const char *)&queryFormat, "weapCompleteDef->weapDef") )
    __debugbreak();
  v21 = *i;
  v125 = 0i64;
  v22 = 0;
  if ( v21 )
  {
    do
    {
      if ( v21 != 43 )
        break;
      ++i;
      v23 = &Str[512 * (unsigned __int64)v22];
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1326, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
        __debugbreak();
      v24 = *i;
      for ( j = &Str[512 * (unsigned __int64)v22]; *i; v24 = *i )
      {
        if ( v24 == 43 )
          break;
        ++i;
        *j++ = v24;
      }
      *j = 0;
      v26 = 5i64;
      v121 = i;
      v27 = "camo|";
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v28 = v27[v23 - "camo|"];
        v29 = v26;
        v30 = *v27++;
        --v26;
        if ( !v29 )
        {
LABEL_50:
          v15 = outWeapon;
          if ( outWeapon->weaponCamo )
          {
            v31 = DCONST_DVARBOOL_bg_weapons_pedantic;
            if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v31);
            if ( v31->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set a second camo on weapon named '%s'\n", v4) )
              __debugbreak();
            Com_PrintWarning(17, "WARNING: Tried to set a second camo on weapon named '%s'\n", v4);
            v116 = 0;
          }
          else
          {
            String = SL_FindString(v23 + 5);
            IndexFromScrString = BG_Camo_GetIndexFromScrString(String);
            if ( IndexFromScrString < BG_Camo_GetCamoCount() )
            {
              v78 = truncate_cast<unsigned char,unsigned int>(IndexFromScrString);
            }
            else
            {
              v77 = DCONST_DVARBOOL_bg_weapons_pedantic;
              if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v77);
              if ( v77->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Could not find camo: '%s'\n", v23 + 5) )
                __debugbreak();
              Com_PrintWarning(17, "WARNING: Could not find camo: '%s'\n", v23 + 5);
              v78 = 0;
              v116 = 0;
            }
            v15 = outWeapon;
            outWeapon->weaponCamo = v78;
            if ( BG_WeaponCanAcceptCamo(outWeapon) || !BG_WeaponIsUsingCamo(outWeapon) )
            {
              i = v121;
              v4 = v120;
            }
            else
            {
              v79 = DCONST_DVARBOOL_bg_weapons_pedantic;
              if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v79);
              v4 = v120;
              if ( v79->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set camo on a weapon '%s' that doesn't support camo.", v120) )
                __debugbreak();
              Com_PrintWarning(17, "WARNING: Tried to set camo on a weapon '%s' that doesn't support camo.", v4);
              i = v121;
              outWeapon->weaponCamo = 0;
              v116 = 0;
            }
          }
          goto LABEL_77;
        }
        if ( v28 != v30 )
          break;
        if ( !v28 )
          goto LABEL_50;
      }
      v32 = "sticker";
      v33 = 7i64;
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v34 = v32[v23 - "sticker"];
        v35 = v33;
        v36 = *v32++;
        --v33;
        if ( !v35 )
          break;
        if ( v34 != v36 )
        {
          v48 = "scope";
          v49 = 5i64;
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v50 = v48[v23 - "scope"];
            v51 = v49;
            v52 = *v48++;
            --v49;
            if ( !v51 )
            {
LABEL_104:
              v15 = outWeapon;
              if ( outWeapon->scopeVariation )
              {
                BG_WeaponsSetup_Warn_char_const_____61__char_const_____((const char (*)[61])"WARNING: Tried to set a second reticle on weapon named '%s'\n", (const char **)&v120);
                v4 = v120;
                v116 = 0;
              }
              else
              {
                v67 = BG_Weapons_ParseID(v23 + 5);
                v68 = truncate_cast<unsigned char,unsigned int>(v67);
                outWeapon->scopeVariation = v68;
                if ( v68 == 0xFF )
                {
                  v69 = DCONST_DVARBOOL_bg_weapons_pedantic;
                  if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v69);
                  if ( v69->current.enabled )
                  {
                    LODWORD(v113) = 255;
                    LODWORD(v111) = outWeapon->scopeVariation;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but max number of reticles is %d\n", v111, v4, v113) )
                      __debugbreak();
                  }
                  LODWORD(fmt) = 255;
                  Com_PrintWarning(17, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but max number of reticles is %d\n", outWeapon->scopeVariation, v4, fmt);
                  outWeapon->scopeVariation = 0;
                  v116 = 0;
                }
              }
              goto LABEL_77;
            }
            if ( v50 != v52 )
              break;
            if ( !v50 )
              goto LABEL_104;
          }
          v53 = "loot";
          v54 = 4i64;
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v55 = v53[v23 - "loot"];
            v56 = v54;
            v57 = *v53++;
            --v54;
            if ( !v56 )
            {
LABEL_112:
              v15 = outWeapon;
              if ( outWeapon->weaponLootId )
              {
                BG_WeaponsSetup_Warn_char_const_____61__char_const_____((const char (*)[61])"WARNING: Tried to set a second loot id on weapon named '%s'\n", (const char **)&v120);
                v4 = v120;
                v116 = 0;
              }
              else
              {
                v64 = BG_Weapons_ParseID(v23 + 4);
                v65 = truncate_cast<unsigned char,unsigned int>(v64 + 1);
                outWeapon->weaponLootId = v65;
                if ( v65 > v20->numLootVariants )
                {
                  v66 = DCONST_DVARBOOL_bg_weapons_pedantic;
                  if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v66);
                  if ( v66->current.enabled )
                  {
                    LODWORD(v113) = v20->numLootVariants;
                    LODWORD(v111) = outWeapon->weaponLootId;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set loot id %d on weapon named '%s', but max number of loot ids is %d\n", v111, v4, v113) )
                      __debugbreak();
                  }
                  LODWORD(fmt) = v20->numLootVariants;
                  Com_PrintWarning(17, "WARNING: Tried to set loot id %d on weapon named '%s', but max number of loot ids is %d\n", outWeapon->weaponLootId, v4, fmt);
                  outWeapon->weaponLootId = 0;
                  v116 = 0;
                }
              }
              goto LABEL_77;
            }
            if ( v55 != v57 )
              break;
            if ( !v55 )
              goto LABEL_112;
          }
          v58 = "paint";
          v59 = 5i64;
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v60 = v58[v23 - "paint"];
            v61 = v59;
            v62 = *v58++;
            --v59;
            if ( !v61 )
            {
LABEL_120:
              v63 = DCONST_DVARBOOL_bg_weapons_pedantic;
              if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v63);
              if ( v63->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set a paint on weapon named '%s', but gun-painter is disabled.\n", v4) )
                __debugbreak();
              Com_PrintWarning(17, "WARNING: Tried to set a paint on weapon named '%s', but gun-painter is disabled.\n", v4);
              goto LABEL_75;
            }
            if ( v60 != v62 )
              break;
            if ( !v60 )
              goto LABEL_120;
          }
          if ( *v23 )
          {
            if ( v22 < 0x1D )
            {
              ++v22;
            }
            else
            {
              if ( v22 != 29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1572, ASSERT_TYPE_ASSERT, "(parsedAttachmentCount == (1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 1 + 1 + 1))", (const char *)&queryFormat, "parsedAttachmentCount == MAX_NUM_WEAPON_ATTACHMENTS") )
                __debugbreak();
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F55B88, 248i64, v4);
            }
          }
          goto LABEL_76;
        }
      }
      while ( v34 );
      v37 = BG_Weapons_ParseID(v23 + 7);
      v38 = v37;
      if ( v37 >= 4 )
      {
        LODWORD(v112) = 4;
        LODWORD(v111) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1479, ASSERT_TYPE_ASSERT, "(unsigned)( weaponStickerSlotIndex ) < (unsigned)( WEAPON_STICKER_SLOT_COUNT )", "weaponStickerSlotIndex doesn't index WEAPON_STICKER_SLOT_COUNT\n\t%i not in [0, %i)", v111, v112) )
          __debugbreak();
      }
      if ( outWeapon->stickerIndices[v38] )
      {
        v39 = DCONST_DVARBOOL_bg_weapons_pedantic;
        if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v39);
        if ( v39->current.enabled )
        {
          LODWORD(v111) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set a second sticker material on sticker slot %u on weapon named '%s'\n", v111, v4) )
            __debugbreak();
        }
        Com_PrintWarning(17, "WARNING: Tried to set a second sticker material on sticker slot %u on weapon named '%s'\n", (unsigned int)v38, v4);
LABEL_75:
        v116 = 0;
LABEL_76:
        v15 = outWeapon;
        goto LABEL_77;
      }
      v70 = strchr_0(v23 + 7, 124);
      if ( !v70 )
      {
        v74 = DCONST_DVARBOOL_bg_weapons_pedantic;
        if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v74);
        if ( v74->current.enabled )
        {
          LODWORD(v111) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Missing '|' character after the sticker slot %u to define the material index on weapon named '%s'\n", v111, v4) )
            __debugbreak();
        }
        Com_PrintWarning(17, "WARNING: Missing '|' character after the sticker slot %u to define the material index on weapon named '%s'\n", (unsigned int)v38, v4);
        goto LABEL_75;
      }
      v71 = BG_Weapons_ParseID(v70 + 1);
      v72 = truncate_cast<unsigned short,unsigned int>(v71);
      if ( !v72 )
      {
        LODWORD(v113) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1493, ASSERT_TYPE_ASSERT, "( materialIndex ) > ( 0 )", "%s > %s\n\t%i, %i", "materialIndex", "0", v113, 0i64) )
          __debugbreak();
      }
      v73 = v38;
      v15 = outWeapon;
      outWeapon->stickerIndices[v73] = v72;
LABEL_77:
      v21 = *i;
    }
    while ( *i );
    *(_QWORD *)v118 = v4;
  }
  if ( !v15->weaponIdx )
    goto LABEL_208;
  if ( v22 > 0x1D )
  {
    LODWORD(v112) = 29;
    LODWORD(v111) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1588, ASSERT_TYPE_ASSERT, "( parsedAttachmentCount ) <= ( (1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 1 + 1 + 1) )", "parsedAttachmentCount not in [0, MAX_NUM_WEAPON_ATTACHMENTS]\n\t%u not in [0, %u]", v111, v112) )
      __debugbreak();
  }
  if ( !v22 )
    goto LABEL_208;
  v121 = NULL;
  v126 = v20->attachments;
  v40 = NULL;
  v120 = (char *)v22;
  do
  {
    v41 = 0;
    v42 = strchr_0(&Str[(_QWORD)v40], 124);
    v43 = v42;
    if ( v42 )
    {
      v44 = -1i64;
      do
        ++v44;
      while ( Str[(_QWORD)v40 + v44] );
      v45 = v42 + 1;
      v46 = &Str[(_QWORD)&v40[v44]];
      if ( v46 <= v42 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1603, ASSERT_TYPE_ASSERT, "(nullTerminatorPos > variationIndexStartPos)", (const char *)&queryFormat, "nullTerminatorPos > variationIndexStartPos") )
        __debugbreak();
      Core_strncpy(dest, 0x200ui64, &Str[(_QWORD)v40], v43 - v40 - (_QWORD)Str);
      Core_strncpy(v130, 0x200ui64, v45, v46 - v45);
      v47 = atoi(v130);
      v41 = v47;
      if ( (v47 < 0 || (unsigned int)v47 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v47, "signed", v47) )
        __debugbreak();
      if ( v41 >= 0x10u )
      {
        LODWORD(v112) = 16;
        LODWORD(v111) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1609, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentVariationIndex ) < (unsigned)( 16 )", "attachmentVariationIndex doesn't index MAX_ATT_XMODEL_VARIATION\n\t%i not in [0, %i)", v111, v112) )
          __debugbreak();
      }
    }
    else
    {
      Core_strcpy(dest, 0x200ui64, &Str[(_QWORD)v40]);
    }
    v80 = v126;
    v81 = ATT_SLOT_RECEIVER;
LABEL_183:
    attachmentCount = v80->attachmentCount;
    v83 = v80->attachments;
    if ( (_DWORD)attachmentCount && !v83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1279, ASSERT_TYPE_ASSERT, "((numAttachments == 0) || (attachments != 0))", (const char *)&queryFormat, "(numAttachments == 0) || (attachments != NULL)") )
      __debugbreak();
    for ( k = 0; ; ++k )
    {
      if ( (unsigned int)attachmentCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)attachmentCount, "unsigned", attachmentCount) )
        __debugbreak();
      if ( k >= (unsigned __int16)attachmentCount )
      {
        ++v81;
        ++v80;
        if ( (unsigned int)v81 < ATT_SLOT_COUNT )
          goto LABEL_183;
        v86 = DCONST_DVARBOOL_bg_weapons_pedantic;
        slot = ATT_SLOT_COUNT;
        if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v86);
        if ( v86->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Unknown attachment '%s' on weapon named '%s'\n", dest, *(const char **)v118) )
          __debugbreak();
        Com_PrintWarning(17, "WARNING: Unknown attachment '%s' on weapon named '%s'\n", dest, *(const char **)v118);
LABEL_205:
        v15 = outWeapon;
        goto LABEL_206;
      }
      p_szInternalName = &v83[k]->szInternalName;
      if ( !p_szInternalName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1285, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
        __debugbreak();
      if ( !I_strncmp(dest, *p_szInternalName, 0x7FFFFFFFui64) )
        break;
    }
    if ( k >= v80->attachmentCount )
    {
      LODWORD(v112) = v80->attachmentCount;
      LODWORD(v111) = k;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1309, ASSERT_TYPE_ASSERT, "(unsigned)( *outAttachmentIndex ) < (unsigned)( attList->attachmentCount )", "*outAttachmentIndex doesn't index attList->attachmentCount\n\t%i not in [0, %i)", v111, v112) )
        __debugbreak();
    }
    slot = v81;
    if ( v81 >= ATT_SLOT_OTHER )
    {
      if ( k >= 0x10u )
      {
        LODWORD(v114) = 16;
        LODWORD(v113) = k;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1636, ASSERT_TYPE_ASSERT, "( weaponAttachmentIndex ) < ( sizeof( outWeapon->weaponOthers ) * 8 )", "%s < %s\n\t%i, %i", "weaponAttachmentIndex", "sizeof( outWeapon->weaponOthers ) * 8", v113, v114) )
          __debugbreak();
      }
      v100 = k;
      v15 = outWeapon;
      weaponOthers = outWeapon->weaponOthers;
      if ( (weaponOthers & (unsigned __int16)(1 << v100)) == 0 )
      {
        outWeapon->weaponOthers = (1 << v100) | weaponOthers;
        outWeapon->attachmentVariationIndices[Com_GetOtherAttachmentId(v100)] = v41;
        goto LABEL_207;
      }
      v102 = DCONST_DVARBOOL_bg_weapons_pedantic;
      if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v102);
      if ( v102->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set a second other attachment '%s' on weapon named '%s'\n", dest, *(const char **)v118) )
        __debugbreak();
      Com_PrintWarning(17, "WARNING: Tried to set a second other attachment '%s' on weapon named '%s'\n", dest, *(const char **)v118);
LABEL_206:
      v116 = 0;
      goto LABEL_207;
    }
    if ( BG_Weapon_GetPrimaryAttachmentIndex(outWeapon, &slot) )
    {
      v99 = DCONST_DVARBOOL_bg_weapons_pedantic;
      if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v99);
      if ( v99->current.enabled )
      {
        LODWORD(v111) = slot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set a second attachment in slot %d on weapon named '%s'\n", v111, *(const char **)v118) )
          __debugbreak();
      }
      Com_PrintWarning(17, "WARNING: Tried to set a second attachment in slot %d on weapon named '%s'\n", (unsigned int)slot, *(const char **)v118);
      goto LABEL_205;
    }
    BG_Weapon_SetPrimaryAttachmentIndex(&slot, k + 1, outWeapon);
    v15 = outWeapon;
    outWeapon->attachmentVariationIndices[slot] = v41;
LABEL_207:
    v40 = v121 + 512;
    v87 = v120-- == (char *)1;
    v121 += 512;
  }
  while ( !v87 );
LABEL_208:
  AllWeaponAttachments = BG_GetAllWeaponAttachments(v15, (const WeaponAttachment **)attachments);
  if ( AllWeaponAttachments )
  {
    v89 = attachments;
    v90 = AllWeaponAttachments;
    do
    {
      v91 = (const char **)*v89;
      if ( !*v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1663, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
        __debugbreak();
      v92 = *((_DWORD *)v91 + 11);
      if ( v92 )
      {
        v93 = *((_DWORD *)v91 + 11);
        if ( (unsigned int)v125 > v92 )
          v93 = v125;
        v94 = v93;
        scopeVariation = v15->scopeVariation;
        v125 = v94;
        if ( scopeVariation >= v92 )
        {
          v96 = DCONST_DVARBOOL_bg_weapons_pedantic;
          if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v96);
          v87 = !v96->current.enabled;
          v15 = outWeapon;
          if ( !v87 )
          {
            LODWORD(v114) = *((_DWORD *)v91 + 11);
            LODWORD(v111) = outWeapon->scopeVariation;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but the attachment definition %s only specifies %d reticles\n", v111, *(const char **)v118, *v91, v114) )
              __debugbreak();
          }
          LODWORD(v111) = *((_DWORD *)v91 + 11);
          Com_PrintWarning(17, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but the attachment definition %s only specifies %d reticles\n", outWeapon->scopeVariation, *(const char **)v118, *v91, v111);
          outWeapon->scopeVariation = 0;
          v116 = 0;
        }
      }
      ++v89;
      --v90;
    }
    while ( v90 );
  }
  if ( !v15->scopeVariation || (_DWORD)v125 )
  {
    v98 = *(const char **)v118;
  }
  else
  {
    v97 = DCONST_DVARBOOL_bg_weapons_pedantic;
    if ( !DCONST_DVARBOOL_bg_weapons_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapons_pedantic") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v97);
    v98 = *(const char **)v118;
    if ( v97->current.enabled )
    {
      LODWORD(v111) = v15->scopeVariation;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but there are no attachments that specify any reticles\n", v111, *(const char **)v118) )
        __debugbreak();
    }
    Com_PrintWarning(17, "WARNING: Tried to set custom scope reticle %d on weapon named '%s', but there are no attachments that specify any reticles\n", v15->scopeVariation, *(const char **)v118);
    v15->scopeVariation = 0;
    v116 = 0;
  }
  if ( !BG_IsValidWeapon(v15, 0) )
  {
    v118[0] = ATT_SLOT_VISUAL;
    PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(v15, v118);
    v104 = v15->scopeVariation;
    weaponLootId = v15->weaponLootId;
    v106 = v15->weaponOthers;
    v107 = PrimaryAttachmentIndex;
    v122 = ATT_SLOT_MODIFIER;
    v108 = BG_Weapon_GetPrimaryAttachmentIndex(v15, &v122);
    v123 = ATT_SLOT_UNDERBARREL;
    v109 = BG_Weapon_GetPrimaryAttachmentIndex(outWeapon, &v123);
    v124 = ATT_SLOT_SCOPE;
    LODWORD(v115) = BG_Weapon_GetPrimaryAttachmentIndex(outWeapon, &v124);
    LODWORD(v114) = outWeapon->weaponCamo;
    LODWORD(v113) = outWeapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1695, ASSERT_TYPE_ASSERT, "(BG_IsValidWeapon( *outWeapon, false ))", "%s\n\tInvalid weapon parsed from string '%s': WeaponIdx=%d WeaponCamo:%d WeaponScope:%d WeaponUnderBarrel:%d WeaponModifier:%d WeaponOthers:%04X WeaponLootId:%d WeaponReticle:%d WeaponVisual:%d", "BG_IsValidWeapon( *outWeapon, false )", v98, v113, v114, v115, v109, v108, v106, weaponLootId, v104, v107) )
      __debugbreak();
  }
  return v116;
}

/*
==============
BG_Weapons_ParseID
==============
*/
unsigned int BG_Weapons_ParseID(const char *idStr)
{
  int v1; 
  signed __int64 v2; 
  const char *v3; 
  __int64 v5; 
  __int64 v6; 
  char str[16]; 

  v1 = 0;
  v2 = str - idStr;
  v3 = idStr;
  do
  {
    if ( !*v3 || (unsigned __int8)(*v3 - 48) > 9u )
      break;
    if ( (unsigned int)v1 >= 0xB )
    {
      LODWORD(v6) = 11;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1355, ASSERT_TYPE_ASSERT, "(unsigned)( idDigitsLen ) < (unsigned)( MAX_INDEX_CHARS )", "idDigitsLen doesn't index MAX_INDEX_CHARS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    ++v1;
    v3[v2] = *v3;
    ++v3;
  }
  while ( v1 < 10 );
  if ( !v1 )
    return 0;
  if ( (unsigned int)v1 >= 0xB )
  {
    LODWORD(v6) = 11;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 1365, ASSERT_TYPE_ASSERT, "(unsigned)( idDigitsLen ) < (unsigned)( MAX_INDEX_CHARS )", "idDigitsLen doesn't index MAX_INDEX_CHARS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned __int64)v1 >= 0xB )
  {
    j___report_rangecheckfailure(idStr);
    JUMPOUT(0x1410CDDDAi64);
  }
  str[v1] = 0;
  return I_atoui(str);
}

/*
==============
BG_Weapons_RegisterWeaponForName
==============
*/
Weapon *BG_Weapons_RegisterWeaponForName(Weapon *result, const char *name, void (*regWeap)(unsigned int), const GameTypeQuick_t gameType, BgHandler *bgHandle)
{
  unsigned __int8 v5; 
  const char *v9; 
  __m256i v10; 
  __int128 v11; 
  double v12; 
  int v13; 
  __int64 v14; 
  char *WeaponNameComplete; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  const WeaponCompleteDef *weapon; 
  unsigned int v23; 
  unsigned __int16 v24; 
  const BG_SpawnGroup_Loot_Table *v25; 
  __int128 v26; 
  int v27; 
  double v28; 
  __int64 v30; 
  Weapon r_weapon; 
  char output[1024]; 

  v5 = gameType;
  if ( !*name || !I_stricmp(name, "none") )
    goto LABEL_39;
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  memset(&r_weapon, 0, 48);
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  if ( !bg_lastFoundWeaponIndex || bg_lastFoundWeaponIndex >= bg_lastParsedWeaponIndex + 1 || (r_weapon.weaponIdx = truncate_cast<unsigned short,unsigned int>(bg_lastFoundWeaponIndex), v9 = BG_GetWeaponNameComplete(&r_weapon, 0, output, 0x400u), I_stricmp(name, v9)) )
  {
    r_weapon.weaponIdx = 1;
    if ( bg_lastParsedWeaponIndex + 1 > 1 )
    {
      do
      {
        v14 = 0x7FFFFFFFi64;
        WeaponNameComplete = BG_GetWeaponNameComplete(&r_weapon, 0, output, 0x400u);
        if ( !WeaponNameComplete && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v16 = (const char *)(name - WeaponNameComplete);
        while ( 1 )
        {
          v17 = (unsigned __int8)WeaponNameComplete[(_QWORD)v16];
          v18 = v14;
          v19 = (unsigned __int8)*WeaponNameComplete++;
          --v14;
          if ( !v18 )
          {
LABEL_20:
            v10 = *(__m256i *)&r_weapon.weaponIdx;
            v11 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
            v12 = *(double *)&r_weapon.attachmentVariationIndices[21];
            v13 = *(_DWORD *)&r_weapon.weaponCamo;
            bg_lastFoundWeaponIndex = r_weapon.weaponIdx;
            goto LABEL_23;
          }
          if ( v17 != v19 )
          {
            v20 = v17 + 32;
            if ( (unsigned int)(v17 - 65) > 0x19 )
              v20 = v17;
            v17 = v20;
            v21 = v19 + 32;
            if ( (unsigned int)(v19 - 65) > 0x19 )
              v21 = v19;
            if ( v17 != v21 )
              break;
          }
          if ( !v17 )
            goto LABEL_20;
        }
        ++r_weapon.weaponIdx;
      }
      while ( r_weapon.weaponIdx < bg_lastParsedWeaponIndex + 1 );
    }
    v10 = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v11 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v12 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    v13 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  else
  {
    v10 = *(__m256i *)&r_weapon.weaponIdx;
    v11 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
    v12 = *(double *)&r_weapon.attachmentVariationIndices[21];
    v13 = *(_DWORD *)&r_weapon.weaponCamo;
  }
LABEL_23:
  if ( !*(_WORD *)&NULL_WEAPON.attachmentVariationIndices[21] )
  {
    if ( *name && (weapon = DB_FindXAssetHeader(ASSET_TYPE_WEAPON, name, 1).weapon) != NULL )
    {
      DB_FindXAssetHeader(ASSET_TYPE_WEAPON, name, 1);
      if ( !DB_IsXAssetDefault(ASSET_TYPE_WEAPON, name) )
      {
        v23 = bg_lastParsedWeaponIndex + 1;
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        bg_lastParsedWeaponIndex = v23;
        memset(&r_weapon, 0, 48);
        *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
        if ( v23 >= 0x226 )
        {
          LODWORD(v30) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( bg_lastParsedWeaponIndex ) < (unsigned)( ( sizeof( *array_counter( bg_weaponCompleteDefs ) ) + 0 ) )", "bg_lastParsedWeaponIndex doesn't index ARRAY_COUNT( bg_weaponCompleteDefs )\n\t%i not in [0, %i)", v30, 550) )
            __debugbreak();
          v23 = bg_lastParsedWeaponIndex;
        }
        v24 = truncate_cast<unsigned short,unsigned int>(v23);
        r_weapon.weaponIdx = v24;
        bg_weaponCompleteDefs[v24] = (WeaponCompleteDef *)weapon;
        BG_WeaponSetup_InitWeaponDefOverrides(v24);
        if ( !bgHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_setup.cpp", 771, ASSERT_TYPE_ASSERT, "(bgHandler)", (const char *)&queryFormat, "bgHandler") )
          __debugbreak();
        v25 = bgHandle->GetLootTable(bgHandle);
        BG_BrAmmoOverride(&r_weapon, (const GameTypeQuick_t)v5, v25);
        BG_SetupWeaponIndex(&r_weapon);
        BG_SetupWeaponLoot(&r_weapon);
        BG_SetupDynamicWeaponAttachmentIcons(weapon);
        if ( regWeap )
          regWeap(r_weapon.weaponIdx);
        v26 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
        v27 = *(_DWORD *)&r_weapon.weaponCamo;
        *(__m256i *)&result->weaponIdx = *(__m256i *)&r_weapon.weaponIdx;
        v28 = *(double *)&r_weapon.attachmentVariationIndices[21];
        goto LABEL_40;
      }
    }
    else
    {
      Com_DPrintf(17, "Couldn't find weapon \"%s\"\n", name);
    }
LABEL_39:
    v27 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    v26 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    *(__m256i *)&result->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v28 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
LABEL_40:
    *(_OWORD *)&result->attachmentVariationIndices[5] = v26;
    *(double *)&result->attachmentVariationIndices[21] = v28;
    *(_DWORD *)&result->weaponCamo = v27;
    return result;
  }
  *(__m256i *)&result->weaponIdx = v10;
  *(_OWORD *)&result->attachmentVariationIndices[5] = v11;
  *(double *)&result->attachmentVariationIndices[21] = v12;
  *(_DWORD *)&result->weaponCamo = v13;
  return result;
}

