/*
==============
Cloth_CreateGlobalWorld
==============
*/

void __fastcall Cloth_CreateGlobalWorld(const unsigned int globalWorldId)
{
  ?Cloth_CreateGlobalWorld@@YAXI@Z(globalWorldId);
}

/*
==============
Cloth_GetReadBones
==============
*/

const bitarray<768> *__fastcall Cloth_GetReadBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetReadBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_IsInstanceInUse
==============
*/

bool __fastcall Cloth_IsInstanceInUse(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_IsInstanceInUse@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_ClearErrorFlag
==============
*/

void Cloth_ClearErrorFlag(void)
{
  ?Cloth_ClearErrorFlag@@YAXXZ();
}

/*
==============
Cloth_GetInstanceOrientation
==============
*/

void __fastcall Cloth_GetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, vec4_t *orientation)
{
  ?Cloth_GetInstanceOrientation@@YAXIIAEATvec4_t@@@Z(globalWorldId, instanceId, orientation);
}

/*
==============
Cloth_GetOwnerType
==============
*/

Cloth_OwnerType __fastcall Cloth_GetOwnerType(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetOwnerType@@YA?AW4Cloth_OwnerType@@II@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_GetInstanceRuntimeMemoryRequirements
==============
*/

unsigned int __fastcall Cloth_GetInstanceRuntimeMemoryRequirements(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetInstanceRuntimeMemoryRequirements@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_GetWrittenBones
==============
*/

const bitarray<768> *__fastcall Cloth_GetWrittenBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetWrittenBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_HasGlobalWorld
==============
*/

bool __fastcall Cloth_HasGlobalWorld(const unsigned int globalWorldId)
{
  return ?Cloth_HasGlobalWorld@@YA_NI@Z(globalWorldId);
}

/*
==============
Cloth_SetupBootDvars
==============
*/

void Cloth_SetupBootDvars(void)
{
  ?Cloth_SetupBootDvars@@YAXXZ();
}

/*
==============
Cloth_IsInitialized
==============
*/

bool __fastcall Cloth_IsInitialized()
{
  return ?Cloth_IsInitialized@@YA_NXZ();
}

/*
==============
Cloth_Shutdown
==============
*/

void Cloth_Shutdown(void)
{
  ?Cloth_Shutdown@@YAXXZ();
}

/*
==============
Cloth_HasErrorFlag
==============
*/

bool __fastcall Cloth_HasErrorFlag()
{
  return ?Cloth_HasErrorFlag@@YA_NXZ();
}

/*
==============
Cloth_Init
==============
*/

void __fastcall Cloth_Init(unsigned int maxSupportedGlobalWorlds)
{
  ?Cloth_Init@@YAXI@Z(maxSupportedGlobalWorlds);
}

/*
==============
Cloth_FreeMemoryBuffer
==============
*/

void __fastcall Cloth_FreeMemoryBuffer(void *buffer)
{
  ?Cloth_FreeMemoryBuffer@@YAXPEAX@Z(buffer);
}

/*
==============
Cloth_GetInstanceBindPoseBased
==============
*/

bool __fastcall Cloth_GetInstanceBindPoseBased(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetInstanceBindPoseBased@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_DestroyGlobalWorld
==============
*/

void __fastcall Cloth_DestroyGlobalWorld(const unsigned int globalWorldId)
{
  ?Cloth_DestroyGlobalWorld@@YAXI@Z(globalWorldId);
}

/*
==============
Cloth_GetRefId
==============
*/

unsigned int __fastcall Cloth_GetRefId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetRefId@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_GetAccessedBones
==============
*/

const bitarray<768> *__fastcall Cloth_GetAccessedBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetAccessedBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_InstantiateAsset
==============
*/

unsigned int __fastcall Cloth_InstantiateAsset(const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int refId, const Cloth_OwnerType ownerType, const vec3_t *position, const vec4_t *orientationAsQuat, const DObj *dObj, const bool bindPoseBased)
{
  return ?Cloth_InstantiateAsset@@YAIIQEBUClothAsset@@IW4Cloth_OwnerType@@AEBTvec3_t@@AEBTvec4_t@@PEBUDObj@@_N@Z(globalWorldId, clothAsset, refId, ownerType, position, orientationAsQuat, dObj, bindPoseBased);
}

/*
==============
Cloth_GetInstancePosition
==============
*/

void __fastcall Cloth_GetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, vec3_t *position)
{
  ?Cloth_GetInstancePosition@@YAXIIAEATvec3_t@@@Z(globalWorldId, instanceId, position);
}

/*
==============
Cloth_AllocateMemoryBuffer
==============
*/

void *__fastcall Cloth_AllocateMemoryBuffer(const unsigned __int64 size, const char *name)
{
  return ?Cloth_AllocateMemoryBuffer@@YAPEAX_KPEBD@Z(size, name);
}

/*
==============
Cloth_GetMaxSupportedGlobalWorlds
==============
*/

unsigned int __fastcall Cloth_GetMaxSupportedGlobalWorlds()
{
  return ?Cloth_GetMaxSupportedGlobalWorlds@@YAIXZ();
}

/*
==============
Cloth_RebindInstance
==============
*/

void __fastcall Cloth_RebindInstance(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, const DObj *dObj, const bool bindPoseBased)
{
  ?Cloth_RebindInstance@@YAXIIAEBTvec3_t@@AEBTvec4_t@@PEBUDObj@@_N@Z(globalWorldId, instanceId, position, orientationAsQuat, dObj, bindPoseBased);
}

/*
==============
Cloth_GetInstanceList
==============
*/

void __fastcall Cloth_GetInstanceList(const unsigned int globalWorldId, unsigned int *instances, unsigned int *numInstances)
{
  ?Cloth_GetInstanceList@@YAXIPEAI0@Z(globalWorldId, instances, numInstances);
}

/*
==============
Cloth_DestroyInstance
==============
*/

void __fastcall Cloth_DestroyInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?Cloth_DestroyInstance@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_GetClothAsset
==============
*/

const ClothAsset *__fastcall Cloth_GetClothAsset(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_GetClothAsset@@YAPEBUClothAsset@@II@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_FlagError
==============
*/

void Cloth_FlagError(void)
{
  ?Cloth_FlagError@@YAXXZ();
}

/*
==============
Cloth_AllocateMemoryBuffer
==============
*/
void *Cloth_AllocateMemoryBuffer(const unsigned __int64 size, const char *name)
{
  if ( !s_clothInMemoryAllocationBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 93, ASSERT_TYPE_ASSERT, "(s_clothInMemoryAllocationBlock)", (const char *)&queryFormat, "s_clothInMemoryAllocationBlock") )
    __debugbreak();
  return PMem_Alloc(size, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, name);
}

/*
==============
Cloth_ClearErrorFlag
==============
*/
void Cloth_ClearErrorFlag(void)
{
  s_clothErrorFlag = 0;
}

/*
==============
Cloth_CreateGlobalWorld
==============
*/
void Cloth_CreateGlobalWorld(const unsigned int globalWorldId)
{
  int v2; 
  __int64 v3; 
  unsigned int v4; 

  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 241, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to CreateGlobalWorld when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId >= s_clothMaxSupportedGlobalWorlds )
  {
    v4 = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 242, ASSERT_TYPE_ASSERT, "(globalWorldId < Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to CreateGlobalWorld with invalid globalWorldId %i", "globalWorldId < Cloth_GetMaxSupportedGlobalWorlds()", v4) )
      __debugbreak();
  }
  v2 = s_clothGlobalWorldsCreated;
  if ( _bittest(&v2, globalWorldId) )
  {
    LODWORD(v3) = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 243, ASSERT_TYPE_ASSERT, "((s_clothGlobalWorldsCreated & (1 << globalWorldId)) == 0)", "%s\n\tCloth: Trying to CreateGlobalWorld twice for the same globalWorldId %i", "(s_clothGlobalWorldsCreated & (1 << globalWorldId)) == 0", v3) )
      __debugbreak();
  }
  HavokCloth_CreateGlobalWorld(globalWorldId);
  Cloth_Update_GlobalWorldCreated(globalWorldId);
  s_clothGlobalWorldsCreated |= 1 << globalWorldId;
}

