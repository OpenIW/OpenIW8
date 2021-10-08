/*
==============
AIScriptedInterface::Ambush_GetNextAmbushNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Ambush_GetNextAmbushNode(AIScriptedInterface *this)
{
  return ?Ambush_GetNextAmbushNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Ambush_DebugDrawNodes
==============
*/

void __fastcall AIScriptedInterface::Ambush_DebugDrawNodes(AIScriptedInterface *this)
{
  ?Ambush_DebugDrawNodes@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_CheckPathToNode
==============
*/

bool __fastcall AIScriptedInterface::Ambush_CheckPathToNode(AIScriptedInterface *this, const pathnode_t *node)
{
  return ?Ambush_CheckPathToNode@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Ambush_CheckAmbushNodeDistToLikelyEnemyTacPoint
==============
*/

bool __fastcall AIScriptedInterface::Ambush_CheckAmbushNodeDistToLikelyEnemyTacPoint(AIScriptedInterface *this, const pathnode_t *node, const tacpoint_t *pEnemyTacPoint)
{
  return ?Ambush_CheckAmbushNodeDistToLikelyEnemyTacPoint@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@PEBUtacpoint_t@@@Z(this, node, pEnemyTacPoint);
}

/*
==============
AIScriptedInterface::Ambush_IsCurrentNodeValid
==============
*/

void __fastcall AIScriptedInterface::Ambush_IsCurrentNodeValid(AIScriptedInterface *this)
{
  ?Ambush_IsCurrentNodeValid@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_DecidePursueEnemy
==============
*/

int __fastcall AIScriptedInterface::Ambush_DecidePursueEnemy(AIScriptedInterface *this)
{
  return ?Ambush_DecidePursueEnemy@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_IsNodeSafeFromPredictedEnemyPosition
==============
*/

bool __fastcall AIScriptedInterface::Ambush_IsNodeSafeFromPredictedEnemyPosition(AIScriptedInterface *this)
{
  return ?Ambush_IsNodeSafeFromPredictedEnemyPosition@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_MarkCurrentNodeInvalid
==============
*/

void __fastcall AIScriptedInterface::Ambush_MarkCurrentNodeInvalid(AIScriptedInterface *this)
{
  ?Ambush_MarkCurrentNodeInvalid@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_GetAmbushNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Ambush_GetAmbushNode(AIScriptedInterface *this)
{
  return ?Ambush_GetAmbushNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Ambush_CheckAmbushNodeDistToEnemyPosition
==============
*/

bool __fastcall AIScriptedInterface::Ambush_CheckAmbushNodeDistToEnemyPosition(AIScriptedInterface *this, const pathnode_t *node, sentient_s *enemy)
{
  return ?Ambush_CheckAmbushNodeDistToEnemyPosition@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@PEAUsentient_s@@@Z(this, node, enemy);
}

/*
==============
AIScriptedInterface::Ambush_FindAmbushNodes
==============
*/

void __fastcall AIScriptedInterface::Ambush_FindAmbushNodes(AIScriptedInterface *this)
{
  ?Ambush_FindAmbushNodes@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_ClearCurrentNode
==============
*/

void __fastcall AIScriptedInterface::Ambush_ClearCurrentNode(AIScriptedInterface *this)
{
  ?Ambush_ClearCurrentNode@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_CheckAllNodesFailed
==============
*/

void __fastcall AIScriptedInterface::Ambush_CheckAllNodesFailed(AIScriptedInterface *this)
{
  ?Ambush_CheckAllNodesFailed@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Ambush_CheckAllNodesFailed
==============
*/
void AIScriptedInterface::Ambush_CheckAllNodesFailed(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->nodeSelect.iPotentialAmbushNodeCount )
    m_pAI->combat.allAmbushNodesFailed = 1;
}

/*
==============
AIScriptedInterface::Ambush_CheckAmbushNodeDistToEnemyPosition
==============
*/
char AIScriptedInterface::Ambush_CheckAmbushNodeDistToEnemyPosition(AIScriptedInterface *this, const pathnode_t *node, sentient_s *enemy)
{
  sentient_info_t *v6; 
  vec3_t pos; 
  vec3_t outLastKnownPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 98, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 99, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 100, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( enemy )
  {
    v6 = &this->m_pAI->sentientInfo[enemy - level.sentients];
    SentientInfo_GetLastKnownPos(v6, &outLastKnownPos);
    pathnode_t::GetPos((pathnode_t *)node, &pos);
    if ( v6->lastKnownPosTime )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+pos]
        vsubss  xmm3, xmm0, dword ptr [rsp+78h+outLastKnownPos]
        vmovss  xmm1, dword ptr [rsp+78h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rsp+78h+outLastKnownPos+4]
        vmovss  xmm0, dword ptr [rsp+78h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rsp+78h+outLastKnownPos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@46800000
      }
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::Ambush_CheckAmbushNodeDistToLikelyEnemyTacPoint
==============
*/
bool AIScriptedInterface::Ambush_CheckAmbushNodeDistToLikelyEnemyTacPoint(AIScriptedInterface *this, const pathnode_t *node, const tacpoint_t *pEnemyTacPoint)
{
  char v16; 
  char v17; 
  vec3_t pos; 

  _RDI = pEnemyTacPoint;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 128, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+pos+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@45800000
  }
  return !(v16 | v17);
}

/*
==============
AIScriptedInterface::Ambush_CheckPathToNode
==============
*/
char AIScriptedInterface::Ambush_CheckPathToNode(AIScriptedInterface *this, const pathnode_t *node)
{
  gentity_s *ent; 
  sentient_s *TargetSentient; 
  const tacpoint_t *ClosestPoint; 
  vec3_t pos; 
  vec3_t outLastKnownPos; 
  vec3_t fromPoint; 
  vec3_t position; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 382, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 383, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 384, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  ent = this->m_pAI->ent;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !AIScriptedInterface::IsDoingAmbush(this) )
    return 1;
  if ( !TargetSentient )
    return 1;
  if ( !AICommonInterface::HasPath(this) )
    return 1;
  if ( AIScriptedInterface::PathPending(this) )
    return 1;
  AICommonInterface::GetTargetPosition(this, &position);
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) == 0 )
    return 1;
  SentientInfo_GetLastKnownPos(&this->m_pAI->sentientInfo[TargetSentient - level.sentients], &outLastKnownPos);
  ClosestPoint = TacGraph_FindClosestPoint(&pos);
  if ( !this->m_pAI->pNavigator->FindLastTacPointOnPathWithVis(this->m_pAI->pNavigator, &outLastKnownPos, ClosestPoint, &pos, &fromPoint) || AIScriptedInterface::Cover_IsValidCoverFromPoint(this, node, &fromPoint) )
  {
    __asm { vmovss  xmm3, cs:__real@43960000 }
    if ( !((unsigned __int8 (__fastcall *)(AINavigator *, vec3_t *, vec3_t *))this->m_pAI->pNavigator->IsPointVisibleOnPath)(this->m_pAI->pNavigator, &ent->r.currentOrigin, &outLastKnownPos) )
    {
      this->m_pAI->nodeSelect.iPotentialAmbushNodeCount = 0;
      return 1;
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::Ambush_ClearCurrentNode
==============
*/
void AIScriptedInterface::Ambush_ClearCurrentNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 35, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->combat.currentAmbushNodeValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 36, ASSERT_TYPE_ASSERT, "(!m_pAI->combat.currentAmbushNodeValid)", (const char *)&queryFormat, "!m_pAI->combat.currentAmbushNodeValid") )
    __debugbreak();
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  if ( sentient->pClaimedNode )
  {
    Sentient_ClaimNode(sentient, NULL);
    m_pAI = this->m_pAI;
  }
  m_pAI->combat.ambushStartTime = 0;
  this->m_pAI->combat.currentAmbushNodeValid = 1;
}

/*
==============
AIScriptedInterface::Ambush_DebugDrawNodes
==============
*/
void AIScriptedInterface::Ambush_DebugDrawNodes(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  const pathnode_t *pClaimedNode; 
  int v7; 
  __int64 v8; 
  pathnode_t *v9; 
  const vec4_t *v10; 
  const char *v12; 
  vec3_t pos; 
  vec3_t outPos; 
  vec3_t vEyePosOut; 

  Sentient_GetDebugEyePosition(this->m_pAI->sentient, &vEyePosOut);
  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    pathnode_t::GetPos(sentient->pClaimedNode, &pos);
    G_DebugLine(&vEyePosOut, &pos, &colorGreen, 0);
    Path_DrawDebugNode(&outPos, pClaimedNode);
    m_pAI = this->m_pAI;
  }
  v7 = m_pAI->nodeSelect.iPotentialAmbushNodeCount - 1;
  if ( v7 >= 0 )
  {
    __asm { vmovaps [rsp+98h+var_28], xmm6 }
    v8 = 2i64 * v7 + 1768;
    do
    {
      v9 = Path_ConvertIndexToNode(*(_WORD *)((char *)&this->m_pAI->ent + v8));
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 284, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      pathnode_t::GetPos(v9, &pos);
      v10 = Path_DebugNodeColor(v9);
      G_DebugLine(&vEyePosOut, &pos, v10, 1);
      Path_DrawDebugNode(&outPos, v9);
      *(double *)&_XMM0 = Path_GetDebugStringScale(&outPos, &pos);
      __asm { vmovaps xmm6, xmm0 }
      v12 = j_va("%d", (unsigned int)v7);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&pos, &colorMdGrey, *(float *)&_XMM2, v12);
      v8 -= 2i64;
      --v7;
    }
    while ( v7 >= 0 );
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
  }
}

/*
==============
AIScriptedInterface::Ambush_DecidePursueEnemy
==============
*/
__int64 AIScriptedInterface::Ambush_DecidePursueEnemy(AIScriptedInterface *this)
{
  return 0i64;
}

/*
==============
AIScriptedInterface::Ambush_FindAmbushNodes
==============
*/
void AIScriptedInterface::Ambush_FindAmbushNodes(AIScriptedInterface *this)
{
  int v2; 
  pathnode_t **v3; 
  __int64 v4; 
  unsigned __int16 v5; 
  float outBestScore[4]; 
  CoverNodeMetricParams metricParams; 
  pathnode_t *bestNodes[32]; 

  AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
  v2 = 0;
  this->m_pAI->nodeSelect.iPotentialAmbushNodeCount = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 32, this->m_pAI->combat.combatMode, 0, scr_const.cover_ambush, &metricParams, outBestScore);
  if ( this->m_pAI->nodeSelect.iPotentialAmbushNodeCount > 0 )
  {
    v3 = bestNodes;
    v4 = 1768i64;
    do
    {
      v5 = Path_ConvertNodeToIndex(*v3);
      v4 += 2i64;
      ++v2;
      ++v3;
      *(_WORD *)((char *)this->m_pAI + v4 - 2) = v5;
    }
    while ( v2 < this->m_pAI->nodeSelect.iPotentialAmbushNodeCount );
  }
}

/*
==============
AIScriptedInterface::Ambush_GetAmbushNode
==============
*/
pathnode_t *AIScriptedInterface::Ambush_GetAmbushNode(AIScriptedInterface *this)
{
  int v2; 
  __int64 v3; 
  pathnode_t **v4; 
  unsigned __int16 v5; 
  const pathnode_t *NextAmbushNode; 
  float outBestScore[4]; 
  CoverNodeMetricParams metricParams; 
  pathnode_t *bestNodes[32]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 195, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->nodeSelect.iPotentialAmbushNodeCount )
  {
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v2 = 0;
    this->m_pAI->nodeSelect.iPotentialAmbushNodeCount = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 32, this->m_pAI->combat.combatMode, 0, scr_const.cover_ambush, &metricParams, outBestScore);
    if ( this->m_pAI->nodeSelect.iPotentialAmbushNodeCount > 0 )
    {
      v3 = 1768i64;
      v4 = bestNodes;
      do
      {
        v5 = Path_ConvertNodeToIndex(*v4);
        v3 += 2i64;
        ++v2;
        ++v4;
        *(_WORD *)((char *)this->m_pAI + v3 - 2) = v5;
      }
      while ( v2 < this->m_pAI->nodeSelect.iPotentialAmbushNodeCount );
    }
  }
  NextAmbushNode = AIScriptedInterface::Ambush_GetNextAmbushNode(this);
  if ( !NextAmbushNode )
    return 0i64;
  while ( !Path_CanClaimNode(NextAmbushNode, this->m_pAI->sentient) )
  {
    NextAmbushNode = AIScriptedInterface::Ambush_GetNextAmbushNode(this);
    if ( !NextAmbushNode )
      return 0i64;
  }
  return (pathnode_t *)NextAmbushNode;
}

/*
==============
AIScriptedInterface::Ambush_GetNextAmbushNode
==============
*/
pathnode_t *AIScriptedInterface::Ambush_GetNextAmbushNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int iPotentialAmbushNodeCount; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 78, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 79, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  iPotentialAmbushNodeCount = m_pAI->nodeSelect.iPotentialAmbushNodeCount;
  if ( !iPotentialAmbushNodeCount )
    return 0i64;
  m_pAI->nodeSelect.iPotentialAmbushNodeCount = iPotentialAmbushNodeCount - 1;
  return Path_ConvertIndexToNode(this->m_pAI->potentialAmbushNode[this->m_pAI->nodeSelect.iPotentialAmbushNodeCount]);
}

