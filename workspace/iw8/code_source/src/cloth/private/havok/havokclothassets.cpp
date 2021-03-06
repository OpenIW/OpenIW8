/*
==============
HavokCloth_GetAssetList
==============
*/

void __fastcall HavokCloth_GetAssetList(const ClothAsset **const assets, unsigned int *numAssets, bool (__fastcall *optionalSort)(const ClothAsset *, const ClothAsset *))
{
  ?HavokCloth_GetAssetList@@YAXQEAPEBUClothAsset@@PEAIP6A_NPEBU1@2@Z@Z(assets, numAssets, optionalSort);
}

/*
==============
HavokCloth_CopyClothAsset
==============
*/

void __fastcall HavokCloth_CopyClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?HavokCloth_CopyClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
HavokCloth_Assets_Shutdown
==============
*/

void HavokCloth_Assets_Shutdown(void)
{
  ?HavokCloth_Assets_Shutdown@@YAXXZ();
}

/*
==============
HavokCloth_AddClothAsset
==============
*/

void __fastcall HavokCloth_AddClothAsset(ClothAsset *clothAsset)
{
  ?HavokCloth_AddClothAsset@@YAXPEAUClothAsset@@@Z(clothAsset);
}

/*
==============
HavokCloth_SwapClothAsset
==============
*/

void __fastcall HavokCloth_SwapClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?HavokCloth_SwapClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
HavokCloth_UnlockAssetWrite
==============
*/

void HavokCloth_UnlockAssetWrite(void)
{
  ?HavokCloth_UnlockAssetWrite@@YAXXZ();
}

/*
==============
HavokCloth_LockAssetWrite
==============
*/

void HavokCloth_LockAssetWrite(void)
{
  ?HavokCloth_LockAssetWrite@@YAXXZ();
}

/*
==============
HavokCloth_LockAssetRead
==============
*/

void HavokCloth_LockAssetRead(void)
{
  ?HavokCloth_LockAssetRead@@YAXXZ();
}

/*
==============
HavokCloth_UnlockAssetRead
==============
*/

void HavokCloth_UnlockAssetRead(void)
{
  ?HavokCloth_UnlockAssetRead@@YAXXZ();
}

/*
==============
HavokCloth_GetAsset
==============
*/

const hclClothContainer *__fastcall HavokCloth_GetAsset(const ClothAsset *const asset)
{
  return ?HavokCloth_GetAsset@@YAPEBUhclClothContainer@@QEBUClothAsset@@@Z(asset);
}

/*
==============
HavokCloth_Assets_Init
==============
*/

void HavokCloth_Assets_Init(void)
{
  ?HavokCloth_Assets_Init@@YAXXZ();
}

/*
==============
HavokCloth_MoveClothAsset
==============
*/

void __fastcall HavokCloth_MoveClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?HavokCloth_MoveClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
HavokCloth_ReleaseClothAsset
==============
*/

void __fastcall HavokCloth_ReleaseClothAsset(ClothAsset *clothAsset, bool unloadData)
{
  ?HavokCloth_ReleaseClothAsset@@YAXPEAUClothAsset@@_N@Z(clothAsset, unloadData);
}