/*
==============
Cloth_DestroyGlobalWorld
==============
*/
void Cloth_DestroyGlobalWorld(const unsigned int globalWorldId)
{
  int v2; 
  __int64 v3; 
  unsigned int v4; 

  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 261, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to DestroyGlobalWorld when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds )
  {
    v4 = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 262, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to DestroyGlobalWorld with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", v4) )
      __debugbreak();
  }
  v2 = s_clothGlobalWorldsCreated;
  if ( !_bittest(&v2, globalWorldId) )
  {
    LODWORD(v3) = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 263, ASSERT_TYPE_ASSERT, "((s_clothGlobalWorldsCreated & (1 << globalWorldId)) != 0)", "%s\n\tCloth: Trying to DestroyGlobalWorld when not initialized for globalWorldId %i", "(s_clothGlobalWorldsCreated & (1 << globalWorldId)) != 0", v3) )
      __debugbreak();
  }
  Cloth_Update_GlobalWorldDestroyed(globalWorldId);
  HavokCloth_DestroyGlobalWorld(globalWorldId);
  s_clothGlobalWorldsCreated &= ~(1 << globalWorldId);
}

/*
==============
Cloth_DestroyInstance
==============
*/
void Cloth_DestroyInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 318, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to DestroyInstance when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 319, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to DestroyInstance with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 320, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_DestroyInstance(globalWorldId, instanceId);
}

