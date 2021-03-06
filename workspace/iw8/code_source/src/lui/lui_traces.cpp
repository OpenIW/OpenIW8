/*
==============
LUITraceRunner::Initialize
==============
*/

void __fastcall LUITraceRunner::Initialize(LUITraceRunner *this)
{
  ?Initialize@LUITraceRunner@@IEAAXXZ(this);
}

/*
==============
LUITraceRunner::HasTraceResult
==============
*/

bool __fastcall LUITraceRunner::HasTraceResult(LocalClientNum_t localClientNum, LUITraceRequest *ticket)
{
  return ?HasTraceResult@LUITraceRunner@@SA_NW4LocalClientNum_t@@PEAULUITraceRequest@@@Z(localClientNum, ticket);
}

/*
==============
LUITraceRunner::GetTraceResult
==============
*/

bool __fastcall LUITraceRunner::GetTraceResult(LUITraceRunner *this, LUITraceRequest *ticket, bool *outHit)
{
  return ?GetTraceResult@LUITraceRunner@@IEAA_NPEAULUITraceRequest@@PEA_N@Z(this, ticket, outHit);
}

/*
==============
LUITraceRunner::StartRequests
==============
*/

void __fastcall LUITraceRunner::StartRequests(LUITraceRunner *this)
{
  ?StartRequests@LUITraceRunner@@IEAAXXZ(this);
}

/*
==============
LUITraceRunner::HasActiveRequests
==============
*/

bool __fastcall LUITraceRunner::HasActiveRequests(LUITraceRunner *this)
{
  return ?HasActiveRequests@LUITraceRunner@@IEBA_NXZ(this);
}

/*
==============
LUITraceRunner::HasTraceResult
==============
*/

bool __fastcall LUITraceRunner::HasTraceResult(LUITraceRunner *this, LUITraceRequest *ticket)
{
  return ?HasTraceResult@LUITraceRunner@@IEAA_NPEAULUITraceRequest@@@Z(this, ticket);
}

/*
==============
LUITraceRunner::GetTraceTargetPosition
==============
*/

void __fastcall LUITraceRunner::GetTraceTargetPosition(LUITraceRunner *this, const LUITraceRequest *traceRequest, vec3_t *outTargetPosition)
{
  ?GetTraceTargetPosition@LUITraceRunner@@IEAAXPEBULUITraceRequest@@AEATvec3_t@@@Z(this, traceRequest, outTargetPosition);
}

/*
==============
LUITraceRunner::SetLocalClientNum
==============
*/