/*
==============
HavokCloth_AddClothAsset
==============
*/
void HavokCloth_AddClothAsset(ClothAsset *clothAsset)
{
  hkSerialize::InplaceLoad *v2; 
  void *m_addr; 
  int m_hashMod; 
  unsigned __int32 v5; 
  unsigned __int32 v6; 
  int v7; 
  int v8; 
  ClothAsset *key; 
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned __int32 v14; 
  unsigned __int32 v15; 
  unsigned int v16; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  ClothAsset *v18; 
  __int64 v19; 
  hkSerialize::InplaceLoad v20; 
  hkReflect::Var result; 
  hkMemoryAllocator alloc; 

  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 116, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset", -2i64) )
    __debugbreak();
  if ( !clothAsset->havokData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 117, ASSERT_TYPE_ASSERT, "(clothAsset->havokData)", (const char *)&queryFormat, "clothAsset->havokData") )
    __debugbreak();
  if ( !clothAsset->havokDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 118, ASSERT_TYPE_ASSERT, "(clothAsset->havokDataSize > 0)", (const char *)&queryFormat, "clothAsset->havokDataSize > 0") )
    __debugbreak();
  hkSerialize::InplaceLoad::InplaceLoad(&v20);
  hkSerialize::InplaceLoad::toVar(v2, &result, clothAsset->havokData, clothAsset->havokDataSize, (const hkReflect::QualifiedType<hkReflect::Type>)&hclClothContainer::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &hclClothContainer::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    m_addr = NULL;
  }
  hkSerialize::InplaceLoad::~InplaceLoad(&v20);
  if ( !m_addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 122, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  HavokCloth_LockAssetWrite();
  if ( !s_havokClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 127, ASSERT_TYPE_ASSERT, "(s_havokClothAssets)", "%s\n\tTrying to Add a cloth asset but the container is NULL", "s_havokClothAssets") )
    __debugbreak();
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v5 = _byteswap_ulong(-1640531535 * (_DWORD)clothAsset), v6 = _byteswap_ulong(-1640531535 * HIDWORD(clothAsset)), v7 = m_hashMod & (v6 ^ ((v5 >> 2) + v5 + (v6 << 6) - 1640531527)), v8 = v7, key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v7].key, key == (ClothAsset *)-1i64) )
  {
LABEL_30:
    v8 = m_hashMod + 1;
  }
  else
  {
    while ( key != clothAsset )
    {
      v7 = m_hashMod & (v7 + 1);
      v8 = v7;
      key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v7].key;
      if ( key == (ClothAsset *)-1i64 )
        goto LABEL_30;
    }
  }
  if ( v8 <= m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 128, ASSERT_TYPE_ASSERT, "(!s_havokClothAssets->hasKey( clothAsset ))", "%s\n\tCloth asset already exists in container", "!s_havokClothAssets->hasKey( clothAsset )") )
    __debugbreak();
  v10 = s_havokClothAssets;
  v11 = (unsigned int)hkMemHeapAllocator();
  v12 = v10->m_map.m_hashMod;
  if ( 2 * v10->m_map.m_numElems > v12 )
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::resizeTable(&v10->m_map, &alloc, v11);
    v12 = v10->m_map.m_hashMod;
  }
  v13 = 1;
  v14 = _byteswap_ulong(-1640531535 * (_DWORD)clothAsset);
  v15 = _byteswap_ulong(-1640531535 * HIDWORD(clothAsset));
  v16 = v12 & (v15 ^ ((v14 >> 2) + v14 + (v15 << 6) - 1640531527));
  m_elem = v10->m_map.m_elem;
  v18 = (ClothAsset *)v10->m_map.m_elem[v16].key;
  if ( v18 != (ClothAsset *)-1i64 )
  {
    while ( v18 != clothAsset )
    {
      v16 = v10->m_map.m_hashMod & (v16 + 1);
      v18 = (ClothAsset *)m_elem[v16].key;
      if ( v18 == (ClothAsset *)-1i64 )
        goto LABEL_41;
    }
    v13 = 0;
  }
LABEL_41:
  v10->m_map.m_numElems += v13;
  v19 = (int)v16;
  m_elem[v19].key = (unsigned __int64)clothAsset;
  v10->m_map.m_elem[v19].val = (unsigned __int64)m_addr;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 129, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->insert( clothAsset, container ))", (const char *)&queryFormat, "s_havokClothAssets->insert( clothAsset, container )") )
    __debugbreak();
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

