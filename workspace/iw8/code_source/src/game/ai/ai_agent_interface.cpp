/*
==============
AIAgentInterface::UpdateAnimGameParams
==============
*/

void __fastcall AIAgentInterface::UpdateAnimGameParams(AIAgentInterface *this, bool bASMTransitioned)
{
  ?UpdateAnimGameParams@AIAgentInterface@@UEBAX_N@Z(this, bASMTransitioned);
}

/*
==============
AIAgentInterface::GetAIAgentIterator
==============
*/

AIIterator *__fastcall AIAgentInterface::GetAIAgentIterator()
{
  return ?GetAIAgentIterator@AIAgentInterface@@SAPEAVAIIterator@@XZ();
}

/*
==============
AIAgentInterface::GetStairsStateWithinDist
==============
*/

AI_STAIRS_STATE __fastcall AIAgentInterface::GetStairsStateWithinDist(AIAgentInterface *this, float dist, bool bCurrentlyOnStairs)
{
  return ?GetStairsStateWithinDist@AIAgentInterface@@UEBA?AW4AI_STAIRS_STATE@@M_N@Z(this, dist, bCurrentlyOnStairs);
}

/*
==============
AIAgentInterface::IsInExecution
==============
*/

bool __fastcall AIAgentInterface::IsInExecution(AIAgentInterface *this)
{
  return ?IsInExecution@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::GetTraceMask
==============
*/

int __fastcall AIAgentInterface::GetTraceMask(AIAgentInterface *this)
{
  return ?GetTraceMask@AIAgentInterface@@UEBAHXZ(this);
}

/*
==============
AIAgentIterator::GetFirst
==============
*/

gentity_s *__fastcall AIAgentIterator::GetFirst(AIAgentIterator *this)
{
  return ?GetFirst@AIAgentIterator@@UEAAPEAUgentity_s@@XZ(this);
}

/*
==============
AIAgentInterface::GetAnimTree
==============
*/

XAnimTree *__fastcall AIAgentInterface::GetAnimTree(AIAgentInterface *this)
{
  return ?GetAnimTree@AIAgentInterface@@UEBAPEAUXAnimTree@@XZ(this);
}

/*
==============
AIAgentInterface::InScriptedState
==============
*/

bool __fastcall AIAgentInterface::InScriptedState(AIAgentInterface *this)
{
  return ?InScriptedState@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::IsFlashBanged
==============
*/

bool __fastcall AIAgentInterface::IsFlashBanged(AIAgentInterface *this)
{
  return ?IsFlashBanged@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::SetAnimset
==============
*/

bool __fastcall AIAgentInterface::SetAnimset(AIAgentInterface *this, const char *animsetName)
{
  return ?SetAnimset@AIAgentInterface@@UEBA_NPEBD@Z(this, animsetName);
}

/*
==============
AIAgentInterface::UpdateExecutionAnimParams
==============
*/

void __fastcall AIAgentInterface::UpdateExecutionAnimParams(AIAgentInterface *this)
{
  ?UpdateExecutionAnimParams@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::SetRiotshieldWeapon
==============
*/

void __fastcall AIAgentInterface::SetRiotshieldWeapon(AIAgentInterface *this, const Weapon *r_Weapon)
{
  ?SetRiotshieldWeapon@AIAgentInterface@@UEBAXAEBUWeapon@@@Z(this, r_Weapon);
}

/*
==============
AIAgentInterface::GetClothType
==============
*/

unsigned __int8 __fastcall AIAgentInterface::GetClothType(AIAgentInterface *this)
{
  return ?GetClothType@AIAgentInterface@@UEBAEXZ(this);
}

/*
==============
AIAgentInterface::ScrShouldTeleport_Reset
==============
*/

bool __fastcall AIAgentInterface::ScrShouldTeleport_Reset(AIAgentInterface *this, const vec3_t *teleportPos, float distFromPosSq)
{
  return ?ScrShouldTeleport_Reset@AIAgentInterface@@UEBA_NAEBTvec3_t@@M@Z(this, teleportPos, distFromPosSq);
}

/*
==============
AIAgentInterface::SetAnim
==============
*/

void __fastcall AIAgentInterface::SetAnim(AIAgentInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex, float rate)
{
  ?SetAnim@AIAgentInterface@@UEBAXPEBUAnimset@@HHM@Z(this, pAnimset, stateIndex, entryIndex, rate);
}

/*
==============
AIAgentInterface::SetClothType
==============
*/

void __fastcall AIAgentInterface::SetClothType(AIAgentInterface *this, unsigned __int8 clothType)
{
  ?SetClothType@AIAgentInterface@@UEBAXE@Z(this, clothType);
}

/*
==============
AIAgentInterface::InitAgents
==============
*/

void AIAgentInterface::InitAgents(void)
{
  ?InitAgents@AIAgentInterface@@SAXXZ();
}

/*
==============
AIAgentInterface::SetAgent
==============
*/

void __fastcall AIAgentInterface::SetAgent(AIAgentInterface *this, ai_agent_t *pAI)
{
  ?SetAgent@AIAgentInterface@@QEAAXPEAUai_agent_t@@@Z(this, pAI);
}

/*
==============
AIAgentInterface::GetScriptedAgentInfo
==============
*/

ai_agent_t *__fastcall AIAgentInterface::GetScriptedAgentInfo(const gentity_s *entity)
{
  return ?GetScriptedAgentInfo@AIAgentInterface@@SAPEAUai_agent_t@@PEBUgentity_s@@@Z(entity);
}

/*
==============
AIAgentInterface::UpdateExecution
==============
*/

void __fastcall AIAgentInterface::UpdateExecution(AIAgentInterface *this)
{
  ?UpdateExecution@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::ShutdownAgents
==============
*/

void AIAgentInterface::ShutdownAgents(void)
{
  ?ShutdownAgents@AIAgentInterface@@SAXXZ();
}

/*
==============
AIAgentInterface::BeginExecution
==============
*/

void __fastcall AIAgentInterface::BeginExecution(AIAgentInterface *this, gentity_s *pTarget)
{
  ?BeginExecution@AIAgentInterface@@UEBAXPEAUgentity_s@@@Z(this, pTarget);
}

/*
==============
AINewAgentInterface::OnScrCmd_FinishTraverse
==============
*/

void __fastcall AINewAgentInterface::OnScrCmd_FinishTraverse(AINewAgentInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_FinishTraverse@AINewAgentInterface@@UEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIAgentInterface::CleanupScriptThreads
==============
*/

void __fastcall AIAgentInterface::CleanupScriptThreads(AIAgentInterface *this)
{
  ?CleanupScriptThreads@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::GetThreatSharedEnemy
==============
*/

int __fastcall AIAgentInterface::GetThreatSharedEnemy(AIAgentInterface *this)
{
  return ?GetThreatSharedEnemy@AIAgentInterface@@UEBAHXZ(this);
}

/*
==============
AIAgentInterface::GetThreatSharedEnemyCap
==============
*/

int __fastcall AIAgentInterface::GetThreatSharedEnemyCap(AIAgentInterface *this)
{
  return ?GetThreatSharedEnemyCap@AIAgentInterface@@UEBAHXZ(this);
}

/*
==============
AIAgentInterface::UpdateRetreat
==============
*/

void __fastcall AIAgentInterface::UpdateRetreat(AIAgentInterface *this)
{
  ?UpdateRetreat@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::EntInfo
==============
*/

void __fastcall AIAgentInterface::EntInfo(gentity_s *pSelf, const vec3_t *source)
{
  ?EntInfo@AIAgentInterface@@SAXPEAUgentity_s@@AEBTvec3_t@@@Z(pSelf, source);
}

/*
==============
AIAgentInterface::SetNextThinkTime
==============
*/

void __fastcall AIAgentInterface::SetNextThinkTime(AIAgentInterface *this, gentity_s *pEnt)
{
  ?SetNextThinkTime@AIAgentInterface@@UEBAXPEAUgentity_s@@@Z(this, pEnt);
}

/*
==============
AIAgentInterface::CanExecute
==============
*/

bool __fastcall AIAgentInterface::CanExecute(AIAgentInterface *this)
{
  return ?CanExecute@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::IsValidTarget
==============
*/

bool __fastcall AIAgentInterface::IsValidTarget(AIAgentInterface *this, gentity_s *enemy)
{
  return ?IsValidTarget@AIAgentInterface@@UEBA_NPEAUgentity_s@@@Z(this, enemy);
}

/*
==============
AIAgentIterator::AIAgentIterator
==============
*/

void __fastcall AIAgentIterator::AIAgentIterator(AIAgentIterator *this)
{
  ??0AIAgentIterator@@QEAA@XZ(this);
}

/*
==============
AIAgentInterface::GetAIIterator
==============
*/

AIIterator *__fastcall AIAgentInterface::GetAIIterator(AIAgentInterface *this)
{
  return ?GetAIIterator@AIAgentInterface@@UEBAPEAVAIIterator@@XZ(this);
}

/*
==============
AIAgentInterface::SetEquippedWeapon
==============
*/

void __fastcall AIAgentInterface::SetEquippedWeapon(AIAgentInterface *this, const Weapon *r_Weapon)
{
  ?SetEquippedWeapon@AIAgentInterface@@UEBAXAEBUWeapon@@@Z(this, r_Weapon);
}

/*
==============
AIAgentInterface::GetScarinessForDistance
==============
*/

double __fastcall AIAgentInterface::GetScarinessForDistance(AIAgentInterface *this, sentient_s *enemy, float fDist)
{
  double result; 

  *(float *)&result = ?GetScarinessForDistance@AIAgentInterface@@UEBAMPEAUsentient_s@@M@Z(this, enemy, fDist);
  return result;
}

/*
==============
AIAgentInterface::GetFireWeaponEvent
==============
*/

int __fastcall AIAgentInterface::GetFireWeaponEvent(AIAgentInterface *this, bool bFireSoundOnce, bool bCleanMiss)
{
  return ?GetFireWeaponEvent@AIAgentInterface@@UEBAH_N0@Z(this, bFireSoundOnce, bCleanMiss);
}

/*
==============
AIAgentInterface::UpdateMoveDirBasedOnHistory
==============
*/

void __fastcall AIAgentInterface::UpdateMoveDirBasedOnHistory(AIAgentInterface *this, const vec3_t *lookAhead, vec3_t *inOutMoveDir)
{
  ?UpdateMoveDirBasedOnHistory@AIAgentInterface@@UEBAXAEBTvec3_t@@AEAT2@@Z(this, lookAhead, inOutMoveDir);
}

/*
==============
AIAgentInterface::OnScrCmd_StopUseTurret
==============
*/

void __fastcall AIAgentInterface::OnScrCmd_StopUseTurret(AIAgentInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_StopUseTurret@AIAgentInterface@@UEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIAgentIterator::GetNext
==============
*/

gentity_s *__fastcall AIAgentIterator::GetNext(AIAgentIterator *this)
{
  return ?GetNext@AIAgentIterator@@UEAAPEAUgentity_s@@XZ(this);
}

/*
==============
AIAgentInterface::CleanUp
==============
*/

void __fastcall AIAgentInterface::CleanUp(AIAgentInterface *this)
{
  ?CleanUp@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::HasRiotshield
==============
*/

bool __fastcall AIAgentInterface::HasRiotshield(AIAgentInterface *this)
{
  return ?HasRiotshield@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::ShouldLookForNewCover
==============
*/

bool __fastcall AIAgentInterface::ShouldLookForNewCover(AIAgentInterface *this)
{
  return ?ShouldLookForNewCover@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::GetMovingPlatformUpVector
==============
*/

void __fastcall AIAgentInterface::GetMovingPlatformUpVector(AIAgentInterface *this, vec3_t *upVector)
{
  ?GetMovingPlatformUpVector@AIAgentInterface@@UEBAXAEATvec3_t@@@Z(this, upVector);
}

/*
==============
AINewAgentInterface::SetBodyAngles
==============
*/

void __fastcall AINewAgentInterface::SetBodyAngles(AINewAgentInterface *this, const vec3_t *angles)
{
  ?SetBodyAngles@AINewAgentInterface@@UEBAXAEBTvec3_t@@@Z(this, angles);
}

/*
==============
AIAgentInterface::NotifyBlockingEntity
==============
*/

void __fastcall AIAgentInterface::NotifyBlockingEntity(AIAgentInterface *this)
{
  ?NotifyBlockingEntity@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::UpdateLookAt
==============
*/

void __fastcall AIAgentInterface::UpdateLookAt(AIAgentInterface *this)
{
  ?UpdateLookAt@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::OnScrCmd_UseTurret
==============
*/

void __fastcall AIAgentInterface::OnScrCmd_UseTurret(AIAgentInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_UseTurret@AIAgentInterface@@UEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIAgentInterface::GetStairsWithinDist
==============
*/

bool __fastcall AIAgentInterface::GetStairsWithinDist(AIAgentInterface *this, float dist)
{
  return ?GetStairsWithinDist@AIAgentInterface@@UEBA_NM@Z(this, dist);
}

/*
==============
AINewAgentInterface::SetAgent
==============
*/

void __fastcall AINewAgentInterface::SetAgent(AINewAgentInterface *this, ai_agent_t *pAI)
{
  ?SetAgent@AINewAgentInterface@@QEAAXPEAUai_agent_t@@@Z(this, pAI);
}

/*
==============
AINewAgentInterface::DoMove
==============
*/

void __fastcall AINewAgentInterface::DoMove(AINewAgentInterface *this)
{
  ?DoMove@AINewAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::SetDefaults
==============
*/

void __fastcall AIAgentInterface::SetDefaults(AIAgentInterface *this)
{
  ?SetDefaults@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::AIAgentInterface
==============
*/

void __fastcall AIAgentInterface::AIAgentInterface(AIAgentInterface *this)
{
  ??0AIAgentInterface@@QEAA@XZ(this);
}

/*
==============
AIAgentInterface::CanExecuteTarget
==============
*/

bool __fastcall AIAgentInterface::CanExecuteTarget(AIAgentInterface *this, const gentity_s *pTarget)
{
  return ?CanExecuteTarget@AIAgentInterface@@UEBA_NPEBUgentity_s@@@Z(this, pTarget);
}

/*
==============
AIAgentInterface::Grenade_Detach
==============
*/

void __fastcall AIAgentInterface::Grenade_Detach(AIAgentInterface *this)
{
  ?Grenade_Detach@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::CanBeExecuted
==============
*/

bool __fastcall AIAgentInterface::CanBeExecuted(AIAgentInterface *this)
{
  return ?CanBeExecuted@AIAgentInterface@@UEBA_NXZ(this);
}

/*
==============
AIAgentInterface::OnScrCmd_AISetAnim
==============
*/

void __fastcall AIAgentInterface::OnScrCmd_AISetAnim(AIAgentInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_AISetAnim@AIAgentInterface@@UEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIAgentInterface::Grenade_Attach
==============
*/

void __fastcall AIAgentInterface::Grenade_Attach(AIAgentInterface *this)
{
  ?Grenade_Attach@AIAgentInterface@@UEBAXXZ(this);
}

/*
==============
AIAgentInterface::AIAgentInterface
==============
*/
void AIAgentInterface::AIAgentInterface(AIAgentInterface *this)
{
  AIScriptedInterface::AIScriptedInterface(this);
  this->m_pAI = NULL;
  this->__vftable = (AIAgentInterface_vtbl *)&AIAgentInterface::`vftable';
}

/*
==============
AIAgentIterator::AIAgentIterator
==============
*/
void AIAgentIterator::AIAgentIterator(AIAgentIterator *this)
{
  this->m_currentIndex = -1;
  this->__vftable = (AIAgentIterator_vtbl *)&AIAgentIterator::`vftable';
}

/*
==============
AIAgentInterface::BeginExecution
==============
*/
void AIAgentInterface::BeginExecution(AIAgentInterface *this, gentity_s *pTarget)
{
  if ( !pTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 601, ASSERT_TYPE_ASSERT, "( pTarget )", (const char *)&queryFormat, "pTarget") )
    __debugbreak();
  G_Execution_Begin(this->m_pAI->ent, pTarget);
}

/*
==============
AIAgentInterface::CanBeExecuted
==============
*/
bool AIAgentInterface::CanBeExecuted(AIAgentInterface *this)
{
  const dvar_t *v1; 
  ai_agent_t *m_pAI; 
  AIUnitType unitType; 
  bool result; 

  v1 = DVARBOOL_ai_enableExecutionVictim;
  if ( !DVARBOOL_ai_enableExecutionVictim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enableExecutionVictim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = 0;
  if ( v1->current.enabled && !this->InScriptedState(this) )
  {
    m_pAI = this->m_pAI;
    if ( !m_pAI->ent->tagInfo )
    {
      unitType = m_pAI->unitType;
      if ( (unsigned int)(unitType - 5) > 1 && unitType != AI_UNITTYPE_DOG )
        return 1;
    }
  }
  return result;
}

/*
==============
AIAgentInterface::CanExecute
==============
*/
bool AIAgentInterface::CanExecute(AIAgentInterface *this)
{
  const dvar_t *v1; 
  ai_agent_t *m_pAI; 

  v1 = DVARBOOL_ai_enableExecutionAttacker;
  if ( !DVARBOOL_ai_enableExecutionAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enableExecutionAttacker") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  if ( this->InScriptedState(this) )
    return 0;
  m_pAI = this->m_pAI;
  if ( m_pAI->eCurrentStance == STANCE_PRONE || m_pAI->unitType != AI_UNITTYPE_JUGGERNAUT )
    return 0;
  if ( !m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 538, ASSERT_TYPE_ASSERT, "( m_pAI->ent->agent )", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  return this->m_pAI->ent->agent->playerState.equippedExecution != 255;
}

/*
==============
AIAgentInterface::CanExecuteTarget
==============
*/
bool AIAgentInterface::CanExecuteTarget(AIAgentInterface *this, const gentity_s *pTarget)
{
  gagent_s *agent; 
  GHandler *Handler; 
  vec3_t outEyePos; 

  if ( !this->CanExecute(this) || !pTarget->client )
    return 0;
  AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
  agent = this->m_pAI->ent->agent;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 577, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Handler = GHandler::getHandler();
  return G_Execution_IsCandidateValid(&agent->playerState, &outEyePos, pTarget, Handler) && !G_Execution_IsBlocked(this->m_pAI->ent, pTarget);
}

/*
==============
AIAgentInterface::CleanUp
==============
*/
void AIAgentInterface::CleanUp(AIAgentInterface *this)
{
  __int64 v2; 
  __int64 v3; 
  const gentity_s *v4; 
  const gentity_s *v5; 
  __int16 EntityIndex; 
  sentient_s *sentient; 
  ai_agent_t *m_pAI; 
  ai_agent_t *v9; 
  ai_agent_t *v10; 
  AINavigator *pNavigator; 

  EntHandle::setEnt(&this->m_pAI->scriptGoal.hEnt, NULL);
  v2 = 0i64;
  v3 = 3i64;
  do
  {
    EntHandle::setEnt(&this->m_pAI->btGoals[v2++].hEnt, NULL);
    --v3;
  }
  while ( v3 );
  AIScriptedInterface::StopLookAtPos(this);
  this->CleanupScriptThreads(this);
  v4 = this->GetEntity(this);
  v5 = v4;
  if ( v4 )
  {
    EntityIndex = G_GetEntityIndex(v4);
    if ( G_IsEntityInUse(EntityIndex) )
    {
      sentient = v5->sentient;
      if ( sentient && sentient->pClaimedNode )
        Path_RelinquishNodeNow(sentient);
      G_MotionWarp_Cancel(v5->s.number);
    }
  }
  if ( AICommonInterface::HasPath(this) )
    this->ClearPath(this);
  m_pAI = this->m_pAI;
  if ( m_pAI->coverFindTask.status[0] == 1 )
  {
    AIScheduler::RemoveCoverFindTask(&m_pAI->coverFindTask);
    m_pAI = this->m_pAI;
  }
  if ( (m_pAI->coverFindTask.pPrev || m_pAI->coverFindTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 162, ASSERT_TYPE_ASSERT, "( !m_pAI->coverFindTask.pPrev && !m_pAI->coverFindTask.pNext )", (const char *)&queryFormat, "!m_pAI->coverFindTask.pPrev && !m_pAI->coverFindTask.pNext") )
    __debugbreak();
  v9 = this->m_pAI;
  if ( v9->pathFindTask.status[0] == 1 )
  {
    AIScheduler::RemovePathFindTask(&v9->pathFindTask);
    v9 = this->m_pAI;
  }
  if ( (v9->pathFindTask.pPrev || v9->pathFindTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 166, ASSERT_TYPE_ASSERT, "( !m_pAI->pathFindTask.pPrev && !m_pAI->pathFindTask.pNext )", (const char *)&queryFormat, "!m_pAI->pathFindTask.pPrev && !m_pAI->pathFindTask.pNext") )
    __debugbreak();
  v10 = this->m_pAI;
  if ( v10->threatUpdateTask.status[0] == 1 )
  {
    AIScheduler::RemoveThreatTask(&v10->threatUpdateTask);
    v10 = this->m_pAI;
  }
  if ( (v10->threatUpdateTask.pPrev || v10->threatUpdateTask.pNext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 170, ASSERT_TYPE_ASSERT, "( !m_pAI->threatUpdateTask.pPrev && !m_pAI->threatUpdateTask.pNext )", (const char *)&queryFormat, "!m_pAI->threatUpdateTask.pPrev && !m_pAI->threatUpdateTask.pNext") )
    __debugbreak();
  pNavigator = this->m_pAI->pNavigator;
  if ( pNavigator )
  {
    Nav_FreeNavigator(pNavigator);
    this->m_pAI->pNavigator = NULL;
  }
  v5->nextthink = 0;
}

/*
==============
AIAgentInterface::CleanupScriptThreads
==============
*/
void AIAgentInterface::CleanupScriptThreads(AIAgentInterface *this)
{
  const gentity_s *v1; 
  const gentity_s *v2; 
  __int16 EntityIndex; 
  scrContext_t *v4; 
  unsigned int v5; 

  v1 = this->GetEntity(this);
  v2 = v1;
  if ( v1 )
  {
    EntityIndex = G_GetEntityIndex(v1);
    if ( G_IsEntityInUse(EntityIndex) )
    {
      v4 = ScriptContext_Server();
      if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
        __debugbreak();
      if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      v5 = GScr_ExecEntThread(v2, GameScriptData::ms_gScriptData[1].ai_asm_getfunction, 0);
      Scr_FreeThread(v4, v5);
    }
  }
}

/*
==============
AINewAgentInterface::DoMove
==============
*/
void AINewAgentInterface::DoMove(AINewAgentInterface *this)
{
  gentity_s *ent; 
  gagent_s *agent; 

  this->AIAgentInterface::m_pAI->Physics.groundEntNum = 2046;
  AIScriptedInterface::DoMove(this);
  ent = this->AIAgentInterface::m_pAI->ent;
  agent = ent->agent;
  agent->playerState.origin.v[0] = ent->r.currentOrigin.v[0];
  agent->playerState.origin.v[1] = ent->r.currentOrigin.v[1];
  agent->playerState.origin.v[2] = ent->r.currentOrigin.v[2];
  this->AIAgentInterface::m_pAI->ent->agent->playerState.velocity = this->AIAgentInterface::m_pAI->Physics.vVelocity;
}

/*
==============
AIAgentInterface::EntInfo
==============
*/
void AIAgentInterface::EntInfo(gentity_s *pSelf, const vec3_t *source)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  if ( SV_Agent_IsScripted(pSelf->s.number) )
  {
    AIWrapper::AIWrapper(&v5, pSelf);
    m_pAI = v5.m_pAI;
    if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 235, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    AIScriptedInterface::EntInfo(m_pAI, source);
  }
}

/*
==============
AIAgentInterface::GetAIAgentIterator
==============
*/
AIAgentIterator *AIAgentInterface::GetAIAgentIterator()
{
  return &AIAgentInterface::ms_agentIterator;
}

/*
==============
AIAgentInterface::GetAIIterator
==============
*/
AIAgentIterator *AIAgentInterface::GetAIIterator(AIAgentInterface *this)
{
  return &AIAgentInterface::ms_agentIterator;
}

/*
==============
AIAgentInterface::GetAnimTree
==============
*/
XAnimTree *AIAgentInterface::GetAnimTree(AIAgentInterface *this)
{
  __int64 v2; 
  __int64 v3; 

  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v2 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 419, ASSERT_TYPE_ASSERT, "(gameStatic)", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 224i64))(v2, (unsigned int)this->m_pAI->ent->s.number);
  if ( v3 )
    return *(XAnimTree **)(v3 + 2040);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 422, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  return (XAnimTree *)MEMORY[0x7F8];
}

/*
==============
AIAgentInterface::GetClothType
==============
*/
__int64 AIAgentInterface::GetClothType(AIAgentInterface *this)
{
  char clothType; 

  if ( !this->m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 439, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  clothType = this->m_pAI->ent->agent->playerState.clothType;
  if ( clothType < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,signed char>(signed char)", "unsigned", (unsigned __int8)clothType, "signed", clothType) )
    __debugbreak();
  return (unsigned __int8)clothType;
}

/*
==============
AIAgentInterface::GetFireWeaponEvent
==============
*/
__int64 AIAgentInterface::GetFireWeaponEvent(AIAgentInterface *this, bool bFireSoundOnce, bool bCleanMiss)
{
  return 40i64;
}

/*
==============
AIAgentIterator::GetFirst
==============
*/
gentity_s *AIAgentIterator::GetFirst(AIAgentIterator *this)
{
  int v1; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  v1 = 0;
  this->m_currentIndex = 0;
  if ( level.maxagents <= 0 )
  {
LABEL_27:
    this->m_currentIndex = -1;
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v1 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v7) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v6) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v3 = ComCharacterLimits::ms_gameData.m_clientCount + v1;
      if ( v3 >= 0x800 )
      {
        LODWORD(v7) = 2048;
        LODWORD(v6) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v4 = v3;
        if ( g_entities[v4].health > 0 )
        {
          if ( SV_Agent_IsScripted(v3) )
            return &g_entities[v4];
        }
      }
      v1 = this->m_currentIndex + 1;
      this->m_currentIndex = v1;
      if ( v1 >= level.maxagents )
        goto LABEL_27;
    }
  }
}

/*
==============
AIAgentInterface::GetMovingPlatformUpVector
==============
*/
void AIAgentInterface::GetMovingPlatformUpVector(AIAgentInterface *this, vec3_t *upVector)
{
  upVector->v[2] = 1.0;
  *(_QWORD *)upVector->v = 0i64;
}

/*
==============
AIAgentIterator::GetNext
==============
*/
gentity_s *AIAgentIterator::GetNext(AIAgentIterator *this)
{
  int m_currentIndex; 
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  m_currentIndex = this->m_currentIndex;
  if ( m_currentIndex < 0 )
    return 0i64;
  v4 = m_currentIndex + 1;
  this->m_currentIndex = v4;
  if ( v4 >= level.maxagents )
  {
LABEL_29:
    this->m_currentIndex = -1;
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v4 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v8) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v7) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v5 = ComCharacterLimits::ms_gameData.m_clientCount + v4;
      if ( v5 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v5] )
      {
        v6 = v5;
        if ( g_entities[v6].health > 0 )
        {
          if ( SV_Agent_IsScripted(v5) )
            return &g_entities[v6];
        }
      }
      v4 = this->m_currentIndex + 1;
      this->m_currentIndex = v4;
      if ( v4 >= level.maxagents )
        goto LABEL_29;
    }
  }
}

/*
==============
AIAgentInterface::GetScarinessForDistance
==============
*/
double AIAgentInterface::GetScarinessForDistance(AIAgentInterface *this, sentient_s *enemy, float fDist)
{
  const scrContext_t *v5; 
  const Weapon *Weapon; 

  v5 = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(v5, (const scr_weapon_t)this->m_pAI->currentWeapon);
  if ( Weapon->weaponIdx )
    return AICommonInterface::GetAccuracyFraction(this->m_pAI, fDist, Weapon, WEAP_ACCURACY_AI_VS_AI);
  else
    return AICommonInterface::GetDefaultScarinessForDistance(enemy, fDist);
}

/*
==============
AIAgentInterface::GetScriptedAgentInfo
==============
*/

ai_agent_t *__fastcall AIAgentInterface::GetScriptedAgentInfo(const gentity_s *entity)
{
  return Agent_GetScriptedAgentInfo(entity);
}

/*
==============
AIAgentInterface::GetStairsStateWithinDist
==============
*/
__int64 AIAgentInterface::GetStairsStateWithinDist(AIAgentInterface *this, float dist, __int64 bCurrentlyOnStairs)
{
  __int64 v3; 

  return ((__int64 (__fastcall *)(AINavigator *, __int64, __int64))this->m_pAI->pNavigator->GetStairsStateWithinDist)(this->m_pAI->pNavigator, v3, bCurrentlyOnStairs);
}

/*
==============
AIAgentInterface::GetStairsWithinDist
==============
*/
__int64 AIAgentInterface::GetStairsWithinDist(AIAgentInterface *this, float dist)
{
  return ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->GetStairsWithinDist)(this->m_pAI->pNavigator);
}

/*
==============
AIAgentInterface::GetThreatSharedEnemy
==============
*/
__int64 AIAgentInterface::GetThreatSharedEnemy(AIAgentInterface *this)
{
  int ThreatSharedEnemy; 
  const dvar_t *v2; 
  int v3; 

  ThreatSharedEnemy = AICommonInterface::GetThreatSharedEnemy(this);
  v2 = DCONST_DVARFLT_agent_threatSharedEnemyScale;
  v3 = ThreatSharedEnemy;
  if ( !DCONST_DVARFLT_agent_threatSharedEnemyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_threatSharedEnemyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return (unsigned int)(int)(float)((float)v3 * v2->current.value);
}

/*
==============
AIAgentInterface::GetThreatSharedEnemyCap
==============
*/
__int64 AIAgentInterface::GetThreatSharedEnemyCap(AIAgentInterface *this)
{
  int ThreatSharedEnemyCap; 
  const dvar_t *v2; 
  int v3; 

  ThreatSharedEnemyCap = AICommonInterface::GetThreatSharedEnemyCap(this);
  v2 = DCONST_DVARFLT_agent_threatSharedEnemyScale;
  v3 = ThreatSharedEnemyCap;
  if ( !DCONST_DVARFLT_agent_threatSharedEnemyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_threatSharedEnemyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return (unsigned int)(int)(float)((float)v3 * v2->current.value);
}

/*
==============
AIAgentInterface::GetTraceMask
==============
*/
__int64 AIAgentInterface::GetTraceMask(AIAgentInterface *this)
{
  return (unsigned int)this->GetEntity(this)->clipmask;
}

/*
==============
AIAgentInterface::Grenade_Attach
==============
*/
void AIAgentInterface::Grenade_Attach(AIAgentInterface *this)
{
  gentity_s *v2; 

  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
  {
    v2 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    G_EntLinkToWithOffset(v2, this->m_pAI->ent, scr_const.tag_accessory_right, &vec3_origin, &vec3_origin, 0, NULL);
    G_Utils_AddEvent(v2, 0x6Fu, 0);
    EntHandle::setEnt(&v2->parent, this->m_pAI->ent);
  }
}

/*
==============
AIAgentInterface::Grenade_Detach
==============
*/
void AIAgentInterface::Grenade_Detach(AIAgentInterface *this)
{
  gentity_s *v2; 
  vec3_t outPos; 

  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "AIAgentInterface::Grenade_Detach");
    v2 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    G_EntUnlink(v2);
    G_Utils_AddEvent(v2, 0x70u, 0);
    G_Utils_DObjGetWorldTagPos_CheckTagExists(this->m_pAI->ent, (const scr_string_t)scr_const.tag_accessory_right, 1, &outPos);
    if ( G_SetOrigin(v2, &outPos, 1, 0) )
    {
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    }
    *(_QWORD *)v2->s.lerp.pos.trDelta.v = 0i64;
    v2->s.lerp.pos.trDelta.v[2] = 0.0;
    EntHandle::setEnt(&v2->grenadeActivator, NULL);
    if ( !G_Missile_IsGrenade(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 311, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
      __debugbreak();
    *(_QWORD *)(&v2->c.beam + 15) = 0i64;
    v2->c.mover.angle.pos1.v[2] = 0.0;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
AIAgentInterface::HasRiotshield
==============
*/
bool AIAgentInterface::HasRiotshield(AIAgentInterface *this)
{
  GWeaponMap *Instance; 
  BgWeaponHandle **m_pAI; 
  const Weapon *Weapon; 

  Instance = GWeaponMap::GetInstance();
  m_pAI = (BgWeaponHandle **)this->m_pAI;
  if ( !(*m_pAI)[32].m_mapEntryId )
    return 0;
  Weapon = BgWeaponMap::GetWeapon(Instance, (*m_pAI)[32]);
  return BG_GetWeaponType(Weapon, 0) == WEAPTYPE_RIOTSHIELD;
}

/*
==============
AIAgentInterface::InScriptedState
==============
*/
bool AIAgentInterface::InScriptedState(AIAgentInterface *this)
{
  int number; 
  Ai_Asm *v3; 
  ASM_Instance *InstanceIfExists; 
  bool result; 

  result = 1;
  if ( !AIScriptedInterface::InScriptedState(this) )
  {
    number = this->m_pAI->ent->s.number;
    v3 = Ai_Asm::Singleton();
    InstanceIfExists = Ai_Asm::GetInstanceIfExists(v3, NULL, number);
    if ( !InstanceIfExists || Common_Asm::Utils::GetState(InstanceIfExists->m_pASM, InstanceIfExists->m_CurState)->m_Name != scr_const.animscripted )
      return 0;
  }
  return result;
}

/*
==============
AIAgentInterface::InitAgents
==============
*/

void AIAgentInterface::InitAgents(void)
{
  AIPhys_Init();
}

/*
==============
AIAgentInterface::IsFlashBanged
==============
*/
bool AIAgentInterface::IsFlashBanged(AIAgentInterface *this)
{
  if ( !this->m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 377, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  return G_Combat_IsClientFlashbanged(&this->m_pAI->ent->agent->playerState) == 1;
}

/*
==============
AIAgentInterface::IsInExecution
==============
*/
bool AIAgentInterface::IsInExecution(AIAgentInterface *this)
{
  gagent_s *agent; 

  agent = this->m_pAI->ent->agent;
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 593, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return agent->playerState.activeExecution != 255;
}

/*
==============
AIAgentInterface::IsValidTarget
==============
*/
bool AIAgentInterface::IsValidTarget(AIAgentInterface *this, gentity_s *enemy)
{
  entityType_s eType; 
  unsigned int m_objIndex; 
  __int64 v5; 
  bool v6; 
  GTurret **v7; 
  __int64 v9; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 352, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  eType = enemy->s.eType;
  if ( eType == ET_VEHICLE )
    return 0;
  if ( eType != ET_TURRET || EntHandle::isDefined(&enemy->r.ownerNum) )
    return 1;
  m_objIndex = enemy->turretHandle.m_objIndex;
  if ( !m_objIndex )
    return 0;
  v5 = m_objIndex - 1;
  if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v9, 128) )
      __debugbreak();
  }
  v6 = GTurret::ms_turretArray[v5] == NULL;
  v7 = &GTurret::ms_turretArray[v5];
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
    __debugbreak();
  return ((*v7)->m_data.flags & 4) != 0;
}

/*
==============
AIAgentInterface::NotifyBlockingEntity
==============
*/
void AIAgentInterface::NotifyBlockingEntity(AIAgentInterface *this)
{
  this->m_pAI->isBlockingOtherAI = 1;
}

/*
==============
AIAgentInterface::OnScrCmd_AISetAnim
==============
*/
void AIAgentInterface::OnScrCmd_AISetAnim(AIAgentInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 
  const char *v5; 
  float v6; 
  scr_string_t ConstString; 
  int IndexOfRandomAnimFromRandomAlias; 
  scr_string_t AnimsetName; 
  const char *v10; 
  const Animset *v11; 
  const char *v12; 
  const char *String; 
  const char *v14; 
  VariableType Type; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  ComErrorCode v19; 
  scr_string_t v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  double Float; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  int pOutStateIndex; 
  AnimsetState *outState; 

  v4 = this->GetEntity(this);
  if ( !BG_IsCharacterEntity(&v4->s) )
  {
    v5 = j_va("entity %i is not a player or agent", (unsigned int)v4->s.number);
    Scr_ObjectError(COM_ERR_3525, scrContext, v5);
  }
  v6 = FLOAT_1_0;
  ConstString = Scr_GetConstString(scrContext, 0);
  IndexOfRandomAnimFromRandomAlias = 0;
  AnimsetName = BG_AnimationState_GetAnimsetName(&v4->s);
  if ( !AnimsetName )
  {
    v10 = j_va("entity %i references an animset that has not been loaded", (unsigned int)v4->s.number);
    Scr_ObjectError(COM_ERR_3526, scrContext, v10);
  }
  v11 = Animset_Find(AnimsetName);
  if ( !BG_Animset_GetStateInfoByName(v11, ConstString, &outState, &pOutStateIndex) )
  {
    v12 = SL_ConvertToString(AnimsetName);
    String = Scr_GetString(scrContext, 0);
    v14 = j_va("animation state %s does not exist in the animset for %s", String, v12);
    Scr_ParamError(COM_ERR_3527, scrContext, 0, v14);
  }
  if ( Scr_GetNumParam(scrContext) <= 1 )
  {
    IndexOfRandomAnimFromRandomAlias = G_Animset_GetIndexOfRandomAnimFromRandomAlias(v11, pOutStateIndex);
    goto LABEL_22;
  }
  Type = Scr_GetType(scrContext, 1u);
  if ( Type != VAR_INTEGER )
  {
    if ( Type == VAR_STRING )
    {
      v20 = Scr_GetConstString(scrContext, 1u);
      IndexOfRandomAnimFromRandomAlias = G_Animset_GetIndexOfRandomAnimFromAlias(v11, outState, v20);
      if ( IndexOfRandomAnimFromRandomAlias >= 0 )
        goto LABEL_19;
      v21 = SL_ConvertToString(AnimsetName);
      v22 = Scr_GetString(scrContext, 0);
      v23 = Scr_GetString(scrContext, 1u);
      v18 = j_va("animation entry %s is not a part of anim state %s in animset %s", v23, v22, v21);
      v19 = COM_ERR_3529;
    }
    else
    {
      if ( Type == VAR_UNDEFINED )
      {
        IndexOfRandomAnimFromRandomAlias = G_Animset_GetIndexOfRandomAnimFromRandomAlias(v11, pOutStateIndex);
        goto LABEL_19;
      }
      v18 = "entry must be either int, string, or undefined (to select at random)";
      v19 = COM_ERR_3530;
    }
    goto LABEL_18;
  }
  IndexOfRandomAnimFromRandomAlias = Scr_GetInt(scrContext, 1u);
  if ( IndexOfRandomAnimFromRandomAlias < 0 || IndexOfRandomAnimFromRandomAlias >= BG_Animset_GetNumEntriesForStateIndex(v11, pOutStateIndex) )
  {
    v16 = SL_ConvertToString(AnimsetName);
    v17 = Scr_GetString(scrContext, 0);
    v18 = j_va("animation entry %d is not a part of anim state %s in animset %s", (unsigned int)IndexOfRandomAnimFromRandomAlias, v17, v16);
    v19 = COM_ERR_3528;
LABEL_18:
    Scr_ParamError(v19, scrContext, 1u, v18);
  }
LABEL_19:
  if ( Scr_GetNumParam(scrContext) > 2 )
  {
    Float = Scr_GetFloat(scrContext, 2u);
    v6 = *(float *)&Float;
  }
LABEL_22:
  if ( IndexOfRandomAnimFromRandomAlias < 0 )
  {
    v25 = Scr_GetString(scrContext, 0);
    v26 = SL_ConvertToString(AnimsetName);
    v27 = j_va("invalid entry index %d for animset %s state %s", (unsigned int)IndexOfRandomAnimFromRandomAlias, v26, v25);
    Scr_Error(COM_ERR_6170, scrContext, v27);
  }
  ((void (__fastcall *)(AIAgentInterface *, const Animset *, _QWORD, _QWORD, _DWORD))this->SetAnim)(this, v11, (unsigned int)pOutStateIndex, (unsigned int)IndexOfRandomAnimFromRandomAlias, LODWORD(v6));
  Scr_AddInt(scrContext, IndexOfRandomAnimFromRandomAlias);
}

/*
==============
AINewAgentInterface::OnScrCmd_FinishTraverse
==============
*/
void AINewAgentInterface::OnScrCmd_FinishTraverse(AINewAgentInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 

  if ( AIScriptedInterface::IsTraversing(this) )
  {
    v4 = this->GetEntity(this);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 1146, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    G_MotionWarp_Cancel(v4->s.number);
  }
  AIScriptedInterface::OnScrCmd_FinishTraverse(this, scrContext);
}

/*
==============
AIAgentInterface::OnScrCmd_StopUseTurret
==============
*/
void AIAgentInterface::OnScrCmd_StopUseTurret(AIAgentInterface *this, scrContext_t *scrContext)
{
  this->m_pAI->turret.pAgentTurret = NULL;
}

/*
==============
AIAgentInterface::OnScrCmd_UseTurret
==============
*/
void AIAgentInterface::OnScrCmd_UseTurret(AIAgentInterface *this, scrContext_t *scrContext)
{
  gentity_s *Entity; 
  gentity_s *v5; 

  Entity = GScr_GetEntity(0);
  v5 = Entity;
  if ( !Entity || !Entity->turretHandle.m_objIndex )
    Scr_ParamError(COM_ERR_1556, scrContext, 0, "can only use a turret");
  this->m_pAI->turret.pAgentTurret = v5;
}

/*
==============
AIAgentInterface::ScrShouldTeleport_Reset
==============
*/
bool AIAgentInterface::ScrShouldTeleport_Reset(AIAgentInterface *this, const vec3_t *teleportPos, float distFromPosSq)
{
  return distFromPosSq > 100.0;
}

/*
==============
AIAgentInterface::SetAgent
==============
*/
void AIAgentInterface::SetAgent(AIAgentInterface *this, ai_agent_t *pAI)
{
  this->m_pAI = pAI;
}

/*
==============
AINewAgentInterface::SetAgent
==============
*/
void AINewAgentInterface::SetAgent(AINewAgentInterface *this, ai_agent_t *pAI)
{
  this->AIAgentInterface::m_pAI = pAI;
  AIScriptedInterface::SetAI(this, pAI);
}

/*
==============
AIAgentInterface::SetAnim
==============
*/
void AIAgentInterface::SetAnim(AIAgentInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex, float rate)
{
  gentity_s *ent; 

  ent = this->m_pAI->ent;
  BG_AnimationState_SetState(stateIndex, entryIndex, &ent->s);
  ent->s.animInfo.animTime = level.time;
  ent->s.un.animRate = rate;
  AIScriptedInterface::UpdateLookAtForNewAnim(this, pAnimset, stateIndex, entryIndex);
}

/*
==============
AIAgentInterface::SetAnimset
==============
*/
char AIAgentInterface::SetAnimset(AIAgentInterface *this, const char *animsetName)
{
  gentity_s *ent; 
  entityType_s eType; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  XAnim_s *Anims; 
  XAnimTree *v10; 
  XAnim_s *v11; 
  XAnimTree *v12; 
  __int64 v14; 
  unsigned int outIndex; 

  if ( !animsetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 447, ASSERT_TYPE_ASSERT, "(animsetName)", (const char *)&queryFormat, "animsetName") )
    __debugbreak();
  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = ent->s.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 448, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &m_pAI->ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &m_pAI->ent->s )") )
    __debugbreak();
  if ( !NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_ANIMSET, animsetName, &outIndex) )
    return 0;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v6 = outIndex;
  v7 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( outIndex >= 0x40 )
  {
    LODWORD(v14) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 455, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 6) )", "animsetIndex doesn't index MAX_ANIM_CLASS_COUNT\n\t%i not in [0, %i)", v14, 64) )
      __debugbreak();
    v6 = outIndex;
  }
  this->m_pAI->ent->s.animInfo.animData ^= (this->m_pAI->ent->s.animInfo.animData ^ (v6 << 18)) & 0xFC0000;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 224i64))(v7, (unsigned int)this->m_pAI->ent->s.number);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 460, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Anims = BG_AnimationState_GetAnims((const entityState_t *)this->m_pAI->ent);
  v10 = *(XAnimTree **)(v8 + 2040);
  v11 = Anims;
  if ( !Anims )
  {
    if ( v10 )
    {
      Com_XAnimFreeSmallTree(v10);
      *(_QWORD *)(v8 + 2040) = 0i64;
    }
    return 1;
  }
  if ( v10 && XAnimGetAnims(v10) == Anims )
    return 1;
  v12 = *(XAnimTree **)(v8 + 2040);
  if ( v12 )
    Com_XAnimFreeSmallTree(v12);
  *(_QWORD *)(v8 + 2040) = Com_XAnimCreateSmallTree(v11, MOVEMENT);
  return 1;
}

/*
==============
AINewAgentInterface::SetBodyAngles
==============
*/
void AINewAgentInterface::SetBodyAngles(AINewAgentInterface *this, const vec3_t *angles)
{
  gentity_s *ent; 
  gagent_s *agent; 

  AIScriptedInterface::SetBodyAngles(this, angles);
  ent = this->AIAgentInterface::m_pAI->ent;
  agent = ent->agent;
  agent->playerState.viewangles.v[0] = ent->r.currentAngles.v[0];
  agent->playerState.viewangles.v[1] = ent->r.currentAngles.v[1];
  agent->playerState.viewangles.v[2] = ent->r.currentAngles.v[2];
}

/*
==============
AIAgentInterface::SetClothType
==============
*/
void AIAgentInterface::SetClothType(AIAgentInterface *this, unsigned __int8 clothType)
{
  int v4; 
  int v5; 

  if ( clothType >= 0x10u )
  {
    v5 = 16;
    v4 = clothType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( ( 1 << 4 ) )", "clothType doesn't index MAX_CLOTH_TYPE\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !this->m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 431, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
    __debugbreak();
  this->m_pAI->ent->agent->playerState.clothType = clothType;
}

/*
==============
AIAgentInterface::SetDefaults
==============
*/
void AIAgentInterface::SetDefaults(AIAgentInterface *this)
{
  gentity_s *v2; 
  ai_agent_t *m_pAI; 
  sentient_s *sentient; 

  AIScriptedInterface::SetDefaults(this);
  v2 = this->GetEntity(this);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 187, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  this->m_pAI->sentient = v2->sentient;
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  if ( sentient )
  {
    sentient->ai = m_pAI;
    Sentient_SetTeam(sentient, v2->agent->agentState.team);
    Sentient_SetEnemy(sentient, NULL, 1, 1);
    Sentient_InvalidateNearestNode(sentient);
    Sentient_InvalidateNearestTacPoint(sentient);
    EntHandle::setEnt(&sentient->scriptTargetEnt, NULL);
    sentient->scriptTargetHasTagEye = 0;
    sentient->entityTargetThreat = 0.0;
    *(_QWORD *)&sentient->iThreatBias = 0i64;
    sentient->pPrevClaimedNode = NULL;
    sentient->maxVisibleDist = 8192.0;
    sentient->attackerAccuracy = 1.0;
    sentient->oldOrigin.v[0] = v2->r.currentOrigin.v[0];
    sentient->oldOrigin.v[1] = v2->r.currentOrigin.v[1];
    sentient->oldOrigin.v[2] = v2->r.currentOrigin.v[2];
  }
}

/*
==============
AIAgentInterface::SetEquippedWeapon
==============
*/
void AIAgentInterface::SetEquippedWeapon(AIAgentInterface *this, const Weapon *r_Weapon)
{
  GWeaponMap *Instance; 
  GHandler *Handler; 

  AIScriptedInterface::SetEquippedWeapon(this, r_Weapon);
  Instance = GWeaponMap::GetInstance();
  BG_SetEquippedWeaponForPlayer(Instance, &this->m_pAI->ent->agent->playerState, 0, r_Weapon);
  Handler = GHandler::getHandler();
  BG_SetCurrentWeaponForPlayer(Instance, &this->m_pAI->ent->agent->playerState, r_Weapon, Handler);
}

/*
==============
AIAgentInterface::SetNextThinkTime
==============
*/
void AIAgentInterface::SetNextThinkTime(AIAgentInterface *this, gentity_s *pEnt)
{
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 104, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( pEnt->health > 0 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    pEnt->nextthink = level.time + level.frameDuration;
  }
}

/*
==============
AIAgentInterface::SetRiotshieldWeapon
==============
*/
void AIAgentInterface::SetRiotshieldWeapon(AIAgentInterface *this, const Weapon *r_Weapon)
{
  GWeaponMap *Instance; 
  BgWeaponHandle **m_pAI; 
  BgWeaponMap *v6; 
  const Weapon *Weapon; 
  gentity_s *ent; 
  unsigned int eType; 
  int v10; 

  Instance = GWeaponMap::GetInstance();
  m_pAI = (BgWeaponHandle **)this->m_pAI;
  v6 = Instance;
  if ( (*m_pAI)[32].m_mapEntryId )
  {
    Weapon = BgWeaponMap::GetWeapon(Instance, (*m_pAI)[32]);
    if ( memcmp_0(Weapon, r_Weapon, 0x3Cui64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 253, ASSERT_TYPE_ASSERT, "( m_pAI->ent->s.staticState.player.stowedWeaponHandle.IsNull() || BG_AreWeaponsEqual( pWeaponMap->GetWeapon( m_pAI->ent->s.staticState.player.stowedWeaponHandle ), r_Weapon ) )", (const char *)&queryFormat, "m_pAI->ent->s.staticState.player.stowedWeaponHandle.IsNull() || BG_AreWeaponsEqual( pWeaponMap->GetWeapon( m_pAI->ent->s.staticState.player.stowedWeaponHandle ), r_Weapon )") )
        __debugbreak();
    }
  }
  ent = this->m_pAI->ent;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 533, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)ent->s.eType;
  if ( (unsigned __int16)eType > 0x11u || (v10 = 131111, !_bittest(&v10, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 534, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  v6->SetWeapon(v6, &ent->s.staticState.player.stowedWeaponHandle, r_Weapon);
  BG_SetEquippedWeaponForPlayer(v6, &this->m_pAI->ent->agent->playerState, 2, r_Weapon);
}

/*
==============
AIAgentInterface::ShouldLookForNewCover
==============
*/
bool AIAgentInterface::ShouldLookForNewCover(AIAgentInterface *this)
{
  ai_agent_t *m_pAI; 

  m_pAI = this->m_pAI;
  return m_pAI->nodeSelect.requestDifferentCover && level.time >= m_pAI->nodeSelect.nextFindBestCoverTime;
}

/*
==============
AIAgentInterface::ShutdownAgents
==============
*/

void AIAgentInterface::ShutdownAgents(void)
{
  AIPhys_Shutdown();
}

/*
==============
AIAgentInterface::UpdateAnimGameParams
==============
*/
void AIAgentInterface::UpdateAnimGameParams(AIAgentInterface *this, bool bASMTransitioned)
{
  ai_agent_t *m_pAI; 
  gentity_s *pAgentTurret; 

  AIScriptedInterface::UpdateAnimGameParams(this, bASMTransitioned);
  m_pAI = this->m_pAI;
  pAgentTurret = m_pAI->turret.pAgentTurret;
  if ( pAgentTurret )
  {
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    m_pAI->animData.aimPitch = (float)((float)(pAgentTurret->s.lerp.u.turret.gunAngles.v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    this->m_pAI->animData.groundTurretEntNum = this->m_pAI->turret.pAgentTurret->s.number;
    if ( !this->m_pAI->ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_agent_interface.cpp", 1166, ASSERT_TYPE_ASSERT, "(m_pAI->ent->agent)", (const char *)&queryFormat, "m_pAI->ent->agent") )
      __debugbreak();
    this->m_pAI->ent->agent->agentState.groundTurretEntNum = this->m_pAI->turret.pAgentTurret->s.number;
    __asm { vroundss xmm3, xmm7, xmm2, 1 }
    this->m_pAI->nonRepAnimData.groundTurretYaw = (float)((float)(this->m_pAI->turret.pAgentTurret->s.lerp.u.turret.gunAngles.v[1] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_AIMPITCH);
    G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_GROUND_TURRET_YAW);
  }
  else
  {
    m_pAI->animData.groundTurretEntNum = 2047;
  }
}

/*
==============
AIAgentInterface::UpdateExecution
==============
*/
void AIAgentInterface::UpdateExecution(AIAgentInterface *this)
{
  G_Execution_Update(this->m_pAI->ent);
}

/*
==============
AIAgentInterface::UpdateExecutionAnimParams
==============
*/
void AIAgentInterface::UpdateExecutionAnimParams(AIAgentInterface *this)
{
  DObj *ServerDObjForEnt; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  G_AIAnim_UpdateExecutionParameter(ServerDObjForEnt, this->m_pAI->ent->s.number);
}

/*
==============
AIAgentInterface::UpdateLookAt
==============
*/
void AIAgentInterface::UpdateLookAt(AIAgentInterface *this)
{
  gentity_s *v2; 
  double v3; 
  double v4; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  v2 = this->GetEntity(this);
  v3 = I_fclamp(this->m_pAI->aimAngles.v[1], -70.0, 70.0);
  v2->s.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&v3);
  v4 = I_fclamp(this->m_pAI->aimAngles.v[0], -70.0, 70.0);
  v2->s.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(*(float *)&v4);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  p_eFlags = &v2->agent->playerState.eFlags;
  if ( level.time - this->m_pAI->shoot.lastShotTime > level.frameDuration )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 0xAu);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 0xAu);
}

/*
==============
AIAgentInterface::UpdateMoveDirBasedOnHistory
==============
*/

void __fastcall AIAgentInterface::UpdateMoveDirBasedOnHistory(AIAgentInterface *this, const vec3_t *lookAhead, vec3_t *inOutMoveDir)
{
  AIScriptedInterface::UpdateMoveDirBasedOnHistory(this, lookAhead, inOutMoveDir);
}

/*
==============
AIAgentInterface::UpdateRetreat
==============
*/
void AIAgentInterface::UpdateRetreat(AIAgentInterface *this)
{
  const dvar_t *v2; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  float v6; 
  __int64 v7; 
  __int64 v8; 
  ai_agent_t *m_pAI; 
  team_t eTeam; 
  float *p_number; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  AIIterator *v16; 
  const gentity_s *i; 
  ai_agent_t *ScriptedAgentInfo; 
  AIActorInterface *v19; 
  actor_s *actor; 
  ai_agent_t *v21; 
  float *v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  __int64 v27; 
  __int64 v28; 
  AIActorInterface v29; 
  AIScriptedInterface v30; 
  ai_agent_t *v31; 
  AIActorInterface *v32; 

  if ( (this->m_pAI->postGoldPadding & 2) != 0 )
  {
    v2 = DVARBOOL_ai_enableRetreat;
    if ( !DVARBOOL_ai_enableRetreat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_enableRetreat") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = 0;
      LOBYTE(this->m_pAI->postGoldPadding) &= ~1u;
      v4 = DVARFLT_ai_retreatProximity;
      if ( !DVARFLT_ai_retreatProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatProximity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      v5 = 0;
      v6 = v4->current.value * v4->current.value;
      if ( level.maxclients > 0 )
      {
        v7 = 0i64;
        v8 = 0i64;
        do
        {
          if ( (unsigned int)v5 >= 0x800 )
          {
            LODWORD(v28) = 2048;
            LODWORD(v27) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v8].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v7] )
          {
            m_pAI = this->m_pAI;
            eTeam = m_pAI->sentient->eTeam;
            if ( eTeam == TEAM_ZERO || eTeam != g_entities[v8].sentient->eTeam )
            {
              p_number = (float *)&m_pAI->ent->s.number;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(m_pAI->ent->r.currentOrigin.v[2] - g_entities[v8].r.currentOrigin.v[2]) & _xmm) <= 256.0 )
              {
                v12 = g_entities[v8].r.currentOrigin.v[0] - p_number[76];
                v13 = g_entities[v8].r.currentOrigin.v[1] - p_number[77];
                v14 = g_entities[v8].r.currentOrigin.v[2] - p_number[78];
                if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) < v6 )
                  ++v3;
              }
            }
          }
          ++v5;
          ++v7;
          ++v8;
        }
        while ( v5 < level.maxclients );
        if ( v3 )
        {
          v15 = 0;
          v16 = this->GetAIIterator(this);
          for ( i = (const gentity_s *)v16->GetFirst(v16); i; i = v16->GetNext(v16) )
          {
            AIActorInterface::AIActorInterface(&v29);
            AIScriptedInterface::AIScriptedInterface(&v30);
            v30.__vftable = (AIScriptedInterface_vtbl *)&AINewAgentInterface::`vftable';
            v31 = NULL;
            v32 = NULL;
            if ( i->agent && SV_Agent_IsScripted(i->s.number) )
            {
              ScriptedAgentInfo = Agent_GetScriptedAgentInfo(i);
              if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
                __debugbreak();
              if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
                __debugbreak();
              v31 = ScriptedAgentInfo;
              AIScriptedInterface::SetAI(&v30, ScriptedAgentInfo);
              v19 = (AIActorInterface *)&v30;
            }
            else
            {
              actor = i->actor;
              if ( !actor )
                goto LABEL_44;
              if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
                __debugbreak();
              AIActorInterface::SetActor(&v29, i->actor);
              v19 = &v29;
            }
            v32 = v19;
LABEL_44:
            v21 = this->m_pAI;
            if ( (ai_agent_t *)v32->GetAI(v32) != v21 && v21->sentient->eTeam == i->sentient->eTeam )
            {
              v22 = (float *)&v21->ent->s.number;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21->ent->r.currentOrigin.v[2] - i->r.currentOrigin.v[2]) & _xmm) <= 256.0 )
              {
                v23 = i->r.currentOrigin.v[0] - v22[76];
                v24 = i->r.currentOrigin.v[1] - v22[77];
                v25 = i->r.currentOrigin.v[2] - v22[78];
                if ( (float)((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25)) < v6 )
                  ++v15;
              }
            }
          }
          v26 = DVARINT_ai_retreatMaxOvernumberAmount;
          if ( !DVARINT_ai_retreatMaxOvernumberAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatMaxOvernumberAmount") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v26);
          if ( v3 > v15 + v26->current.integer )
            LOBYTE(this->m_pAI->postGoldPadding) |= 1u;
        }
      }
    }
  }
}

