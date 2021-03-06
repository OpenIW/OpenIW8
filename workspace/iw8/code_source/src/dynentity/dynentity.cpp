/*
==============
DynEnt_MyChangesInitAndLoad
==============
*/

void DynEnt_MyChangesInitAndLoad(void)
{
  ?DynEnt_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
DynEnt_Shutdown
==============
*/

void DynEnt_Shutdown(void)
{
  ?DynEnt_Shutdown@@YAXXZ();
}

/*
==============
DynEnt_SwapDynEntityList
==============
*/

void __fastcall DynEnt_SwapDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  ?DynEnt_SwapDynEntityList@@YAXPEAUDynEntityList@@0@Z(fromList, toList);
}

/*
==============
DynEnt_MoveDynEntityList
==============
*/

void __fastcall DynEnt_MoveDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  ?DynEnt_MoveDynEntityList@@YAXPEAUDynEntityList@@0@Z(fromList, toList);
}

/*
==============
DynEnt_IsInitialized
==============
*/

bool __fastcall DynEnt_IsInitialized()
{
  return ?DynEnt_IsInitialized@@YA_NXZ();
}

/*
==============
DynEnt_RemoveDynEntityList
==============
*/

void __fastcall DynEnt_RemoveDynEntityList(DynEntityList *dynEntityList)
{
  ?DynEnt_RemoveDynEntityList@@YAXPEAUDynEntityList@@@Z(dynEntityList);
}

/*
==============
DynEnt_Init
==============
*/

void DynEnt_Init(void)
{
  ?DynEnt_Init@@YAXXZ();
}

/*
==============
DynEnt_AddDynEntityList
==============
*/

void __fastcall DynEnt_AddDynEntityList(DynEntityList *dynEntityList)
{
  ?DynEnt_AddDynEntityList@@YAXPEAUDynEntityList@@@Z(dynEntityList);
}

/*
==============
DynEnt_CopyDynEntityList
==============
*/

void __fastcall DynEnt_CopyDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  ?DynEnt_CopyDynEntityList@@YAXPEAUDynEntityList@@0@Z(fromList, toList);
}

/*
==============
DynEnt_MyChangesSaveAndShutdown
==============
*/

void DynEnt_MyChangesSaveAndShutdown(void)
{
  ?DynEnt_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
DynEnt_GetEntityProps
==============
*/

const DynEntityProps *__fastcall DynEnt_GetEntityProps(const DynEntityType dynEntType)
{
  return ?DynEnt_GetEntityProps@@YAPEBUDynEntityProps@@W4DynEntityType@@@Z(dynEntType);
}

/*
==============
DynEnt_AddDynEntityList
==============
*/
void DynEnt_AddDynEntityList(DynEntityList *dynEntityList)
{
  LocalClientNum_t v2; 
  DynEntityListId index; 
  DynEntityListId v4; 
  unsigned __int64 v5; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !s_dynEntInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 121, ASSERT_TYPE_ASSERT, "(DynEnt_IsInitialized())", "%s\n\tTrying to addDynEntityList to unitialized dynEnt system.", "DynEnt_IsInitialized()") )
    __debugbreak();
  v2 = LOCAL_CLIENT_0;
  if ( !dynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 124, ASSERT_TYPE_ASSERT, "( dynEntityList ) != ( nullptr )", "%s != %s\n\t%p, %p", "dynEntityList", "nullptr", NULL, NULL) )
    __debugbreak();
  index = dynEntityList->index;
  if ( index != DEFAULT_DYNENTITY_LIST_ID )
  {
    if ( (unsigned __int16)index >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v8) = 1536;
      LODWORD(v7) = (unsigned __int16)index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntityList->index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "dynEntityList->index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEnt_AddDynEntityList");
    v4 = g_dynEntityLists[(unsigned __int64)(unsigned __int16)dynEntityList->index].index;
    if ( v4 != DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v10) = 1536;
      LODWORD(v9) = (unsigned __int16)v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 134, ASSERT_TYPE_ASSERT, "( g_dynEntityLists[dynEntityList->index].index ) == ( DYNENTITY_LIST_ID_INVALID )", "%s == %s\n\t%u, %u", "g_dynEntityLists[dynEntityList->index].index", "DYNENTITY_LIST_ID_INVALID", v9, v10) )
        __debugbreak();
    }
    v5 = (unsigned __int64)(unsigned __int16)dynEntityList->index << 6;
    v6 = SLODWORD(cl_maxLocalClients) <= 0;
    *(__m256i *)((char *)&g_dynEntityLists[0].name + v5) = *(__m256i *)&dynEntityList->name;
    *(__m256i *)((char *)&g_dynEntityLists[0].dynEntDefList[1] + v5) = *(__m256i *)&dynEntityList->dynEntDefList[1];
    if ( !v6 )
    {
      do
        DynEntCL_DynEntityListAdded(v2++, dynEntityList->index);
      while ( v2 < SLODWORD(cl_maxLocalClients) );
    }
    DynEntCL_Spatial_DynEntityListAdded(dynEntityList->index);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DynEnt_CopyDynEntityList