/*
==============
HavokCloth_Assets_Init
==============
*/
void HavokCloth_Assets_Init(void)
{
  hkMemoryRouter *Value; 
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v1; 

  InitializeSRWLock((PSRWLOCK)&s_havokClothAssetLock);
  s_havokClothAssetLock.initialized = -1412623820;
  s_havokClothAssetLock.acquireLock = 0;
  s_havokClothAssetLock.writeThreadId = 0;
  if ( s_havokClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 67, ASSERT_TYPE_ASSERT, "(s_havokClothAssets == nullptr)", "%s\n\tHavokCloth Init: havok cloth assets should be NULL", "s_havokClothAssets == HK_NULL") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v1 = (hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  if ( v1 )
  {
    v1->m_map.m_elem = NULL;
    v1->m_map.m_numElems = 0;
    v1->m_map.m_hashMod = -1;
    s_havokClothAssets = v1;
  }
  else
  {
    s_havokClothAssets = NULL;
  }
}

/*
==============
HavokCloth_Assets_Shutdown
==============
*/
void HavokCloth_Assets_Shutdown(void)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v0; 
  hkMemoryRouter *Value; 
  __int64 v2; 
  volatile int acquireLock; 

  if ( !s_havokClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 76, ASSERT_TYPE_ASSERT, "(s_havokClothAssets)", "%s\n\tHavokCloth Shutdown: havok cloth assets is NULL", "s_havokClothAssets") )
    __debugbreak();
  if ( (s_havokClothAssets->m_map.m_numElems & 0x7FFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 77, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->getSize() == 0)", "%s\n\tHavokCloth Shutdown: havok cloth assets should be empty", "s_havokClothAssets->getSize() == 0") )
    __debugbreak();
  v0 = s_havokClothAssets;
  if ( s_havokClothAssets )
  {
    hkMap<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>,hkContainerHeapAllocator>::~hkMap<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>,hkContainerHeapAllocator>(&s_havokClothAssets->m_map);
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, v0, 16);
  }
  s_havokClothAssets = NULL;
  s_havokClothAssetLock.initialized = 0;
  if ( s_havokClothAssetLock.acquireLock )
  {
    acquireLock = s_havokClothAssetLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
      __debugbreak();
  }
  if ( s_havokClothAssetLock.writeThreadId )
  {
    LODWORD(v2) = s_havokClothAssetLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64) )
      __debugbreak();
  }
}