/*
==============
AIScriptedInterface::Ambush_IsCurrentNodeValid
==============
*/
void AIScriptedInterface::Ambush_IsCurrentNodeValid(AIScriptedInterface *this)
{
  sentient_s *TargetSentient; 
  sentient_s *v3; 
  char v4; 
  BOOL v5; 
  ai_scripted_t *m_pAI; 
  int ambushStartTime; 
  signed __int64 v8; 
  int v9; 
  int v10; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 303, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 312, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 313, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v3 = TargetSentient;
  if ( TargetSentient )
  {
    if ( AICommonInterface::RecentlySeeSentient(this, TargetSentient, 500) && AIScriptedInterface::CanShootEnemy(this, 500, 0, 0) )
    {
      v4 = 1;
      this->m_pAI->combat.currentAmbushNodeValid = 1;
    }
    else
    {
      v4 = 0;
    }
    if ( AICommonInterface::HasPath(this) || AIScriptedInterface::PathPending(this) )
    {
      this->m_pAI->combat.ambushStartTime = 0;
      this->m_pAI->combat.currentAmbushNodeValid = 1;
    }
    else
    {
      v5 = this->m_pAI->sentient->pClaimedNode && AIScriptedInterface::ShouldKeepClaimedNode(this);
      m_pAI = this->m_pAI;
      ambushStartTime = m_pAI->combat.ambushStartTime;
      v8 = (signed __int64)&m_pAI->sentientInfo[v3 - level.sentients];
      if ( v4 )
      {
        if ( !ambushStartTime )
        {
          if ( v5 )
            m_pAI->combat.ambushStartTime = level.time;
        }
      }
      else if ( ambushStartTime )
      {
        v9 = *(_DWORD *)(v8 + 16);
        v10 = *(_DWORD *)(v8 + 8);
        AIScriptedInterface::Ambush_MarkCurrentNodeInvalid(this);
        if ( v10 > v9 )
          v9 = v10;
        if ( this->m_pAI->combat.ambushStartTime < v9 )
          AIScriptedInterface::Ambush_MarkCurrentNodeInvalid(this);
      }
      else if ( !v5 )
      {
        m_pAI->combat.currentAmbushNodeValid = 0;
      }
    }
  }
  else
  {
    this->m_pAI->combat.ambushStartTime = 0;
    this->m_pAI->combat.currentAmbushNodeValid = 0;
  }
}