/*
==============
Cloth_FlagError
==============
*/
void Cloth_FlagError(void)
{
  s_clothErrorFlag = 1;
}

/*
==============
Cloth_FreeMemoryBuffer
==============
*/
void Cloth_FreeMemoryBuffer(void *buffer)
{
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 112, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
}

/*
==============
Cloth_GetAccessedBones
==============
*/
const bitarray<768> *Cloth_GetAccessedBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 463, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetAccessedBones when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 464, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetAccessedBones with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 465, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetAccessedBones(globalWorldId, instanceId);
}

/*
==============
Cloth_GetClothAsset
==============
*/
const ClothAsset *Cloth_GetClothAsset(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 381, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 382, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetClothAsset with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 383, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetClothAsset(globalWorldId, instanceId);
}

/*
==============
Cloth_GetInstanceBindPoseBased
==============
*/
bool Cloth_GetInstanceBindPoseBased(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 512, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetOrientation when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 513, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetOrientation with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 514, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetInstanceBindPoseBased(globalWorldId, instanceId);
}

/*
==============
Cloth_GetInstanceList
==============
*/
void Cloth_GetInstanceList(const unsigned int globalWorldId, unsigned int *instances, unsigned int *numInstances)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 350, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetInstanceList when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 351, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetInstanceList with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( !instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 352, ASSERT_TYPE_ASSERT, "(instances)", (const char *)&queryFormat, "instances") )
    __debugbreak();
  if ( !numInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 353, ASSERT_TYPE_ASSERT, "(numInstances)", (const char *)&queryFormat, "numInstances") )
    __debugbreak();
  HavokCloth_GetInstanceList(globalWorldId, instances, numInstances);
}

/*
==============
Cloth_GetInstanceOrientation
==============
*/
void Cloth_GetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, vec4_t *orientation)
{
  hkQuaternionf orientationa; 

  _RDI = orientation;
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 494, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetOrientation when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 495, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetOrientation with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 496, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_GetInstanceOrientation(globalWorldId, instanceId, &orientationa);
  __asm
  {
    vmovaps xmm0, xmmword ptr [rsp+78h+orientation.m_vec.m_quad]
    vmovups xmmword ptr [rdi], xmm0
  }
}

