/*
==============
Stream_SortImagesCmd
==============
*/

void __fastcall Stream_SortImagesCmd(const void *const data)
{
  ?Stream_SortImagesCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_KickoffSort
==============
*/

void Stream_KickoffSort(void)
{
  ?Stream_KickoffSort@@YAXXZ();
}

/*
==============
Stream_SortGenericsCmd
==============
*/

void __fastcall Stream_SortGenericsCmd(const void *const data)
{
  ?Stream_SortGenericsCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_InvalidateAllSorting
==============
*/

void Stream_InvalidateAllSorting(void)
{
  ?Stream_InvalidateAllSorting@@YAXXZ();
}

/*
==============
Stream_SortMeshesCmd
==============
*/

void __fastcall Stream_SortMeshesCmd(const void *const data)
{
  ?Stream_SortMeshesCmd@@YAXQEBX@Z(data);
}

/*
==============
BuildRequestBasedSortKey
==============
*/
StreamSortKeyPacked BuildRequestBasedSortKey(const unsigned int *xpakPositions, const StreamableBits *bits, unsigned int assetIndex, unsigned int currentFrame, const RequestBits *request)
{
  __int64 v5; 
  unsigned int *bitsStable; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int *mLoaded; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 

  v5 = assetIndex;
  if ( assetIndex > 0x7FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 175, ASSERT_TYPE_ASSERT, "(assetIndex <= STREAM_SORT_KEY_INDEX_MAX)", (const char *)&queryFormat, "assetIndex <= STREAM_SORT_KEY_INDEX_MAX") )
    __debugbreak();
  bitsStable = request->bitsStable;
  if ( !bitsStable && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v10 = 1 << (v5 & 0x1F);
  v11 = (__int64)(int)v5 >> 5;
  if ( (v10 & bitsStable[v11]) != 0 )
    v12 = request->countStable[v5];
  else
    v12 = 0;
  mLoaded = bits->mLoaded;
  v14 = currentFrame - request->frame[v5];
  v15 = 0x1FFFFF;
  if ( v12 < 0x1FFFFF )
    v15 = v12;
  v16 = 0x1FFFFF - v15;
  v17 = 15;
  v18 = 16 * v16;
  if ( v14 < 0xF )
    v17 = v14;
  v19 = (15 - v17) | v18;
  if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  return BuildSortKeyCommon(xpakPositions, bits, v5, v19, (v10 & mLoaded[v11]) != 0);
}

/*
==============
BuildSortKeyCommon
==============
*/
StreamSortKeyPacked BuildSortKeyCommon(const unsigned int *xpakPositions, const StreamableBits *bits, unsigned int assetIndex, unsigned int distance, bool inUse)
{
  __int64 v5; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned int *mStaticForced; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v5 = (int)assetIndex;
  if ( distance > 0x1FFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 157, ASSERT_TYPE_ASSERT, "( distance ) <= ( STREAM_SORT_KEY_DIST_MAX )", "%s <= %s\n\t%u, %u", "distance", "STREAM_SORT_KEY_DIST_MAX", distance, 0x1FFFFFF) )
    __debugbreak();
  v9 = xpakPositions[(unsigned int)v5];
  if ( v9 > 0x3FFFF )
  {
    LODWORD(v18) = 0x3FFFF;
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 160, ASSERT_TYPE_ASSERT, "( xpakPosition ) <= ( STREAM_SORT_KEY_XPAK_MAX )", "%s <= %s\n\t%u, %u", "xpakPosition", "STREAM_SORT_KEY_XPAK_MAX", v17, v18) )
      __debugbreak();
  }
  v10 = v9 & 0x3FFFF | ((((unsigned __int64)(unsigned int)v5 << 27) | distance & 0x1FFFFFF) << 18);
  if ( (unsigned int)v5 >= bits->mBitCount )
  {
    LODWORD(v16) = bits->mBitCount;
    LODWORD(v15) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  mStaticForced = bits->mStaticForced;
  if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v12 = mStaticForced[v5 >> 5];
  if ( !_bittest((const int *)&v12, v5 & 0x1F) || StreamableBits::CheckLoading((StreamableBits *)bits, v5) )
    v13 = 0i64;
  else
    v13 = 2i64;
  return (StreamSortKeyPacked)(v10 | ((v13 | inUse) << 43));
}