/*
==============
HavokCloth_CopyClothAsset
==============
*/
void HavokCloth_CopyClothAsset(ClothAsset *from, ClothAsset *to)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v4; 
  int m_hashMod; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  int v8; 
  int v9; 
  ClothAsset *key; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  int v12; 
  unsigned __int64 val; 
  unsigned __int32 v14; 
  unsigned __int32 v15; 
  unsigned int v16; 
  int v17; 
  ClothAsset *v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned __int32 v22; 
  unsigned __int32 v23; 
  int v24; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *v25; 
  unsigned int v26; 
  ClothAsset *v27; 
  __int64 v28; 
  hkMemoryAllocator alloc; 

  HavokCloth_LockAssetWrite();
  v4 = s_havokClothAssets;
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v6 = _byteswap_ulong(-1640531535 * (_DWORD)from), v7 = _byteswap_ulong(-1640531535 * HIDWORD(from)), v8 = m_hashMod & (v7 ^ ((v6 >> 2) + v6 + (v7 << 6) - 1640531527)), v9 = v8, key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key, key == (ClothAsset *)-1i64) )
  {
LABEL_5:
    v9 = m_hashMod + 1;
  }
  else
  {
    while ( key != from )
    {
      v8 = m_hashMod & (v8 + 1);
      v9 = v8;
      key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key;
      if ( key == (ClothAsset *)-1i64 )
        goto LABEL_5;
    }
  }
  if ( v9 > m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 226, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( fromIt ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( fromIt )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  m_elem = v4->m_map.m_elem;
  v12 = v4->m_map.m_hashMod;
  val = v4->m_map.m_elem[v9].val;
  if ( v12 <= 0 || (v14 = _byteswap_ulong(-1640531535 * (_DWORD)to), v15 = _byteswap_ulong(-1640531535 * HIDWORD(to)), v16 = v12 & (v15 ^ ((v14 >> 2) + v14 + (v15 << 6) - 1640531527)), v17 = v16, v18 = (ClothAsset *)m_elem[v16].key, v18 == (ClothAsset *)-1i64) )
  {
LABEL_14:
    v17 = v12 + 1;
  }
  else
  {
    while ( v18 != to )
    {
      v16 = v12 & (v16 + 1);
      v17 = v16;
      v18 = (ClothAsset *)m_elem[v16].key;
      if ( v18 == (ClothAsset *)-1i64 )
        goto LABEL_14;
    }
  }
  if ( v17 <= v12 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 232, ASSERT_TYPE_ASSERT, "(!s_havokClothAssets->hasKey( to ))", (const char *)&queryFormat, "!s_havokClothAssets->hasKey( to )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  v19 = (unsigned int)hkMemHeapAllocator();
  v20 = v4->m_map.m_hashMod;
  if ( 2 * v4->m_map.m_numElems > v20 )
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::resizeTable(&v4->m_map, &alloc, v19);
    v20 = v4->m_map.m_hashMod;
  }
  v21 = 1;
  v22 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v23 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v24 = v23 ^ ((v22 >> 2) + v22 + (v23 << 6) - 1640531527);
  v25 = v4->m_map.m_elem;
  v26 = v20 & v24;
  v27 = (ClothAsset *)v4->m_map.m_elem[v26].key;
  if ( v27 != (ClothAsset *)-1i64 )
  {
    while ( v27 != to )
    {
      v26 = v4->m_map.m_hashMod & (v26 + 1);
      v27 = (ClothAsset *)v25[v26].key;
      if ( v27 == (ClothAsset *)-1i64 )
        goto LABEL_26;
    }
    v21 = 0;
  }
LABEL_26:
  v4->m_map.m_numElems += v21;
  v28 = (int)v26;
  v25[v28].key = (unsigned __int64)to;
  v4->m_map.m_elem[v28].val = val;
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

/*
==============
HavokCloth_GetAsset
==============
*/
const hclClothContainer *HavokCloth_GetAsset(const ClothAsset *const asset)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v2; 
  int m_hashMod; 
  unsigned __int32 v4; 
  unsigned __int32 v5; 
  int v6; 
  int v7; 
  const ClothAsset *key; 
  unsigned __int64 val; 

  Sys_CheckAcquireLock(&s_havokClothAssetLock);
  AcquireSRWLockShared((PSRWLOCK)&s_havokClothAssetLock);
  v2 = s_havokClothAssets;
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v4 = _byteswap_ulong(-1640531535 * (_DWORD)asset), v5 = _byteswap_ulong(-1640531535 * HIDWORD(asset)), v6 = m_hashMod & (v5 ^ ((v4 >> 2) + v4 + (v5 << 6) - 1640531527)), v7 = v6, key = (const ClothAsset *)s_havokClothAssets->m_map.m_elem[v6].key, key == (const ClothAsset *)-1i64) )
  {
LABEL_5:
    v7 = m_hashMod + 1;
  }
  else
  {
    while ( key != asset )
    {
      v6 = m_hashMod & (v6 + 1);
      v7 = v6;
      key = (const ClothAsset *)s_havokClothAssets->m_map.m_elem[v6].key;
      if ( key == (const ClothAsset *)-1i64 )
        goto LABEL_5;
    }
  }
  if ( v7 > m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 269, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( it ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( it )") )
      __debugbreak();
    v2 = s_havokClothAssets;
  }
  val = v2->m_map.m_elem[v7].val;
  ReleaseSRWLockShared((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
  return (const hclClothContainer *)val;
}

/*
==============
HavokCloth_GetAssetList
==============
*/
void HavokCloth_GetAssetList(const ClothAsset **const assets, unsigned int *numAssets, bool (*optionalSort)(const ClothAsset *, const ClothAsset *))
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v6; 
  int v7; 
  __int64 m_hashMod; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  __int64 i; 
  __int64 v11; 
  __int64 v12; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *v13; 

  HavokCloth_LockAssetWrite();
  v6 = s_havokClothAssets;
  v7 = 0;
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    m_elem = s_havokClothAssets->m_map.m_elem;
    for ( i = 0i64; i <= m_hashMod; ++i )
    {
      if ( m_elem->key != -1i64 )
        break;
      ++v7;
      ++m_elem;
    }
  }
  if ( v7 <= (int)m_hashMod )
  {
    do
    {
      assets[(*numAssets)++] = (const ClothAsset *)v6->m_map.m_elem[v7].key;
      v11 = v6->m_map.m_hashMod;
      if ( ++v7 > (int)v11 )
        break;
      v12 = v7;
      v13 = &v6->m_map.m_elem[v7];
      do
      {
        if ( v13->key != -1i64 )
          break;
        ++v7;
        ++v12;
        ++v13;
      }
      while ( v12 <= v11 );
    }
    while ( v7 <= (int)v11 );
  }
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
  if ( optionalSort )
  {
    if ( (int)*numAssets > 1 )
      hkAlgorithm::quickSortRecursive<ClothAsset const *,bool (*)(ClothAsset const *,ClothAsset const *)>(assets, 0, *numAssets - 1, optionalSort);
  }
}