/*
==============
Cloth_GetInstancePosition
==============
*/
void Cloth_GetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, vec3_t *position)
{
  hkVector4f positiona; 

  _RSI = position;
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 479, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetPosition when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 480, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetPosition with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 481, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_GetInstancePosition(globalWorldId, instanceId, &positiona);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm1, xmm3, dword ptr [rsp+78h+position.m_quad]
    vmulss  xmm0, xmm3, dword ptr [rsp+78h+position.m_quad+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+78h+position.m_quad+8]
    vmovss  dword ptr [rsi], xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
Cloth_GetInstanceRuntimeMemoryRequirements
==============
*/
unsigned int Cloth_GetInstanceRuntimeMemoryRequirements(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 528, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetOrientation when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 529, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetOrientation with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 530, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetInstanceRuntimeMemoryRequirements(globalWorldId, instanceId);
}

/*
==============
Cloth_GetMaxSupportedGlobalWorlds
==============
*/
__int64 Cloth_GetMaxSupportedGlobalWorlds()
{
  return s_clothMaxSupportedGlobalWorlds;
}

/*
==============
Cloth_GetOwnerType
==============
*/
Cloth_OwnerType Cloth_GetOwnerType(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 414, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetRefId when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 415, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetRefId with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 416, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetOwnerType(globalWorldId, instanceId);
}

/*
==============
Cloth_GetReadBones
==============
*/
const bitarray<768> *Cloth_GetReadBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 431, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetReadBones when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 432, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetReadBones with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 433, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetReadBones(globalWorldId, instanceId);
}

/*
==============
Cloth_GetRefId
==============
*/
unsigned int Cloth_GetRefId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 398, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetRefId when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 399, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetRefId with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 400, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetRefId(globalWorldId, instanceId);
}

/*
==============
Cloth_GetWrittenBones
==============
*/
const bitarray<768> *Cloth_GetWrittenBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 447, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetWrittenBones when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 448, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetWrittenBones with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 449, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_GetWrittenBones(globalWorldId, instanceId);
}

/*
==============
Cloth_HasErrorFlag
==============
*/
_BOOL8 Cloth_HasErrorFlag()
{
  return s_clothErrorFlag;
}

/*
==============
Cloth_HasGlobalWorld
==============
*/
unsigned __int8 Cloth_HasGlobalWorld(const unsigned int globalWorldId)
{
  int v2; 
  unsigned int v4; 

  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 281, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to test HasGlobalWorld when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds )
  {
    v4 = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 282, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to test HasGlobalWorld with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", v4) )
      __debugbreak();
  }
  v2 = s_clothGlobalWorldsCreated;
  return _bittest(&v2, globalWorldId);
}

/*
==============
Cloth_Init
==============
*/
void Cloth_Init(unsigned int maxSupportedGlobalWorlds)
{
  if ( s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 179, ASSERT_TYPE_ASSERT, "(!s_clothInitialized)", "%s\n\tCloth: Trying to initialize twice", "!s_clothInitialized") )
    __debugbreak();
  if ( maxSupportedGlobalWorlds > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 182, ASSERT_TYPE_ASSERT, "(maxSupportedGlobalWorlds <= 32)", (const char *)&queryFormat, "maxSupportedGlobalWorlds <= 32") )
    __debugbreak();
  s_clothMaxSupportedGlobalWorlds = maxSupportedGlobalWorlds;
  Cloth_SetupDvars();
  s_clothInMemoryAllocationBlock = 1;
  PMem_BeginAlloc(s_clothPMemName, PMEM_STACK_GAME);
  Cloth_Update_AllocateMemory();
  Cloth_Debug_AllocateMemory();
  HavokCloth_Init();
  PMem_EndAlloc(s_clothPMemName, PMEM_STACK_GAME);
  s_clothInMemoryAllocationBlock = 0;
  s_clothInitialized = 1;
}

