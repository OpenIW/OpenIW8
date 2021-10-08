/*
==============
TacGraph_Read
==============
*/

void __fastcall TacGraph_Read(MemoryFile *memFile)
{
  ?TacGraph_Read@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
TacGraph_Exists
==============
*/

bool __fastcall TacGraph_Exists()
{
  return ?TacGraph_Exists@@YA_NXZ();
}

/*
==============
tacpoint_ref_t::IsDefined
==============
*/

bool __fastcall tacpoint_ref_t::IsDefined(tacpoint_ref_t *this)
{
  return ?IsDefined@tacpoint_ref_t@@QEBA_NXZ(this);
}

/*
==============
G_TacGraph_Shutdown
==============
*/

void G_TacGraph_Shutdown(void)
{
  ?G_TacGraph_Shutdown@@YAXXZ();
}

/*
==============
G_TacGraph_Init
==============
*/

void G_TacGraph_Init(void)
{
  ?G_TacGraph_Init@@YAXXZ();
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinConeWithinRadius(const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinConeWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@MM0PEBU1@0M_N@Z(origin, minRadius, maxRadius, pos, pTargetPoint, dir, dot, b3D);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@PEBT2@HM@Z(origin, radius, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraph_CalcOpenView
==============
*/

void __fastcall TacGraph_CalcOpenView(const vec3_t *origin, float radius, float *pResults, int numSlices)
{
  ?TacGraph_CalcOpenView@@YAXAEBTvec3_t@@MPEAMH@Z(origin, radius, pResults, numSlices);
}

/*
==============
tacpoint_ref_t::SetPoint
==============
*/

void __fastcall tacpoint_ref_t::SetPoint(tacpoint_ref_t *this, const tacpoint_t *pPoint)
{
  ?SetPoint@tacpoint_ref_t@@QEAAXPEBUtacpoint_t@@@Z(this, pPoint);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@PEBT2@HM@Z(origin, radius, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraph_GetApproxGroundPosForPoint
==============
*/

void __fastcall TacGraph_GetApproxGroundPosForPoint(const tacpoint_t *pPoint, vec3_t *outPos)
{
  ?TacGraph_GetApproxGroundPosForPoint@@YAXPEBUtacpoint_t@@AEATvec3_t@@@Z(pPoint, outPos);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadius(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithVisWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@@Z(origin, radius, pos, pTargetPoint);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadius(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@@Z(origin, radius, pos, pTargetPoint);
}

/*
==============
TacGraph_FindPointsInRadiusWithVis_Sorted
==============
*/

int __fastcall TacGraph_FindPointsInRadiusWithVis_Sorted(const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraph_FindPointsInRadiusWithVis_Sorted@@YAHAEBTvec3_t@@MMMPEBUtacpoint_t@@PEAPEBU2@H@Z(pos, minRadius, maxRadius, minRadiusZ, pVisPoint, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinConeWithinRadius(const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  return ?TacGraph_FindClosestPointWithVisWithinConeWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@MM0PEBU1@0M_N@Z(origin, minRadius, maxRadius, pos, pTargetPoint, dir, dot, b3D);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinVolumeIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinVolumeIgnorePoints(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinVolumeIgnorePoints@@YAPEBUtacpoint_t@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@PEBT3@HM@Z(pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraph_FindClosestPointWithVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisNearConeWithinRadius(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, float weight, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  return ?TacGraph_FindClosestPointWithVisNearConeWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@0MM_NW4team_t@@@Z(origin, radius, pos, pTargetPoint, dir, dot, weight, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacGraph_FindClosestPointWithoutVisNearConeWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisNearConeWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  return ?TacGraph_FindClosestPointWithoutVisNearConeWithinVolume@@YAPEBUtacpoint_t@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@1M@Z(pVolume, pos, pTargetPoint, dir, weight);
}

/*
==============
TacGraph_CalcOpenView
==============
*/

void __fastcall TacGraph_CalcOpenView(const vec3_t *origin, float radius, const bfx::AreaHandle *hArea, float *pResults, int numSlices)
{
  ?TacGraph_CalcOpenView@@YAXAEBTvec3_t@@MAEBVAreaHandle@bfx@@PEAMH@Z(origin, radius, hArea, pResults, numSlices);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos(const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *losPos, const bfx::AreaHandle *hArea, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  return ?TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos@@YAPEBUtacpoint_t@@AEBTvec3_t@@MM0PEBU1@0AEBVAreaHandle@bfx@@_NW4team_t@@@Z(origin, minRadius, maxRadius, pos, pTargetPoint, losPos, hArea, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacVisGraph_HasVis
==============
*/

bool __fastcall TacVisGraph_HasVis(const tacpoint_t *pPoint1, const tacpoint_t *pPoint2)
{
  return ?TacVisGraph_HasVis@@YA_NPEBUtacpoint_t@@0@Z(pPoint1, pPoint2);
}

/*
==============
TacGraph_FindClosestPointWithStaticNavLos
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithStaticNavLos(const vec3_t *pos, const vec3_t *losPos, const bfx::AreaHandle *hArea)
{
  return ?TacGraph_FindClosestPointWithStaticNavLos@@YAPEBUtacpoint_t@@AEBTvec3_t@@0AEBVAreaHandle@bfx@@@Z(pos, losPos, hArea);
}

/*
==============
TacGraph_Write
==============
*/

void __fastcall TacGraph_Write(MemoryFile *memFile)
{
  ?TacGraph_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
TacGraph_HasAllVis
==============
*/

bool __fastcall TacGraph_HasAllVis(const tacpoint_t *pFromPoint, const vec3_t *pos, float radius)
{
  return ?TacGraph_HasAllVis@@YA_NPEBUtacpoint_t@@AEBTvec3_t@@M@Z(pFromPoint, pos, radius);
}

/*
==============
TacGraph_HasAnyVis
==============
*/

bool __fastcall TacGraph_HasAnyVis(const tacpoint_t *pFromPoint, const vec3_t *pos, float radius)
{
  return ?TacGraph_HasAnyVis@@YA_NPEBUtacpoint_t@@AEBTvec3_t@@M@Z(pFromPoint, pos, radius);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinVolumeIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinVolumeIgnorePoints(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraph_FindClosestPointWithVisWithinVolumeIgnorePoints@@YAPEBUtacpoint_t@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@PEBT3@HM@Z(pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
G_TacGraph_Update
==============
*/

void G_TacGraph_Update(void)
{
  ?G_TacGraph_Update@@YAXXZ();
}

/*
==============
TacVisGraph_SetVis
==============
*/

void __fastcall TacVisGraph_SetVis(TacticalGraph *pGraph, unsigned __int16 pt1, unsigned __int16 pt2, bool bVis)
{
  ?TacVisGraph_SetVis@@YAXPEAUTacticalGraph@@GG_N@Z(pGraph, pt1, pt2, bVis);
}

/*
==============
TacGraph_HasVis
==============
*/

bool __fastcall TacGraph_HasVis(const tacpoint_t *pPoint, const pathnode_t *pNode)
{
  return ?TacGraph_HasVis@@YA_NPEBUtacpoint_t@@PEBUpathnode_t@@@Z(pPoint, pNode);
}

/*
==============
tacpoint_ref_t::GetPoint
==============
*/

tacpoint_t *__fastcall tacpoint_ref_t::GetPoint(tacpoint_ref_t *this)
{
  return ?GetPoint@tacpoint_ref_t@@QEBAPEAUtacpoint_t@@XZ(this);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadius(const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, float minDistFromPos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@MM0MPEBU1@@Z(origin, minRadius, maxRadius, pos, minDistFromPos, pTargetPoint);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadius(const vec3_t *origin, float minRadius, float maxRadius, float minRadiusZ, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithVisWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@MMM0PEBU1@@Z(origin, minRadius, maxRadius, minRadiusZ, pos, pTargetPoint);
}

/*
==============
TacGraph_FindClosestPointWithoutVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisNearConeWithinRadius(const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  return ?TacGraph_FindClosestPointWithoutVisNearConeWithinRadius@@YAPEBUtacpoint_t@@AEBTvec3_t@@M0PEBU1@0M@Z(origin, radius, pos, pTargetPoint, dir, weight);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithVisWithinVolume@@YAPEBUtacpoint_t@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@@Z(pVolume, pos, pTargetPoint);
}

/*
==============
tacpoint_ref_t::GetPointPlusOne
==============
*/

tacpoint_t *__fastcall tacpoint_ref_t::GetPointPlusOne(tacpoint_ref_t *this)
{
  return ?GetPointPlusOne@tacpoint_ref_t@@QEBAPEAUtacpoint_t@@XZ(this);
}

/*
==============
TacGraph_FindClosestPoint
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPoint(const vec3_t *pos)
{
  return ?TacGraph_FindClosestPoint@@YAPEBUtacpoint_t@@AEBTvec3_t@@@Z(pos);
}

/*
==============
TacGraph_GetPointForPathnodeVis
==============
*/

const tacpoint_t *__fastcall TacGraph_GetPointForPathnodeVis(const pathnode_t *pNode)
{
  return ?TacGraph_GetPointForPathnodeVis@@YAPEBUtacpoint_t@@PEBUpathnode_t@@@Z(pNode);
}

/*
==============
TacGraph_FindPointsInRadius_Sorted
==============
*/

int __fastcall TacGraph_FindPointsInRadius_Sorted(const tacpoint_t *sourcePoint, const vec3_t *pos, float maxRadius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraph_FindPointsInRadius_Sorted@@YAHPEBUtacpoint_t@@AEBTvec3_t@@MPEAPEBU1@H@Z(sourcePoint, pos, maxRadius, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraph_FindRandomPointReachableFromPoint
==============
*/

const tacpoint_t *__fastcall TacGraph_FindRandomPointReachableFromPoint(const tacpoint_t *sourcePoint, int numAttempts)
{
  return ?TacGraph_FindRandomPointReachableFromPoint@@YAPEBUtacpoint_t@@PEBU1@H@Z(sourcePoint, numAttempts);
}

/*
==============
TacGraph_FindPointsInVolume
==============
*/

int __fastcall TacGraph_FindPointsInVolume(const gentity_s *pVolume, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraph_FindPointsInVolume@@YAHPEBUgentity_s@@PEAPEBUtacpoint_t@@H@Z(pVolume, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraph_GetAreaForPoint
==============
*/

bfx::AreaHandle *__fastcall TacGraph_GetAreaForPoint(const tacpoint_t *pPoint)
{
  return ?TacGraph_GetAreaForPoint@@YAAEAVAreaHandle@bfx@@PEBUtacpoint_t@@@Z(pPoint);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  return ?TacGraph_FindClosestPointWithoutVisWithinVolume@@YAPEBUtacpoint_t@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@@Z(pVolume, pos, pTargetPoint);
}

/*
==============
TacVisGraph_HasVis
==============
*/

bool __fastcall TacVisGraph_HasVis(const TacticalGraph *pGraph, unsigned __int16 pt1, unsigned __int16 pt2)
{
  return ?TacVisGraph_HasVis@@YA_NPEBUTacticalGraph@@GG@Z(pGraph, pt1, pt2);
}

/*
==============
TacVisGraph_HasVis
==============
*/

bool __fastcall TacVisGraph_HasVis(const pathnode_t *pNode0, const pathnode_t *pNode1)
{
  return ?TacVisGraph_HasVis@@YA_NPEBUpathnode_t@@0@Z(pNode0, pNode1);
}

/*
==============
TacGraph_GetPointForPathnode
==============
*/

const tacpoint_t *__fastcall TacGraph_GetPointForPathnode(const pathnode_t *pNode)
{
  return ?TacGraph_GetPointForPathnode@@YAPEBUtacpoint_t@@PEBUpathnode_t@@@Z(pNode);
}

/*
==============
TacGraph_GetPointIndex
==============
*/

unsigned __int16 __fastcall TacGraph_GetPointIndex(const tacpoint_t *pPoint)
{
  return ?TacGraph_GetPointIndex@@YAGPEBUtacpoint_t@@@Z(pPoint);
}

/*
==============
G_TacGraph_Init
==============
*/
void G_TacGraph_Init(void)
{
  ;
}

/*
==============
G_TacGraph_Shutdown
==============
*/
void G_TacGraph_Shutdown(void)
{
  int m_NumTacGraphs; 
  int v1; 
  __int64 v2; 
  TacticalGraph *m_TacGraphs; 
  int v4; 

  m_NumTacGraphs = g_TacGraphData.m_NumTacGraphs;
  v1 = 0;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    v2 = 0i64;
    do
    {
      m_TacGraphs = g_TacGraphData.m_TacGraphs;
      v4 = 0;
      if ( g_TacGraphData.m_TacGraphs[v2].m_NumPoints )
      {
        do
          bfx::AreaHandle::Release(&m_TacGraphs[v2].m_Points[v4++].m_hArea);
        while ( v4 < m_TacGraphs[v2].m_NumPoints );
        m_NumTacGraphs = g_TacGraphData.m_NumTacGraphs;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < m_NumTacGraphs );
  }
}

/*
==============
G_TacGraph_Update
==============
*/
void G_TacGraph_Update(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "TacGraph_Update");
  if ( g_TacGraphData.m_NumTacGraphs )
  {
    Sys_ProfEndNamedEvent();
    TacGraph_DebugDraw(&g_TacGraphData);
  }
  else
  {
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
tacpoint_ref_t::GetPoint
==============
*/
tacpoint_t *tacpoint_ref_t::GetPoint(tacpoint_ref_t *this)
{
  unsigned __int8 m_GraphIDPlusOne; 
  unsigned __int16 m_NumPoints; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int m_NumTacGraphs; 

  m_GraphIDPlusOne = this->m_GraphIDPlusOne;
  if ( !m_GraphIDPlusOne )
    return 0i64;
  if ( (unsigned int)m_GraphIDPlusOne - 1 >= g_TacGraphData.m_NumTacGraphs )
  {
    m_NumTacGraphs = g_TacGraphData.m_NumTacGraphs;
    v6 = m_GraphIDPlusOne - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( m_GraphIDPlusOne - 1 ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "m_GraphIDPlusOne - 1 doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v6, m_NumTacGraphs) )
      __debugbreak();
  }
  m_NumPoints = g_TacGraphData.m_TacGraphs[this->m_GraphIDPlusOne - 1].m_NumPoints;
  if ( this->m_PointID >= m_NumPoints )
  {
    LODWORD(v7) = m_NumPoints;
    LODWORD(v5) = this->m_PointID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( m_PointID ) < (unsigned)( g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints )", "m_PointID doesn't index g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &g_TacGraphData.m_TacGraphs[this->m_GraphIDPlusOne - 1].m_Points[this->m_PointID];
}

/*
==============
tacpoint_ref_t::GetPointPlusOne
==============
*/
tacpoint_t *tacpoint_ref_t::GetPointPlusOne(tacpoint_ref_t *this)
{
  unsigned __int8 m_GraphIDPlusOne; 
  unsigned __int16 m_NumPoints; 
  __int64 m_PointID; 
  __int64 v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int m_NumTacGraphs; 

  m_GraphIDPlusOne = this->m_GraphIDPlusOne;
  if ( !m_GraphIDPlusOne )
    return 0i64;
  if ( (unsigned int)m_GraphIDPlusOne - 1 >= g_TacGraphData.m_NumTacGraphs )
  {
    m_NumTacGraphs = g_TacGraphData.m_NumTacGraphs;
    v8 = m_GraphIDPlusOne - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( m_GraphIDPlusOne - 1 ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "m_GraphIDPlusOne - 1 doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v8, m_NumTacGraphs) )
      __debugbreak();
  }
  m_NumPoints = g_TacGraphData.m_TacGraphs[this->m_GraphIDPlusOne - 1].m_NumPoints;
  if ( this->m_PointID >= m_NumPoints )
  {
    LODWORD(v9) = m_NumPoints;
    LODWORD(v7) = this->m_PointID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( m_PointID ) < (unsigned)( g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints )", "m_PointID doesn't index g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  m_PointID = this->m_PointID;
  v5 = this->m_GraphIDPlusOne;
  if ( (int)m_PointID + 1 < (unsigned int)g_TacGraphData.m_TacGraphs[v5 - 1].m_NumPoints )
    return &g_TacGraphData.m_TacGraphs[v5 - 1].m_Points[m_PointID + 1];
  else
    return 0i64;
}

/*
==============
tacpoint_ref_t::IsDefined
==============
*/
bool tacpoint_ref_t::IsDefined(tacpoint_ref_t *this)
{
  return this->m_GraphIDPlusOne != 0;
}

/*
==============
tacpoint_ref_t::SetPoint
==============
*/
void tacpoint_ref_t::SetPoint(tacpoint_ref_t *this, const tacpoint_t *pPoint)
{
  if ( pPoint )
  {
    this->m_GraphIDPlusOne = pPoint->m_GraphIdx + 1;
    this->m_PointID = TacGraph_GetPointIndex(pPoint);
  }
  else
  {
    this->m_GraphIDPlusOne = 0;
    this->m_PointID = 0;
  }
}

/*
==============
TacGraph_CalcOpenView
==============
*/

void __fastcall TacGraph_CalcOpenView(const vec3_t *origin, double radius, const bfx::AreaHandle *hArea, float *pResults, int numSlices)
{
  const tacpoint_t *ClosestPointWithStaticNavLos; 
  __int64 i; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( bfx::AreaHandle::IsValid((bfx::AreaHandle *)hArea) )
  {
    if ( g_TacGraphData.m_NumTacGraphs <= 0 )
      goto LABEL_8;
    ClosestPointWithStaticNavLos = TacGraphSearch_FindClosestPointWithStaticNavLos(&g_TacGraphData, origin, origin, hArea);
  }
  else
  {
    if ( g_TacGraphData.m_NumTacGraphs <= 0 )
      goto LABEL_8;
    ClosestPointWithStaticNavLos = TacGraphSearch_FindClosestPoint(&g_TacGraphData, origin);
  }
  if ( ClosestPointWithStaticNavLos )
  {
    __asm { vmovaps xmm2, xmm6; radius }
    TacGraphSearch_CalcOpenView(&g_TacGraphData.m_TacGraphs[ClosestPointWithStaticNavLos->m_GraphIdx], origin, *(float *)&_XMM2, ClosestPointWithStaticNavLos, pResults, numSlices);
    goto LABEL_12;
  }
LABEL_8:
  if ( numSlices > 0 )
  {
    for ( i = numSlices; i; --i )
      *pResults++ = 0.0;
  }
LABEL_12:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
TacGraph_CalcOpenView
==============
*/

void __fastcall TacGraph_CalcOpenView(const vec3_t *origin, double radius, float *pResults, int numSlices)
{
  __int64 v8; 
  const tacpoint_t *ClosestPoint; 
  __int64 v11; 
  float *v12; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v8 = numSlices;
  if ( g_TacGraphData.m_NumTacGraphs > 0 && (ClosestPoint = TacGraphSearch_FindClosestPoint(&g_TacGraphData, origin)) != NULL )
  {
    __asm { vmovaps xmm2, xmm6; radius }
    TacGraphSearch_CalcOpenView(&g_TacGraphData.m_TacGraphs[ClosestPoint->m_GraphIdx], origin, *(float *)&_XMM2, ClosestPoint, pResults, v8);
  }
  else if ( (int)v8 > 0 )
  {
    v11 = v8;
    v12 = pResults;
    while ( v11 )
    {
      *v12++ = 0.0;
      --v11;
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
TacGraph_Exists
==============
*/
bool TacGraph_Exists()
{
  return g_TacGraphData.m_NumTacGraphs > 0;
}

/*
==============
TacGraph_FindClosestPoint
==============
*/
const tacpoint_t *TacGraph_FindClosestPoint(const vec3_t *pos)
{
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
    return TacGraphSearch_FindClosestPoint(&g_TacGraphData, pos);
  else
    return 0i64;
}

/*
==============
TacGraph_FindClosestPointWithStaticNavLos
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithStaticNavLos(const vec3_t *pos, const vec3_t *losPos, const bfx::AreaHandle *hArea)
{
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
    return TacGraphSearch_FindClosestPointWithStaticNavLos(&g_TacGraphData, pos, losPos, hArea);
  else
    return 0i64;
}

/*
==============
TacGraph_FindClosestPointWithVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisNearConeWithinRadius(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, float weight, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  bool v16; 
  bool v17; 
  const tacpoint_t *result; 
  float v25; 
  float v26; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  v16 = pTargetPoint == NULL;
  if ( !pTargetPoint )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 508, ASSERT_TYPE_ASSERT, "(pTargetPoint)", (const char *)&queryFormat, "pTargetPoint");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+78h+weight]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 509, ASSERT_TYPE_ASSERT, "(weight > 0.f)", (const char *)&queryFormat, "weight > 0.f") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+78h+dot]
      vmovss  [rsp+78h+var_40], xmm6
      vmovss  [rsp+78h+var_48], xmm0
      vmovaps xmm2, xmm7; radius
    }
    result = TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, pos, pTargetPoint, dir, v25, v26, bCheckNodeClaim, nodeClaimTeam);
  }
  else
  {
    result = NULL;
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinConeWithinRadius(const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  float v12; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+58h+dot]
    vmovss  [rsp+58h+var_20], xmm0
    vmovaps xmm3, xmm2; maxRadius
    vmovaps xmm2, xmm1; minRadius
  }
  return TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, pTargetPoint, dir, v12, b3D);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadius(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v8; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+48h+var_10], xmm0
      vmovaps xmm2, xmm1; radius
    }
    return TacGraphSearch_FindClosestPointWithVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, pos, pTargetPoint, NULL, 0, v8);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadius(const vec3_t *origin, double minRadius, double maxRadius, double minRadiusZ, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v11; 
  float v12; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+58h+var_10], xmm0
      vmovss  [rsp+58h+var_38], xmm3
      vmovaps xmm3, xmm2; maxRadius
      vmovaps xmm2, xmm1; minRadius
    }
    return TacGraphSearch_FindClosestPointWithVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, v11, pos, pTargetPoint, NULL, 0, v12);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadiusIgnorePoints(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  float v10; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+48h+ignoreRadius]
    vmovss  [rsp+48h+var_10], xmm0
    vmovaps xmm2, xmm1; radius
  }
  return TacGraphSearch_FindClosestPointWithVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, v10);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos(const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *losPos, const bfx::AreaHandle *hArea, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovaps xmm3, xmm2; maxRadius
    vmovaps xmm2, xmm1; minRadius
  }
  return TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, pTargetPoint, losPos, hArea, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacGraph_FindClosestPointWithVisWithinVolume
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithVisWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v6; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+48h+var_18], xmm0
    }
    return TacGraphSearch_FindClosestPointWithVisWithinVolume(&g_TacGraphData, pVolume, pos, pTargetPoint, NULL, 0, v6);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithVisWithinVolumeIgnorePoints
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithVisWithinVolumeIgnorePoints(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  float v8; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+48h+ignoreRadius]
    vmovss  [rsp+48h+var_18], xmm0
  }
  return TacGraphSearch_FindClosestPointWithVisWithinVolume(&g_TacGraphData, pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, v8);
}

/*
==============
TacGraph_FindClosestPointWithoutVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisNearConeWithinRadius(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  bool v13; 
  bool v14; 
  const tacpoint_t *result; 
  float v21; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  v13 = pTargetPoint == NULL;
  if ( !pTargetPoint )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 497, ASSERT_TYPE_ASSERT, "(pTargetPoint)", (const char *)&queryFormat, "pTargetPoint");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+68h+weight]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 498, ASSERT_TYPE_ASSERT, "(weight > 0.f)", (const char *)&queryFormat, "weight > 0.f") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vmovss  [rsp+68h+var_38], xmm6
      vmovaps xmm2, xmm7; radius
    }
    result = TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, pos, pTargetPoint, dir, v21);
  }
  else
  {
    result = NULL;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithoutVisNearConeWithinVolume
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithoutVisNearConeWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  bool v11; 
  bool v12; 
  const tacpoint_t *result; 
  float v17; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !pVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 485, ASSERT_TYPE_ASSERT, "(pVolume)", (const char *)&queryFormat, "pVolume") )
    __debugbreak();
  v11 = pTargetPoint == NULL;
  if ( !pTargetPoint )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 486, ASSERT_TYPE_ASSERT, "(pTargetPoint)", (const char *)&queryFormat, "pTargetPoint");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+48h+weight]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 487, ASSERT_TYPE_ASSERT, "(weight > 0.f)", (const char *)&queryFormat, "weight > 0.f") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm { vmovss  [rsp+48h+var_20], xmm6 }
    result = TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume(&g_TacGraphData, pVolume, pos, pTargetPoint, dir, v17);
  }
  else
  {
    result = NULL;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinConeWithinRadius(const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  float v12; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+58h+dot]
    vmovss  [rsp+58h+var_20], xmm0
    vmovaps xmm3, xmm2; maxRadius
    vmovaps xmm2, xmm1; minRadius
  }
  return TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, pTargetPoint, dir, v12, b3D);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadius(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v8; 
  float v9; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2; minRadius
      vmovss  [rsp+58h+var_10], xmm2
      vmovss  [rsp+58h+var_30], xmm2
      vmovaps xmm3, xmm1; maxRadius
    }
    return TacGraphSearch_FindClosestPointWithoutVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, v8, pTargetPoint, NULL, 0, v9);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadius(const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, float minDistFromPos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v12; 
  float v13; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+58h+var_10], xmm0
      vmovss  xmm0, [rsp+58h+minDistFromPos]
      vmovaps xmm3, xmm2; maxRadius
      vmovss  [rsp+58h+var_30], xmm0
      vmovaps xmm2, xmm1; minRadius
    }
    return TacGraphSearch_FindClosestPointWithoutVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, v12, pTargetPoint, NULL, 0, v13);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints
==============
*/

const tacpoint_t *__fastcall TacGraph_FindClosestPointWithoutVisWithinRadiusIgnorePoints(const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  float v12; 
  float v13; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+58h+ignoreRadius]
    vmovss  [rsp+58h+var_10], xmm0
    vxorps  xmm2, xmm2, xmm2; minRadius
    vmovss  [rsp+58h+var_30], xmm2
    vmovaps xmm3, xmm1; maxRadius
  }
  return TacGraphSearch_FindClosestPointWithoutVisWithinRadius(&g_TacGraphData, origin, *(float *)&_XMM2, *(float *)&_XMM3, pos, v12, pTargetPoint, pIgnoreVecs, numIgnoreVecs, v13);
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinVolume
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithoutVisWithinVolume(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint)
{
  const tacpoint_t *result; 
  float v6; 

  result = NULL;
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+48h+var_18], xmm0
    }
    return TacGraphSearch_FindClosestPointWithoutVisWithinVolume(&g_TacGraphData, pVolume, pos, pTargetPoint, NULL, 0, v6);
  }
  return result;
}

/*
==============
TacGraph_FindClosestPointWithoutVisWithinVolumeIgnorePoints
==============
*/
const tacpoint_t *TacGraph_FindClosestPointWithoutVisWithinVolumeIgnorePoints(const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  float v8; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+48h+ignoreRadius]
    vmovss  [rsp+48h+var_18], xmm0
  }
  return TacGraphSearch_FindClosestPointWithoutVisWithinVolume(&g_TacGraphData, pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, v8);
}

/*
==============
TacGraph_FindPointsInRadiusWithVis_Sorted
==============
*/

int __fastcall TacGraph_FindPointsInRadiusWithVis_Sorted(const vec3_t *pos, double minRadius, double maxRadius, double minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  int result; 
  unsigned int m_GraphIdx; 
  const TacticalGraph *v16; 
  float fmt; 
  tacpoint_t *v24; 
  char v28; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !pVisPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 568, ASSERT_TYPE_ASSERT, "(pVisPoint)", (const char *)&queryFormat, "pVisPoint") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    m_GraphIdx = pVisPoint->m_GraphIdx;
    if ( m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
    {
      LODWORD(v24) = pVisPoint->m_GraphIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 576, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "graphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v24, g_TacGraphData.m_NumTacGraphs) )
        __debugbreak();
    }
    v16 = &g_TacGraphData.m_TacGraphs[(unsigned __int8)m_GraphIdx];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 578, ASSERT_TYPE_ASSERT, "( pGraph )", (const char *)&queryFormat, "pGraph") )
      __debugbreak();
    __asm
    {
      vmovaps xmm3, xmm7; maxRadius
      vmovaps xmm2, xmm8; minRadius
      vmovss  dword ptr [rsp+78h+fmt], xmm6
    }
    result = TacGraphSearch_FindPointsInRadiusWithVis_Sorted(v16, pos, *(float *)&_XMM2, *(float *)&_XMM3, fmt, pVisPoint, ppOutPoints, maxNumPoints);
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v28;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return result;
}

/*
==============
TacGraph_FindPointsInRadius_Sorted
==============
*/

int __fastcall TacGraph_FindPointsInRadius_Sorted(const tacpoint_t *sourcePoint, const vec3_t *pos, double maxRadius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  int result; 
  unsigned int m_GraphIdx; 
  const TacticalGraph *v12; 
  __int64 v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !sourcePoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 551, ASSERT_TYPE_ASSERT, "(sourcePoint)", (const char *)&queryFormat, "sourcePoint") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    m_GraphIdx = sourcePoint->m_GraphIdx;
    if ( m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
    {
      LODWORD(v15) = m_GraphIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 559, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "graphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v15, g_TacGraphData.m_NumTacGraphs) )
        __debugbreak();
    }
    v12 = &g_TacGraphData.m_TacGraphs[(unsigned __int8)m_GraphIdx];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 561, ASSERT_TYPE_ASSERT, "( pGraph )", (const char *)&queryFormat, "pGraph") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm6; maxRadius }
    result = TacGraphSearch_FindPointsInRadius_Sorted(v12, pos, *(float *)&_XMM2, ppOutPoints, maxNumPoints);
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
TacGraph_FindPointsInVolume
==============
*/
int TacGraph_FindPointsInVolume(const gentity_s *pVolume, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
    return TacGraphSearch_FindPointsInVolume(g_TacGraphData.m_TacGraphs, pVolume, ppOutPoints, maxNumPoints);
  else
    return 0;
}

/*
==============
TacGraph_FindRandomPointReachableFromPoint
==============
*/
const tacpoint_t *TacGraph_FindRandomPointReachableFromPoint(const tacpoint_t *sourcePoint, int numAttempts)
{
  const bfx::AreaHandle *AreaForPoint; 
  unsigned int m_GraphIdx; 
  TacticalGraph *v7; 
  int v8; 
  const tacpoint_t *v9; 
  const bfx::AreaHandle *v10; 
  __int64 v11; 
  bfx::AreaHandle areaB; 
  bfx::AreaHandle areaA; 

  if ( !sourcePoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 521, ASSERT_TYPE_ASSERT, "(sourcePoint)", (const char *)&queryFormat, "sourcePoint") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0i64;
  AreaForPoint = TacGraph_GetAreaForPoint(sourcePoint);
  bfx::AreaHandle::AreaHandle(&areaA, AreaForPoint);
  m_GraphIdx = sourcePoint->m_GraphIdx;
  if ( m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
  {
    LODWORD(v11) = m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "graphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v11, g_TacGraphData.m_NumTacGraphs) )
      __debugbreak();
  }
  v7 = &g_TacGraphData.m_TacGraphs[(unsigned __int8)m_GraphIdx];
  v8 = 0;
  if ( numAttempts <= 0 )
  {
LABEL_12:
    v9 = NULL;
  }
  else
  {
    while ( 1 )
    {
      v9 = &v7->m_Points[G_irand(0, v7->m_NumPoints)];
      v10 = TacGraph_GetAreaForPoint(v9);
      bfx::AreaHandle::AreaHandle(&areaB, v10);
      if ( bfx::IsAreaReachableFromArea(&areaA, &areaB, &bfx::g_defaultPathSpec) )
        break;
      bfx::AreaHandle::~AreaHandle(&areaB);
      if ( ++v8 >= numAttempts )
        goto LABEL_12;
    }
    bfx::AreaHandle::~AreaHandle(&areaB);
  }
  bfx::AreaHandle::~AreaHandle(&areaA);
  return v9;
}

/*
==============
TacGraph_GetApproxGroundPosForPoint
==============
*/
void TacGraph_GetApproxGroundPosForPoint(const tacpoint_t *pPoint, vec3_t *outPos)
{
  unsigned __int8 m_Type; 
  const char *MapName; 
  bool v7; 

  _RBX = outPos;
  _RDI = pPoint;
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 344, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  _RBX->v[0] = _RDI->m_Pos.v[0];
  _RBX->v[1] = _RDI->m_Pos.v[1];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  m_Type = _RDI->m_Type;
  if ( !m_Type )
    goto LABEL_8;
  if ( m_Type == 2 )
    return;
  MapName = SV_Game_GetMapName();
  v7 = Com_MapUsesPlayerViewHeight(MapName);
  __asm { vmovss  xmm0, dword ptr [rbx+8] }
  if ( v7 )
  {
    __asm
    {
      vsubss  xmm0, xmm0, cs:__real@42700000
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
LABEL_8:
    __asm
    {
      vsubss  xmm0, xmm0, cs:__real@42600000
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
TacGraph_GetAreaForPoint
==============
*/
bfx::AreaHandle *TacGraph_GetAreaForPoint(const tacpoint_t *pPoint)
{
  nav_space_s *DefaultSpace; 
  unsigned __int8 m_Type; 
  const char *MapName; 
  vec3_t targetPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 

  _RBX = pPoint;
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 319, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  if ( !bfx::AreaHandle::IsValid(&_RBX->m_hArea) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    pPathSpec.m_areaUsageFlags = -1;
    pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    pPathSpec.m_usePathSharingPenalty = 0;
    __asm
    {
      vmovss  [rbp+57h+pPathSpec.m_pathSharingPenalty], xmm0
      vmovss  [rbp+57h+pPathSpec.m_maxPathSharingPenalty], xmm0
      vmovss  [rbp+57h+pPathSpec.m_maxSearchDist], xmm0
    }
    *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    pPathSpec.m_obstacleBlockageFlags = 0;
    DefaultSpace = Nav_GetDefaultSpace();
    Nav_GetSpaceUp(DefaultSpace, &outUp);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 344, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx] }
    m_Type = _RBX->m_Type;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+57h+targetPos], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+57h+targetPos+8], xmm0
      vmovss  dword ptr [rbp+57h+targetPos+4], xmm1
    }
    if ( m_Type )
    {
      if ( m_Type != 2 )
      {
        MapName = SV_Game_GetMapName();
        __asm { vmovss  xmm0, dword ptr [rbp+57h+targetPos+8] }
        if ( Com_MapUsesPlayerViewHeight(MapName) )
          __asm { vaddss  xmm1, xmm0, cs:__real@c2700000 }
        else
          __asm { vaddss  xmm1, xmm0, cs:__real@c2600000 }
        __asm { vmovss  dword ptr [rbp+57h+targetPos+8], xmm1 }
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm0, cs:__real@42600000
        vmovss  dword ptr [rbp+57h+targetPos+8], xmm0
      }
    }
    Nav_GetClosestVerticalPos(&targetPos, &outUp, 0, &DefaultSpace->hSpace, &pPathSpec, &outClosestPos, &_RBX->m_hArea);
  }
  return &_RBX->m_hArea;
}

/*
==============
TacGraph_GetPointForPathnode
==============
*/
tacpoint_t *TacGraph_GetPointForPathnode(const pathnode_t *pNode)
{
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
    return tacpoint_ref_t::GetPoint(&pNode->constant.tacpointRef);
  else
    return 0i64;
}

/*
==============
TacGraph_GetPointForPathnodeVis
==============
*/
tacpoint_t *TacGraph_GetPointForPathnodeVis(const pathnode_t *pNode)
{
  unsigned __int8 m_GraphIDPlusOne; 
  unsigned __int16 m_PointID; 
  unsigned __int16 m_NumPoints; 
  __int64 v5; 
  __int64 v6; 
  tacpoint_t *result; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int m_NumTacGraphs; 

  if ( g_TacGraphData.m_NumTacGraphs <= 0 || !pNode->constant.tacpointRef.m_GraphIDPlusOne )
    return 0i64;
  if ( (unsigned int)pNode->constant.type - 6 > 1 )
    return tacpoint_ref_t::GetPoint(&pNode->constant.tacpointRef);
  m_GraphIDPlusOne = pNode->constant.tacpointRef.m_GraphIDPlusOne;
  if ( !m_GraphIDPlusOne )
    return tacpoint_ref_t::GetPoint(&pNode->constant.tacpointRef);
  if ( (unsigned int)m_GraphIDPlusOne - 1 >= g_TacGraphData.m_NumTacGraphs )
  {
    m_NumTacGraphs = g_TacGraphData.m_NumTacGraphs;
    v9 = m_GraphIDPlusOne - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( m_GraphIDPlusOne - 1 ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "m_GraphIDPlusOne - 1 doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v9, m_NumTacGraphs) )
      __debugbreak();
  }
  m_PointID = pNode->constant.tacpointRef.m_PointID;
  m_NumPoints = g_TacGraphData.m_TacGraphs[pNode->constant.tacpointRef.m_GraphIDPlusOne - 1].m_NumPoints;
  if ( m_PointID >= m_NumPoints )
  {
    LODWORD(v10) = m_NumPoints;
    LODWORD(v8) = m_PointID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( m_PointID ) < (unsigned)( g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints )", "m_PointID doesn't index g_TacGraphData.m_TacGraphs[ m_GraphIDPlusOne - 1 ].m_NumPoints\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v5 = pNode->constant.tacpointRef.m_PointID;
  v6 = pNode->constant.tacpointRef.m_GraphIDPlusOne;
  if ( (int)v5 + 1 >= (unsigned int)g_TacGraphData.m_TacGraphs[v6 - 1].m_NumPoints )
    return tacpoint_ref_t::GetPoint(&pNode->constant.tacpointRef);
  result = &g_TacGraphData.m_TacGraphs[v6 - 1].m_Points[v5 + 1];
  if ( !result )
    return tacpoint_ref_t::GetPoint(&pNode->constant.tacpointRef);
  return result;
}

/*
==============
TacGraph_GetPointIndex
==============
*/
__int64 TacGraph_GetPointIndex(const tacpoint_t *pPoint)
{
  TacticalGraph *v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int16 m_NumPoints; 
  __int64 v7; 
  __int64 v8; 

  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 225, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  if ( (unsigned int)pPoint->m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
  {
    LODWORD(v7) = pPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( pPoint->m_GraphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "pPoint->m_GraphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v7, g_TacGraphData.m_NumTacGraphs) )
      __debugbreak();
  }
  v2 = &g_TacGraphData.m_TacGraphs[pPoint->m_GraphIdx];
  v3 = (__int64)((unsigned __int128)(((char *)pPoint - (char *)v2->m_Points) * (__int128)0x6666666666666667i64) >> 64) >> 4;
  v4 = (v3 >> 63) + v3;
  m_NumPoints = v2->m_NumPoints;
  if ( (unsigned __int16)v4 >= m_NumPoints )
  {
    LODWORD(v8) = m_NumPoints;
    LODWORD(v7) = (unsigned __int16)v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( g_TacGraphData.m_TacGraphs[pPoint->m_GraphIdx].m_NumPoints )", "idx doesn't index g_TacGraphData.m_TacGraphs[pPoint->m_GraphIdx].m_NumPoints\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned __int16)v4;
}

/*
==============
TacGraph_HasAllVis
==============
*/

bool __fastcall TacGraph_HasAllVis(const tacpoint_t *pFromPoint, const vec3_t *pos, double radius)
{
  bool v8; 
  bool v9; 
  bool result; 
  float fmt; 
  float fmta; 
  tacpoint_t *ppOutPoints; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  v8 = pFromPoint == NULL;
  if ( !pFromPoint )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 299, ASSERT_TYPE_ASSERT, "(pFromPoint)", (const char *)&queryFormat, "pFromPoint");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 300, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    goto LABEL_10;
  __asm
  {
    vmovaps xmm3, xmm7; maxRadius
    vxorps  xmm2, xmm2, xmm2; minRadius
    vmovss  dword ptr [rsp+68h+fmt], xmm6
  }
  if ( TacGraphSearch_FindPointsInRadiusWithoutVis(&g_TacGraphData.m_TacGraphs[pFromPoint->m_GraphIdx], pos, *(float *)&_XMM2, *(float *)&_XMM3, fmt, pFromPoint, (const tacpoint_t **)&ppOutPoints, 1) > 0 )
  {
LABEL_10:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovaps xmm3, xmm7; maxRadius
      vxorps  xmm2, xmm2, xmm2; minRadius
      vmovss  dword ptr [rsp+68h+fmt], xmm6
    }
    result = TacGraphSearch_FindPointsInRadiusWithVis(&g_TacGraphData.m_TacGraphs[pFromPoint->m_GraphIdx], pos, *(float *)&_XMM2, *(float *)&_XMM3, fmta, pFromPoint, (const tacpoint_t **)&ppOutPoints, 1) > 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
TacGraph_HasAnyVis
==============
*/

bool __fastcall TacGraph_HasAnyVis(const tacpoint_t *pFromPoint, const vec3_t *pos, double radius)
{
  bool v8; 
  bool v9; 
  bool result; 
  float fmt; 
  tacpoint_t *ppOutPoints; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  v8 = pFromPoint == NULL;
  if ( !pFromPoint )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 285, ASSERT_TYPE_ASSERT, "(pFromPoint)", (const char *)&queryFormat, "pFromPoint");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 286, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs > 0 )
  {
    __asm
    {
      vmovaps xmm3, xmm7; maxRadius
      vxorps  xmm2, xmm2, xmm2; minRadius
      vmovss  dword ptr [rsp+68h+fmt], xmm6
    }
    result = TacGraphSearch_FindPointsInRadiusWithVis(&g_TacGraphData.m_TacGraphs[pFromPoint->m_GraphIdx], pos, *(float *)&_XMM2, *(float *)&_XMM3, fmt, pFromPoint, (const tacpoint_t **)&ppOutPoints, 1) > 0;
  }
  else
  {
    result = 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
TacGraph_HasVis
==============
*/
bool TacGraph_HasVis(const tacpoint_t *pPoint, const pathnode_t *pNode)
{
  const tacpoint_t *PointForPathnodeVis; 
  unsigned __int8 m_GraphIdx; 
  unsigned __int16 PointIndex; 
  unsigned __int16 v7; 
  __int64 v9; 

  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 261, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 262, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  if ( g_TacGraphData.m_NumTacGraphs <= 0 )
    return 0;
  PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(pNode);
  if ( !PointForPathnodeVis )
    return 0;
  m_GraphIdx = pPoint->m_GraphIdx;
  if ( m_GraphIdx != PointForPathnodeVis->m_GraphIdx )
    return 0;
  if ( (unsigned int)m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
  {
    LODWORD(v9) = m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( pPoint->m_GraphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "pPoint->m_GraphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v9, g_TacGraphData.m_NumTacGraphs) )
      __debugbreak();
  }
  PointIndex = TacGraph_GetPointIndex(pPoint);
  v7 = TacGraph_GetPointIndex(PointForPathnodeVis);
  return v7 != 0xFFFF && TacVisGraph_HasVis(&g_TacGraphData.m_TacGraphs[pPoint->m_GraphIdx], PointIndex, v7);
}

/*
==============
TacGraph_Read
==============
*/
void TacGraph_Read(MemoryFile *memFile)
{
  ;
}

/*
==============
TacGraph_Write
==============
*/
void TacGraph_Write(MemoryFile *memFile)
{
  ;
}

/*
==============
TacVisGraph_HasVis
==============
*/
bool TacVisGraph_HasVis(const TacticalGraph *pGraph, unsigned __int16 pt1, unsigned __int16 pt2)
{
  unsigned __int16 m_NumPoints; 
  unsigned __int16 v7; 
  unsigned __int16 v9; 
  TacVisGraphRow *v10; 
  unsigned __int16 m_Start; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  unsigned __int8 *m_Vis; 
  __int64 v16; 
  __int64 v17; 

  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 683, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  m_NumPoints = pGraph->m_NumPoints;
  if ( pt1 >= m_NumPoints )
  {
    LODWORD(v16) = pt1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( pt1 ) < (unsigned)( pGraph->m_NumPoints )", "pt1 doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v16, m_NumPoints) )
      __debugbreak();
  }
  v7 = pGraph->m_NumPoints;
  if ( pt2 >= v7 )
  {
    LODWORD(v17) = v7;
    LODWORD(v16) = pt2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( pt2 ) < (unsigned)( pGraph->m_NumPoints )", "pt2 doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( pt1 == pt2 )
    return 1;
  v9 = pt1;
  if ( pt1 <= pt2 )
  {
    v9 = pt2;
    if ( pt1 <= pt2 )
      pt2 = pt1;
  }
  v10 = &pGraph->m_VisGraph[pt2];
  m_Start = v10->m_Start;
  if ( v9 < v10->m_Start || v9 > v10->m_End )
    return 0;
  v12 = v9;
  v13 = m_Start;
  v14 = v9 - m_Start;
  m_Vis = v10->m_Vis;
  if ( !m_Vis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.h", 95, ASSERT_TYPE_ASSERT, "(buf)", (const char *)&queryFormat, "buf") )
    __debugbreak();
  return ((unsigned __int8)(1 << (v14 & 7)) & m_Vis[(v12 - v13) >> 3]) != 0;
}

/*
==============
TacVisGraph_HasVis
==============
*/
bool TacVisGraph_HasVis(const pathnode_t *pNode0, const pathnode_t *pNode1)
{
  const tacpoint_t *PointForPathnodeVis; 
  const tacpoint_t *v6; 
  const tacpoint_t *v7; 
  unsigned __int16 PointIndex; 
  unsigned __int16 v9; 
  __int64 v10; 

  if ( !pNode0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 723, ASSERT_TYPE_ASSERT, "(pNode0)", (const char *)&queryFormat, "pNode0") )
    __debugbreak();
  if ( !pNode1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 724, ASSERT_TYPE_ASSERT, "(pNode1)", (const char *)&queryFormat, "pNode1") )
    __debugbreak();
  if ( pNode0 == pNode1 )
    return 1;
  PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(pNode0);
  v6 = TacGraph_GetPointForPathnodeVis(pNode1);
  v7 = v6;
  if ( !PointForPathnodeVis || !v6 || PointForPathnodeVis->m_GraphIdx != v6->m_GraphIdx )
    return 0;
  PointIndex = TacGraph_GetPointIndex(PointForPathnodeVis);
  v9 = TacGraph_GetPointIndex(v7);
  if ( (unsigned int)PointForPathnodeVis->m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
  {
    LODWORD(v10) = PointForPathnodeVis->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 741, ASSERT_TYPE_ASSERT, "(unsigned)( pPoint0->m_GraphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "pPoint0->m_GraphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v10, g_TacGraphData.m_NumTacGraphs) )
      __debugbreak();
  }
  return TacVisGraph_HasVis(&g_TacGraphData.m_TacGraphs[PointForPathnodeVis->m_GraphIdx], PointIndex, v9);
}

/*
==============
TacVisGraph_HasVis
==============
*/
bool TacVisGraph_HasVis(const tacpoint_t *pPoint1, const tacpoint_t *pPoint2)
{
  unsigned __int8 m_GraphIdx; 
  unsigned __int16 PointIndex; 
  unsigned __int16 v7; 
  __int64 v8; 

  if ( !pPoint1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 711, ASSERT_TYPE_ASSERT, "(pPoint1)", (const char *)&queryFormat, "pPoint1") )
    __debugbreak();
  if ( !pPoint2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 712, ASSERT_TYPE_ASSERT, "(pPoint2)", (const char *)&queryFormat, "pPoint2") )
    __debugbreak();
  m_GraphIdx = pPoint1->m_GraphIdx;
  if ( m_GraphIdx != pPoint2->m_GraphIdx )
    return 0;
  if ( (unsigned int)m_GraphIdx >= g_TacGraphData.m_NumTacGraphs )
  {
    LODWORD(v8) = m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 717, ASSERT_TYPE_ASSERT, "(unsigned)( pPoint1->m_GraphIdx ) < (unsigned)( g_TacGraphData.m_NumTacGraphs )", "pPoint1->m_GraphIdx doesn't index g_TacGraphData.m_NumTacGraphs\n\t%i not in [0, %i)", v8, g_TacGraphData.m_NumTacGraphs) )
      __debugbreak();
  }
  PointIndex = TacGraph_GetPointIndex(pPoint2);
  v7 = TacGraph_GetPointIndex(pPoint1);
  return TacVisGraph_HasVis(&g_TacGraphData.m_TacGraphs[pPoint1->m_GraphIdx], v7, PointIndex);
}

/*
==============
TacVisGraph_SetVis
==============
*/
void TacVisGraph_SetVis(TacticalGraph *pGraph, unsigned __int16 pt1, unsigned __int16 pt2, bool bVis)
{
  unsigned __int16 v5; 
  TacVisGraphRow *v6; 
  unsigned __int16 m_End; 
  __int64 m_Start; 
  char v9; 
  unsigned __int8 *v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( pt1 != pt2 )
  {
    v5 = pt1;
    if ( pt1 <= pt2 )
    {
      v5 = pt2;
      if ( pt1 <= pt2 )
        pt2 = pt1;
    }
    v6 = &pGraph->m_VisGraph[pt2];
    if ( v5 < v6->m_Start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 647, ASSERT_TYPE_ASSERT, "( jPt >= pRow->m_Start )", "%d < %d: cannot change vis bit of discarded zero.", v5, v6->m_Start) )
      __debugbreak();
    m_End = v6->m_End;
    if ( v5 > m_End )
    {
      LODWORD(v13) = m_End;
      LODWORD(v12) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph.cpp", 648, ASSERT_TYPE_ASSERT, "( jPt <= pRow->m_End )", "%d > %d: cannot change vis bit of discarded zero.", v12, v13) )
        __debugbreak();
    }
    m_Start = v6->m_Start;
    v9 = (v5 - m_Start) & 7;
    v10 = &v6->m_Vis[(v5 - m_Start) >> 3];
    v11 = *v10;
    if ( bVis )
      *v10 = v11 | (1 << v9);
    else
      *v10 = v11 & ~(1 << v9);
  }
}