/*
==============
HavokCloth_LockAssetRead
==============
*/
void HavokCloth_LockAssetRead(void)
{
  Sys_CheckAcquireLock(&s_havokClothAssetLock);
  AcquireSRWLockShared((PSRWLOCK)&s_havokClothAssetLock);
}

/*
==============
HavokCloth_LockAssetWrite
==============
*/
void HavokCloth_LockAssetWrite(void)
{
  int v0; 

  Sys_CheckAcquireLock(&s_havokClothAssetLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  s_havokClothAssetLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_havokClothAssetLock.writeThreadId )
  {
    v0 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
HavokCloth_MoveClothAsset
==============
*/
void HavokCloth_MoveClothAsset(ClothAsset *from, ClothAsset *to)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v4; 
  int m_hashMod; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  unsigned int v8; 
  Dummy *v9; 
  ClothAsset *key; 
  unsigned __int32 v11; 
  unsigned __int32 v12; 
  unsigned int v13; 
  Dummy *v14; 
  ClothAsset *v15; 
  unsigned __int64 val; 
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned __int32 v21; 
  unsigned __int32 v22; 
  int v23; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  unsigned int v25; 
  ClothAsset *v26; 
  __int64 v27; 
  hkMemoryAllocator alloc; 

  HavokCloth_LockAssetWrite();
  v4 = s_havokClothAssets;
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v6 = _byteswap_ulong(-1640531535 * (_DWORD)from), v7 = _byteswap_ulong(-1640531535 * HIDWORD(from)), v8 = m_hashMod & (v7 ^ ((v6 >> 2) + v6 + (v7 << 6) - 1640531527)), v9 = (Dummy *)v8, key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key, key == (ClothAsset *)-1i64) )
  {
LABEL_5:
    v9 = (Dummy *)(m_hashMod + 1);
  }
  else
  {
    while ( key != from )
    {
      v8 = m_hashMod & (v8 + 1);
      v9 = (Dummy *)v8;
      key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key;
      if ( key == (ClothAsset *)-1i64 )
        goto LABEL_5;
    }
  }
  if ( m_hashMod <= 0 || (v11 = _byteswap_ulong(-1640531535 * (_DWORD)to), v12 = _byteswap_ulong(-1640531535 * HIDWORD(to)), v13 = m_hashMod & (v12 ^ ((v11 >> 2) + v11 + (v12 << 6) - 1640531527)), v14 = (Dummy *)v13, v15 = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v13].key, v15 == (ClothAsset *)-1i64) )
  {
LABEL_10:
    v14 = (Dummy *)(m_hashMod + 1);
  }
  else
  {
    while ( v15 != to )
    {
      v13 = m_hashMod & (v13 + 1);
      v14 = (Dummy *)v13;
      v15 = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v13].key;
      if ( v15 == (ClothAsset *)-1i64 )
        goto LABEL_10;
    }
  }
  if ( (int)v9 > m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 200, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( fromIt ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( fromIt )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  if ( (int)v14 > v4->m_map.m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 201, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( toIt ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( toIt )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  val = v4->m_map.m_elem[(int)v9].val;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&v4->m_map, v9);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokClothAssets->m_map, v14);
  v17 = s_havokClothAssets;
  *(__m256i *)&to->name = *(__m256i *)&from->name;
  *(__m256i *)&to->boneMappingSetCount = *(__m256i *)&from->boneMappingSetCount;
  *(__m256i *)&to->simulationLodCount = *(__m256i *)&from->simulationLodCount;
  *(__m256i *)&to->speedBlendSpeed = *(__m256i *)&from->speedBlendSpeed;
  v18 = (unsigned int)hkMemHeapAllocator();
  v19 = v17->m_map.m_hashMod;
  if ( 2 * v17->m_map.m_numElems > v19 )
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::resizeTable(&v17->m_map, &alloc, v18);
    v19 = v17->m_map.m_hashMod;
  }
  v20 = 1;
  v21 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v22 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v23 = v22 ^ ((v21 >> 2) + v21 + (v22 << 6) - 1640531527);
  m_elem = v17->m_map.m_elem;
  v25 = v19 & v23;
  v26 = (ClothAsset *)v17->m_map.m_elem[v25].key;
  if ( v26 != (ClothAsset *)-1i64 )
  {
    while ( v26 != to )
    {
      v25 = v17->m_map.m_hashMod & (v25 + 1);
      v26 = (ClothAsset *)m_elem[v25].key;
      if ( v26 == (ClothAsset *)-1i64 )
        goto LABEL_26;
    }
    v20 = 0;
  }
LABEL_26:
  v17->m_map.m_numElems += v20;
  v27 = (int)v25;
  m_elem[v27].key = (unsigned __int64)to;
  v17->m_map.m_elem[v27].val = val;
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

/*
==============
HavokCloth_ReleaseClothAsset
==============
*/
void HavokCloth_ReleaseClothAsset(ClothAsset *clothAsset, bool unloadData)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v4; 
  int m_hashMod; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  unsigned int v8; 
  Dummy *v9; 
  ClothAsset *key; 

  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 138, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( !clothAsset->havokData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 139, ASSERT_TYPE_ASSERT, "(clothAsset->havokData)", (const char *)&queryFormat, "clothAsset->havokData") )
    __debugbreak();
  if ( !clothAsset->havokDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 140, ASSERT_TYPE_ASSERT, "(clothAsset->havokDataSize > 0)", (const char *)&queryFormat, "clothAsset->havokDataSize > 0") )
    __debugbreak();
  HavokCloth_LockAssetWrite();
  v4 = s_havokClothAssets;
  if ( !s_havokClothAssets )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 145, ASSERT_TYPE_ASSERT, "(s_havokClothAssets)", "%s\n\tTrying to Release a cloth asset but the container is NULL", "s_havokClothAssets") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  m_hashMod = v4->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v6 = _byteswap_ulong(-1640531535 * HIDWORD(clothAsset)), v7 = _byteswap_ulong(-1640531535 * (_DWORD)clothAsset), v8 = m_hashMod & (v6 ^ ((v7 >> 2) + v7 + (v6 << 6) - 1640531527)), v9 = (Dummy *)v8, key = (ClothAsset *)v4->m_map.m_elem[v8].key, key == (ClothAsset *)-1i64) )
  {
LABEL_18:
    v9 = (Dummy *)(m_hashMod + 1);
  }
  else
  {
    while ( key != clothAsset )
    {
      v8 = m_hashMod & (v8 + 1);
      v9 = (Dummy *)v8;
      key = (ClothAsset *)v4->m_map.m_elem[v8].key;
      if ( key == (ClothAsset *)-1i64 )
        goto LABEL_18;
    }
  }
  if ( (int)v9 > m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 146, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->remove( clothAsset ).isSuccess())", (const char *)&queryFormat, "s_havokClothAssets->remove( clothAsset ).isSuccess()") )
      __debugbreak();
  }
  else
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&v4->m_map, v9);
  }
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
  if ( unloadData )
    hkSerialize::InplaceLoad::unload(clothAsset->havokData, clothAsset->havokDataSize);
}