/*
==============
Stream_InvalidateAllSorting
==============
*/
void Stream_InvalidateAllSorting(void)
{
  volatile int *sortListReadLock; 
  FastCriticalSection *p_mCS; 
  FastCriticalSectionScopeWrite v2; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 443, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_SORT_IMAGES) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 444, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_IMAGES ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_IMAGES )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_SORT_MESHES) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 445, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_MESHES ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_MESHES )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_SORT_GENERICS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 446, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_GENERICS ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_STREAM_SORT_GENERICS )") )
    __debugbreak();
  streamFrontendGlob->sortListValid = 0;
  RequestBits::InvalidateSorting(&streamFrontendGlob->meshRequest);
  RequestBits::InvalidateSorting(&streamFrontendGlob->genericRequest);
  sortListReadLock = streamFrontendGlob->sortListReadLock;
  if ( streamFrontendGlob->sortLists != (StreamSortListFrame *)streamFrontendGlob->sortListReadLock )
  {
    p_mCS = &streamFrontendGlob->sortLists[0].imageSortList.mCS;
    do
    {
      memset_0(&p_mCS[-125441].tempPriority.oldPriority, 255, 0x140000ui64);
      memset_0(&p_mCS[-84481].tempPriority.oldPriority, 0, 0xA000ui64);
      v2.cs = p_mCS;
      if ( !p_mCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockWrite(p_mCS);
      memset_0(&p_mCS[-83201].tempPriority.oldPriority, 0, 0xA000ui64);
      *(_QWORD *)&p_mCS[-1].tempPriority.oldPriority = 0i64;
      p_mCS[-1].writeThreadId = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v2);
      v2.cs = (FastCriticalSection *)((char *)p_mCS + 366128);
      if ( p_mCS == (FastCriticalSection *)-366128i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockWrite((FastCriticalSection *)((char *)p_mCS + 366128));
      memset_0(&p_mCS[1], 0, 0x1600ui64);
      *(_QWORD *)&p_mCS[11441].readCount = 0i64;
      LODWORD(p_mCS[11441].tempPriority.threadHandle) = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v2);
      v2.cs = p_mCS + 21063;
      if ( p_mCS == (FastCriticalSection *)-674016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockWrite(p_mCS + 21063);
      memset_0(&p_mCS[11442].tempPriority.oldPriority, 0, 0x1280ui64);
      *(_QWORD *)&p_mCS[21062].tempPriority.oldPriority = 0i64;
      p_mCS[21062].writeThreadId = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v2);
      p_mCS = (FastCriticalSection *)((char *)p_mCS + 4688152);
    }
    while ( &p_mCS[-125441].tempPriority.oldPriority != sortListReadLock );
  }
}

/*
==============
Stream_KickoffSort
==============
*/
void Stream_KickoffSort(void)
{
  unsigned int data; 
  StreamSortListFrame *v1; 
  bool purgeMeshes; 

  data = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  v1 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite];
  if ( Stream_Primer_IsRunning() )
  {
    purgeMeshes = 0;
  }
  else
  {
    purgeMeshes = streamFrontendGlob->purgeMeshes;
    streamFrontendGlob->purgeMeshes = 0;
  }
  Sys_AddWorkerCmd(WRKCMD_STREAM_SORT_IMAGES, &data);
  Sys_AddWorkerCmd(WRKCMD_STREAM_SORT_MESHES, &data);
  Sys_AddWorkerCmd(WRKCMD_STREAM_SORT_GENERICS, &data);
}