==============
*/
void DynEnt_CopyDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  DynEntityListId index; 
  DynEntityListId v5; 
  __int64 v6; 

  if ( !fromList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 304, ASSERT_TYPE_ASSERT, "(fromList)", (const char *)&queryFormat, "fromList") )
    __debugbreak();
  if ( !toList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 305, ASSERT_TYPE_ASSERT, "(toList)", (const char *)&queryFormat, "toList") )
    __debugbreak();
  index = fromList->index;
  if ( index == DEFAULT_DYNENTITY_LIST_ID )
  {
    *(__m256i *)&toList->name = *(__m256i *)&fromList->name;
    *(__m256i *)&toList->dynEntDefList[1] = *(__m256i *)&fromList->dynEntDefList[1];
  }
  else
  {
    if ( (unsigned __int16)index >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v6) = (unsigned __int16)index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 313, ASSERT_TYPE_ASSERT, "(unsigned)( fromList->index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "fromList->index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v6, 1536) )
        __debugbreak();
    }
    v5 = g_dynEntityLists[(unsigned __int64)(unsigned __int16)fromList->index].index;
    if ( v5 != DEFAULT_DYNENTITY_LIST_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 314, ASSERT_TYPE_ASSERT, "( g_dynEntityLists[fromList->index].index ) == ( DYNENTITY_LIST_ID_INVALID )", "%s == %s\n\t%u, %u", "g_dynEntityLists[fromList->index].index", "DYNENTITY_LIST_ID_INVALID", (unsigned __int16)v5, 1536) )
      __debugbreak();
    *(__m256i *)&toList->name = *(__m256i *)&fromList->name;
    *(__m256i *)&toList->dynEntDefList[1] = *(__m256i *)&fromList->dynEntDefList[1];
    DynEnt_AddDynEntityList(toList);
  }
}

/*
==============
DynEnt_GetEntityProps
==============
*/
const DynEntityProps *DynEnt_GetEntityProps(const DynEntityType dynEntType)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)dynEntType >= DYNENT_TYPE_COUNT )
  {
    v4 = 7;
    v3 = (unsigned __int8)dynEntType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntType ) < (unsigned)( DYNENT_TYPE_COUNT )", "dynEntType doesn't index DYNENT_TYPE_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_dynEntProps[(unsigned __int8)dynEntType];
}

/*
==============
DynEnt_Init
==============
*/
void DynEnt_Init(void)
{
  DynEntityListId *p_index; 
  __int64 v1; 

  if ( s_dynEntInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 40, ASSERT_TYPE_ASSERT, "(!s_dynEntInitialized)", "%s\n\tDynEnt: Trying to initialize twice", "!s_dynEntInitialized") )
    __debugbreak();
  memset_0(g_dynEntityLists, 0, sizeof(g_dynEntityLists));
  p_index = &g_dynEntityLists[0].index;
  v1 = 1536i64;
  do
  {
    *p_index = DEFAULT_DYNENTITY_LIST_ID;
    p_index += 32;
    --v1;
  }
  while ( v1 );
  s_dynEntInitialized = 1;
}

/*
==============
DynEnt_IsInitialized
==============
*/
_BOOL8 DynEnt_IsInitialized()
{
  return s_dynEntInitialized;
}