/*
==============
Cloth_InstantiateAsset
==============
*/
unsigned int Cloth_InstantiateAsset(const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int refId, const Cloth_OwnerType ownerType, const vec3_t *position, const vec4_t *orientationAsQuat, const DObj *dObj, const bool bindPoseBased)
{
  bool v21; 
  bool v22; 
  hkQuaternionf *orientation; 
  DObj *v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  hkQuaternionf v52; 
  hkVector4f v53; 

  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 292, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to InstantiateAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 293, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to InstantiateAsset with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 294, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( (unsigned int)ownerType >= Cloth_OwnerType_Count )
  {
    LODWORD(v44) = 2;
    LODWORD(orientation) = ownerType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 295, ASSERT_TYPE_ASSERT, "(unsigned)( ownerType ) < (unsigned)( Cloth_OwnerType_Count )", "ownerType doesn't index Cloth_OwnerType_Count\n\t%i not in [0, %i)", orientation, v44) )
      __debugbreak();
  }
  _RDI = position;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 296, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  _RBX = orientationAsQuat;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_34;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_34;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
    goto LABEL_34;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  v21 = (v51 & 0x7F800000u) < 0x7F800000;
  if ( (v51 & 0x7F800000) == 2139095040 )
  {
LABEL_34:
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 297, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", (const char *)&queryFormat, "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )");
    v21 = 0;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 298, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientationAsQuat ))", (const char *)&queryFormat, "Vec4IsNormalized( orientationAsQuat )") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 299, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0C8h+var_68.m_quad], xmm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  dword ptr [rsp+0C8h+var_68.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0C8h+var_68.m_quad+8], xmm1
    vmovss  dword ptr [rsp+0C8h+var_68.m_quad+0Ch], xmm2
    vmovaps xmmword ptr [rsp+0C8h+var_78.m_vec.m_quad], xmm0
  }
  return HavokCloth_InstantiateAsset(globalWorldId, clothAsset, refId, ownerType, &v53, &v52, dObj, bindPoseBased);
}

/*
==============
Cloth_IsInitialized
==============
*/
_BOOL8 Cloth_IsInitialized()
{
  return s_clothInitialized;
}

/*
==============
Cloth_IsInstanceInUse
==============
*/
bool Cloth_IsInstanceInUse(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 364, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to GetClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 365, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to GetClothAsset with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 366, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_IsInstanceInUse(globalWorldId, instanceId);
}

/*
==============
Cloth_RebindInstance
==============
*/
void Cloth_RebindInstance(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, const DObj *dObj, const bool bindPoseBased)
{
  bool v17; 
  bool v18; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  hkQuaternionf orientation; 
  hkVector4f positiona; 

  _RBX = orientationAsQuat;
  _RDI = position;
  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 331, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to InstantiateAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > s_clothMaxSupportedGlobalWorlds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 332, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", "%s\n\tCloth: Trying to InstantiateAsset with invalid globalWorldId %i", "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()", globalWorldId) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 333, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", (const char *)&queryFormat, "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  v17 = (v44 & 0x7F800000u) < 0x7F800000;
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_28:
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 334, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", (const char *)&queryFormat, "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )");
    v17 = 0;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 335, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( orientationAsQuat ))", (const char *)&queryFormat, "Vec4IsNormalized( orientationAsQuat )") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 336, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0A8h+position.m_quad], xmm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  dword ptr [rsp+0A8h+position.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0A8h+position.m_quad+0Ch], xmm2
    vmovaps xmmword ptr [rsp+0A8h+orientation.m_vec.m_quad], xmm0
    vmovss  dword ptr [rsp+0A8h+position.m_quad+8], xmm1
  }
  HavokCloth_RebindInstance(globalWorldId, instanceId, &positiona, &orientation, dObj, bindPoseBased);
}

/*
==============
Cloth_SetupBootDvars
==============
*/
void Cloth_SetupBootDvars(void)
{
  ;
}

/*
==============
Cloth_SetupDvars
==============
*/