void __fastcall LUITraceRunner::SetLocalClientNum(LUITraceRunner *this, LocalClientNum_t localClientNum)
{
  ?SetLocalClientNum@LUITraceRunner@@IEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
LUITraceRunner::Shutdown
==============
*/

void __fastcall LUITraceRunner::Shutdown(LUITraceRunner *this)
{
  ?Shutdown@LUITraceRunner@@IEAAXXZ(this);
}

/*
==============
LUITraceRunner::CompleteRequests
==============
*/

void __fastcall LUITraceRunner::CompleteRequests(LUITraceRunner *this)
{
  ?CompleteRequests@LUITraceRunner@@IEAAXXZ(this);
}

/*
==============
LUITraceRunner::RequestTraceToEntityOffset
==============
*/

LUITraceRequest *__fastcall LUITraceRunner::RequestTraceToEntityOffset(LocalClientNum_t localClientNum, int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, unsigned int ignoreOffsetsForTraces, bool highPriority, bool *outTriviallyNotInSight, bool useClientDetailWorld)
{
  return ?RequestTraceToEntityOffset@LUITraceRunner@@SAPEAULUITraceRequest@@W4LocalClientNum_t@@HPEBDAEBTvec3_t@@22I_NPEA_N3@Z(localClientNum, entityNum, tagName, tagOffset, entityOffset, worldOffset, ignoreOffsetsForTraces, highPriority, outTriviallyNotInSight, useClientDetailWorld);
}

/*
==============
LUITraceRunner::GetTraceResult
==============
*/

bool __fastcall LUITraceRunner::GetTraceResult(LocalClientNum_t localClientNum, LUITraceRequest *ticket, bool *outHit)
{
  return ?GetTraceResult@LUITraceRunner@@SA_NW4LocalClientNum_t@@PEAULUITraceRequest@@PEA_N@Z(localClientNum, ticket, outHit);
}

/*
==============
LUITraceRunner::Frame
==============
*/

void __fastcall LUITraceRunner::Frame(LocalClientNum_t localClientNum)
{
  ?Frame@LUITraceRunner@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUITraceRunner::Frame
==============
*/

void __fastcall LUITraceRunner::Frame(LUITraceRunner *this)
{
  ?Frame@LUITraceRunner@@IEAAXXZ(this);
}

/*
==============
LUITraceRunner::Shutdown
==============
*/

void __fastcall LUITraceRunner::Shutdown(LocalClientNum_t localClientNum)
{
  ?Shutdown@LUITraceRunner@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUITraceRunner::RequestTraceToPosition
==============
*/

LUITraceRequest *__fastcall LUITraceRunner::RequestTraceToPosition(LocalClientNum_t localClientNum, const vec3_t *position, int ignoreEntityNum, bool highPriority, bool useClientDetailWorld)
{
  return ?RequestTraceToPosition@LUITraceRunner@@SAPEAULUITraceRequest@@W4LocalClientNum_t@@AEBTvec3_t@@H_N2@Z(localClientNum, position, ignoreEntityNum, highPriority, useClientDetailWorld);
}

/*
==============
LUITraceRunner::Initialize
==============
*/

void __fastcall LUITraceRunner::Initialize(LocalClientNum_t localClientNum)
{
  ?Initialize@LUITraceRunner@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUITraceRunner::RequestTraceToPosition
==============
*/

LUITraceRequest *__fastcall LUITraceRunner::RequestTraceToPosition(LUITraceRunner *this, const vec3_t *position, int ignoreEntityNum, bool highPriority, bool useClientDetailWorld)
{
  return ?RequestTraceToPosition@LUITraceRunner@@IEAAPEAULUITraceRequest@@AEBTvec3_t@@H_N1@Z(this, position, ignoreEntityNum, highPriority, useClientDetailWorld);
}

/*
==============
LUITraceRunner::RequestTraceToEntityOffset
==============
*/

LUITraceRequest *__fastcall LUITraceRunner::RequestTraceToEntityOffset(LUITraceRunner *this, int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, unsigned int ignoreOffsetsForTraces, bool highPriority, bool *outTriviallyNotInSight, bool useClientDetailWorld)
{
  return ?RequestTraceToEntityOffset@LUITraceRunner@@IEAAPEAULUITraceRequest@@HPEBDAEBTvec3_t@@11I_NPEA_N2@Z(this, entityNum, tagName, tagOffset, entityOffset, worldOffset, ignoreOffsetsForTraces, highPriority, outTriviallyNotInSight, useClientDetailWorld);
}

/*
==============
LUITraceRunner::HasActiveRequests
==============
*/

bool __fastcall LUITraceRunner::HasActiveRequests(LocalClientNum_t localClientNum)
{
  return ?HasActiveRequests@LUITraceRunner@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUITraceRunner::IsTargetInFOV
==============
*/

bool __fastcall LUITraceRunner::IsTargetInFOV(LUITraceRunner *this, const LUITraceRequest *traceRequest)
{
  return ?IsTargetInFOV@LUITraceRunner@@IEAA_NPEBULUITraceRequest@@@Z(this, traceRequest);
}

/*
==============
LUITraceRunner::CompleteRequests
==============
*/
void LUITraceRunner::CompleteRequests(LUITraceRunner *this)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node<LUITraceRequest *> *v4; 
  LUIPool<LUITraceRequest,200,1> *p_m_requestPool; 
  unsigned __int64 v6; 
  __int64 v7; 
  char v8; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsDetailResourcePool; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v11; 
  __int64 v12; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  double ClientVisibility; 
  __int64 v17; 
  __int64 v18; 
  vec3_t start; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 179, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  mp_next = this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  while ( mp_next != (ntl::internal::list_node_base *)&this->m_activeRequests.m_listHead )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = mp_next[1].mp_prev;
    if ( HIBYTE(mp_prev[6].mp_next) )
    {
      v4 = (ntl::internal::list_node<LUITraceRequest *> *)mp_next;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::remove(&this->m_activeRequests.m_listHead, v4);
      v4->mp_prev = (ntl::internal::list_node_base *)this->m_activeRequests.m_freelist.m_head.mp_next;
      this->m_activeRequests.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v4;
      p_m_requestPool = &this->m_requestPool;
      v6 = ((char *)mp_prev - (char *)&this->m_requestPool) / 136;
      if ( v6 <= 0xC7 )
      {
        v7 = (unsigned __int16)v6;
        if ( (unsigned __int16)v6 >= 0xC8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
          __debugbreak();
        if ( p_m_requestPool->m_poolData[v7] <= 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
          __debugbreak();
        p_m_requestPool->m_poolData[v7] = this->m_requestPool.m_firstFree;
        this->m_requestPool.m_firstFree = v7;
        memset_0(mp_prev, 0, 0x88ui64);
      }
    }
    else
    {
      v8 = BYTE5(mp_prev[6].mp_next);
      if ( v8 || mp_prev[8].mp_prev->mp_prev )
      {
        HIBYTE(mp_prev[6].mp_next) = 1;
        if ( !v8 )
        {
          BYTE5(mp_prev[6].mp_next) = 1;
          BYTE6(mp_prev[6].mp_next) = HavokPhysics_CollisionQueryResult::HasHit((HavokPhysics_CollisionQueryResult *)mp_prev[8].mp_prev->mp_next);
          p_m_physicsDetailResourcePool = &this->m_physicsDetailResourcePool;
          if ( !BYTE4(mp_prev[6].mp_next) )
            p_m_physicsDetailResourcePool = &this->m_physicsPredictiveResourcePool;
          LUIPool<LUITraceQueryResource,8,0>::Free(p_m_physicsDetailResourcePool, (LUITraceQueryResource *)mp_prev[8].mp_prev);
          mp_prev[8].mp_prev = NULL;
          --this->m_numActiveRequests;
        }
        if ( !BYTE6(mp_prev[6].mp_next) )
        {
          m_localClientNum = this->m_localClientNum;
          if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
          {
            LODWORD(v18) = 2;
            LODWORD(v17) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v11 = cg_t::ms_allocatedCount;
          if ( m_localClientNum >= cg_t::ms_allocatedCount )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 215, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( m_localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( m_localClientNum )") )
              __debugbreak();
            v11 = cg_t::ms_allocatedCount;
          }
          v12 = this->m_localClientNum;
          if ( (unsigned int)v12 >= v11 )
          {
            LODWORD(v18) = v11;
            LODWORD(v17) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          if ( !cg_t::ms_cgArray[v12] )
          {
            LODWORD(v18) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v18) )
              __debugbreak();
          }
          if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
          {
            LODWORD(v18) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v18) )
              __debugbreak();
          }
          p_view = &cg_t::ms_cgArray[v12]->refdef.view;
          if ( !p_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
            __debugbreak();
          refdefViewOrg_aab = p_view->refdefViewOrg_aab;
          v = (_DWORD *)p_view->org.org.v;
          if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
            __debugbreak();
          LODWORD(start.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
          LODWORD(start.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
          LODWORD(start.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
          ClientVisibility = FX_GetClientVisibility(this->m_localClientNum, &start, (const vec3_t *)&mp_prev[7]);
          BYTE6(mp_prev[6].mp_next) = *(float *)&ClientVisibility < 0.000099999997;
          memset(&start, 0, sizeof(start));
        }
      }
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
    }
  }
}

/*
==============
LUITraceRunner::Frame
==============
*/
void LUITraceRunner::Frame(LUITraceRunner *this)
{
  if ( this->m_initialized )
  {
    Profile_Begin(578);
    LUITraceRunner::CompleteRequests(this);
    LUITraceRunner::StartRequests(this);
    Profile_EndInternal(NULL);
  }
}

/*
==============
LUITraceRunner::Frame
==============
*/
void LUITraceRunner::Frame(LocalClientNum_t localClientNum)
{
  LUITraceRunner *v1; 

  v1 = &s_traceRunners[localClientNum];
  if ( v1->m_initialized )
  {
    Profile_Begin(578);
    LUITraceRunner::CompleteRequests(v1);
    LUITraceRunner::StartRequests(v1);
    Profile_EndInternal(NULL);
  }
}

/*
==============
LUITraceRunner::GetTraceResult
==============
*/
bool LUITraceRunner::GetTraceResult(LUITraceRunner *this, LUITraceRequest *ticket, bool *outHit)
{
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  LUITraceRequest *mp_prev; 
  bool result; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 505, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !ticket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 506, ASSERT_TYPE_ASSERT, "(ticket)", (const char *)&queryFormat, "ticket") )
    __debugbreak();
  p_m_listHead = &this->m_activeRequests.m_listHead;
  mp_next = this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (LUITraceRequest *)mp_next[1].mp_prev;
    if ( mp_prev == ticket )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
  }
  if ( !mp_prev->hasResult )
    return 0;
  *outHit = mp_prev->result;
  result = 1;
  mp_prev->ripeForCleanup = 1;
  return result;
}

/*
==============
LUITraceRunner::GetTraceResult
==============
*/
bool LUITraceRunner::GetTraceResult(LocalClientNum_t localClientNum, LUITraceRequest *ticket, bool *outHit)
{
  __int64 v3; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  LUITraceRequest *mp_prev; 
  bool result; 

  v3 = localClientNum;
  if ( !s_traceRunners[v3].m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 505, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !ticket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 506, ASSERT_TYPE_ASSERT, "(ticket)", (const char *)&queryFormat, "ticket") )
    __debugbreak();
  p_m_listHead = &s_traceRunners[v3].m_activeRequests.m_listHead;
  mp_next = s_traceRunners[v3].m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (LUITraceRequest *)mp_next[1].mp_prev;
    if ( mp_prev == ticket )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
  }
  if ( !mp_prev->hasResult )
    return 0;
  *outHit = mp_prev->result;
  result = 1;
  mp_prev->ripeForCleanup = 1;
  return result;
}

/*
==============
LUITraceRunner::GetTraceTargetPosition
==============
*/
void LUITraceRunner::GetTraceTargetPosition(LUITraceRunner *this, const LUITraceRequest *traceRequest, vec3_t *outTargetPosition)
{
  LocalClientNum_t m_localClientNum; 
  centity_t *Entity; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v12; 
  scr_string_t String; 
  unsigned int number; 
  LocalClientNum_t v24; 
  scr_string_t v25; 
  unsigned int v26; 
  unsigned int v27; 
  const DObj *v28; 
  float v29; 
  float v30; 
  float v31; 
  vec3_t *worldOffset; 
  vec3_t *outOffset; 
  vec3_t v34; 
  tmat33_t<vec3_t> dst; 

  if ( !traceRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 336, ASSERT_TYPE_ASSERT, "(traceRequest)", (const char *)&queryFormat, "traceRequest") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(worldOffset) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", worldOffset, 2) )
      __debugbreak();
  }
  if ( m_localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 337, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( m_localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( m_localClientNum )") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, traceRequest->entityNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 340, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  MatrixClear33(&dst);
  if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
  FunctionPointer_origin(&Entity->pose.origin.origin.origin, outTargetPosition);
  if ( Entity->pose.isPosePrecise )
  {
    _XMM0 = LODWORD(outTargetPosition->v[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v12;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = LODWORD(outTargetPosition->v[1]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    outTargetPosition->v[0] = *(float *)&_XMM1;
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v12;
    _XMM0 = LODWORD(outTargetPosition->v[2]);
    __asm
    {
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
    }
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v12;
    outTargetPosition->v[1] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    outTargetPosition->v[2] = *(float *)&_XMM2;
  }
  if ( traceRequest->tagName[0] )
  {
    String = SL_GetString(traceRequest->tagName, 0);
    number = Entity->nextState.number;
    v24 = this->m_localClientNum;
    v25 = String;
    if ( number > 0x9E4 )
    {
      LODWORD(outOffset) = Entity->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", outOffset) )
        __debugbreak();
    }
    if ( (unsigned int)v24 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(outOffset) = 2;
      LODWORD(worldOffset) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", worldOffset, outOffset) )
        __debugbreak();
    }
    v26 = 2533 * v24 + number;
    if ( v26 >= 0x13CA )
    {
      LODWORD(outOffset) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", outOffset) )
        __debugbreak();
    }
    v27 = clientObjMap[v26];
    if ( v27 )
    {
      if ( v27 >= (unsigned int)s_objCount )
      {
        LODWORD(outOffset) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", outOffset) )
          __debugbreak();
      }
      v28 = (const DObj *)s_objBuf[v27];
      if ( v28 )
        CG_DObjGetWorldTagMatrix(&Entity->pose, v28, v25, &dst, outTargetPosition);
    }
    SL_RemoveRefToString(v25);
  }
  LUI_ComputeWorldOffset((const LocalClientNum_t)this->m_localClientNum, traceRequest->entityNum, &dst, &traceRequest->tagOffset, &traceRequest->entityOffset, &traceRequest->worldOffset, &v34);
  v29 = v34.v[1];
  outTargetPosition->v[0] = v34.v[0] + outTargetPosition->v[0];
  v30 = v29 + outTargetPosition->v[1];
  v31 = v34.v[2];
  outTargetPosition->v[1] = v30;
  outTargetPosition->v[2] = v31 + outTargetPosition->v[2];
}

/*
==============
LUITraceRunner::HasActiveRequests
==============
*/
char LUITraceRunner::HasActiveRequests(LUITraceRunner *this)
{
  ntl::internal::list_node_base *mp_next; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 528, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  mp_next = this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_activeRequests.m_listHead )
    return 1;
  if ( mp_next != this->m_activeRequests.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    __debugbreak();
  return 0;
}

/*
==============
LUITraceRunner::HasActiveRequests
==============
*/
char LUITraceRunner::HasActiveRequests(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 

  v1 = localClientNum;
  if ( !s_traceRunners[v1].m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 528, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  p_m_listHead = &s_traceRunners[v1].m_activeRequests.m_listHead;
  mp_next = s_traceRunners[v1].m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)p_m_listHead )
    return 1;
  if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    __debugbreak();
  return 0;
}

/*
==============
LUITraceRunner::HasTraceResult
==============
*/
bool LUITraceRunner::HasTraceResult(LUITraceRunner *this, LUITraceRequest *ticket)
{
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  LUITraceRequest *mp_prev; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 484, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !ticket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 485, ASSERT_TYPE_ASSERT, "(ticket)", (const char *)&queryFormat, "ticket") )
    __debugbreak();
  p_m_listHead = &this->m_activeRequests.m_listHead;
  mp_next = this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (LUITraceRequest *)mp_next[1].mp_prev;
    if ( mp_prev == ticket )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
  }
  return mp_prev->hasResult;
}

/*
==============
LUITraceRunner::HasTraceResult
==============
*/
bool LUITraceRunner::HasTraceResult(LocalClientNum_t localClientNum, LUITraceRequest *ticket)
{
  __int64 v2; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  LUITraceRequest *mp_prev; 

  v2 = localClientNum;
  if ( !s_traceRunners[v2].m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 484, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !ticket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 485, ASSERT_TYPE_ASSERT, "(ticket)", (const char *)&queryFormat, "ticket") )
    __debugbreak();
  p_m_listHead = &s_traceRunners[v2].m_activeRequests.m_listHead;
  mp_next = s_traceRunners[v2].m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev = (LUITraceRequest *)mp_next[1].mp_prev;
    if ( mp_prev == ticket )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
  }
  return mp_prev->hasResult;
}