/*
==============
HavokCloth_SwapClothAsset
==============
*/
void HavokCloth_SwapClothAsset(ClothAsset *from, ClothAsset *to)
{
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v4; 
  int m_hashMod; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  unsigned int v8; 
  Dummy *v9; 
  ClothAsset *key; 
  unsigned __int32 v11; 
  unsigned __int32 v12; 
  unsigned int v13; 
  Dummy *v14; 
  ClothAsset *v15; 
  unsigned __int64 val; 
  unsigned __int64 v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned __int32 v27; 
  unsigned __int32 v28; 
  int v29; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  unsigned int v31; 
  ClothAsset *v32; 
  __int64 v33; 
  hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator> *v34; 
  int v35; 
  int v36; 
  unsigned __int32 v37; 
  unsigned __int32 v38; 
  unsigned __int32 v39; 
  unsigned __int32 v40; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *v41; 
  unsigned int v42; 
  ClothAsset *v43; 
  __int64 v44; 
  hkMemoryAllocator alloc; 
  hkMemoryAllocator v46; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 162, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 163, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  HavokCloth_LockAssetWrite();
  v4 = s_havokClothAssets;
  m_hashMod = s_havokClothAssets->m_map.m_hashMod;
  if ( m_hashMod <= 0 || (v6 = _byteswap_ulong(-1640531535 * (_DWORD)from), v7 = _byteswap_ulong(-1640531535 * HIDWORD(from)), v8 = m_hashMod & (v7 ^ ((v6 >> 2) + v6 + (v7 << 6) - 1640531527)), v9 = (Dummy *)v8, key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key, key == (ClothAsset *)-1i64) )
  {
LABEL_11:
    v9 = (Dummy *)(m_hashMod + 1);
  }
  else
  {
    while ( key != from )
    {
      v8 = m_hashMod & (v8 + 1);
      v9 = (Dummy *)v8;
      key = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v8].key;
      if ( key == (ClothAsset *)-1i64 )
        goto LABEL_11;
    }
  }
  if ( m_hashMod <= 0 || (v11 = _byteswap_ulong(-1640531535 * (_DWORD)to), v12 = _byteswap_ulong(-1640531535 * HIDWORD(to)), v13 = m_hashMod & (v12 ^ ((v11 >> 2) + v11 + (v12 << 6) - 1640531527)), v14 = (Dummy *)v13, v15 = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v13].key, v15 == (ClothAsset *)-1i64) )
  {
LABEL_16:
    v14 = (Dummy *)(m_hashMod + 1);
  }
  else
  {
    while ( v15 != to )
    {
      v13 = m_hashMod & (v13 + 1);
      v14 = (Dummy *)v13;
      v15 = (ClothAsset *)s_havokClothAssets->m_map.m_elem[v13].key;
      if ( v15 == (ClothAsset *)-1i64 )
        goto LABEL_16;
    }
  }
  if ( (int)v9 > m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 171, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( fromIt ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( fromIt )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  if ( (int)v14 > v4->m_map.m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothassets.cpp", 172, ASSERT_TYPE_ASSERT, "(s_havokClothAssets->isValid( toIt ))", (const char *)&queryFormat, "s_havokClothAssets->isValid( toIt )") )
      __debugbreak();
    v4 = s_havokClothAssets;
  }
  val = v4->m_map.m_elem[(int)v9].val;
  v17 = v4->m_map.m_elem[(int)v14].val;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&v4->m_map, v9);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokClothAssets->m_map, v14);
  v18 = *(__m256i *)&from->name;
  v19 = *(__m256i *)&from->boneMappingSetCount;
  v20 = *(__m256i *)&from->simulationLodCount;
  v21 = *(__m256i *)&from->speedBlendSpeed;
  v22 = s_havokClothAssets;
  *(__m256i *)&from->name = *(__m256i *)&to->name;
  *(__m256i *)&from->boneMappingSetCount = *(__m256i *)&to->boneMappingSetCount;
  *(__m256i *)&from->simulationLodCount = *(__m256i *)&to->simulationLodCount;
  *(__m256i *)&from->speedBlendSpeed = *(__m256i *)&to->speedBlendSpeed;
  *(__m256i *)&to->name = v18;
  *(__m256i *)&to->boneMappingSetCount = v19;
  *(__m256i *)&to->simulationLodCount = v20;
  *(__m256i *)&to->speedBlendSpeed = v21;
  v23 = (unsigned int)hkMemHeapAllocator();
  v24 = v22->m_map.m_hashMod;
  if ( 2 * v22->m_map.m_numElems > v24 )
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::resizeTable(&v22->m_map, &alloc, v23);
    v24 = v22->m_map.m_hashMod;
  }
  v25 = 1;
  v26 = 1;
  v27 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v28 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v29 = v28 ^ ((v27 >> 2) + v27 + (v28 << 6) - 1640531527);
  m_elem = v22->m_map.m_elem;
  v31 = v24 & v29;
  v32 = (ClothAsset *)v22->m_map.m_elem[v31].key;
  if ( v32 != (ClothAsset *)-1i64 )
  {
    while ( v32 != to )
    {
      v31 = v22->m_map.m_hashMod & (v31 + 1);
      v32 = (ClothAsset *)m_elem[v31].key;
      if ( v32 == (ClothAsset *)-1i64 )
        goto LABEL_32;
    }
    v26 = 0;
  }