/*
==============
DynEnt_MoveDynEntityList
==============
*/
void DynEnt_MoveDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  DynEntityListId index; 
  DynEntityListId v5; 
  DynEntityListId v6; 
  __int64 v7; 

  if ( !fromList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 262, ASSERT_TYPE_ASSERT, "(fromList)", (const char *)&queryFormat, "fromList") )
    __debugbreak();
  if ( !toList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 263, ASSERT_TYPE_ASSERT, "(toList)", (const char *)&queryFormat, "toList") )
    __debugbreak();
  index = fromList->index;
  if ( index == DEFAULT_DYNENTITY_LIST_ID )
  {
    DynEnt_RemoveDynEntityList(toList);
    *(__m256i *)&toList->name = *(__m256i *)&fromList->name;
    *(__m256i *)&toList->dynEntDefList[1] = *(__m256i *)&fromList->dynEntDefList[1];
  }
  else
  {
    if ( (unsigned __int16)index >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v7) = (unsigned __int16)index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( fromList->index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "fromList->index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v7, 1536) )
        __debugbreak();
    }
    v5 = toList->index;
    if ( v5 != DEFAULT_DYNENTITY_LIST_ID && g_dynEntityLists[(unsigned __int64)(unsigned __int16)v5].index == v5 )
    {
      if ( DynEntCl_IsAnyClientInitialized() )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D65CB0, 5724i64);
      DynEnt_RemoveDynEntityList(toList);
    }
    v6 = g_dynEntityLists[(unsigned __int64)(unsigned __int16)fromList->index].index;
    if ( v6 != DEFAULT_DYNENTITY_LIST_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 285, ASSERT_TYPE_ASSERT, "( g_dynEntityLists[fromList->index].index ) == ( DYNENTITY_LIST_ID_INVALID )", "%s == %s\n\t%u, %u", "g_dynEntityLists[fromList->index].index", "DYNENTITY_LIST_ID_INVALID", (unsigned __int16)v6, 1536) )
      __debugbreak();
    *(__m256i *)&toList->name = *(__m256i *)&fromList->name;
    *(__m256i *)&toList->dynEntDefList[1] = *(__m256i *)&fromList->dynEntDefList[1];
    DynEnt_AddDynEntityList(toList);
  }
}

/*
==============
DynEnt_MyChangesInitAndLoad
==============
*/
void DynEnt_MyChangesInitAndLoad(void)
{
  float v0; 
  LocalClientNum_t v1; 
  unsigned __int64 v2; 
  __int64 v3; 

  if ( s_dynEntInitialized )
  {
    v0 = cl_maxLocalClients;
    v1 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v2 = 0i64;
      do
      {
        if ( s_dynEntPendingMyChanges[v2] )
        {
          DynEntCl_InitEntities(v1);
          if ( v2 >= 2 )
          {
            j___report_rangecheckfailure(v3);
            JUMPOUT(0x1409B67F0i64);
          }
          v0 = cl_maxLocalClients;
          s_dynEntPendingMyChanges[v2] = 0;
        }
        ++v1;
        ++v2;
      }
      while ( v1 < SLODWORD(v0) );
    }
  }
}

/*
==============
DynEnt_MyChangesSaveAndShutdown
==============
*/
void DynEnt_MyChangesSaveAndShutdown(void)
{
  LocalClientNum_t v0; 
  bool *v1; 

  if ( s_dynEntInitialized )
  {
    v0 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v1 = s_dynEntPendingMyChanges;
      do
      {
        if ( DynEntCl_IsInitialized(v0) )
        {
          DynEntCl_Shutdown(v0);
          *v1 = 1;
        }
        ++v0;
        ++v1;
      }
      while ( v0 < SLODWORD(cl_maxLocalClients) );
    }
  }
}

