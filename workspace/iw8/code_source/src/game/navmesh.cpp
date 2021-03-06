/*
==============
Nav_PostSpawnInit
==============
*/

void __fastcall Nav_PostSpawnInit(bool snapNodesToMesh, bool bSaveLoad)
{
  ?Nav_PostSpawnInit@@YAX_N0@Z(snapNodesToMesh, bSaveLoad);
}

/*
==============
NavData_Write
==============
*/

void __fastcall NavData_Write(MemoryFile *memFile)
{
  ?NavData_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_PreUpdate
==============
*/

void Nav_PreUpdate(void)
{
  ?Nav_PreUpdate@@YAXXZ();
}

/*
==============
bfxRenderer::DrawLineList
==============
*/

void __fastcall bfxRenderer::DrawLineList(bfxRenderer *this, const bfx::LineSegment *pLines, unsigned int numLines, const bfx::Color *color)
{
  ?DrawLineList@bfxRenderer@@EEAAXPEBVLineSegment@bfx@@IAEBVColor@3@@Z(this, pLines, numLines, color);
}

/*
==============
Nav_GetAllocSize
==============
*/

int __fastcall Nav_GetAllocSize()
{
  return ?Nav_GetAllocSize@@YAHXZ();
}

/*
==============
Nav_FreeSpace
==============
*/

void __fastcall Nav_FreeSpace(nav_space_s *pSpace)
{
  ?Nav_FreeSpace@@YAXPEAUnav_space_s@@@Z(pSpace);
}

/*
==============
Nav_GetClosestVerticalPosWithHint
==============
*/

bool __fastcall Nav_GetClosestVerticalPosWithHint(const vec3_t *targetPos, const vec3_t *upVec, const unsigned int layer, bfx::SpaceHandle *hSpace, const bfx::PathSpec *pPathSpec, vec3_t *outClosestPos, const bfx::AreaHandle *hHintArea, bfx::AreaHandle *pOutArea)
{
  return ?Nav_GetClosestVerticalPosWithHint@@YA_NAEBTvec3_t@@0IAEAVSpaceHandle@bfx@@PEBVPathSpec@3@AEAT1@AEBVAreaHandle@3@PEAV53@@Z(targetPos, upVec, layer, hSpace, pPathSpec, outClosestPos, hHintArea, pOutArea);
}

/*
==============
Nav_IsRunning
==============
*/

bool __fastcall Nav_IsRunning()
{
  return ?Nav_IsRunning@@YA_NXZ();
}

/*
==============
Nav_SnapPathNodesToGraph
==============
*/

void Nav_SnapPathNodesToGraph(void)
{
  ?Nav_SnapPathNodesToGraph@@YAXXZ();
}

/*
==============
Nav_MeshLoaded
==============
*/

bool __fastcall Nav_MeshLoaded()
{
  return ?Nav_MeshLoaded@@YA_NXZ();
}

/*
==============
bfxRenderer::DrawString
==============
*/

void __fastcall bfxRenderer::DrawString(bfxRenderer *this, const bfx::Color *color, const char *str)
{
  ?DrawString@bfxRenderer@@EEAAXAEBVColor@bfx@@PEBD@Z(this, color, str);
}

/*
==============
Nav_GetResourceByEntNum
==============
*/

nav_resource_s *__fastcall Nav_GetResourceByEntNum(int entNum)
{
  return ?Nav_GetResourceByEntNum@@YAPEAUnav_resource_s@@H@Z(entNum);
}

/*
==============
Nav_FreeLink
==============
*/

void __fastcall Nav_FreeLink(nav_link_s *pLink)
{
  ?Nav_FreeLink@@YAXPEAUnav_link_s@@@Z(pLink);
}

/*
==============
Nav_HasExposureData
==============
*/

bool __fastcall Nav_HasExposureData()
{
  return ?Nav_HasExposureData@@YA_NXZ();
}

/*
==============
Nav_GetClosestVerticalPos
==============
*/

bool __fastcall Nav_GetClosestVerticalPos(const vec3_t *targetPos, const vec3_t *upVec, const unsigned int layer, bfx::SpaceHandle *hSpace, const bfx::PathSpec *pPathSpec, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  return ?Nav_GetClosestVerticalPos@@YA_NAEBTvec3_t@@0IAEAVSpaceHandle@bfx@@PEBVPathSpec@3@AEAT1@PEAVAreaHandle@3@@Z(targetPos, upVec, layer, hSpace, pPathSpec, outClosestPos, pOutArea);
}

/*
==============
NavData_NavigatorLoadComplete
==============
*/

void NavData_NavigatorLoadComplete(void)
{
  ?NavData_NavigatorLoadComplete@@YAXXZ();
}

/*
==============
Nav_GetHeapSize
==============
*/

int __fastcall Nav_GetHeapSize()
{
  return ?Nav_GetHeapSize@@YAHXZ();
}

/*
==============
Nav_SystemSimulate
==============
*/

void __fastcall Nav_SystemSimulate(float seconds)
{
  ?Nav_SystemSimulate@@YAXM@Z(seconds);
}

/*
==============
Nav_FreeNavPower
==============
*/

void Nav_FreeNavPower(void)
{
  ?Nav_FreeNavPower@@YAXXZ();
}

/*
==============
Nav_RemoveNavMeshData
==============
*/

void __fastcall Nav_RemoveNavMeshData(NavMeshData *pNavMeshData)
{
  ?Nav_RemoveNavMeshData@@YAXPEAUNavMeshData@@@Z(pNavMeshData);
}

/*
==============
Nav_InitNavPower
==============
*/

void Nav_InitNavPower(void)
{
  ?Nav_InitNavPower@@YAXXZ();
}

/*
==============
Nav_AllocNavPower
==============
*/

void __fastcall Nav_AllocNavPower(HunkUser *hunkUser)
{
  ?Nav_AllocNavPower@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
Nav_MeshLoadedForLayer
==============
*/

bool __fastcall Nav_MeshLoadedForLayer(int layer)
{
  return ?Nav_MeshLoadedForLayer@@YA_NH@Z(layer);
}

/*
==============
Nav_GetBounds
==============
*/

bool __fastcall Nav_GetBounds(Bounds *pOutBounds)
{
  return ?Nav_GetBounds@@YA_NPEAUBounds@@@Z(pOutBounds);
}

/*
==============
Nav_ShutdownNavPower
==============
*/

void Nav_ShutdownNavPower(void)
{
  ?Nav_ShutdownNavPower@@YAXXZ();
}

/*
==============
Nav_GetMaxNumObstacleBounds
==============
*/

int __fastcall Nav_GetMaxNumObstacleBounds()
{
  return ?Nav_GetMaxNumObstacleBounds@@YAHXZ();
}

/*
==============
Nav_DrawUpdate
==============
*/

void __fastcall Nav_DrawUpdate(const vec3_t *pos, const vec3_t *dir, float clipDist, float fov)
{
  ?Nav_DrawUpdate@@YAXAEBTvec3_t@@0MM@Z(pos, dir, clipDist, fov);
}

/*
==============
Nav_PointWithinCylinderWithUp
==============
*/

bool __fastcall Nav_PointWithinCylinderWithUp(const vec3_t *point, const vec3_t *center, const vec3_t *up, float radius, float halfHeight)
{
  return ?Nav_PointWithinCylinderWithUp@@YA_NAEBTvec3_t@@00MM@Z(point, center, up, radius, halfHeight);
}

/*
==============
Nav_GetMaxNumObstacles
==============
*/

int __fastcall Nav_GetMaxNumObstacles()
{
  return ?Nav_GetMaxNumObstacles@@YAHXZ();
}

/*
==============
Nav_TryFindPointOnMeshBelowPoint
==============
*/

bool __fastcall Nav_TryFindPointOnMeshBelowPoint(bfx::SpaceHandle space, const unsigned int layer, const vec3_t *testPoint, const float probeDistance, vec3_t *outPoint)
{
  return ?Nav_TryFindPointOnMeshBelowPoint@@YA_NVSpaceHandle@bfx@@IAEBTvec3_t@@MAEAT3@@Z(space, layer, testPoint, probeDistance, outPoint);
}

/*
==============
Nav_AllocObstacle
==============
*/

nav_obstacle_s *__fastcall Nav_AllocObstacle()
{
  return ?Nav_AllocObstacle@@YAPEAUnav_obstacle_s@@XZ();
}

/*
==============
Nav_PreShutdown
==============
*/

void Nav_PreShutdown(void)
{
  ?Nav_PreShutdown@@YAXXZ();
}

/*
==============
Nav_MeshWillBeLoaded
==============
*/

bool __fastcall Nav_MeshWillBeLoaded()
{
  return ?Nav_MeshWillBeLoaded@@YA_NXZ();
}

/*
==============
NavData_Read
==============
*/

void __fastcall NavData_Read(MemoryFile *memFile)
{
  ?NavData_Read@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_GetNavMeshData
==============
*/

NavMeshData *__fastcall Nav_GetNavMeshData(const char *filename)
{
  return ?Nav_GetNavMeshData@@YAPEAUNavMeshData@@PEBD@Z(filename);
}

/*
==============
Nav_Get2DDistanceSqWithUp
==============
*/

double __fastcall Nav_Get2DDistanceSqWithUp(const vec3_t *pt1, const vec3_t *pt2, const vec3_t *up)
{
  double result; 

  *(float *)&result = ?Nav_Get2DDistanceSqWithUp@@YAMAEBTvec3_t@@00@Z(pt1, pt2, up);
  return result;
}

/*
==============
Nav_AllocRepulsor
==============
*/

nav_repulsor_s *__fastcall Nav_AllocRepulsor()
{
  return ?Nav_AllocRepulsor@@YAPEAUnav_repulsor_s@@XZ();
}

/*
==============
Nav_SetDebugDrawFlags
==============
*/

void Nav_SetDebugDrawFlags(void)
{
  ?Nav_SetDebugDrawFlags@@YAXXZ();
}

/*
==============
Nav_FreeRepulsor
==============
*/

void __fastcall Nav_FreeRepulsor(nav_repulsor_s *pRepulsor)
{
  ?Nav_FreeRepulsor@@YAXPEAUnav_repulsor_s@@@Z(pRepulsor);
}

/*
==============
Nav_AnyVolumesLoaded
==============
*/

bool __fastcall Nav_AnyVolumesLoaded()
{
  return ?Nav_AnyVolumesLoaded@@YA_NXZ();
}

/*
==============
Nav_CleanupNavMesh
==============
*/

void Nav_CleanupNavMesh(void)
{
  ?Nav_CleanupNavMesh@@YAXXZ();
}

/*
==============
Nav_GetClosestVerticalPosDefault
==============
*/

bool __fastcall Nav_GetClosestVerticalPosDefault(const vec3_t *targetPos, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  return ?Nav_GetClosestVerticalPosDefault@@YA_NAEBTvec3_t@@AEAT1@PEAVAreaHandle@bfx@@@Z(targetPos, outClosestPos, pOutArea);
}

/*
==============
bfxRenderer::DrawTriList
==============
*/

void __fastcall bfxRenderer::DrawTriList(bfxRenderer *this, const bfx::Triangle *pTris, unsigned int numTris, const bfx::Color *color)
{
  ?DrawTriList@bfxRenderer@@EEAAXPEBVTriangle@bfx@@IAEBVColor@3@@Z(this, pTris, numTris, color);
}

/*
==============
bfxRenderer::DrawString
==============
*/

void __fastcall bfxRenderer::DrawString(bfxRenderer *this, const bfx::Color *color, const bfx::Vector3 *pos, const char *str)
{
  ?DrawString@bfxRenderer@@EEAAXAEBVColor@bfx@@AEBVVector3@3@PEBD@Z(this, color, pos, str);
}

/*
==============
Nav_FreeObstacle
==============
*/

void __fastcall Nav_FreeObstacle(nav_obstacle_s *pObstacle)
{
  ?Nav_FreeObstacle@@YAXPEAUnav_obstacle_s@@@Z(pObstacle);
}

/*
==============
Nav_AllocSpace
==============
*/

nav_space_s *__fastcall Nav_AllocSpace()
{
  return ?Nav_AllocSpace@@YAPEAUnav_space_s@@XZ();
}

/*
==============
Nav_ClearNavPowerMemory
==============
*/

void Nav_ClearNavPowerMemory(void)
{
  ?Nav_ClearNavPowerMemory@@YAXXZ();
}

/*
==============
Nav_AllocLink
==============
*/

nav_link_s *__fastcall Nav_AllocLink()
{
  return ?Nav_AllocLink@@YAPEAUnav_link_s@@XZ();
}

/*
==============
Nav_AddPendingMesh
==============
*/

void __fastcall Nav_AddPendingMesh(NavMeshData *pNavMeshData)
{
  ?Nav_AddPendingMesh@@YAXPEAUNavMeshData@@@Z(pNavMeshData);
}

/*
==============
bfxRenderer::DrawLineList
==============
*/
void bfxRenderer::DrawLineList(bfxRenderer *this, const bfx::LineSegment *pLines, unsigned int numLines, const bfx::Color *color)
{
  const dvar_t *v4; 
  __int64 v7; 
  float v8; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  cg_t *v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  int v20; 
  float *p_m_z; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  double v27; 
  __int128 v28; 
  vec3_t start; 
  vec3_t point; 
  vec3_t end; 
  vec4_t colora; 

  v4 = DCONST_DVARFLT_ai_shownavdist;
  v7 = numLines;
  if ( !DCONST_DVARFLT_ai_shownavdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_shownavdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v8 = v4->current.value * v4->current.value;
  colora = *(vec4_t *)color;
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(point.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  LODWORD(point.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  LODWORD(point.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
  v13 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v14 = DCONST_DVARINT_ai_showNavMesh;
  v15 = v13->refdef.view.axis.m[0].v[0];
  v16 = v13->refdef.view.axis.m[0].v[1];
  v17 = v13->refdef.view.axis.m[0].v[2];
  if ( !DCONST_DVARINT_ai_showNavMesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavMesh") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer == 2 )
    goto LABEL_23;
  v18 = DCONST_DVARINT_ai_showNavVolumes;
  if ( !DCONST_DVARINT_ai_showNavVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavVolumes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer == 2 )
    goto LABEL_23;
  v19 = DCONST_DVARINT_ai_showNavVolPortals;
  if ( !DCONST_DVARINT_ai_showNavVolPortals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavVolPortals") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer == 2 )
LABEL_23:
    v20 = 1;
  else
    v20 = 0;
  if ( (_DWORD)v7 )
  {
    p_m_z = &pLines->m_v1.m_z;
    do
    {
      v22 = *(p_m_z - 1);
      v23 = *p_m_z;
      v24 = *(p_m_z - 4);
      v25 = *(p_m_z - 3);
      v26 = *(p_m_z - 5);
      end.v[0] = *(p_m_z - 2);
      end.v[1] = v22;
      end.v[2] = v23;
      start.v[2] = v25;
      start.v[0] = v26;
      start.v[1] = v24;
      if ( (float)((float)((float)((float)(v22 - v24) * (float)(v22 - v24)) + (float)((float)(end.v[0] - v26) * (float)(end.v[0] - v26))) + (float)((float)(v23 - v25) * (float)(v23 - v25))) >= 2.0 )
      {
        v27 = PointToLineSegmentDistSq(&point, &start, &end);
        if ( *(float *)&v27 < v8 )
        {
          v28 = LODWORD(start.v[1]);
          *(float *)&v28 = (float)((float)((float)(start.v[1] - point.v[1]) * (float)(start.v[1] - point.v[1])) + (float)((float)(start.v[0] - point.v[0]) * (float)(start.v[0] - point.v[0]))) + (float)((float)(start.v[2] - point.v[2]) * (float)(start.v[2] - point.v[2]));
          _XMM4 = v28;
          *(float *)&v28 = fsqrt(*(float *)&v28);
          _XMM1 = v28;
          __asm
          {
            vcmpless xmm0, xmm4, xmm11
            vblendvps xmm0, xmm1, xmm12, xmm0
          }
          if ( (float)((float)((float)((float)((float)(start.v[1] - point.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * v16) + (float)((float)((float)(start.v[0] - point.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * v15)) + (float)((float)((float)(start.v[2] - point.v[2]) * (float)(1.0 / *(float *)&_XMM0)) * v17)) > 0.0 )
          {
            G_DebugLine(&start, &end, &colora, v20);
            Physics_AddDebugLine(PHYSICS_WORLD_ID_FIRST, &start, &end, &colora);
          }
        }
      }
      p_m_z += 6;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
bfxRenderer::DrawTriList
==============
*/
void bfxRenderer::DrawTriList(bfxRenderer *this, const bfx::Triangle *pTris, unsigned int numTris, const bfx::Color *color)
{
  const dvar_t *v4; 
  __int64 v6; 
  int integer; 
  float *p_m_z; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v20; 
  vec4_t colora; 

  v4 = DCONST_DVARINT_ai_showNavMesh;
  v6 = numTris;
  if ( !DCONST_DVARINT_ai_showNavMesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavMesh") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  colora = *(vec4_t *)color;
  if ( (_DWORD)v6 )
  {
    p_m_z = &pTris->m_v1.m_z;
    v10 = integer == 2;
    do
    {
      v11 = *(p_m_z - 4);
      start.v[0] = *(p_m_z - 5);
      start.v[2] = *(p_m_z - 3);
      v12 = *(p_m_z - 1);
      start.v[1] = v11;
      v13 = *(p_m_z - 2);
      end.v[1] = v12;
      v14 = p_m_z[1];
      end.v[0] = v13;
      v15 = *p_m_z;
      v20.v[0] = v14;
      v16 = p_m_z[3];
      end.v[2] = v15;
      v17 = p_m_z[2];
      v20.v[2] = v16;
      v20.v[1] = v17;
      G_DebugLine(&start, &end, &colora, v10);
      Physics_AddDebugLine(PHYSICS_WORLD_ID_FIRST, &start, &end, &colora);
      G_DebugLine(&end, &v20, &colora, v10);
      Physics_AddDebugLine(PHYSICS_WORLD_ID_FIRST, &end, &v20, &colora);
      G_DebugLine(&v20, &start, &colora, v10);
      Physics_AddDebugLine(PHYSICS_WORLD_ID_FIRST, &v20, &start, &colora);
      p_m_z += 9;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
bfxRenderer::DrawString
==============
*/
void bfxRenderer::DrawString(bfxRenderer *this, const bfx::Color *color, const char *str)
{
  const dvar_t *v3; 
  bool enabled; 
  const dvar_t *v7; 
  bool v8; 
  const dvar_t *v9; 
  vec4_t colora; 

  v3 = DCONST_DVARBOOL_ai_showNavStats;
  if ( !DCONST_DVARBOOL_ai_showNavStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavStats") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v7 = DCONST_DVARBOOL_ai_showNavMemory;
  if ( !DCONST_DVARBOOL_ai_showNavMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.enabled;
  v9 = DCONST_DVARBOOL_ai_showNavTimings;
  if ( !DCONST_DVARBOOL_ai_showNavTimings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavTimings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( enabled || v8 || v9->current.enabled )
  {
    colora = *(vec4_t *)color;
    G_Main_AddDebugString2D(100.0, (float)((float)(s_DrawTextLineNum + 1) * 16.0) + 330.0, &colora, 1.4, str);
    ++s_DrawTextLineNum;
  }
}

/*
==============
bfxRenderer::DrawString
==============
*/
void bfxRenderer::DrawString(bfxRenderer *this, const bfx::Color *color, const bfx::Vector3 *pos, const char *str)
{
  float m_y; 
  float m_z; 
  vec4_t v6; 
  vec3_t xyz; 
  vec4_t colora; 

  m_y = pos->m_y;
  xyz.v[0] = pos->m_x;
  m_z = pos->m_z;
  xyz.v[1] = m_y;
  v6 = *(vec4_t *)color;
  xyz.v[2] = m_z;
  colora = v6;
  G_Main_AddDebugString(&xyz, &colora, 1.0, str);
}

/*
==============
CollideLineAndPlaneOfArea
==============
*/
char CollideLineAndPlaneOfArea(const vec3_t *linePos, const vec3_t *lineUnitVec, const bfx::AreaHandle *area, vec3_t *outCollidePos)
{
  bfx::Vector3 *v8; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Vector3 *Normal; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  bfx::Vector3 result; 

  v8 = bfx::AreaHandle::CalcCentroid((bfx::AreaHandle *)area, &result);
  m_x = v8->m_x;
  m_y = v8->m_y;
  m_z = v8->m_z;
  Normal = bfx::AreaHandle::GetNormal((bfx::AreaHandle *)area, &result);
  v13 = linePos->v[0];
  v14 = Normal->m_y;
  v15 = Normal->m_z;
  v16 = (float)((float)(v14 * lineUnitVec->v[1]) + (float)(lineUnitVec->v[0] * Normal->m_x)) + (float)(v15 * lineUnitVec->v[2]);
  if ( COERCE_FLOAT(LODWORD(v16) & _xmm) <= 0.0 )
  {
    outCollidePos->v[0] = v13;
    outCollidePos->v[1] = linePos->v[1];
    outCollidePos->v[2] = linePos->v[2];
    return 0;
  }
  else
  {
    v17 = (float)((float)((float)((float)(m_y - linePos->v[1]) * v14) + (float)((float)(m_x - v13) * Normal->m_x)) + (float)((float)(m_z - linePos->v[2]) * v15)) / v16;
    outCollidePos->v[0] = (float)(lineUnitVec->v[0] * v17) + v13;
    outCollidePos->v[1] = (float)(v17 * lineUnitVec->v[1]) + linePos->v[1];
    outCollidePos->v[2] = (float)(v17 * lineUnitVec->v[2]) + linePos->v[2];
    return 1;
  }
}

/*
==============
NavData_NavigatorLoadComplete
==============
*/
void NavData_NavigatorLoadComplete(void)
{
  ;
}

/*
==============
NavData_Read
==============
*/
void NavData_Read(MemoryFile *memFile)
{
  __int64 v2; 
  int firstUsed; 
  nav_space_s *v4; 
  __int64 parentEntNum; 
  __int64 v6; 
  __int64 v7; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1475, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Nav_DestroyAllLinks();
  Nav_DestroyAllRepulsors();
  Nav_DestroyAllObstacles();
  MemFile_ReadData(memFile, 4ui64, &p);
  s_NavSpaceUniquifier = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  s_NavObstacleIDGen = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  s_NavLinkUniquifier = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    v2 = p;
    do
    {
      Nav_ReadSpace(memFile);
      --v2;
    }
    while ( v2 );
  }
  Nav_ReadPendingObstacles(memFile);
  Nav_ReadModifiedLinkWeights(memFile);
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  while ( firstUsed >= 0 )
  {
    v4 = &g_NavData.spaces[firstUsed];
    parentEntNum = v4->parentEntNum;
    firstUsed = v4->nextIdx;
    if ( (_DWORD)parentEntNum != 2047 )
    {
      if ( (unsigned int)parentEntNum >= 0x800 )
      {
        LODWORD(v7) = 2048;
        LODWORD(v6) = v4->parentEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[parentEntNum].r.isInUse != g_entityIsInUse[parentEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[parentEntNum] )
        Nav_ClearResourcesFromSpace(v4);
    }
    if ( !v4->numResources && v4 != Nav_GetDefaultSpace() )
    {
      if ( v4->numLinks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1520, ASSERT_TYPE_ASSERT, "( pSpace->numLinks == 0 )", (const char *)&queryFormat, "pSpace->numLinks == 0") )
        __debugbreak();
      if ( v4->numObstacles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1521, ASSERT_TYPE_ASSERT, "( pSpace->numObstacles == 0 )", (const char *)&queryFormat, "pSpace->numObstacles == 0") )
        __debugbreak();
      if ( v4->numRepulsors )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1522, ASSERT_TYPE_ASSERT, "( pSpace->numRepulsors == 0 )", (const char *)&queryFormat, "pSpace->numRepulsors == 0") )
          __debugbreak();
      }
      Nav_DestroySpace(v4);
    }
  }
}

/*
==============
NavData_Write
==============
*/
void NavData_Write(MemoryFile *memFile)
{
  int i; 
  __int64 v3; 
  int p; 

  p = s_NavSpaceUniquifier;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_NavObstacleIDGen;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_NavLinkUniquifier;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = g_NavData.spacePoolInfo.count;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( i = g_NavData.spacePoolInfo.firstUsed; i >= 0; i = g_NavData.spaces[v3].nextIdx )
  {
    v3 = i;
    Nav_WriteSpace(memFile, &g_NavData.spaces[v3]);
  }
  Nav_WritePendingObstacles(memFile);
  Nav_WriteModifiedLinkWeights(memFile);
}

/*
==============
Nav_AddPendingMesh
==============
*/
void Nav_AddPendingMesh(NavMeshData *pNavMeshData)
{
  const char *name; 
  __int64 v3; 
  char *v4; 
  char v5; 
  __int64 v6; 
  char v7; 
  __int64 curPendingList; 
  __int64 v9; 

  if ( !pNavMeshData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1118, ASSERT_TYPE_ASSERT, "(pNavMeshData)", (const char *)&queryFormat, "pNavMeshData") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1119, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  name = pNavMeshData->name;
  v3 = 0x7FFFFFFFi64;
  if ( !pNavMeshData->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v4 = (char *)("maps/default.d3dbsp" - name);
  do
  {
    v5 = name[(_QWORD)v4];
    v6 = v3;
    v7 = *name++;
    --v3;
    if ( !v6 )
      break;
    if ( v5 != v7 )
    {
      Sys_EnterCriticalSection(CRITSECT_NAVMESH_LOAD);
      curPendingList = s_navDataAssets.curPendingList;
      v9 = s_navDataAssets.numPendingLoads[curPendingList];
      if ( (int)v9 >= 4 )
      {
        Sys_LeaveCriticalSection(CRITSECT_NAVMESH_LOAD);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EFBF68, 212i64);
      }
      s_navDataAssets.pendingLoads[curPendingList][v9] = pNavMeshData;
      ++s_navDataAssets.numPendingLoads[curPendingList];
      Sys_LeaveCriticalSection(CRITSECT_NAVMESH_LOAD);
      return;
    }
  }
  while ( v5 );
}

/*
==============
Nav_AllocLink
==============
*/
nav_link_s *Nav_AllocLink()
{
  return Nav_AllocNavObj_nav_link_s_(g_NavData.links, &g_NavData.linkPoolInfo, 2304, 1);
}

/*
==============
Nav_AllocNavPower
==============
*/
void Nav_AllocNavPower(HunkUser *hunkUser)
{
  __int64 MaxNumObstacles; 
  char ActiveGameMode; 
  unsigned __int64 v4; 
  unsigned __int8 v5; 
  unsigned __int64 v6; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 692, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( !g_NavData.pHeap )
  {
    memset_0(&g_NavData, 0, sizeof(g_NavData));
    MaxNumObstacles = Nav_GetMaxNumObstacles();
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    v4 = 4096i64;
    if ( ActiveGameMode == 1 )
      v4 = 0x2000i64;
    g_NavData.obstacleBounds = (nav_obstacle_bounds_s **)Mem_HunkUser_AllocInternal(hunkUser, v4, 4ui64, "Nav_AllocNavPower");
    g_NavData.pendingObstacles = (nav_obstacle_s **)Mem_HunkUser_AllocInternal(hunkUser, 8 * MaxNumObstacles, 4ui64, "Nav_AllocNavPower");
    g_NavData.obstacles = (nav_obstacle_s *)Mem_HunkUser_AllocInternal(hunkUser, 328 * (int)MaxNumObstacles, 4ui64, "Nav_AllocNavPower");
    memset_0(g_NavData.obstacles, 0, 328 * (int)MaxNumObstacles);
    v5 = Com_GameMode_GetActiveGameMode();
    if ( v5 != 3 )
      BG_GameInterface_GameModeIsMP((GameModeType)v5);
    v6 = 0x800000i64;
    if ( g_NavData.maxNumObstacles > 1024 )
      v6 = 0x1000000i64;
    g_NavData.pHeap = (char *)Mem_HunkUser_AllocInternal(hunkUser, v6, 4ui64, "Nav_AllocNavPower");
  }
}

/*
==============
Nav_AllocObstacle
==============
*/
nav_obstacle_s *Nav_AllocObstacle()
{
  int MaxNumObstacles; 

  MaxNumObstacles = Nav_GetMaxNumObstacles();
  return Nav_AllocNavObj_nav_obstacle_s_(g_NavData.obstacles, &g_NavData.obstaclePoolInfo, MaxNumObstacles, 0);
}

/*
==============
Nav_AllocRepulsor
==============
*/
nav_repulsor_s *Nav_AllocRepulsor()
{
  return Nav_AllocNavObj_nav_repulsor_s_(g_NavData.repulsors, &g_NavData.repulsorPoolInfo, 256, 1);
}

/*
==============
Nav_AllocSpace
==============
*/
nav_space_s *Nav_AllocSpace()
{
  return Nav_AllocNavObj_nav_space_s_(g_NavData.spaces, &g_NavData.spacePoolInfo, 128, 1);
}

/*
==============
Nav_AnyVolumesLoaded
==============
*/

bool __fastcall Nav_AnyVolumesLoaded()
{
  return bfx::AnyVolumesLoaded();
}

/*
==============
Nav_CleanupNavMesh
==============
*/
void Nav_CleanupNavMesh(void)
{
  int firstUsed; 
  __int64 v1; 
  nav_resource_s *pNext; 
  nav_space_s *v3; 
  nav_resource_s *p_resourceList; 
  nav_resource_s *v5; 
  __int64 v6; 
  __int64 v7; 

  if ( g_NavData.bNavPowerInitialized )
  {
    Nav_DestroyAllLinks();
    Nav_DestroyAllRepulsors();
    Nav_DestroyAllObstacles();
    Nav_CleanupStaticNavigatorData();
    firstUsed = g_NavData.spacePoolInfo.firstUsed;
    while ( firstUsed >= 0 )
    {
      if ( (unsigned int)firstUsed >= 0x80 )
      {
        LODWORD(v7) = 128;
        LODWORD(v6) = firstUsed;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1006, ASSERT_TYPE_ASSERT, "(unsigned)( iSpace ) < (unsigned)( NAV_MAX_SPACES )", "iSpace doesn't index NAV_MAX_SPACES\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      v1 = firstUsed;
      pNext = g_NavData.spaces[v1].resourceList.pNext;
      v3 = &g_NavData.spaces[v1];
      p_resourceList = &g_NavData.spaces[v1].resourceList;
      firstUsed = g_NavData.spaces[v1].nextIdx;
      if ( pNext != p_resourceList )
      {
        do
        {
          v5 = pNext->pNext;
          if ( pNext->bDockable )
            Nav_RemoveResourceFromSpace(v3, pNext);
          pNext = v5;
        }
        while ( v5 != p_resourceList );
      }
      if ( !v3->numResources && v3 != Nav_GetDefaultSpace() )
        Nav_DestroySpace(v3);
    }
    *(_WORD *)&g_NavData.bRunning = 0;
  }
  else
  {
    if ( g_NavData.bRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1049, ASSERT_TYPE_ASSERT, "( !g_NavData.bRunning )", (const char *)&queryFormat, "!g_NavData.bRunning") )
      __debugbreak();
    if ( g_NavData.bShuttingDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1050, ASSERT_TYPE_ASSERT, "( !g_NavData.bShuttingDown )", (const char *)&queryFormat, "!g_NavData.bShuttingDown") )
      __debugbreak();
  }
}

/*
==============
Nav_ClearNavPowerMemory
==============
*/
void Nav_ClearNavPowerMemory(void)
{
  bfx *v0; 
  bfx *v1; 

  if ( g_NavData.bNavPowerInitialized )
  {
    Nav_RemoveAllResources();
    if ( g_NavData.numResources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 823, ASSERT_TYPE_ASSERT, "(g_NavData.numResources == 0)", (const char *)&queryFormat, "g_NavData.numResources == 0") )
      __debugbreak();
    if ( g_NavData.linkPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 824, ASSERT_TYPE_ASSERT, "(g_NavData.linkPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.linkPoolInfo.count == 0") )
      __debugbreak();
    if ( g_NavData.repulsorPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 825, ASSERT_TYPE_ASSERT, "(g_NavData.repulsorPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.repulsorPoolInfo.count == 0") )
      __debugbreak();
    if ( g_NavData.obstaclePoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 826, ASSERT_TYPE_ASSERT, "(g_NavData.obstaclePoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.obstaclePoolInfo.count == 0") )
      __debugbreak();
    Nav_DestroyAllSpaces();
    Scr_SetString(&g_NavData.spacePoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.linkPoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.repulsorPoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.obstaclePoolInfo.name, (scr_string_t)0);
    Nav_VerifyNavigatorShutdown();
    bfx::SystemStop(v0);
    bfx::SystemDestroy(v1);
    *(_WORD *)&g_NavData.bNavPowerInitialized = 0;
  }
  else if ( g_NavData.bRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 817, ASSERT_TYPE_ASSERT, "( !g_NavData.bRunning )", (const char *)&queryFormat, "!g_NavData.bRunning") )
  {
    __debugbreak();
  }
  g_NavData.pHeap = NULL;
  g_NavData.obstacles = NULL;
  g_NavData.obstacleBounds = NULL;
  g_NavData.pendingObstacles = NULL;
}

/*
==============
Nav_DrawUpdate
==============
*/
void Nav_DrawUpdate(const vec3_t *pos, const vec3_t *dir, float clipDist, float fov)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  bfx::DrawCullParams v10; 

  if ( g_NavData.bNavPowerInitialized )
  {
    v4 = pos->v[1];
    v10.m_cameraPos.m_x = pos->v[0];
    v5 = pos->v[2];
    v10.m_cameraPos.m_y = v4;
    v6 = dir->v[0];
    v10.m_cameraPos.m_z = v5;
    v7 = dir->v[1];
    v10.m_cameraDir.m_x = v6;
    v8 = dir->v[2];
    v10.m_cameraDir.m_y = v7;
    v10.m_cameraDir.m_z = v8;
    v10.m_farClipDist = clipDist;
    v10.m_fov = fov;
    bfx::SystemDraw(&v10);
    v9 = DVARBOOL_ai_whatamidoingwrong;
    if ( !DVARBOOL_ai_whatamidoingwrong && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whatamidoingwrong") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      Nav_BadObstaclesCheck(!s_bWasPreviouslyDoingWrong);
      s_bWasPreviouslyDoingWrong = 1;
    }
    else
    {
      s_bWasPreviouslyDoingWrong = 0;
    }
  }
}

/*
==============
Nav_FreeLink
==============
*/
void Nav_FreeLink(nav_link_s *pLink)
{
  Nav_FreeNavObj_nav_link_s_(pLink, g_NavData.links, &g_NavData.linkPoolInfo, 2304);
}

/*
==============
Nav_FreeNavPower
==============
*/
void Nav_FreeNavPower(void)
{
  bfx *v0; 
  bfx *v1; 

  if ( g_NavData.pHeap && g_NavData.bNavPowerInitialized )
  {
    Nav_RemoveAllResources();
    if ( g_NavData.bNavPowerInitialized )
    {
      Nav_RemoveAllResources();
      if ( g_NavData.numResources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 823, ASSERT_TYPE_ASSERT, "(g_NavData.numResources == 0)", (const char *)&queryFormat, "g_NavData.numResources == 0") )
        __debugbreak();
      if ( g_NavData.linkPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 824, ASSERT_TYPE_ASSERT, "(g_NavData.linkPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.linkPoolInfo.count == 0") )
        __debugbreak();
      if ( g_NavData.repulsorPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 825, ASSERT_TYPE_ASSERT, "(g_NavData.repulsorPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.repulsorPoolInfo.count == 0") )
        __debugbreak();
      if ( g_NavData.obstaclePoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 826, ASSERT_TYPE_ASSERT, "(g_NavData.obstaclePoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.obstaclePoolInfo.count == 0") )
        __debugbreak();
      Nav_DestroyAllSpaces();
      Scr_SetString(&g_NavData.spacePoolInfo.name, (scr_string_t)0);
      Scr_SetString(&g_NavData.linkPoolInfo.name, (scr_string_t)0);
      Scr_SetString(&g_NavData.repulsorPoolInfo.name, (scr_string_t)0);
      Scr_SetString(&g_NavData.obstaclePoolInfo.name, (scr_string_t)0);
      Nav_VerifyNavigatorShutdown();
      bfx::SystemStop(v0);
      bfx::SystemDestroy(v1);
      *(_WORD *)&g_NavData.bNavPowerInitialized = 0;
    }
    else if ( g_NavData.bRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 817, ASSERT_TYPE_ASSERT, "( !g_NavData.bRunning )", (const char *)&queryFormat, "!g_NavData.bRunning") )
    {
      __debugbreak();
    }
    g_NavData.pHeap = NULL;
    g_NavData.obstacles = NULL;
    g_NavData.obstacleBounds = NULL;
    g_NavData.pendingObstacles = NULL;
  }
}

/*
==============
Nav_FreeObstacle
==============
*/
void Nav_FreeObstacle(nav_obstacle_s *pObstacle)
{
  int MaxNumObstacles; 

  if ( bfx::ObstacleHandle::IsValid(&pObstacle->hObstacle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 567, ASSERT_TYPE_ASSERT, "( !pObstacle->hObstacle.IsValid() )", (const char *)&queryFormat, "!pObstacle->hObstacle.IsValid()") )
    __debugbreak();
  MaxNumObstacles = Nav_GetMaxNumObstacles();
  Nav_FreeNavObj_nav_obstacle_s_(pObstacle, g_NavData.obstacles, &g_NavData.obstaclePoolInfo, MaxNumObstacles);
}

/*
==============
Nav_FreeRepulsor
==============
*/
void Nav_FreeRepulsor(nav_repulsor_s *pRepulsor)
{
  Nav_FreeNavObj_nav_repulsor_s_(pRepulsor, g_NavData.repulsors, &g_NavData.repulsorPoolInfo, 256);
}

/*
==============
Nav_FreeSpace
==============
*/
void Nav_FreeSpace(nav_space_s *pSpace)
{
  Nav_FreeNavObj_nav_space_s_(pSpace, g_NavData.spaces, &g_NavData.spacePoolInfo, 128);
}

/*
==============
Nav_Get2DDistanceSqWithUp
==============
*/
float Nav_Get2DDistanceSqWithUp(const vec3_t *pt1, const vec3_t *pt2, const vec3_t *up)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  v3 = pt2->v[0] - pt1->v[0];
  v4 = pt2->v[1] - pt1->v[1];
  v5 = pt2->v[2] - pt1->v[2];
  LODWORD(v6) = COERCE_UNSIGNED_INT((float)((float)(v4 * up->v[1]) + (float)(v3 * up->v[0])) + (float)(v5 * up->v[2])) ^ _xmm;
  return (float)((float)((float)((float)(v6 * up->v[1]) + v4) * (float)((float)(v6 * up->v[1]) + v4)) + (float)((float)((float)(v6 * up->v[0]) + v3) * (float)((float)(v6 * up->v[0]) + v3))) + (float)((float)((float)(v6 * up->v[2]) + v5) * (float)((float)(v6 * up->v[2]) + v5));
}

/*
==============
Nav_GetAllocSize
==============
*/
__int64 Nav_GetAllocSize()
{
  int MaxNumObstacles; 
  unsigned __int8 ActiveGameMode; 
  int v2; 
  char v3; 
  int v4; 

  MaxNumObstacles = Nav_GetMaxNumObstacles();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode != 3 )
    BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
  v2 = 0x800000;
  if ( g_NavData.maxNumObstacles > 1024 )
    v2 = 0x1000000;
  v3 = Com_GameMode_GetActiveGameMode();
  v4 = 4096;
  if ( v3 == 1 )
    v4 = 0x2000;
  return (unsigned int)(v2 + v4 + 336 * MaxNumObstacles);
}

/*
==============
Nav_GetBounds
==============
*/
char Nav_GetBounds(Bounds *pOutBounds)
{
  if ( !pOutBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 153, ASSERT_TYPE_ASSERT, "(pOutBounds)", (const char *)&queryFormat, "pOutBounds") )
    __debugbreak();
  if ( g_NavData.staticBounds.halfSize.v[0] == 0.0 && g_NavData.staticBounds.halfSize.v[1] == 0.0 && g_NavData.staticBounds.halfSize.v[2] == 0.0 && g_NavData.staticBounds.midPoint.v[0] == 0.0 && g_NavData.staticBounds.midPoint.v[1] == 0.0 && g_NavData.staticBounds.midPoint.v[2] == 0.0 || g_NavData.staticBounds.halfSize.v[0] < 0.0 || g_NavData.staticBounds.halfSize.v[1] < 0.0 || g_NavData.staticBounds.halfSize.v[2] < 0.0 )
    return 0;
  *pOutBounds = g_NavData.staticBounds;
  return 1;
}

/*
==============
Nav_GetClosestVerticalPos
==============
*/
__int64 Nav_GetClosestVerticalPos(const vec3_t *targetPos, const vec3_t *upVec, const unsigned int layer, bfx::SpaceHandle *hSpace, const bfx::PathSpec *pPathSpec, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  int v10; 
  float v11; 
  const bfx::AreaHandle *ClosestArea; 
  int v13; 
  unsigned __int8 v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const bfx::AreaHandle *AdjacentArea; 
  int NumEdges; 
  __int64 i; 
  const bfx::AreaHandle *v29; 
  int v30; 
  bfx::AreaHandle result; 
  bfx::ClosestPosData pDataOut; 
  vec3_t v34; 
  bfx::AreaHandle area; 
  float v36; 
  float v37; 
  int v38[2]; 
  vec3_t *lineUnitVec; 
  bfx::Vector3 pos; 
  bfx::Vector3 posWCoord; 
  __int64 v42; 
  bfx::AreaHandle v43; 
  bfx::AreaHandle v44; 
  bfx::Vector3 v45; 
  vec3_t linePos; 
  vec3_t outCollidePos; 
  bfx::PathSpec pathSpec; 
  bfx::AreaHandle ptr[5]; 

  v42 = -2i64;
  lineUnitVec = (vec3_t *)upVec;
  Profile_Begin(266);
  bfx::AreaHandle::AreaHandle(&area);
  v10 = 0;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  `eh vector constructor iterator'(ptr, 0x10ui64, 5ui64, (void (__fastcall *)(void *))bfx::AreaHandle::AreaHandle, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  v11 = FLOAT_3_4028235e38;
  if ( layer >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", layer, 3) )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 189, ASSERT_TYPE_ASSERT, "( hSpace.IsValid() )", (const char *)&queryFormat, "hSpace.IsValid()") )
    __debugbreak();
  pos = (bfx::Vector3)*targetPos;
  if ( pPathSpec )
    pathSpec = *pPathSpec;
  ClosestArea = bfx::GetClosestArea(&result, hSpace, &pos, layer, &pathSpec);
  bfx::AreaHandle::operator=(ptr, ClosestArea);
  bfx::AreaHandle::~AreaHandle(&result);
  v13 = 1;
  *outClosestPos = *targetPos;
  if ( bfx::AreaHandle::IsValid(ptr) )
  {
    v15 = targetPos->v[0];
    linePos.v[0] = targetPos->v[0];
    v16 = targetPos->v[1];
    v36 = v16;
    linePos.v[1] = v16;
    v17 = targetPos->v[2];
    v37 = v17;
    linePos.v[2] = v17;
    v18 = lineUnitVec;
    while ( 1 )
    {
      pDataOut.m_isEdgePos = 0;
      pDataOut.m_edgeIndex = -1;
      bfx::AreaHandle::operator=(&area, &ptr[v10]);
      CollideLineAndPlaneOfArea(&linePos, v18, &area, &outCollidePos);
      posWCoord = (bfx::Vector3)outCollidePos;
      v34 = *(vec3_t *)bfx::AreaHandle::GetClosestPosInArea(&area, &v45, &posWCoord, &pDataOut);
      if ( !pDataOut.m_isEdgePos )
        break;
      v19 = v34.v[0];
      v20 = v34.v[1];
      v21 = v34.v[2];
      LODWORD(v22) = COERCE_UNSIGNED_INT((float)((float)((float)(v34.v[0] - v15) * v18->v[0]) + (float)((float)(v34.v[1] - v16) * v18->v[1])) + (float)((float)(v34.v[2] - v17) * v18->v[2])) ^ _xmm;
      v23 = (float)(v22 * v18->v[1]) + (float)(v34.v[1] - v16);
      v24 = (float)(v22 * v18->v[2]) + (float)(v34.v[2] - v17);
      v25 = (float)((float)(v23 * v23) + (float)((float)((float)(v22 * v18->v[0]) + (float)(v34.v[0] - v15)) * (float)((float)(v22 * v18->v[0]) + (float)(v34.v[0] - v15)))) + (float)(v24 * v24);
      if ( v25 < v11 )
      {
        if ( pOutArea )
          bfx::AreaHandle::operator=(pOutArea, &area);
        outClosestPos->v[0] = v19;
        outClosestPos->v[1] = v20;
        outClosestPos->v[2] = v21;
        if ( v25 < 0.003 )
          goto LABEL_42;
        v11 = v25;
      }
      bfx::AreaHandle::AreaHandle(&result);
      AdjacentArea = bfx::AreaHandle::GetAdjacentArea(&area, &v43, pDataOut.m_edgeIndex);
      bfx::AreaHandle::operator=(&result, AdjacentArea);
      bfx::AreaHandle::~AreaHandle(&v43);
      if ( bfx::AreaHandle::IsValid(&result) && bfx::AreaHandle::IsUsable(&result, &pathSpec) )
      {
        if ( v13 < 5 )
          bfx::AreaHandle::operator=(&ptr[v13++], &result);
      }
      else
      {
        v38[0] = -1;
        v38[1] = 1;
        NumEdges = bfx::AreaHandle::GetNumEdges(&area);
        if ( NumEdges <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 287, ASSERT_TYPE_ASSERT, "( numOffsets < numEdges )", (const char *)&queryFormat, "numOffsets < numEdges") )
          __debugbreak();
        for ( i = 0i64; i < 2; ++i )
        {
          if ( v13 >= 5 )
            break;
          v29 = bfx::AreaHandle::GetAdjacentArea(&area, &v44, (pDataOut.m_edgeIndex + NumEdges + v38[i]) % NumEdges);
          bfx::AreaHandle::operator=(&result, v29);
          bfx::AreaHandle::~AreaHandle(&v44);
          if ( bfx::AreaHandle::IsValid(&result) && bfx::AreaHandle::IsUsable(&result, &pathSpec) )
          {
            v30 = 0;
            if ( v13 <= 0 )
            {
LABEL_34:
              bfx::AreaHandle::operator=(&ptr[v13++], &result);
            }
            else
            {
              while ( !bfx::AreaHandle::operator==(&ptr[v30], &result) )
              {
                if ( ++v30 >= v13 )
                  goto LABEL_34;
              }
            }
          }
        }
        v18 = lineUnitVec;
      }
      bfx::AreaHandle::~AreaHandle(&result);
      if ( ++v10 >= v13 )
        goto LABEL_42;
      v16 = v36;
      v17 = v37;
    }
    if ( pOutArea )
      bfx::AreaHandle::operator=(pOutArea, &area);
    *outClosestPos = v34;
LABEL_42:
    Profile_EndInternal(NULL);
    v14 = 1;
  }
  else
  {
    if ( pOutArea )
      bfx::AreaHandle::Release(pOutArea);
    Profile_EndInternal(NULL);
    v14 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x10ui64, 5ui64, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  bfx::AreaHandle::~AreaHandle(&area);
  return v14;
}

/*
==============
Nav_GetClosestVerticalPosDefault
==============
*/
bool Nav_GetClosestVerticalPosDefault(const vec3_t *targetPos, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  const nav_space_s *DefaultSpace; 
  bfx::SpaceHandle *p_hSpace; 
  vec3_t outUp; 

  DefaultSpace = Nav_GetDefaultSpace();
  p_hSpace = &DefaultSpace->hSpace;
  if ( DefaultSpace )
  {
    Nav_GetSpaceUp(DefaultSpace, &outUp);
    LOBYTE(DefaultSpace) = Nav_GetClosestVerticalPos(targetPos, &outUp, 0, p_hSpace, NULL, outClosestPos, pOutArea);
  }
  return (char)DefaultSpace;
}

/*
==============
Nav_GetClosestVerticalPosWithHint
==============
*/
bool Nav_GetClosestVerticalPosWithHint(const vec3_t *targetPos, const vec3_t *upVec, const unsigned int layer, bfx::SpaceHandle *hSpace, const bfx::PathSpec *pPathSpec, vec3_t *outClosestPos, const bfx::AreaHandle *hHintArea, bfx::AreaHandle *pOutArea)
{
  bfx::Vector3 *ClosestPosInArea; 
  double v13; 
  float v14; 
  bfx::ClosestPosData pDataOut; 
  bfx::Vector3 posWCoord; 
  bfx::Vector3 result; 
  vec3_t outCollidePos; 

  ++s_NumCalls;
  Profile_Begin(267);
  if ( !bfx::AreaHandle::IsValid((bfx::AreaHandle *)hHintArea) )
    goto LABEL_8;
  if ( !bfx::AreaHandle::IsUsable((bfx::AreaHandle *)hHintArea, pPathSpec) )
    goto LABEL_8;
  pDataOut.m_isEdgePos = 0;
  pDataOut.m_edgeIndex = -1;
  CollideLineAndPlaneOfArea(targetPos, upVec, hHintArea, &outCollidePos);
  if ( (float)((float)((float)((float)(targetPos->v[1] - outCollidePos.v[1]) * (float)(targetPos->v[1] - outCollidePos.v[1])) + (float)((float)(targetPos->v[0] - outCollidePos.v[0]) * (float)(targetPos->v[0] - outCollidePos.v[0]))) + (float)((float)(targetPos->v[2] - outCollidePos.v[2]) * (float)(targetPos->v[2] - outCollidePos.v[2]))) >= 1296.0 )
    goto LABEL_8;
  posWCoord = (bfx::Vector3)outCollidePos;
  ClosestPosInArea = bfx::AreaHandle::GetClosestPosInArea((bfx::AreaHandle *)hHintArea, &result, &posWCoord, &pDataOut);
  v13 = *(double *)&ClosestPosInArea->m_x;
  *(float *)&ClosestPosInArea = ClosestPosInArea->m_z;
  *(double *)outCollidePos.v = v13;
  LODWORD(outCollidePos.v[2]) = (_DWORD)ClosestPosInArea;
  if ( !pDataOut.m_isEdgePos )
  {
    if ( pOutArea )
      bfx::AreaHandle::operator=(pOutArea, hHintArea);
    v14 = outCollidePos.v[1];
    ++s_NumHits;
    outClosestPos->v[0] = outCollidePos.v[0];
    outClosestPos->v[2] = outCollidePos.v[2];
    outClosestPos->v[1] = v14;
    Profile_EndInternal(NULL);
    return 1;
  }
  else
  {
LABEL_8:
    Profile_EndInternal(NULL);
    return Nav_GetClosestVerticalPos(targetPos, upVec, layer, hSpace, pPathSpec, outClosestPos, pOutArea);
  }
}

/*
==============
Nav_GetHeapSize
==============
*/
__int64 Nav_GetHeapSize()
{
  unsigned __int8 ActiveGameMode; 
  __int64 result; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode != 3 )
    BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
  result = 0x800000i64;
  if ( g_NavData.maxNumObstacles > 1024 )
    return 0x1000000i64;
  return result;
}

/*
==============
Nav_GetMaxNumObstacleBounds
==============
*/
__int64 Nav_GetMaxNumObstacleBounds()
{
  char ActiveGameMode; 
  unsigned int v1; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 512;
  if ( ActiveGameMode == 1 )
    return 1024;
  return v1;
}

/*
==============
Nav_GetMaxNumObstacles
==============
*/
__int64 Nav_GetMaxNumObstacles()
{
  __int64 result; 
  unsigned int v1; 
  int v2; 
  int v3; 
  int v4; 
  __int64 v5; 
  __int64 curPendingList; 
  __int64 v7; 
  int *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  int v11; 

  result = (unsigned int)g_NavData.maxNumObstacles;
  if ( g_NavData.maxNumObstacles <= 0 )
  {
    v1 = 1024;
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    {
      v2 = 1024;
      v3 = 0;
      v4 = 0;
      Sys_EnterCriticalSection(CRITSECT_NAVMESH_LOAD);
      v5 = 0i64;
      curPendingList = s_navDataAssets.curPendingList;
      v7 = s_navDataAssets.numPendingLoads[curPendingList];
      if ( v7 >= 2 )
      {
        v8 = &s_navDataAssets.numPendingLoads[8 * s_navDataAssets.curPendingList - 14];
        v9 = ((unsigned __int64)(v7 - 2) >> 1) + 1;
        v5 = 2 * v9;
        do
        {
          v10 = *((_QWORD *)v8 - 1);
          v8 += 4;
          v3 += *(_DWORD *)(v10 + 64);
          v4 += *(_DWORD *)(*((_QWORD *)v8 - 2) + 64i64);
          --v9;
        }
        while ( v9 );
      }
      if ( v5 < v7 )
        v2 = s_navDataAssets.pendingLoads[curPendingList][v5]->numModifiers + 1024;
      v11 = v4 + v3 + v2;
      Sys_LeaveCriticalSection(CRITSECT_NAVMESH_LOAD);
      if ( v11 < 1024 )
        v11 = 1024;
      v1 = v11;
    }
    g_NavData.maxNumObstacles = v1;
    return v1;
  }
  return result;
}

/*
==============
Nav_GetNavMeshData
==============
*/
NavMeshData *Nav_GetNavMeshData(const char *filename)
{
  XAssetHeader v2; 

  v2.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_NAVMESH, filename, 1).physicsLibrary;
  if ( v2.physicsLibrary && !DB_IsXAssetDefault(ASSET_TYPE_NAVMESH, filename) )
    return (NavMeshData *)v2.physicsLibrary;
  Com_PrintError(1, "file not found: %s\n", filename);
  return 0i64;
}

/*
==============
Nav_GetResourceByEntNum
==============
*/
nav_resource_s *Nav_GetResourceByEntNum(int entNum)
{
  int v1; 
  nav_resource_s **i; 

  v1 = 0;
  if ( g_NavData.numResources <= 0 )
    return 0i64;
  for ( i = g_NavData.resources; (*i)->targetEntNum != entNum; ++i )
  {
    if ( ++v1 >= g_NavData.numResources )
      return 0i64;
  }
  return *i;
}

/*
==============
Nav_HasExposureData
==============
*/
_BOOL8 Nav_HasExposureData()
{
  return g_NavData.bHasExposureData;
}

/*
==============
Nav_InitNavPower
==============
*/
void Nav_InitNavPower(void)
{
  unsigned __int8 ActiveGameMode; 
  unsigned int v1; 
  bfx *v2; 
  bfx *v3; 
  bfx *v4; 
  bfx *v5; 
  bfx *v6; 
  bfx::SystemParams systemParams; 

  if ( !g_NavData.bNavPowerInitialized )
  {
    systemParams.m_scaleDist = FLOAT_72_0;
    systemParams.m_upAxis = Z_UP;
    systemParams.m_memoryTags = 0;
    if ( !g_NavData.pHeap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 754, ASSERT_TYPE_ASSERT, "( g_NavData.pHeap != nullptr )", "Heap should be manually allocated for non-tools runs") )
      __debugbreak();
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( ActiveGameMode != 3 )
      BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
    v1 = 0x800000;
    if ( g_NavData.maxNumObstacles > 1024 )
      v1 = 0x1000000;
    bfx::SystemCreate(g_NavData.pHeap, v1, &systemParams, NULL);
    bfx::RegisterPlannerSystem(v2);
    bfx::RegisterPlanner3DSystem(v3);
    bfx::RegisterNavigatorSystem(v4);
    bfx::SystemStart(v5);
    bfx::EnableMaximumSmartPathCacheAccuracy(1);
    bfx::SetPath3DQualityLevel(PATH3D_STANDARD_QUALITY);
    bfx::DisableDefaultSpace(v6);
    bfx::SetRenderer(&s_bfxRenderer);
    g_NavData.bNavPowerInitialized = 1;
    Nav_InitializeObjLists();
    g_NavData.defaultSpaceIdx = Nav_CreateDefaultSpace();
    *(_QWORD *)&g_NavData.curPendingObstacleIdx = 0i64;
  }
}

/*
==============
Nav_InitializeObjLists
==============
*/
scr_string_t Nav_InitializeObjLists()
{
  __int16 MaxNumObstacles; 
  __int16 v1; 
  __int16 *p_prevIdx; 
  __int16 v3; 
  __int64 v4; 
  __int16 v5; 
  __int16 *v6; 
  __int16 v7; 
  __int64 v8; 
  __int16 v9; 
  __int16 *v10; 
  __int16 v11; 
  __int64 v12; 
  __int16 v13; 
  scr_string_t String; 
  nav_obstacle_s *obstacles; 
  int v16; 
  __int16 v17; 
  __int64 v18; 
  __int16 v19; 
  __int64 v20; 
  scr_string_t result; 

  MaxNumObstacles = Nav_GetMaxNumObstacles();
  *(_DWORD *)&g_NavData.spaces[0].nextIdx = -65535;
  v1 = 0;
  p_prevIdx = &g_NavData.spaces[1].prevIdx;
  v3 = 1;
  v4 = 126i64;
  do
  {
    v5 = v1 + 2;
    *p_prevIdx = v1++;
    *(p_prevIdx - 1) = v5;
    p_prevIdx += 320;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&g_NavData.spaces[127].nextIdx = 8323071i64;
  *(_DWORD *)&g_NavData.spacePoolInfo.nextFree = -65536;
  g_NavData.spacePoolInfo.name = SL_GetString("spaces", 0);
  v6 = &g_NavData.links[1].prevIdx;
  v7 = 0;
  g_NavData.spacePoolInfo.highCount = 0;
  v8 = 2302i64;
  *(_DWORD *)&g_NavData.links[0].nextIdx = -65535;
  do
  {
    v9 = v7 + 2;
    *v6 = v7++;
    *(v6 - 1) = v9;
    v6 += 32;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)&g_NavData.links[2303].nextIdx = 150929407;
  *(_DWORD *)&g_NavData.linkPoolInfo.nextFree = -65536;
  g_NavData.linkPoolInfo.count = 0;
  g_NavData.linkPoolInfo.name = SL_GetString("links", 0);
  v10 = &g_NavData.repulsors[1].prevIdx;
  v11 = 0;
  g_NavData.linkPoolInfo.highCount = 0;
  v12 = 254i64;
  *(_DWORD *)&g_NavData.repulsors[0].nextIdx = -65535;
  do
  {
    v13 = v11 + 2;
    *v10 = v11++;
    *(v10 - 1) = v13;
    v10 += 44;
    --v12;
  }
  while ( v12 );
  *(_DWORD *)&g_NavData.repulsors[255].nextIdx = 16711679;
  *(_DWORD *)&g_NavData.repulsorPoolInfo.nextFree = -65536;
  g_NavData.repulsorPoolInfo.count = 0;
  String = SL_GetString("repulsors", 0);
  obstacles = g_NavData.obstacles;
  g_NavData.repulsorPoolInfo.name = String;
  g_NavData.repulsorPoolInfo.highCount = 0;
  if ( !g_NavData.obstacles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 399, ASSERT_TYPE_ASSERT, "( pPool )", (const char *)&queryFormat, "pPool") )
    __debugbreak();
  v16 = MaxNumObstacles - 1;
  *(_DWORD *)&obstacles->nextIdx = -65535;
  if ( v16 > 1 )
  {
    do
    {
      v17 = v3 - 1;
      v18 = v3;
      v19 = v3++ - 1 + 2;
      obstacles[v18].nextIdx = v19;
      obstacles[v18].prevIdx = v17;
    }
    while ( v3 < v16 );
  }
  v20 = MaxNumObstacles;
  obstacles[v20 - 1].prevIdx = MaxNumObstacles - 2;
  obstacles[v20 - 1].nextIdx = -1;
  *(_DWORD *)&g_NavData.obstaclePoolInfo.nextFree = -65536;
  g_NavData.obstaclePoolInfo.count = 0;
  result = SL_GetString("obstacles", 0);
  g_NavData.obstaclePoolInfo.highCount = 0;
  g_NavData.obstaclePoolInfo.name = result;
  return result;
}

/*
==============
Nav_IsRunning
==============
*/
_BOOL8 Nav_IsRunning()
{
  return g_NavData.bRunning;
}

/*
==============
Nav_LoadNavMeshData
==============
*/
void Nav_LoadNavMeshData(NavMeshData *pNavMeshData)
{
  __int64 version; 
  int v3; 
  int i; 
  nav_resource_s *v5; 
  scr_string_t targetName; 
  int EntNumForTargetName; 
  int modelIdx; 
  nav_space_s *SpaceByEntNum; 
  nav_space_s *Space; 
  int j; 
  char ActiveGameMode; 
  int v13; 
  char v14; 
  int v15; 
  __int64 v16; 
  int k; 
  __int64 v18; 
  int m; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  if ( pNavMeshData )
  {
    version = (unsigned int)pNavMeshData->version;
    if ( (int)version < 19 )
    {
      Com_PrintError(1, "Navmesh version %d. Expecting at least version %d. Aborting load.\n", version, 19i64);
      return;
    }
    if ( !g_NavData.bNavPowerInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 861, ASSERT_TYPE_ASSERT, "( g_NavData.bNavPowerInitialized )", (const char *)&queryFormat, "g_NavData.bNavPowerInitialized") )
      __debugbreak();
    g_NavData.bHasExposureData = pNavMeshData->hasExposureData == 1;
    v3 = 0;
    g_NavData.version = pNavMeshData->version;
    for ( i = 0; i < pNavMeshData->numNavResources; ++i )
    {
      if ( g_NavData.numResources >= 128 )
      {
        LODWORD(v23) = 128;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 871, ASSERT_TYPE_ASSERT, "(g_NavData.numResources < NAV_MAX_RESOURCES)", "%s\n\texceeded max number of navmeshes (%d). arbitrary limit. see code to increase.", "g_NavData.numResources < NAV_MAX_RESOURCES", v23) )
          __debugbreak();
      }
      g_NavData.resources[g_NavData.numResources] = &pNavMeshData->navResources[i];
      v5 = g_NavData.resources[g_NavData.numResources];
      if ( !bfx::IsResourceUpToDate((const char *)v5->pGraphBuffer) || v5->graphSize <= 0 )
        continue;
      ++g_NavData.numResources;
      targetName = v5->targetName;
      v5->targetEntNum = 2047;
      v5->pSpace = NULL;
      v5->pNext = NULL;
      v5->pPrev = NULL;
      if ( targetName )
      {
        EntNumForTargetName = Nav_GetEntNumForTargetName(targetName);
      }
      else
      {
        modelIdx = v5->modelIdx;
        if ( modelIdx < 0 )
          goto LABEL_18;
        EntNumForTargetName = Nav_GetEntNumForModelIdx(modelIdx);
      }
      v5->targetEntNum = EntNumForTargetName;
LABEL_18:
      SpaceByEntNum = Nav_GetSpaceByEntNum(v5->targetEntNum);
      if ( SpaceByEntNum )
      {
        Nav_AddResourceToOldSpace(SpaceByEntNum, v5, &vec3_origin, &quat_identity, 0);
      }
      else
      {
        Space = Nav_CreateSpace(v5->targetEntNum);
        if ( !Space && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 919, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
          __debugbreak();
        Nav_AddResourceToNewSpace(Space, v5, &vec3_origin, &quat_identity, 0);
      }
    }
    for ( j = 0; j < pNavMeshData->numObstacleBounds; ++g_NavData.numObstacleBounds )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      v13 = 512;
      if ( ActiveGameMode == 1 )
        v13 = 1024;
      if ( g_NavData.numObstacleBounds >= v13 )
      {
        v14 = Com_GameMode_GetActiveGameMode();
        v15 = 512;
        if ( v14 == 1 )
          v15 = 1024;
        LODWORD(v22) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 927, ASSERT_TYPE_ASSERT, "( g_NavData.numObstacleBounds < Nav_GetMaxNumObstacleBounds() )", "Exceeded max number of allowed obstacle bounds (%d).", v22) )
          __debugbreak();
      }
      v16 = j++;
      g_NavData.obstacleBounds[g_NavData.numObstacleBounds] = &pNavMeshData->obstacleBounds[v16];
    }
    for ( k = 0; k < pNavMeshData->numLinkCreationData; ++g_NavData.numLinkData )
    {
      if ( g_NavData.numLinkData >= 2304 )
      {
        LODWORD(v22) = 2304;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 934, ASSERT_TYPE_ASSERT, "( g_NavData.numLinkData < NAV_MAX_LINKS )", "Exceeded max number of allowed link data (%d).", v22) )
          __debugbreak();
      }
      v18 = k++;
      g_NavData.linkCreationData[g_NavData.numLinkData] = &pNavMeshData->linkCreationData[v18];
    }
    for ( m = 0; m < pNavMeshData->numGlassBounds; ++g_NavData.numGlassBounds )
    {
      if ( g_NavData.numGlassBounds >= 128 )
      {
        LODWORD(v22) = 128;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 941, ASSERT_TYPE_ASSERT, "( g_NavData.numGlassBounds < NAV_MAX_GLASS_BOUNDS )", "Exceeded max number of allowed glass bounds (%d).", v22) )
          __debugbreak();
      }
      v20 = m++;
      g_NavData.glassBounds[g_NavData.numGlassBounds] = &pNavMeshData->glassBounds[v20];
    }
    if ( pNavMeshData->numModifiers > 0 )
    {
      do
      {
        if ( g_NavData.numModifiers >= 3000 )
        {
          LODWORD(v22) = 3000;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 948, ASSERT_TYPE_ASSERT, "( g_NavData.numModifiers < NAV_MAX_MODIFIERS )", "Exceeded max number of allowed nav modifiers (%d).", v22) )
            __debugbreak();
        }
        v21 = v3++;
        g_NavData.modifiers[g_NavData.numModifiers++] = &pNavMeshData->modifiers[v21];
      }
      while ( v3 < pNavMeshData->numModifiers );
    }
    *(_QWORD *)g_NavData.staticBounds.midPoint.v = *(_QWORD *)pNavMeshData->miscData.m_StaticBoundsMidPoint.v;
    g_NavData.staticBounds.midPoint.v[2] = pNavMeshData->miscData.m_StaticBoundsMidPoint.v[2];
    g_NavData.staticBounds.halfSize = pNavMeshData->miscData.m_StaticBoundsHalfSize;
  }
}

/*
==============
Nav_MeshLoaded
==============
*/
bool Nav_MeshLoaded()
{
  return g_NavData.numResources > 0;
}

/*
==============
Nav_MeshLoadedForLayer
==============
*/
char Nav_MeshLoadedForLayer(int layer)
{
  int firstUsed; 
  __int64 v3; 
  bfx::AreaHandle result; 

  if ( (unsigned int)layer > 2 )
    return 0;
  firstUsed = g_NavData.spacePoolInfo.firstUsed;
  if ( g_NavData.spacePoolInfo.firstUsed < 0 )
    return 0;
  while ( 1 )
  {
    v3 = firstUsed;
    bfx::GetClosestArea(&result, &g_NavData.spaces[v3].hSpace, &bfx::ZERO_VECTOR, layer, &bfx::g_defaultPathSpec);
    if ( bfx::AreaHandle::IsValid(&result) )
      break;
    bfx::AreaHandle::~AreaHandle(&result);
    firstUsed = g_NavData.spaces[v3].nextIdx;
    if ( firstUsed < 0 )
      return 0;
  }
  bfx::AreaHandle::~AreaHandle(&result);
  return 1;
}

/*
==============
Nav_MeshWillBeLoaded
==============
*/
bool Nav_MeshWillBeLoaded()
{
  return s_navDataAssets.numPendingLoads[0] || s_navDataAssets.numPendingLoads[1];
}

/*
==============
Nav_PointWithinCylinderWithUp
==============
*/
bool Nav_PointWithinCylinderWithUp(const vec3_t *point, const vec3_t *center, const vec3_t *up, float radius, float halfHeight)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  v5 = point->v[0] - center->v[0];
  v6 = point->v[1] - center->v[1];
  v7 = point->v[2] - center->v[2];
  v8 = up->v[1];
  v9 = up->v[2];
  v10 = (float)((float)(v8 * v6) + (float)(up->v[0] * v5)) + (float)(v9 * v7);
  return (float)(v10 * v10) <= (float)(halfHeight * halfHeight) && (float)(radius * radius) > (float)((float)((float)((float)((float)(v8 * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v6) * (float)((float)(v8 * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v6)) + (float)((float)((float)(up->v[0] * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v5) * (float)((float)(up->v[0] * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v5))) + (float)((float)((float)(v9 * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v7) * (float)((float)(v9 * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v7)));
}

/*
==============
Nav_PostSpawnInit
==============
*/
void Nav_PostSpawnInit(bool snapNodesToMesh, bool bSaveLoad)
{
  bool v3; 
  int numResources; 
  int v5; 
  nav_resource_s **resources; 
  int targetEntNum; 
  nav_space_s *SpaceByEntNum; 
  nav_space_s *Space; 
  int v10; 
  unsigned __int16 v11; 
  unsigned int v12; 
  pathnode_t *v13; 
  const gentity_s *Parent; 
  nav_space_s *v15; 
  const char *v16; 
  vec3_t pos; 
  vec3_t worldPos; 

  v3 = snapNodesToMesh;
  s_NavSpaceUniquifier = 0;
  s_NavObstacleIDGen = 2048;
  s_NavLinkUniquifier = 0;
  if ( g_NavData.bNavPowerInitialized )
  {
    Nav_UpdatePendingFiles();
    numResources = g_NavData.numResources;
    v5 = 0;
    if ( g_NavData.numResources > 0 )
    {
      resources = g_NavData.resources;
      do
      {
        if ( !*resources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1293, ASSERT_TYPE_ASSERT, "( g_NavData.resources[ iResource ] )", (const char *)&queryFormat, "g_NavData.resources[ iResource ]") )
          __debugbreak();
        if ( !(*resources)->pSpace )
        {
          targetEntNum = (*resources)->targetEntNum;
          SpaceByEntNum = Nav_GetSpaceByEntNum(targetEntNum);
          if ( SpaceByEntNum )
          {
            Nav_AddResourceToOldSpace(SpaceByEntNum, *resources, &vec3_origin, &quat_identity, 0);
          }
          else
          {
            Space = Nav_CreateSpace(targetEntNum);
            if ( !Space && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1323, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
              __debugbreak();
            Nav_AddResourceToNewSpace(Space, *resources, &vec3_origin, &quat_identity, 0);
          }
        }
        if ( !(*resources)->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1329, ASSERT_TYPE_ASSERT, "( g_NavData.resources[ iResource ]->pSpace )", (const char *)&queryFormat, "g_NavData.resources[ iResource ]->pSpace") )
          __debugbreak();
        Nav_UpdateSpace((*resources)->pSpace);
        numResources = g_NavData.numResources;
        ++v5;
        ++resources;
      }
      while ( v5 < g_NavData.numResources );
      v3 = snapNodesToMesh;
    }
    if ( !bSaveLoad )
    {
      Nav_SetupNavLinks();
      numResources = g_NavData.numResources;
    }
    if ( v3 && numResources > 0 && !bNodesSnapped )
    {
      bNodesSnapped = 1;
      v10 = Path_NodeCount();
      v11 = 0;
      if ( v10 > 0 )
      {
        v12 = 0;
        do
        {
          if ( Path_NodeValid(v11) )
          {
            v13 = &pathData.nodes[v11];
            pathnode_t::GetPos(v13, &pos);
            Parent = pathnode_t::GetParent(v13);
            v15 = Parent ? Nav_GetSpaceByEntity(Parent) : Nav_GetDefaultSpace();
            if ( v15 )
            {
              Nav_GetClosestVerticalPos(&pos, &g_navUp_0, 0, &v15->hSpace, NULL, &worldPos, NULL);
              if ( (float)((float)((float)(worldPos.v[1] - pos.v[1]) * (float)(worldPos.v[1] - pos.v[1])) + (float)((float)(worldPos.v[0] - pos.v[0]) * (float)(worldPos.v[0] - pos.v[0]))) <= 144.0 )
              {
                worldPos.v[2] = pos.v[2];
                pathnode_t::SetWorldPos(v13, &worldPos);
              }
              else
              {
                v16 = vtos(&pos);
                Com_PrintWarning(18, "Pathnode %d (%s) at pos %s is not on the navmesh.\n", v12, nodeStringTable[v13->constant.type], v16);
              }
            }
          }
          v12 = ++v11;
        }
        while ( v11 < v10 );
      }
    }
    if ( !bSaveLoad )
    {
      Nav_CreateGlassObstacles();
      Nav_CreateModifiers();
    }
    g_NavData.bRunning = 1;
  }
  else if ( g_NavData.numResources > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1283, ASSERT_TYPE_ASSERT, "( !Nav_MeshLoaded() )", (const char *)&queryFormat, "!Nav_MeshLoaded()") )
  {
    __debugbreak();
  }
}

/*
==============
Nav_PreShutdown
==============
*/
void Nav_PreShutdown(void)
{
  if ( g_NavData.bNavPowerInitialized )
  {
    g_NavData.bShuttingDown = 1;
  }
  else if ( g_NavData.bRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1037, ASSERT_TYPE_ASSERT, "( !g_NavData.bRunning )", (const char *)&queryFormat, "!g_NavData.bRunning") )
  {
    __debugbreak();
  }
}

/*
==============
Nav_PreUpdate
==============
*/
void Nav_PreUpdate(void)
{
  int v0; 
  char ActiveGameMode; 
  int numResources; 
  nav_resource_s **resources; 
  const dvar_t *v4; 

  if ( g_NavData.bNavPowerInitialized )
  {
    v0 = 0;
    s_DrawTextLineNum = 0;
    Nav_UpdatePendingFiles();
    Nav_UpdateSpaces();
    Nav_UpdateRepulsors(50);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    Nav_RemoveObstaclesMarkedForDeleteFromAllSpaces(ActiveGameMode == 1);
    Nav_ProcessPendingObstacleCreation();
    Nav_PreUpdateNavigators();
    if ( !pathData.version && pathData.nodeCount && !Com_FrontEndScene_IsActive() && nextPrintTime_2 < Sys_Milliseconds() )
    {
      Com_PrintWarning(18, "No pathnode data found.  AI will suck.  Please recompile map with connectpaths!\n");
      nextPrintTime_2 = Sys_Milliseconds() + 3000;
    }
    numResources = g_NavData.numResources;
    if ( g_NavData.numResources > 0 )
    {
      resources = g_NavData.resources;
      do
      {
        if ( (*resources)->buildError == 2 )
        {
          Com_PrintWarning(18, "Too much geo included in navmesh step.  Navmesh will suck.  Please break up map with nav brushes.\n");
          numResources = g_NavData.numResources;
        }
        ++v0;
        ++resources;
      }
      while ( v0 < numResources );
    }
    v4 = DCONST_DVARBOOL_ai_debugLinkWeights;
    if ( !DCONST_DVARBOOL_ai_debugLinkWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLinkWeights") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Nav_DebugLinkWeights();
  }
  else if ( g_NavData.numResources > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1377, ASSERT_TYPE_ASSERT, "( !Nav_MeshLoaded() )", (const char *)&queryFormat, "!Nav_MeshLoaded()") )
  {
    __debugbreak();
  }
}

/*
==============
Nav_RemoveAllResources
==============
*/
__int64 Nav_RemoveAllResources()
{
  __int64 result; 
  int v1; 
  nav_resource_s **resources; 
  nav_space_s *pSpace; 

  result = (unsigned int)g_NavData.numResources;
  v1 = 0;
  if ( g_NavData.numResources <= 0 )
  {
    g_NavData.numResources = 0;
  }
  else
  {
    resources = g_NavData.resources;
    do
    {
      pSpace = (*resources)->pSpace;
      if ( pSpace )
      {
        Nav_RemoveResourceFromSpace(pSpace, *resources);
        result = (unsigned int)g_NavData.numResources;
      }
      ++v1;
      ++resources;
    }
    while ( v1 < (int)result );
    g_NavData.numResources = 0;
  }
  return result;
}

/*
==============
Nav_RemoveNavMeshData
==============
*/
void Nav_RemoveNavMeshData(NavMeshData *pNavMeshData)
{
  NavMeshData *v1; 
  unsigned int v2; 
  __int64 v3; 
  signed int v4; 
  int v5; 
  signed int v6; 
  NavMeshData **v7; 
  unsigned int v8; 
  NavMeshData **v9; 
  int v10; 
  int numResources; 
  __int64 v12; 
  nav_resource_s *navResources; 
  nav_space_s *pSpace; 
  int v15; 
  __int64 v16; 
  int v17; 
  int numObstacleBounds; 
  nav_obstacle_bounds_s **obstacleBounds; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v25; 
  __int64 v26; 

  v1 = pNavMeshData;
  if ( !pNavMeshData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1205, ASSERT_TYPE_ASSERT, "(pNavMeshData)", (const char *)&queryFormat, "pNavMeshData") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1143, ASSERT_TYPE_ASSERT, "(pNavMeshData)", (const char *)&queryFormat, "pNavMeshData") )
      __debugbreak();
  }
  Sys_EnterCriticalSection(CRITSECT_NAVMESH_LOAD);
  v2 = 0;
  v3 = 0i64;
  v25 = 0;
  v26 = 0i64;
  do
  {
    v4 = *(int *)((char *)s_navDataAssets.numPendingLoads + v3);
    v5 = v4 - 1;
    if ( v4 - 1 >= 0 )
    {
      v6 = *(int *)((char *)s_navDataAssets.numPendingLoads + v3);
      v7 = (NavMeshData **)((char *)&s_navDataAssets + 8 * v3 + 8 * v5);
      do
      {
        if ( *v7 == v1 )
        {
          if ( v6 < v4 )
          {
            v8 = v6;
            v9 = v7;
            do
            {
              if ( v8 - 1 >= 4 )
              {
                LODWORD(v23) = 4;
                LODWORD(v22) = v8 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1157, ASSERT_TYPE_ASSERT, "(unsigned)( moveDataIndex ) < (unsigned)( NAV_MAX_PENDING_MESHES )", "moveDataIndex doesn't index NAV_MAX_PENDING_MESHES\n\t%i not in [0, %i)", v22, v23) )
                  __debugbreak();
              }
              if ( v8 >= 4 )
              {
                LODWORD(v23) = 4;
                LODWORD(v22) = v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1158, ASSERT_TYPE_ASSERT, "(unsigned)( moveDataIndex + 1 ) < (unsigned)( NAV_MAX_PENDING_MESHES )", "moveDataIndex + 1 doesn't index NAV_MAX_PENDING_MESHES\n\t%i not in [0, %i)", v22, v23) )
                  __debugbreak();
              }
              ++v8;
              *v9 = v9[1];
              ++v9;
            }
            while ( (int)v8 < v4 );
            v1 = pNavMeshData;
            v3 = v26;
          }
          --*(int *)((char *)s_navDataAssets.numPendingLoads + v3);
        }
        --v6;
        --v7;
        --v5;
      }
      while ( v5 >= 0 );
      v2 = v25;
    }
    ++v2;
    v3 += 4i64;
    v25 = v2;
    v26 = v3;
  }
  while ( v2 < 2 );
  Sys_LeaveCriticalSection(CRITSECT_NAVMESH_LOAD);
  if ( g_NavData.bNavPowerInitialized )
  {
    v10 = 0;
    if ( v1->numNavResources > 0 )
    {
      numResources = g_NavData.numResources;
      v12 = 0i64;
      do
      {
        navResources = v1->navResources;
        pSpace = navResources[v12].pSpace;
        if ( pSpace )
        {
          Nav_RemoveResourceFromSpace(navResources[v12].pSpace, &navResources[v10]);
          if ( pSpace->numResources <= 0 && (pSpace->numObstacles || pSpace->numRepulsors || pSpace->numLinks) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1225, ASSERT_TYPE_ASSERT, "(!pSpace || ( pSpace->numResources > 0 || ( pSpace->numObstacles == 0 && pSpace->numRepulsors == 0 && pSpace->numLinks == 0 ) ))", (const char *)&queryFormat, "!pSpace || ( pSpace->numResources > 0 || ( pSpace->numObstacles == 0 && pSpace->numRepulsors == 0 && pSpace->numLinks == 0 ) )") )
            __debugbreak();
          numResources = g_NavData.numResources;
        }
        v15 = 0;
        v16 = 0i64;
        if ( numResources > 0 )
        {
          while ( g_NavData.resources[v16] != &v1->navResources[v10] )
          {
            ++v15;
            ++v16;
            if ( v15 >= numResources )
              goto LABEL_40;
          }
          g_NavData.resources[v16] = g_NavData.resources[numResources - 1];
          g_NavData.resources[g_NavData.numResources - 1] = NULL;
          numResources = --g_NavData.numResources;
        }
LABEL_40:
        ++v10;
        ++v12;
      }
      while ( v10 < v1->numNavResources );
    }
    v17 = 0;
    if ( v1->numObstacleBounds > 0 )
    {
      numObstacleBounds = g_NavData.numObstacleBounds;
      obstacleBounds = g_NavData.obstacleBounds;
      do
      {
        v20 = 0;
        v21 = 0i64;
        if ( numObstacleBounds > 0 )
        {
          while ( obstacleBounds[v21] != &v1->obstacleBounds[v17] )
          {
            ++v20;
            ++v21;
            if ( v20 >= numObstacleBounds )
              goto LABEL_48;
          }
          obstacleBounds[v21] = obstacleBounds[numObstacleBounds - 1];
          g_NavData.obstacleBounds[g_NavData.numObstacleBounds - 1] = NULL;
          obstacleBounds = g_NavData.obstacleBounds;
          numObstacleBounds = --g_NavData.numObstacleBounds;
        }
LABEL_48:
        ++v17;
      }
      while ( v17 < v1->numObstacleBounds );
    }
  }
}

/*
==============
Nav_SetDebugDrawFlags
==============
*/
void Nav_SetDebugDrawFlags(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  bool v2; 
  bool v3; 
  const dvar_t *v4; 
  bool v5; 
  const dvar_t *v6; 
  bool v7; 
  bool v8; 
  const dvar_t *v9; 
  bool enabled; 
  const dvar_t *v11; 
  bool v12; 
  bool v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 

  if ( g_NavData.bNavPowerInitialized )
  {
    v0 = DCONST_DVARINT_ai_navMeshLayerToShow;
    if ( !DCONST_DVARINT_ai_navMeshLayerToShow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_navMeshLayerToShow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    bfx::SetNavLayerDrawMask(1 << v0->current.integer);
    v1 = DCONST_DVARINT_ai_showNavMesh;
    if ( !DCONST_DVARINT_ai_showNavMesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavMesh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    v2 = v1->current.integer == 0;
    v3 = v1->current.integer < 0;
    v4 = DCONST_DVARINT_ai_showNavVolumes;
    v5 = !v3 && !v2;
    if ( !DCONST_DVARINT_ai_showNavVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavVolumes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v2 = v4->current.integer == 0;
    v3 = v4->current.integer < 0;
    v6 = DCONST_DVARINT_ai_showNavVolPortals;
    v7 = !v3 && !v2;
    if ( !DCONST_DVARINT_ai_showNavVolPortals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavVolPortals") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v8 = v6->current.integer > 0;
    bfx::SetGlobalDebugFlag(BFX_DRAW_PLANNER_AREAS, v5);
    bfx::SetGlobalDebugFlag(BFX_DRAW_ORIGINAL_LINK_LOCATIONS, v5);
    v9 = DCONST_DVARBOOL_ai_showNavObstacles;
    if ( !DCONST_DVARBOOL_ai_showNavObstacles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavObstacles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    enabled = v9->current.enabled;
    v11 = DCONST_DVARBOOL_ai_showNavObstacleFlags;
    if ( !DCONST_DVARBOOL_ai_showNavObstacleFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavObstacleFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.enabled;
    bfx::SetGlobalDebugFlag(BFX_DRAW_OBSTACLES, enabled);
    v13 = enabled && v12;
    bfx::SetGlobalDebugFlag(BFX_DRAW_OBSTACLE_FLAGS, v13);
    v14 = DCONST_DVARBOOL_ai_showAreaUsageFlags;
    if ( !DCONST_DVARBOOL_ai_showAreaUsageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showAreaUsageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    bfx::SetGlobalDebugFlag(BFX_DRAW_AREA_USAGE_FLAGS, v14->current.enabled);
    v15 = DCONST_DVARBOOL_ai_showLinkUsageFlags;
    if ( !DCONST_DVARBOOL_ai_showLinkUsageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showLinkUsageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    bfx::SetGlobalDebugFlag(BFX_DRAW_LINK_USAGE_FLAGS, v15->current.enabled);
    bfx::SetGlobalDebugFlag(BFX_DRAW_PLANNER3D_VOLUMES, v7);
    bfx::SetGlobalDebugFlag(BFX_DRAW_PLANNER3D_PORTALS, v8);
    v16 = DCONST_DVARBOOL_ai_showNavSpaceAxes;
    if ( !DCONST_DVARBOOL_ai_showNavSpaceAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavSpaceAxes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    bfx::SetGlobalDebugFlag(BFX_DRAW_SPACE_AXES, v16->current.enabled);
    v17 = DCONST_DVARBOOL_ai_showNavStats;
    if ( !DCONST_DVARBOOL_ai_showNavStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavStats") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    bfx::SetGlobalDebugFlag(BFX_DRAW_STATS, v17->current.enabled);
    v18 = DCONST_DVARBOOL_ai_showNavMemory;
    if ( !DCONST_DVARBOOL_ai_showNavMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavMemory") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    bfx::SetGlobalDebugFlag(BFX_DRAW_MEMORY, v18->current.enabled);
    v19 = DCONST_DVARBOOL_ai_showNavTimings;
    if ( !DCONST_DVARBOOL_ai_showNavTimings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavTimings") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    bfx::SetGlobalDebugFlag(BFX_DRAW_TIMINGS, v19->current.enabled);
  }
}

/*
==============
Nav_ShutdownNavPower
==============
*/
void Nav_ShutdownNavPower(void)
{
  bfx *v0; 
  bfx *v1; 

  if ( g_NavData.bNavPowerInitialized )
  {
    Nav_RemoveAllResources();
    if ( g_NavData.numResources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 823, ASSERT_TYPE_ASSERT, "(g_NavData.numResources == 0)", (const char *)&queryFormat, "g_NavData.numResources == 0") )
      __debugbreak();
    if ( g_NavData.linkPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 824, ASSERT_TYPE_ASSERT, "(g_NavData.linkPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.linkPoolInfo.count == 0") )
      __debugbreak();
    if ( g_NavData.repulsorPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 825, ASSERT_TYPE_ASSERT, "(g_NavData.repulsorPoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.repulsorPoolInfo.count == 0") )
      __debugbreak();
    if ( g_NavData.obstaclePoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 826, ASSERT_TYPE_ASSERT, "(g_NavData.obstaclePoolInfo.count == 0)", (const char *)&queryFormat, "g_NavData.obstaclePoolInfo.count == 0") )
      __debugbreak();
    Nav_DestroyAllSpaces();
    Scr_SetString(&g_NavData.spacePoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.linkPoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.repulsorPoolInfo.name, (scr_string_t)0);
    Scr_SetString(&g_NavData.obstaclePoolInfo.name, (scr_string_t)0);
    Nav_VerifyNavigatorShutdown();
    bfx::SystemStop(v0);
    bfx::SystemDestroy(v1);
    *(_WORD *)&g_NavData.bNavPowerInitialized = 0;
  }
  else if ( g_NavData.bRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 817, ASSERT_TYPE_ASSERT, "( !g_NavData.bRunning )", (const char *)&queryFormat, "!g_NavData.bRunning") )
  {
    __debugbreak();
  }
}

/*
==============
Nav_SnapPathNodesToGraph
==============
*/
void Nav_SnapPathNodesToGraph(void)
{
  int v0; 
  unsigned __int16 v1; 
  unsigned int v2; 
  pathnode_t *v3; 
  const gentity_s *Parent; 
  nav_space_s *SpaceByEntity; 
  const char *v6; 
  vec3_t pos; 
  vec3_t worldPos; 

  if ( g_NavData.numResources > 0 && !bNodesSnapped )
  {
    bNodesSnapped = 1;
    v0 = Path_NodeCount();
    v1 = 0;
    if ( v0 > 0 )
    {
      v2 = 0;
      do
      {
        if ( Path_NodeValid(v1) )
        {
          v3 = &pathData.nodes[v1];
          pathnode_t::GetPos(v3, &pos);
          Parent = pathnode_t::GetParent(v3);
          if ( Parent )
            SpaceByEntity = Nav_GetSpaceByEntity(Parent);
          else
            SpaceByEntity = Nav_GetDefaultSpace();
          if ( SpaceByEntity )
          {
            Nav_GetClosestVerticalPos(&pos, &g_navUp_0, 0, &SpaceByEntity->hSpace, NULL, &worldPos, NULL);
            if ( (float)((float)((float)(worldPos.v[1] - pos.v[1]) * (float)(worldPos.v[1] - pos.v[1])) + (float)((float)(worldPos.v[0] - pos.v[0]) * (float)(worldPos.v[0] - pos.v[0]))) <= 144.0 )
            {
              worldPos.v[2] = pos.v[2];
              pathnode_t::SetWorldPos(v3, &worldPos);
            }
            else
            {
              v6 = vtos(&pos);
              Com_PrintWarning(18, "Pathnode %d (%s) at pos %s is not on the navmesh.\n", v2, nodeStringTable[v3->constant.type], v6);
            }
          }
        }
        v2 = ++v1;
      }
      while ( v1 < v0 );
    }
  }
}

/*
==============
Nav_SystemSimulate
==============
*/
void Nav_SystemSimulate(float seconds)
{
  if ( g_NavData.bNavPowerInitialized )
    bfx::SystemSimulate(seconds);
}

/*
==============
Nav_TryFindPointOnMeshBelowPoint
==============
*/
char Nav_TryFindPointOnMeshBelowPoint(bfx::SpaceHandle space, const unsigned int layer, const vec3_t *testPoint, const float probeDistance, vec3_t *outPoint)
{
  float v8; 
  float v9; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 
  bfx::CollideLineSegmentResults resultsOut; 

  if ( probeDistance <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 379, ASSERT_TYPE_ASSERT, "(probeDistance > 0)", (const char *)&queryFormat, "probeDistance > 0", -2i64) )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&resultsOut.m_collideArea);
  resultsOut.m_collided = 0;
  v8 = testPoint->v[2];
  v9 = testPoint->v[1];
  iStartPos.m_x = testPoint->v[0];
  iStartPos.m_y = v9;
  iStartPos.m_z = v8;
  iEndPos.m_x = iStartPos.m_x;
  iEndPos.m_y = v9;
  iEndPos.m_z = v8 - probeDistance;
  if ( bfx::CollideLineSegmentAndNavGraph((bfx::SpaceHandle *)space.m_pProxy, &iStartPos, &iEndPos, layer, &resultsOut) )
  {
    *outPoint = (vec3_t)resultsOut.m_collidePos;
    bfx::AreaHandle::~AreaHandle(&resultsOut.m_collideArea);
    bfx::SpaceHandle::~SpaceHandle((bfx::SpaceHandle *)space.m_pProxy);
    return 1;
  }
  else
  {
    bfx::AreaHandle::~AreaHandle(&resultsOut.m_collideArea);
    bfx::SpaceHandle::~SpaceHandle((bfx::SpaceHandle *)space.m_pProxy);
    return 0;
  }
}

/*
==============
Nav_UpdatePendingFiles
==============
*/
void Nav_UpdatePendingFiles()
{
  __int64 v0; 
  __int64 v1; 
  int v2; 
  NavMeshData **v3; 

  if ( !g_NavData.bNavPowerInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1176, ASSERT_TYPE_ASSERT, "( g_NavData.bNavPowerInitialized )", (const char *)&queryFormat, "g_NavData.bNavPowerInitialized") )
    __debugbreak();
  if ( s_navDataAssets.numPendingLoads[s_navDataAssets.curPendingList] )
  {
    Sys_EnterCriticalSection(CRITSECT_NAVMESH_LOAD);
    s_navDataAssets.curPendingList = 1 - s_navDataAssets.curPendingList;
    Sys_LeaveCriticalSection(CRITSECT_NAVMESH_LOAD);
    v0 = 1 - s_navDataAssets.curPendingList;
    v1 = v0;
    if ( s_navDataAssets.numPendingLoads[v0] >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\navmesh.cpp", 1188, ASSERT_TYPE_ASSERT, "( s_navDataAssets.numPendingLoads[ curList ] < NAV_MAX_PENDING_MESHES )", (const char *)&queryFormat, "s_navDataAssets.numPendingLoads[ curList ] < NAV_MAX_PENDING_MESHES") )
      __debugbreak();
    v2 = 0;
    if ( s_navDataAssets.numPendingLoads[v1] > 0 )
    {
      v3 = s_navDataAssets.pendingLoads[v0];
      do
      {
        Nav_LoadNavMeshData(*v3);
        ++v2;
        ++v3;
      }
      while ( v2 < s_navDataAssets.numPendingLoads[v1] );
    }
    s_navDataAssets.numPendingLoads[v1] = 0;
  }
}