void __fastcall Cloth_SetupDvars(__int64 a1, double _XMM1_8)
{
  const dvar_t *v5; 

  Dvar_BeginPermanentRegistration();
  DCONST_DVARINT_cloth_MaxInstances = Dvar_RegisterInt("cloth_MaxInstances", 256, 1, 1024, 0x40004u, "Cloth: Maximum number of Instances Per Global World");
  DCONST_DVARINT_cloth_LODOverride = Dvar_RegisterInt("cloth_LODOverride", -1, -1, 6, 0x40004u, "Cloth: Override the Simulation LOD level");
  DVARBOOL_cloth_Debug_ListAssets = Dvar_RegisterBool("LMKQSLOPML", 0, 4u, "Cloth: Debug draw: List all Assets");
  DVARINT_cloth_Debug_ShowAssetDetails = Dvar_RegisterInt("QKKRMMLRN", -1, -1, 512, 4u, "Cloth: Debug draw: Show details for a specific asset");
  DVARBOOL_cloth_Debug_ListInstances = Dvar_RegisterBool("MPTTMQRPOS", 0, 4u, "Cloth: Debug draw: List all Instances");
  DVARINT_cloth_Debug_ShowInstanceDetails = Dvar_RegisterInt("LOMLPTLMLM", -1, -1, 512, 4u, "Cloth: Debug draw: Show details for a specific instance");
  DVARBOOL_cloth_Debug_ShowInstanceSkeleton = Dvar_RegisterBool("NQTTLORPNP", 0, 4u, "Cloth: Debug draw: Show skeleton for selected instance - may affect cloth state");
  DVARBOOL_cloth_debug_displayVectorField = Dvar_RegisterBool("LNSSKKKKP", 0, 4u, "Cloth: Debug draw: Vector field data");
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; max
    vmovss  xmm2, cs:__real@c0800000; min
  }
  DCONST_DVARBOOL_cloth_VectorFieldOverride = Dvar_RegisterBool("cloth_VectorFieldOverride", 0, 0x40004u, "Cloth: Override the VectorField with Debug values for testing");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v5 = Dvar_RegisterFloat("cloth_VectorFieldOverrideDirection", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Cloth: When overriding the vector field code, what direction is the wind coming from");
  __asm { vmovss  xmm3, cs:__real@459c4000; max }
  DCONST_DVARFLT_cloth_VectorFieldOverrideDirection = v5;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@43480000; value
  }
  DCONST_DVARFLT_cloth_VectorFieldOverrideStrength = Dvar_RegisterFloat("cloth_VectorFieldOverrideStrength", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Cloth: When overriding the vector field code, what strength is the wind");
  DVARBOOL_cloth_Debug_Speed_ShowSpeeds = Dvar_RegisterBool("RNKNLTNRT", 0, 4u, "Cloth: Debug draw: Show cloth speeds");
  DVARINT_cloth_Debug_Speed_ShowInstanceSpeed = Dvar_RegisterInt("MKOSKSMRR", -1, -1, 512, 4u, "Cloth: Debug draw: Show speed for a specific instance");
  DVARBOOL_cloth_Debug_Sound_ShowSounds = Dvar_RegisterBool("MQMPKTPTNT", 0, 4u, "Cloth: Debug draw: Show sound for a specific instance");
  DVARINT_cloth_Debug_Sound_ShowInstanceSound = Dvar_RegisterInt("MRSOMKTOQL", -1, -1, 512, 4u, "Cloth: Debug draw: Show sound for a specific instance");
  DVARBOOL_cloth_Debug_Perf_ShowBudgets = Dvar_RegisterBool("PLQKQRQSR", 0, 4u, "Cloth: Debug draw: Show performance budgets");
  DVARINT_cloth_Debug_DisplayOffsetX = Dvar_RegisterInt("MSQMRMQPSN", 0, -500, 500, 4u, "Cloth: Debug draw: Move the screen text in the X direction");
  DVARINT_cloth_Debug_DisplayOffsetY = Dvar_RegisterInt("RTKLKRLPK", 0, -15000, 500, 4u, "Cloth: Debug draw: Move the screen text in the Y direction");
  DVARBOOL_cloth_Debug_Dump = Dvar_RegisterBool("OMKOTSKOLM", 0, 4u, "Cloth: Debug draw: Dump output to TTY");
  Dvar_EndPermanentRegistration();
}

/*
==============
Cloth_Shutdown
==============
*/
void Cloth_Shutdown(void)
{
  StreamerMemLoan result; 

  if ( !s_clothInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\cloth.cpp", 209, ASSERT_TYPE_ASSERT, "(s_clothInitialized)", "%s\n\tCloth: Trying to shutdown when not initialized", "s_clothInitialized") )
    __debugbreak();
  HavokCloth_Shutdown();
  Cloth_Debug_FreeMemory();
  Cloth_Update_FreeMemory();
  PMem_Free(&result, s_clothPMemName, PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_clothInitialized = 0;
}