/*
==============
DynEnt_RemoveDynEntityList
==============
*/
void DynEnt_RemoveDynEntityList(DynEntityList *dynEntityList)
{
  LocalClientNum_t v2; 
  DynEntityListId index; 
  __int64 v4; 
  __int64 v5; 

  if ( !s_dynEntInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 161, ASSERT_TYPE_ASSERT, "(DynEnt_IsInitialized())", "%s\n\tTrying to removeDynEntityList to unitialized dynEnt system.", "DynEnt_IsInitialized()") )
    __debugbreak();
  v2 = LOCAL_CLIENT_0;
  if ( !dynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 164, ASSERT_TYPE_ASSERT, "( dynEntityList ) != ( nullptr )", "%s != %s\n\t%p, %p", "dynEntityList", "nullptr", NULL, NULL) )
    __debugbreak();
  index = dynEntityList->index;
  if ( index != DEFAULT_DYNENTITY_LIST_ID )
  {
    if ( (unsigned __int16)index >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v5) = 1536;
      LODWORD(v4) = (unsigned __int16)index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntityList->index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "dynEntityList->index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( (unsigned __int16)(g_dynEntityLists[(unsigned __int64)(unsigned __int16)dynEntityList->index].index - 1536) > 1u )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEnt_RemoveDynEntityList");
      if ( SLODWORD(cl_maxLocalClients) > 0 )
      {
        do
          DynEntCL_DynEntityListAboutToRemove(v2++, dynEntityList->index);
        while ( v2 < SLODWORD(cl_maxLocalClients) );
      }
      DynEntCL_Spatial_DynEntityListAboutToRemove(dynEntityList->index);
      if ( !DynEntCl_IsAnyClientInitialized() || DynEntCL_IsImmediateDynEntityListSync() )
        g_dynEntityLists[(unsigned __int64)(unsigned __int16)dynEntityList->index].index = DEFAULT_DYNENTITY_LIST_ID;
      else
        g_dynEntityLists[(unsigned __int64)(unsigned __int16)dynEntityList->index].index = DYNENTITY_LIST_ID_UNLOADING;
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
DynEnt_Shutdown
==============
*/
void DynEnt_Shutdown(void)
{
  if ( !s_dynEntInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 58, ASSERT_TYPE_ASSERT, "(s_dynEntInitialized)", "%s\n\tDynEnt: Trying to shutdown when not initialized", "s_dynEntInitialized") )
    __debugbreak();
  s_dynEntInitialized = 0;
}

/*
==============
DynEnt_SwapDynEntityList
==============
*/
void DynEnt_SwapDynEntityList(DynEntityList *fromList, DynEntityList *toList)
{
  DynEntityListId index; 
  DynEntityListId v5; 
  DynEntityListId v6; 
  unsigned __int64 v7; 
  __m256i v8; 
  __m256i v9; 
  __int64 v10; 
  __int64 v11; 
  __m256i v12; 
  __m256i v13; 

  if ( DynEntCl_IsAnyClientInitialized() )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D65A40);
  if ( !fromList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 221, ASSERT_TYPE_ASSERT, "(fromList)", (const char *)&queryFormat, "fromList") )
    __debugbreak();
  if ( !toList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 222, ASSERT_TYPE_ASSERT, "(toList)", (const char *)&queryFormat, "toList") )
    __debugbreak();
  index = fromList->index;
  v5 = toList->index;
  if ( index != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 223, ASSERT_TYPE_ASSERT, "( fromList->index ) == ( toList->index )", "%s == %s\n\t%u, %u", "fromList->index", "toList->index", (unsigned __int16)index, (unsigned __int16)v5) )
    __debugbreak();
  v6 = toList->index;
  if ( v6 == DEFAULT_DYNENTITY_LIST_ID )
  {
    *(__m256i *)&toList->name = v12;
    *(__m256i *)&toList->dynEntDefList[1] = v13;
    *(__m256i *)&fromList->name = *(__m256i *)&toList->name;
    *(__m256i *)&fromList->dynEntDefList[1] = *(__m256i *)&toList->dynEntDefList[1];
  }
  else
  {
    if ( (unsigned __int16)v6 >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v11) = 1536;
      LODWORD(v10) = (unsigned __int16)v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( toList->index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "toList->index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v7 = (unsigned __int64)(unsigned __int16)toList->index << 6;
    if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v7) == toList->index )
      *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v7) = DEFAULT_DYNENTITY_LIST_ID;
    v8 = *(__m256i *)&toList->name;
    v9 = *(__m256i *)&toList->dynEntDefList[1];
    *(__m256i *)&toList->name = *(__m256i *)&fromList->name;
    *(__m256i *)&toList->dynEntDefList[1] = *(__m256i *)&fromList->dynEntDefList[1];
    *(__m256i *)&fromList->name = v8;
    *(__m256i *)&fromList->dynEntDefList[1] = v9;
    DynEnt_AddDynEntityList(toList);
  }
}