/*
==============
LUITraceRunner::Initialize
==============
*/
void LUITraceRunner::Initialize(LUITraceRunner *this)
{
  ntl::internal::list_node_base *mp_next; 
  const char *v3; 
  int v4; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsPredictiveResourcePool; 
  unsigned __int16 v9; 
  unsigned __int16 *m_poolData; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsDetailResourcePool; 
  unsigned __int16 v12; 
  unsigned __int16 *v13; 
  unsigned __int16 v14; 
  unsigned __int16 *v15; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v17; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v18; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v20; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v21; 
  __int32 v22; 
  __int32 v23; 
  unsigned __int16 m_firstFree; 
  __int64 v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  HavokPhysics_IgnoreBodies *IgnoreBodies; 
  __int64 i; 
  unsigned __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  __int64 v35[16]; 

  if ( this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 86, ASSERT_TYPE_ASSERT, "(!m_initialized)", (const char *)&queryFormat, "!m_initialized") )
    __debugbreak();
  mp_next = this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_activeRequests.m_listHead )
  {
    v3 = "m_activeRequests.empty()";
    v4 = 88;
    v5 = "(m_activeRequests.empty())";
    v6 = "c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp";
LABEL_8:
    if ( CoreAssert_Handler(v6, v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
      __debugbreak();
    goto LABEL_10;
  }
  if ( mp_next != this->m_activeRequests.m_listHead.m_sentinel.mp_prev )
  {
    v3 = "m_sentinel.mp_next == m_sentinel.mp_prev";
    v4 = 95;
    v5 = "( m_sentinel.mp_next == m_sentinel.mp_prev )";
    v6 = "c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h";
    goto LABEL_8;
  }
LABEL_10:
  v7 = 0i64;
  p_m_physicsPredictiveResourcePool = &this->m_physicsPredictiveResourcePool;
  v9 = 0;
  m_poolData = this->m_physicsPredictiveResourcePool.m_poolData;
  do
    *m_poolData++ = ++v9;
  while ( v9 < 8u );
  this->m_physicsPredictiveResourcePool.m_firstFree = 0;
  p_m_physicsDetailResourcePool = &this->m_physicsDetailResourcePool;
  v12 = 0;
  v13 = this->m_physicsDetailResourcePool.m_poolData;
  do
    *v13++ = ++v12;
  while ( v12 < 8u );
  this->m_physicsDetailResourcePool.m_firstFree = 0;
  memset_0(&this->m_requestPool, 0, 0x6A40ui64);
  v14 = 0;
  v15 = this->m_requestPool.m_poolData;
  do
    *v15++ = ++v14;
  while ( v14 < 0xC8u );
  this->m_requestPool.m_firstFree = 0;
  p_m_listHead = &this->m_activeRequests.m_listHead;
  v17 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_activeRequests.m_listHead.m_sentinel.mp_next;
  if ( v17 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_activeRequests.m_listHead )
  {
    do
    {
      v18 = v17[1].mp_next;
      v17->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_activeRequests.m_freelist.m_head;
      this->m_activeRequests.m_freelist.m_head.mp_next = v17;
      v17 = v18;
    }
    while ( v18 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_activeRequests.m_listHead.m_sentinel.mp_next = &this->m_activeRequests.m_listHead.m_sentinel;
  v19 = &this->m_requestQueue.m_listHead;
  v20 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_requestQueue.m_listHead.m_sentinel.mp_next;
  if ( v20 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_requestQueue.m_listHead )
  {
    do
    {
      v21 = v20[1].mp_next;
      v20->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_requestQueue.m_freelist.m_head;
      this->m_requestQueue.m_freelist.m_head.mp_next = v20;
      v20 = v21;
    }
    while ( v21 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v19 );
  }
  v19->m_sentinel.mp_prev = &v19->m_sentinel;
  this->m_requestQueue.m_listHead.m_sentinel.mp_next = &this->m_requestQueue.m_listHead.m_sentinel;
  v22 = 3 * this->m_localClientNum + 2;
  v23 = 3 * this->m_localClientNum + 4;
  do
  {
    m_firstFree = this->m_physicsPredictiveResourcePool.m_firstFree;
    if ( m_firstFree < 8u )
    {
      this->m_physicsPredictiveResourcePool.m_firstFree = this->m_physicsPredictiveResourcePool.m_poolData[m_firstFree];
      p_m_physicsPredictiveResourcePool->m_poolData[m_firstFree] = 9;
      v25 = (__int64)&p_m_physicsPredictiveResourcePool->m_pool[m_firstFree];
      if ( v25 )
        goto LABEL_26;
    }
    else
    {
      v25 = 0i64;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 103, ASSERT_TYPE_ASSERT, "(physicsPredictiveResource)", (const char *)&queryFormat, "physicsPredictiveResource") )
      __debugbreak();
LABEL_26:
    *(_QWORD *)(v25 + 8) = Physics_AllocateCollisionQueryResult((Physics_WorldId)v22, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
    *(_QWORD *)(v25 + 24) = Physics_AllocateIgnoreBodies(0, 0);
    v26 = this->m_physicsDetailResourcePool.m_firstFree;
    v35[v7] = v25;
    if ( v26 < 8u )
    {
      this->m_physicsDetailResourcePool.m_firstFree = this->m_physicsDetailResourcePool.m_poolData[v26];
      p_m_physicsDetailResourcePool->m_poolData[v26] = 9;
      v27 = (__int64)&p_m_physicsDetailResourcePool->m_pool[v26];
      if ( v27 )
        goto LABEL_31;
    }
    else
    {
      v27 = 0i64;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 109, ASSERT_TYPE_ASSERT, "(physicsDetailResource)", (const char *)&queryFormat, "physicsDetailResource") )
      __debugbreak();
LABEL_31:
    *(_QWORD *)(v27 + 8) = Physics_AllocateCollisionQueryResult((Physics_WorldId)v23, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
    IgnoreBodies = Physics_AllocateIgnoreBodies(0, 0);
    v35[v7 + 8] = v27;
    ++v7;
    *(_QWORD *)(v27 + 24) = IgnoreBodies;
  }
  while ( v7 < 8 );
  for ( i = 0i64; i < 8; ++i )
  {
    v30 = (v35[i] - (__int64)p_m_physicsPredictiveResourcePool) >> 5;
    if ( v30 <= 7 )
    {
      v31 = (unsigned __int16)v30;
      if ( (unsigned __int16)v30 >= 8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
        __debugbreak();
      if ( p_m_physicsPredictiveResourcePool->m_poolData[v31] <= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
        __debugbreak();
      this->m_physicsPredictiveResourcePool.m_poolData[v31] = this->m_physicsPredictiveResourcePool.m_firstFree;
      this->m_physicsPredictiveResourcePool.m_firstFree = v31;
    }
    v32 = (v35[i + 8] - (__int64)p_m_physicsDetailResourcePool) >> 5;
    if ( v32 <= 7 )
    {
      v33 = (unsigned __int16)v32;
      if ( (unsigned __int16)v32 >= 8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
        __debugbreak();
      if ( p_m_physicsDetailResourcePool->m_poolData[v33] <= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
        __debugbreak();
      this->m_physicsDetailResourcePool.m_poolData[v33] = this->m_physicsDetailResourcePool.m_firstFree;
      this->m_physicsDetailResourcePool.m_firstFree = v33;
    }
  }
  this->m_numActiveRequests = 0;
  this->m_initialized = 1;
}

/*
==============
LUITraceRunner::Initialize
==============
*/
void LUITraceRunner::Initialize(LocalClientNum_t localClientNum)
{
  LUITraceRunner *v2; 

  v2 = &s_traceRunners[localClientNum];
  if ( v2->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 73, ASSERT_TYPE_ASSERT, "(!m_initialized)", (const char *)&queryFormat, "!m_initialized") )
    __debugbreak();
  v2->m_localClientNum = localClientNum;
  LUITraceRunner::Initialize(v2);
}

/*
==============
LUITraceRunner::IsTargetInFOV
==============
*/
_BOOL8 LUITraceRunner::IsTargetInFOV(LUITraceRunner *this, const LUITraceRequest *traceRequest)
{
  RefdefView *p_view; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  cg_t *LocalClientGlobals; 
  float v12; 
  vec3_t outOrg; 
  __int64 v15; 
  vec3_t outTargetPosition; 

  v15 = -2i64;
  LUITraceRunner::GetTraceTargetPosition(this, traceRequest, &outTargetPosition);
  p_view = &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v4 = outTargetPosition.v[0] - outOrg.v[0];
  v6 = LODWORD(outTargetPosition.v[1]);
  v5 = outTargetPosition.v[1] - outOrg.v[1];
  v7 = outTargetPosition.v[2] - outOrg.v[2];
  *(float *)&v6 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v7 * v7));
  _XMM1 = v6;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm7, xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = I_fclamp((float)((float)((float)(v5 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)((float)(v4 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[2]), 0.0, 1.0);
  v12 = acosf_0(*(float *)&_XMM0) * 57.295776;
  *(float *)&v6 = (float)(atanf_0(p_view->fov.tanHalfFovX) * 57.295776) + 5.0;
  memset(&outOrg, 0, sizeof(outOrg));
  return *(float *)&v6 >= v12;
}

/*
==============
LUITraceRunner::RequestTraceToEntityOffset
==============
*/
LUITraceRequest *LUITraceRunner::RequestTraceToEntityOffset(LUITraceRunner *this, int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, unsigned int ignoreOffsetsForTraces, bool highPriority, bool *outTriviallyNotInSight, bool useClientDetailWorld)
{
  LocalClientNum_t m_localClientNum; 
  LUIPool<LUITraceRequest,200,1> *p_m_requestPool; 
  unsigned __int16 m_firstFree; 
  LUITraceRequest *v18; 
  RefdefView *p_view; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  cg_t *LocalClientGlobals; 
  float v28; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::list_node<LUITraceRequest *> *mp_next; 
  ntl::internal::list_node<LUITraceRequest *> *v31; 
  __int64 v32; 
  vec3_t outOrg; 
  __int64 v34; 
  vec3_t outTargetPosition; 

  v34 = -2i64;
  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 390, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v32) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v32, 2) )
      __debugbreak();
  }
  if ( m_localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 391, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( m_localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( m_localClientNum )") )
    __debugbreak();
  if ( (CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum)->flags & 1) == 0 )
  {
    *outTriviallyNotInSight = 1;
    return 0i64;
  }
  *outTriviallyNotInSight = 0;
  p_m_requestPool = &this->m_requestPool;
  m_firstFree = this->m_requestPool.m_firstFree;
  if ( m_firstFree >= 0xC8u )
    return 0i64;
  this->m_requestPool.m_firstFree = this->m_requestPool.m_poolData[m_firstFree];
  p_m_requestPool->m_poolData[m_firstFree] = 201;
  v18 = &p_m_requestPool->m_pool[m_firstFree];
  if ( !v18 )
    return 0i64;
  v18->entityNum = entityNum;
  v18->ignoreEntityNum = entityNum;
  Core_strcpy(v18->tagName, 0x40ui64, tagName);
  if ( (ignoreOffsetsForTraces & 1) == 0 )
    v18->worldOffset = *worldOffset;
  if ( (ignoreOffsetsForTraces & 2) == 0 )
  {
    v18->tagOffset.v[0] = tagOffset->v[0];
    v18->tagOffset.v[1] = tagOffset->v[1];
    v18->tagOffset.v[2] = tagOffset->v[2];
  }
  if ( (ignoreOffsetsForTraces & 4) == 0 )
    v18->entityOffset = *entityOffset;
  v18->useClientDetailWorld = useClientDetailWorld;
  v18->physicsResource = NULL;
  v18->hasResult = 0;
  v18->ripeForCleanup = 0;
  LUITraceRunner::GetTraceTargetPosition(this, v18, &outTargetPosition);
  p_view = &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v20 = outTargetPosition.v[0] - outOrg.v[0];
  v22 = LODWORD(outTargetPosition.v[1]);
  v21 = outTargetPosition.v[1] - outOrg.v[1];
  v23 = outTargetPosition.v[2] - outOrg.v[2];
  *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v23 * v23));
  _XMM1 = v22;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm7, xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = I_fclamp((float)((float)((float)(v21 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)((float)(v23 * (float)(1.0 / *(float *)&_XMM1)) * LocalClientGlobals->refdef.view.axis.m[0].v[2]), 0.0, 1.0);
  v28 = acosf_0(*(float *)&_XMM0) * 57.295776;
  *(float *)&v22 = (float)(atanf_0(p_view->fov.tanHalfFovX) * 57.295776) + 5.0;
  memset(&outOrg, 0, sizeof(outOrg));
  if ( *(float *)&v22 < v28 )
  {
    *outTriviallyNotInSight = 1;
    LUIPool<LUITraceRequest,200,1>::Free(&this->m_requestPool, v18);
    return 0i64;
  }
  p_m_freelist = &this->m_requestQueue.m_freelist;
  if ( highPriority )
  {
    if ( !p_m_freelist->m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
      __debugbreak();
    mp_next = (ntl::internal::list_node<LUITraceRequest *> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    mp_next->mp_prev = NULL;
    mp_next->mp_next = NULL;
    mp_next->m_data = v18;
    ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::insert_before(&this->m_requestQueue.m_listHead, (ntl::internal::list_node<LUITraceRequest *> *)this->m_requestQueue.m_listHead.m_sentinel.mp_next, mp_next);
    return v18;
  }
  else
  {
    if ( !p_m_freelist->m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
      __debugbreak();
    v31 = (ntl::internal::list_node<LUITraceRequest *> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v31->mp_prev = NULL;
    v31->mp_next = NULL;
    v31->m_data = v18;
    ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::insert_before(&this->m_requestQueue.m_listHead, (ntl::internal::list_node<LUITraceRequest *> *)&this->m_requestQueue.m_listHead, v31);
    return v18;
  }
}

/*
==============
LUITraceRunner::RequestTraceToEntityOffset
==============
*/
LUITraceRequest *LUITraceRunner::RequestTraceToEntityOffset(LocalClientNum_t localClientNum, int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, unsigned int ignoreOffsetsForTraces, bool highPriority, bool *outTriviallyNotInSight, bool useClientDetailWorld)
{
  return LUITraceRunner::RequestTraceToEntityOffset(&s_traceRunners[localClientNum], entityNum, tagName, tagOffset, entityOffset, worldOffset, ignoreOffsetsForTraces, highPriority, outTriviallyNotInSight, useClientDetailWorld);
}

/*
==============
LUITraceRunner::RequestTraceToPosition
==============
*/
LUITraceRequest *LUITraceRunner::RequestTraceToPosition(LUITraceRunner *this, const vec3_t *position, int ignoreEntityNum, bool highPriority, bool useClientDetailWorld)
{
  unsigned __int16 m_firstFree; 
  LUIPool<LUITraceRequest,200,1> *p_m_requestPool; 
  LUITraceRequest *v8; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_node<LUITraceRequest *> *v11; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *v13; 

  m_firstFree = this->m_requestPool.m_firstFree;
  p_m_requestPool = &this->m_requestPool;
  if ( m_firstFree >= 0xC8u )
    return 0i64;
  this->m_requestPool.m_firstFree = this->m_requestPool.m_poolData[m_firstFree];
  p_m_requestPool->m_poolData[m_firstFree] = 201;
  v8 = &p_m_requestPool->m_pool[m_firstFree];
  if ( !v8 )
    return 0i64;
  v8->entityNum = 2047;
  v8->ignoreEntityNum = ignoreEntityNum;
  v8->tagName[0] = 0;
  p_m_freelist = &this->m_requestQueue.m_freelist;
  *(_QWORD *)v8->tagOffset.v = 0i64;
  *(_QWORD *)&v8->tagOffset.z = 0i64;
  *(_QWORD *)&v8->entityOffset.y = 0i64;
  *(_QWORD *)v8->worldOffset.v = 0i64;
  v8->worldOffset.v[2] = 0.0;
  v8->useClientDetailWorld = useClientDetailWorld;
  v8->physicsResource = NULL;
  v8->hasResult = 0;
  v8->ripeForCleanup = 0;
  v8->targetPosition = *position;
  mp_next = this->m_requestQueue.m_freelist.m_head.mp_next;
  if ( highPriority )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
      __debugbreak();
    v11 = (ntl::internal::list_node<LUITraceRequest *> *)p_m_freelist->m_head.mp_next;
    p_m_listHead = &this->m_requestQueue.m_listHead;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v11->mp_prev = NULL;
    v11->mp_next = NULL;
    v11->m_data = v8;
    v13 = (ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *)this->m_requestQueue.m_listHead.m_sentinel.mp_next;
  }
  else
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
      __debugbreak();
    v11 = (ntl::internal::list_node<LUITraceRequest *> *)p_m_freelist->m_head.mp_next;
    v13 = &this->m_requestQueue.m_listHead;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    p_m_listHead = &this->m_requestQueue.m_listHead;
    v11->mp_prev = NULL;
    v11->mp_next = NULL;
    v11->m_data = v8;
  }
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::insert_before(p_m_listHead, (ntl::internal::list_node<LUITraceRequest *> *)v13, v11);
  return v8;
}

/*
==============
LUITraceRunner::RequestTraceToPosition
==============
*/
LUITraceRequest *LUITraceRunner::RequestTraceToPosition(LocalClientNum_t localClientNum, const vec3_t *position, int ignoreEntityNum, bool highPriority, bool useClientDetailWorld)
{
  return LUITraceRunner::RequestTraceToPosition(&s_traceRunners[localClientNum], position, ignoreEntityNum, highPriority, useClientDetailWorld);
}

/*
==============
LUITraceRunner::SetLocalClientNum
==============
*/
void LUITraceRunner::SetLocalClientNum(LUITraceRunner *this, LocalClientNum_t localClientNum)
{
  if ( this->m_initialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 73, ASSERT_TYPE_ASSERT, "(!m_initialized)", (const char *)&queryFormat, "!m_initialized") )
      __debugbreak();
    this->m_localClientNum = localClientNum;
  }
  else
  {
    this->m_localClientNum = localClientNum;
  }
}

/*
==============
LUITraceRunner::Shutdown
==============
*/
void LUITraceRunner::Shutdown(LUITraceRunner *this)
{
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *mp_next; 
  ntl::internal::list_node_base *v4; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *v5; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node<LUITraceRequest *> *v7; 
  ntl::internal::list_node_base *v8; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsDetailResourcePool; 
  unsigned __int64 v10; 
  __int64 v11; 
  LUIPool<LUITraceRequest,200,1> *p_m_requestPool; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsPredictiveResourcePool; 
  LUIPool<LUITraceQueryResource,8,0> *v17; 
  unsigned __int16 m_firstFree; 
  LUITraceQueryResource *v19; 
  unsigned __int16 v20; 
  LUITraceQueryResource *v21; 

  if ( this->m_initialized )
  {
    p_m_listHead = &this->m_activeRequests.m_listHead;
    while ( 1 )
    {
      mp_next = (ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *)p_m_listHead->m_sentinel.mp_next;
      if ( mp_next == p_m_listHead )
        break;
      v4 = p_m_listHead->m_sentinel.mp_next;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      v5 = (ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *)p_m_listHead->m_sentinel.mp_next;
      mp_prev = v4[1].mp_prev;
      if ( v5 == p_m_listHead )
      {
        if ( v5 != (ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *)p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v7 = (ntl::internal::list_node<LUITraceRequest *> *)p_m_listHead->m_sentinel.mp_next;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::remove(p_m_listHead, v7);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      v7->mp_prev = (ntl::internal::list_node_base *)this->m_activeRequests.m_freelist.m_head.mp_next;
      this->m_activeRequests.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v7;
      v8 = mp_prev[8].mp_prev;
      if ( v8 )
      {
        p_m_physicsDetailResourcePool = &this->m_physicsDetailResourcePool;
        if ( !BYTE4(mp_prev[6].mp_next) )
          p_m_physicsDetailResourcePool = &this->m_physicsPredictiveResourcePool;
        v10 = ((char *)v8 - (char *)p_m_physicsDetailResourcePool) >> 5;
        if ( v10 <= 7 )
        {
          v11 = (unsigned __int16)v10;
          if ( (unsigned __int16)v10 >= 8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
            __debugbreak();
          if ( p_m_physicsDetailResourcePool->m_poolData[v11] <= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
            __debugbreak();
          p_m_physicsDetailResourcePool->m_poolData[v11] = p_m_physicsDetailResourcePool->m_firstFree;
          p_m_physicsDetailResourcePool->m_firstFree = v11;
        }
        mp_prev[8].mp_prev = NULL;
      }
      p_m_requestPool = &this->m_requestPool;
      v13 = ((char *)mp_prev - (char *)&this->m_requestPool) / 136;
      if ( v13 <= 0xC7 )
      {
        v14 = (unsigned __int16)v13;
        if ( (unsigned __int16)v13 >= 0xC8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
          __debugbreak();
        if ( p_m_requestPool->m_poolData[v14] <= 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
          __debugbreak();
        p_m_requestPool->m_poolData[v14] = this->m_requestPool.m_firstFree;
        this->m_requestPool.m_firstFree = v14;
        memset_0(mp_prev, 0, 0x88ui64);
      }
    }
    if ( mp_next != (ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *)p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
      __debugbreak();
    v15 = 8i64;
    p_m_physicsPredictiveResourcePool = &this->m_physicsPredictiveResourcePool;
    v17 = &this->m_physicsDetailResourcePool;
    while ( 1 )
    {
      m_firstFree = this->m_physicsPredictiveResourcePool.m_firstFree;
      if ( m_firstFree < 8u )
      {
        this->m_physicsPredictiveResourcePool.m_firstFree = this->m_physicsPredictiveResourcePool.m_poolData[m_firstFree];
        p_m_physicsPredictiveResourcePool->m_poolData[m_firstFree] = 9;
        v19 = &p_m_physicsPredictiveResourcePool->m_pool[m_firstFree];
        if ( v19 )
          goto LABEL_48;
      }
      else
      {
        v19 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 159, ASSERT_TYPE_ASSERT, "(physicsPredictiveResource)", (const char *)&queryFormat, "physicsPredictiveResource") )
        __debugbreak();
LABEL_48:
      if ( !v19->physicsQuery.result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 160, ASSERT_TYPE_ASSERT, "(physicsPredictiveResource->physicsQuery.result)", (const char *)&queryFormat, "physicsPredictiveResource->physicsQuery.result") )
        __debugbreak();
      Physics_FreeCollisionQueryResult(v19->physicsQuery.result);
      if ( !v19->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 162, ASSERT_TYPE_ASSERT, "(physicsPredictiveResource->ignoreBodies)", (const char *)&queryFormat, "physicsPredictiveResource->ignoreBodies") )
        __debugbreak();
      Physics_FreeIgnoreBodies(v19->ignoreBodies);
      v20 = this->m_physicsDetailResourcePool.m_firstFree;
      if ( v20 >= 8u )
      {
        v21 = NULL;
LABEL_57:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 166, ASSERT_TYPE_ASSERT, "(physicsDetailResource)", (const char *)&queryFormat, "physicsDetailResource") )
          __debugbreak();
        goto LABEL_59;
      }
      this->m_physicsDetailResourcePool.m_firstFree = this->m_physicsDetailResourcePool.m_poolData[v20];
      v17->m_poolData[v20] = 9;
      v21 = &v17->m_pool[v20];
      if ( !v21 )
        goto LABEL_57;
LABEL_59:
      if ( !v21->physicsQuery.result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 167, ASSERT_TYPE_ASSERT, "(physicsDetailResource->physicsQuery.result)", (const char *)&queryFormat, "physicsDetailResource->physicsQuery.result") )
        __debugbreak();
      Physics_FreeCollisionQueryResult(v21->physicsQuery.result);
      if ( !v21->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 169, ASSERT_TYPE_ASSERT, "(physicsDetailResource->ignoreBodies)", (const char *)&queryFormat, "physicsDetailResource->ignoreBodies") )
        __debugbreak();
      Physics_FreeIgnoreBodies(v21->ignoreBodies);
      if ( !--v15 )
      {
        this->m_initialized = 0;
        return;
      }
    }
  }
}

/*
==============
LUITraceRunner::Shutdown
==============
*/
void LUITraceRunner::Shutdown(LocalClientNum_t localClientNum)
{
  LUITraceRunner::Shutdown(&s_traceRunners[localClientNum]);
}

/*
==============
LUITraceRunner::StartRequests
==============
*/
void LUITraceRunner::StartRequests(LUITraceRunner *this)
{
  LocalClientNum_t m_localClientNum; 
  int *LocalClientGlobals; 
  bool v4; 
  int v5; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  char v8; 
  ntl::internal::list_node_base *v9; 
  ntl::internal::list_node_base *v10; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node_base *v12; 
  ntl::internal::list_node<LUITraceRequest *> *v13; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::list_node<LUITraceRequest *> *v15; 
  __int64 mp_prev_low; 
  __int64 v17; 
  CgEntitySystem *v18; 
  int m_numActiveRequests; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsDetailResourcePool; 
  unsigned __int16 m_firstFree; 
  LUITraceQueryResource *v22; 
  __int32 v23; 
  LUIPool<LUITraceQueryResource,8,0> *p_m_physicsPredictiveResourcePool; 
  unsigned __int16 v25; 
  int mp_prev_high; 
  unsigned __int8 *WeaponPriorityMap; 
  int v28; 
  __int64 siblings; 
  __int64 linked; 
  vec3_t start; 
  Physics_RaycastExtendedData extendedData; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 231, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( this->m_localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(siblings) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", siblings, 2) )
      __debugbreak();
  }
  if ( m_localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 232, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( m_localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( m_localClientNum )") )
    __debugbreak();
  LocalClientGlobals = (int *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v4 = 0;
  v5 = LocalClientGlobals[74];
  if ( v5 != 2047 )
    v4 = (CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5)->flags & 1) != 0;
  if ( this->m_numActiveRequests < 8 )
  {
    p_m_listHead = &this->m_requestQueue.m_listHead;
    while ( 1 )
    {
      mp_next = this->m_requestQueue.m_listHead.m_sentinel.mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
      if ( v8 )
        return;
      v9 = this->m_requestQueue.m_listHead.m_sentinel.mp_next;
      if ( v9 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v9 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v10 = this->m_requestQueue.m_listHead.m_sentinel.mp_next;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      mp_prev = v10[1].mp_prev;
      v12 = this->m_requestQueue.m_listHead.m_sentinel.mp_next;
      if ( v12 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v12 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v13 = (ntl::internal::list_node<LUITraceRequest *> *)this->m_requestQueue.m_listHead.m_sentinel.mp_next;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::remove(&this->m_requestQueue.m_listHead, v13);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      v13->mp_prev = (ntl::internal::list_node_base *)this->m_requestQueue.m_freelist.m_head.mp_next;
      this->m_requestQueue.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13;
      p_m_freelist = &this->m_activeRequests.m_freelist;
      if ( !this->m_activeRequests.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
        __debugbreak();
      v15 = (ntl::internal::list_node<LUITraceRequest *> *)p_m_freelist->m_head.mp_next;
      p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
      v15->mp_prev = NULL;
      v15->mp_next = NULL;
      v15->m_data = (LUITraceRequest *)mp_prev;
      ntl::internal::list_head_base<ntl::internal::list_node<LUITraceRequest *>>::insert_before(&this->m_activeRequests.m_listHead, (ntl::internal::list_node<LUITraceRequest *> *)&this->m_activeRequests.m_listHead, v15);
      mp_prev_low = SLODWORD(mp_prev->mp_prev);
      if ( (_DWORD)mp_prev_low == 2047 )
        goto LABEL_67;
      v17 = this->m_localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(linked) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", linked) )
          __debugbreak();
      }
      if ( (unsigned int)v17 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(linked) = CgEntitySystem::ms_allocatedCount;
        LODWORD(siblings) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", siblings, linked) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v17] )
      {
        LODWORD(linked) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", linked) )
          __debugbreak();
      }
      v18 = CgEntitySystem::ms_entitySystemArray[v17];
      if ( (unsigned int)mp_prev_low >= 0x800 )
      {
        LODWORD(linked) = 2048;
        LODWORD(siblings) = mp_prev_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", siblings, linked) )
          __debugbreak();
      }
      if ( (v18->m_entities[mp_prev_low].flags & 1) != 0 )
        break;
      *(_WORD *)((char *)&mp_prev[6].mp_next + 5) = 257;
      m_numActiveRequests = this->m_numActiveRequests;
LABEL_97:
      if ( m_numActiveRequests >= 8 )
        return;
    }
    LUITraceRunner::GetTraceTargetPosition(this, (const LUITraceRequest *)mp_prev, (vec3_t *)&mp_prev[7]);
LABEL_67:
    if ( BYTE4(mp_prev[6].mp_next) )
    {
      p_m_physicsDetailResourcePool = &this->m_physicsDetailResourcePool;
      m_firstFree = this->m_physicsDetailResourcePool.m_firstFree;
      if ( m_firstFree < 8u )
      {
        this->m_physicsDetailResourcePool.m_firstFree = this->m_physicsDetailResourcePool.m_poolData[m_firstFree];
        p_m_physicsDetailResourcePool->m_poolData[m_firstFree] = 9;
        v22 = &p_m_physicsDetailResourcePool->m_pool[m_firstFree];
      }
      else
      {
        v22 = NULL;
      }
      v23 = 3 * this->m_localClientNum + 4;
    }
    else
    {
      p_m_physicsPredictiveResourcePool = &this->m_physicsPredictiveResourcePool;
      v25 = this->m_physicsPredictiveResourcePool.m_firstFree;
      if ( v25 < 8u )
      {
        this->m_physicsPredictiveResourcePool.m_firstFree = this->m_physicsPredictiveResourcePool.m_poolData[v25];
        p_m_physicsPredictiveResourcePool->m_poolData[v25] = 9;
        v22 = &p_m_physicsPredictiveResourcePool->m_pool[v25];
      }
      else
      {
        v22 = NULL;
      }
      v23 = 3 * this->m_localClientNum + 2;
    }
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 278, ASSERT_TYPE_ASSERT, "(physicsResource)", (const char *)&queryFormat, "physicsResource") )
      __debugbreak();
    if ( !v22->physicsQuery.result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_traces.cpp", 279, ASSERT_TYPE_ASSERT, "(physicsResource->physicsQuery.result)", (const char *)&queryFormat, "physicsResource->physicsQuery.result") )
      __debugbreak();
    mp_prev[8].mp_prev = (ntl::internal::list_node_base *)v22;
    v22->physicsQuery.isComplete = 0;
    HavokPhysics_CollisionQueryResult::Reset((HavokPhysics_CollisionQueryResult *)mp_prev[8].mp_prev->mp_next, 1);
    HavokPhysics_IgnoreBodies::Reset((HavokPhysics_IgnoreBodies *)mp_prev[8].mp_prev[1].mp_next);
    mp_prev_high = HIDWORD(mp_prev->mp_prev);
    if ( mp_prev_high != 2047 )
      HavokPhysics_IgnoreBodies::AddIgnoreEntity((HavokPhysics_IgnoreBodies *)mp_prev[8].mp_prev[1].mp_next, mp_prev_high, 1, 1, 0, 1, 1);
    if ( v4 )
      HavokPhysics_IgnoreBodies::AddIgnoreEntity((HavokPhysics_IgnoreBodies *)mp_prev[8].mp_prev[1].mp_next, LocalClientGlobals[74], 1, 1, 0, 1, 1);
    extendedData.ignoreBodies = NULL;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 8423457;
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
      extendedData.contents |= 2u;
    extendedData.ignoreBodies = (HavokPhysics_IgnoreBodies *)mp_prev[8].mp_prev[1].mp_next;
    extendedData.disableBackFacingTriangleHits = 0;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InitialInsideHits;
    if ( BYTE4(mp_prev[6].mp_next) )
    {
      WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
      Physics_AddDetailTrace((HavokPhysics_CollisionQueryResult *)mp_prev[8].mp_prev->mp_next, WeaponPriorityMap);
    }
    if ( LocalClientGlobals == (int *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    v28 = LocalClientGlobals[6757];
    if ( LocalClientGlobals == (int *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(start.v[0]) = LocalClientGlobals[6734] ^ ((v28 ^ ((_DWORD)LocalClientGlobals + 26936)) * ((v28 ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(start.v[1]) = LocalClientGlobals[6735] ^ ((v28 ^ ((_DWORD)LocalClientGlobals + 26940)) * ((v28 ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(start.v[2]) = ((v28 ^ ((_DWORD)LocalClientGlobals + 26944)) * ((v28 ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LocalClientGlobals[6736];
    Physics_DeferredRaycast((Physics_WorldId)v23, &start, (const vec3_t *)&mp_prev[7], &extendedData, (Physics_DeferredCollisionQueryData *)mp_prev[8].mp_prev);
    m_numActiveRequests = ++this->m_numActiveRequests;
    memset(&start, 0, sizeof(start));
    goto LABEL_97;
  }
}