/*
==============
AIScriptedInterface::Ambush_IsNodeSafeFromPredictedEnemyPosition
==============
*/
bool AIScriptedInterface::Ambush_IsNodeSafeFromPredictedEnemyPosition(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  sentient_s *TargetSentient; 
  sentient_s *v5; 
  tacpoint_t *Point; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->combat.currentAmbushNodeValid )
    return 0;
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    return 0;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v5 = TargetSentient;
  if ( !TargetSentient )
    return 1;
  if ( !AICommonInterface::RecentlySeeSentient(this, TargetSentient, 5000) )
  {
    _RDX = v5->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+130h]
      vmovss  xmm1, dword ptr [rdx+134h]
      vsubss  xmm3, xmm0, dword ptr [rcx+130h]
      vsubss  xmm2, xmm1, dword ptr [rcx+134h]
      vmovss  xmm0, dword ptr [rdx+138h]
      vsubss  xmm4, xmm0, dword ptr [rcx+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@49742400
    }
  }
  AIScriptedInterface::GetAnglesToLikelyEnemyPath(this);
  Point = tacpoint_ref_t::GetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint);
  return !Point || ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x82641EFC) == 0 || AIScriptedInterface::Cover_IsValidCoverFromPoint(this, pClaimedNode, &Point->m_Pos) && !Path_ActorIsDangerousNode(pClaimedNode, this->m_pAI->sentient->eTeam);
}

/*
==============
AIScriptedInterface::Ambush_MarkCurrentNodeInvalid
==============
*/
void AIScriptedInterface::Ambush_MarkCurrentNodeInvalid(AIScriptedInterface *this)
{
  if ( this->m_pAI )
  {
    this->m_pAI->combat.currentAmbushNodeValid = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_ambush.cpp", 52, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->combat.currentAmbushNodeValid = 0;
  }
}