LABEL_32:
  v22->m_map.m_numElems += v26;
  v33 = (int)v31;
  m_elem[v33].key = (unsigned __int64)to;
  v34 = s_havokClothAssets;
  v22->m_map.m_elem[v33].val = val;
  v35 = (unsigned int)hkMemHeapAllocator();
  v36 = v34->m_map.m_hashMod;
  if ( 2 * v34->m_map.m_numElems > v36 )
  {
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::resizeTable(&v34->m_map, &v46, v35);
    v36 = v34->m_map.m_hashMod;
  }
  v37 = _byteswap_ulong(-1640531535 * (_DWORD)from);
  v38 = v37 >> 2;
  v39 = _byteswap_ulong(-1640531535 * HIDWORD(from));
  v40 = v37 + (v39 << 6);
  v41 = v34->m_map.m_elem;
  v42 = v36 & (v39 ^ (v38 + v40 - 1640531527));
  v43 = (ClothAsset *)v34->m_map.m_elem[v42].key;
  if ( v43 != (ClothAsset *)-1i64 )
  {
    while ( v43 != from )
    {
      v42 = v34->m_map.m_hashMod & (v42 + 1);
      v43 = (ClothAsset *)v41[v42].key;
      if ( v43 == (ClothAsset *)-1i64 )
        goto LABEL_39;
    }
    v25 = 0;
  }
LABEL_39:
  v34->m_map.m_numElems += v25;
  v44 = (int)v42;
  v41[v44].key = (unsigned __int64)from;
  v34->m_map.m_elem[v44].val = v17;
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

/*
==============
HavokCloth_UnlockAssetRead
==============
*/
void HavokCloth_UnlockAssetRead(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

/*
==============
HavokCloth_UnlockAssetWrite
==============
*/
void HavokCloth_UnlockAssetWrite(void)
{
  s_havokClothAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokClothAssetLock);
  Sys_CheckReleaseLock(&s_havokClothAssetLock);
}