/*
==============
Stream_SortGenericsCmd
==============
*/
void Stream_SortGenericsCmd(const void *const data)
{
  __int64 v2; 
  const dvar_t *v3; 
  FastCriticalSectionScopeWrite v4; 
  __int64 v5; 
  Stream_SortGenericsCmd::__l3::<lambda_0c0a8eac92d6daff3b558bc0e620a664> keyBuilder; 
  int v7; 
  __int64 v8; 
  StreamSortKeyPacked midKey; 

  v5 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_SortGenericsCmd");
  v8 = 0x80000000000i64;
  v2 = *((_QWORD *)data + 1);
  v7 = *(_DWORD *)data;
  Sys_ProfBeginNamedEvent(0xFF808080, "Build generic sort list");
  LOBYTE(keyBuilder.currentFrame) = 0;
  midKey.0 = ($FD3C46332B1196AF8F5C8C522E71774D)&v7;
  v4.cs = (FastCriticalSection *)(v2 + 4688112);
  if ( v2 == -4688112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite((FastCriticalSection *)(v2 + 4688112));
  StreamSortList_37888_::UpdateNoLock__lambda_4ac3c83bc87260cabae661133b96cc4b___lambda_0c0a8eac92d6daff3b558bc0e620a664___((const Stream_SortGenericsCmd::__l3::<lambda_4ac3c83bc87260cabae661133b96cc4b> *)(v2 + 4380256), &keyBuilder, &midKey);
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v4);
  Sys_ProfEndNamedEvent();
  v3 = DCONST_DVARINT_stream_genericFreePresort;
  if ( !DCONST_DVARINT_stream_genericFreePresort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_genericFreePresort") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  SortStreamItems_StreamGenericLoadingPredicate_37888_((StreamSortList<37888> *)(v2 + 4380256), v3->current.integer);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_SortImagesCmd
==============
*/
void Stream_SortImagesCmd(const void *const data)
{
  const StreamSortDistanceTracked<327680> *v2; 
  Stream_SortImagesCmd::__l3::<lambda_254e0dd7d3264071b9d5dc200728de3a> *v3; 
  FastCriticalSection *v4; 
  const dvar_t *v5; 
  StreamSortKeyPacked midKey; 
  Stream_SortImagesCmd::__l3::<lambda_dde62d4249232378504085c80832c20e> keyBuilder; 
  FastCriticalSectionScopeWrite v8; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_SortImagesCmd");
  v2 = (const StreamSortDistanceTracked<327680> *)*((_QWORD *)data + 1);
  Sys_ProfBeginNamedEvent(0xFF808080, "Build image sort list");
  keyBuilder.imageDistance = v2;
  midKey.0 = ($FD3C46332B1196AF8F5C8C522E71774D)v2;
  v3 = (Stream_SortImagesCmd::__l3::<lambda_254e0dd7d3264071b9d5dc200728de3a> *)&v2[1];
  v4 = (FastCriticalSection *)&v2[2].mValueSet[4];
  v8.cs = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(v4);
  StreamSortList_327680_::UpdateNoLock__lambda_254e0dd7d3264071b9d5dc200728de3a___lambda_dde62d4249232378504085c80832c20e___(v3, &keyBuilder, &midKey);
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v8);
  Sys_ProfEndNamedEvent();
  v5 = DCONST_DVARINT_stream_imageFreePresort;
  if ( !DCONST_DVARINT_stream_imageFreePresort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imageFreePresort") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  SortStreamItems_StreamImageLoadingPredicate_327680_((StreamSortList<327680> *)v3, v5->current.integer);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_SortMeshesCmd
==============
*/
void Stream_SortMeshesCmd(const void *const data)
{
  __int64 v2; 
  const dvar_t *v3; 
  unsigned int v4; 
  const dvar_t *v5; 
  float value; 
  unsigned int lastTopMeshPriority; 
  const dvar_t *v8; 
  __int64 unsignedInt; 
  float v10; 
  float v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  unsigned int v16; 
  unsigned int v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  StreamSortKeyPacked midKey; 
  FastCriticalSectionScopeWrite v24; 
  __int64 v25; 
  Stream_SortMeshesCmd::__l6::<lambda_919d14694420cc98c316348b65cc57a7> keyBuilder; 
  unsigned int v27; 
  int v28; 
  __int64 v29; 

  v25 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_SortMeshesCmd");
  v29 = 0x80000000000i64;
  v2 = *((_QWORD *)data + 1);
  v28 = *(_DWORD *)data;
  if ( *((_BYTE *)data + 16) )
    Stream_ReleaseAboveLimitLOD();
  Sys_ProfBeginNamedEvent(0xFF808080, "Build mesh sort list");
  LOBYTE(keyBuilder.currentFrame) = 0;
  midKey.0 = ($FD3C46332B1196AF8F5C8C522E71774D)&v28;
  v24.cs = (FastCriticalSection *)(v2 + 4380224);
  if ( v2 == -4380224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite((FastCriticalSection *)(v2 + 4380224));
  StreamSortList_45056_::UpdateNoLock__lambda_dca539cadf9f074841cf35cf16e753ad___lambda_919d14694420cc98c316348b65cc57a7___((const Stream_SortMeshesCmd::__l6::<lambda_dca539cadf9f074841cf35cf16e753ad> *)(v2 + 4014128), &keyBuilder, &midKey);
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v24);
  Sys_ProfEndNamedEvent();
  v3 = DCONST_DVARINT_stream_meshFreePresort;
  if ( !DCONST_DVARINT_stream_meshFreePresort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshFreePresort") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  SortStreamItems_StreamMeshLoadingPredicate_45056_((StreamSortList<45056> *)(v2 + 4014128), v3->current.integer);
  v4 = 0;
  v27 = 0;
  keyBuilder.currentFrame = &v27;
  StreamSortList_45056_::PresortedIterateReverseOffset__lambda_b73f40c0b7b09a5c746a9648f6283983___(v2 + 4014128, (const Stream_SortMeshesCmd::__l2::<lambda_b73f40c0b7b09a5c746a9648f6283983> *)(unsigned int)(*(_DWORD *)(v2 + 4380208) - 1));
  v5 = DCONST_DVARFLT_stream_meshFixedPrioPercentage;
  if ( !DCONST_DVARFLT_stream_meshFixedPrioPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshFixedPrioPercentage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  if ( value == 0.0 )
  {
    lastTopMeshPriority = streamFrontendGlob->lastTopMeshPriority;
    v8 = DCONST_DVARINT_stream_meshAutoPrioStepRatio;
    if ( !DCONST_DVARINT_stream_meshAutoPrioStepRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshAutoPrioStepRatio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    unsignedInt = v8->current.unsignedInt;
    if ( v27 <= lastTopMeshPriority )
    {
      v12 = (lastTopMeshPriority - v27) / (unsigned int)unsignedInt;
      if ( v12 < lastTopMeshPriority )
        v4 = lastTopMeshPriority - v12;
    }
    else
    {
      v10 = (float)(v27 - lastTopMeshPriority);
      v11 = (float)unsignedInt;
      v4 = lastTopMeshPriority + (int)(float)(v10 / v11);
    }
    v13 = DCONST_DVARINT_stream_meshAutoPrioStepUpStart;
    if ( !DCONST_DVARINT_stream_meshAutoPrioStepUpStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshAutoPrioStepUpStart") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = v13->current.unsignedInt;
    v15 = DCONST_DVARINT_stream_meshAutoPrioStepUpEnd;
    if ( !DCONST_DVARINT_stream_meshAutoPrioStepUpEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshAutoPrioStepUpEnd") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.unsignedInt;
    if ( v14 > v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
      __debugbreak();
    if ( v16 < v4 )
      v4 = v16;
    if ( v14 > v4 )
      v4 = v14;
    v17 = v16 - v14;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sort.cpp", 365, ASSERT_TYPE_ASSERT, "(autoPrioRange > 0)", (const char *)&queryFormat, "autoPrioRange > 0") )
      __debugbreak();
    streamFrontendGlob->lastTopMeshPriority = v4;
    v18 = (float)(v4 - v14);
    v20 = DCONST_DVARFLT_stream_meshAutoPrioPercentageMax;
    if ( !DCONST_DVARFLT_stream_meshAutoPrioPercentageMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshAutoPrioPercentageMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.value;
    v22 = DCONST_DVARFLT_stream_meshAutoPrioPercentageMin;
    if ( !DCONST_DVARFLT_stream_meshAutoPrioPercentageMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_meshAutoPrioPercentageMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v19 = (float)v17;
    streamFrontendGlob->meshBoost = (float)((float)(1.0 - (float)(v18 / v19)) * v22->current.value) + (float)(v21 * (float)(v18 / v19));
  }
  else
  {
    streamFrontendGlob->meshBoost = value;
  }
  Sys_ProfEndNamedEvent();
}

