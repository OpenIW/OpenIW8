/*
==============
bdLoginTaskReportExtendedAuthInfo::getTaskCode
==============
*/

bdLoginTaskReportExtendedAuthInfo::ReportInfoState __fastcall bdLoginTaskReportExtendedAuthInfo::getTaskCode(bdLoginTaskReportExtendedAuthInfo *this)
{
  return ?getTaskCode@bdLoginTaskReportExtendedAuthInfo@@QEBA?AW4ReportInfoState@1@XZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::reset
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::reset(bdLoginTaskReportExtendedAuthInfo *this)
{
  ?reset@bdLoginTaskReportExtendedAuthInfo@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::~bdLoginTaskReportExtendedAuthInfo
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::~bdLoginTaskReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  ??1bdLoginTaskReportExtendedAuthInfo@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::abortTask
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::abortTask(bdLoginTaskReportExtendedAuthInfo *this)
{
  ?abortTask@bdLoginTaskReportExtendedAuthInfo@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::pump
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::pump(bdLoginTaskReportExtendedAuthInfo *this)
{
  ?pump@bdLoginTaskReportExtendedAuthInfo@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo
==============
*/

bool __fastcall bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  return ?pumpReportExtendedAuthInfo@bdLoginTaskReportExtendedAuthInfo@@IEAA_NXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskReportExtendedAuthInfo::getTaskMessage(bdLoginTaskReportExtendedAuthInfo *this)
{
  return ?getTaskMessage@bdLoginTaskReportExtendedAuthInfo@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::updateReportStatus
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::updateReportStatus(bdLoginTaskReportExtendedAuthInfo *this, const char *messageInfo, const bdLoginTaskReportExtendedAuthInfo::ReportInfoState *code)
{
  ?updateReportStatus@bdLoginTaskReportExtendedAuthInfo@@IEAAXPEBDAEBW4ReportInfoState@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  ?startReportExtendedAuthInfo@bdLoginTaskReportExtendedAuthInfo@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::bdLoginTaskReportExtendedAuthInfo
==============
*/

void __fastcall bdLoginTaskReportExtendedAuthInfo::bdLoginTaskReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskReportExtendedAuthInfo@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::bdLoginTaskReportExtendedAuthInfo
==============
*/
void bdLoginTaskReportExtendedAuthInfo::bdLoginTaskReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskReportExtendedAuthInfo_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskReportExtendedAuthInfo_vtbl *)&bdLoginTaskReportExtendedAuthInfo::`vftable';
  this->m_loginResult = loginResult;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  this->m_reportExtendedAuthInfoTask.m_ptr = NULL;
  this->m_lobbyService = NULL;
  this->m_reportInfoState = UNINITIALIZED;
  memset_0(this->m_reportStatusMessage, 0, sizeof(this->m_reportStatusMessage));
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::~bdLoginTaskReportExtendedAuthInfo
==============
*/
void bdLoginTaskReportExtendedAuthInfo::~bdLoginTaskReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 

  this->__vftable = (bdLoginTaskReportExtendedAuthInfo_vtbl *)&bdLoginTaskReportExtendedAuthInfo::`vftable';
  bdLoginResult::resetLobbyService(this->m_loginResult);
  this->m_lobbyService = NULL;
  m_ptr = this->m_reportExtendedAuthInfoTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_reportExtendedAuthInfoTask.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_reportExtendedAuthInfoTask.m_ptr = NULL;
  }
  this->__vftable = (bdLoginTaskReportExtendedAuthInfo_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::abortTask
==============
*/
void bdLoginTaskReportExtendedAuthInfo::abortTask(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdLoginResult::resetLobbyService(this->m_loginResult);
  this->m_lobbyService = NULL;
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::getTaskCode
==============
*/
__int64 bdLoginTaskReportExtendedAuthInfo::getTaskCode(bdLoginTaskReportExtendedAuthInfo *this)
{
  return (unsigned int)this->m_reportInfoState;
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::getTaskMessage
==============
*/
char *bdLoginTaskReportExtendedAuthInfo::getTaskMessage(bdLoginTaskReportExtendedAuthInfo *this)
{
  return this->m_reportStatusMessage;
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::pump
==============
*/
void bdLoginTaskReportExtendedAuthInfo::pump(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdLoginTaskReportExtendedAuthInfo::ReportInfoState m_reportInfoState; 
  double ElapsedTimeInSeconds; 

  m_reportInfoState = this->m_reportInfoState;
  if ( m_reportInfoState )
  {
    if ( m_reportInfoState == NOT_CONNECTED )
    {
      bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo(this);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
      this->m_reportInfoState = CONNECTING;
      bdStrlcpy(this->m_reportStatusMessage, "Pumping report extended authInfo in unexpected state", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::pump", 0x37u, "Pumping report extended authInfo in unexpected state");
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo(this);
  }
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo
==============
*/
char bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdTask::bdStatus v2; 
  bdLobbyErrorCode ErrorCode; 
  double v4; 
  const char *v5; 
  double v7; 
  double ElapsedTimeInSeconds; 
  bdLobbyErrorCode v9; 

  v2 = this->m_reportExtendedAuthInfoTask.m_ptr->getStatus(this->m_reportExtendedAuthInfoTask.m_ptr);
  if ( v2 == BD_PENDING )
  {
    bdLobbyService::pump(this->m_lobbyService);
    if ( bdLobbyService::getErrorCode(this->m_lobbyService) )
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
      this->m_reportInfoState = CONNECTING;
      bdStrlcpy(this->m_reportStatusMessage, "Lobby connection errored out", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo", 0x5Du, "Lobby connection errored out");
    }
    return 0;
  }
  else if ( v2 == BD_DONE )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo", 0x61u, "Setting state to COMPLETED");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
    this->m_reportInfoState = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_reportStatusMessage, "Successfully reported ExtendedAuthInfo", 0x400ui64);
    v7 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&v7);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo", 0x63u, "Successfully reported ExtendedAuthInfo");
    return 1;
  }
  else
  {
    ErrorCode = bdRemoteTask::getErrorCode(this->m_reportExtendedAuthInfoTask.m_ptr);
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
    this->m_reportInfoState = CONNECTING;
    bdStrlcpy(this->m_reportStatusMessage, "Error encountered while reporting extended auth info", 0x400ui64);
    v4 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&v4);
    v5 = bdLobbyErrorCodeToString(ErrorCode);
    v9 = ErrorCode;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::pumpReportExtendedAuthInfo", 0x69u, "reportExtendedAuthInfo error: %s (%u)", v5, v9);
    return 0;
  }
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::reset
==============
*/
void bdLoginTaskReportExtendedAuthInfo::reset(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 

  bdLoginResult::resetLobbyService(this->m_loginResult);
  m_ptr = this->m_reportExtendedAuthInfoTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = this->m_reportExtendedAuthInfoTask.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
  }
  this->m_reportExtendedAuthInfoTask.m_ptr = NULL;
  this->m_lobbyService = NULL;
  this->m_reportInfoState = UNINITIALIZED;
  memset_0(this->m_reportStatusMessage, 0, sizeof(this->m_reportStatusMessage));
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo
==============
*/
void bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo(bdLoginTaskReportExtendedAuthInfo *this)
{
  bdAntiCheat *AntiCheat; 
  const bdExtendedAuthInfo *extendedAuthInfo; 
  unsigned __int64 InternalAddr; 
  const bdMACAddr *MacAddr; 
  unsigned int TitleVersion; 
  unsigned int GameMode; 
  bdLoginTaskReportExtendedAuthInfo *v8; 
  bdReference<bdRemoteTask> *p_m_reportExtendedAuthInfoTask; 
  bdRemoteTask **v10; 
  bdRemoteTask *v11; 
  double ElapsedTimeInSeconds; 
  bdReference<bdRemoteTask> v13; 
  bdMACAddr result; 

  this->m_lobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo", 0x3Fu, "Setting state to REPORTING_EXTENDED_AUTH_INFO");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
  this->m_reportInfoState = NOT_CONNECTED;
  bdStrlcpy(this->m_reportStatusMessage, "Beginning call to reportExtendedAuthInfo", 0x400ui64);
  AntiCheat = bdLobbyService::getAntiCheat(this->m_lobbyService);
  extendedAuthInfo = bdLoginResult::getExtendedAuthInfo(this->m_loginResult);
  InternalAddr = bdLoginConfig::getInternalAddr((bdLoginConfig *)this->m_loginConfig);
  MacAddr = bdLoginConfig::getMacAddr((bdLoginConfig *)this->m_loginConfig, &result);
  TitleVersion = bdLoginConfig::getTitleVersion((bdLoginConfig *)this->m_loginConfig);
  GameMode = bdLoginConfig::getGameMode((bdLoginConfig *)this->m_loginConfig);
  v8 = (bdLoginTaskReportExtendedAuthInfo *)bdAntiCheat::reportExtendedAuthInfo(AntiCheat, &v13, GameMode, TitleVersion, 0i64, MacAddr, InternalAddr, 0i64, extendedAuthInfo);
  p_m_reportExtendedAuthInfoTask = &this->m_reportExtendedAuthInfoTask;
  v10 = (bdRemoteTask **)v8;
  if ( v8 != (bdLoginTaskReportExtendedAuthInfo *)&this->m_reportExtendedAuthInfoTask )
  {
    if ( p_m_reportExtendedAuthInfoTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_reportExtendedAuthInfoTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_reportExtendedAuthInfoTask->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_reportExtendedAuthInfoTask->m_ptr->~bdReferencable)(p_m_reportExtendedAuthInfoTask->m_ptr, 1i64);
    v11 = *v10;
    p_m_reportExtendedAuthInfoTask->m_ptr = *v10;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  }
  if ( v13.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v13.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v13.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v13.m_ptr->~bdReferencable)(v13.m_ptr, 1i64);
  if ( !p_m_reportExtendedAuthInfoTask->m_ptr )
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
    this->m_reportInfoState = CONNECTING;
    bdStrlcpy(this->m_reportStatusMessage, "Failed to start task bdAntiCheat::reportExtendedAuthInfo()", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::startReportExtendedAuthInfo", 0x4Eu, "Failed to start task bdAntiCheat::reportExtendedAuthInfo()");
  }
}

/*
==============
bdLoginTaskReportExtendedAuthInfo::updateReportStatus
==============
*/
void bdLoginTaskReportExtendedAuthInfo::updateReportStatus(bdLoginTaskReportExtendedAuthInfo *this, const char *messageInfo, const bdLoginTaskReportExtendedAuthInfo::ReportInfoState *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x7Au, "Must provide valid message to update ReportInfoState!");
  this->m_reportInfoState = *code;
  bdStrlcpy(this->m_reportStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 2) <= 1 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskreportextendedauthinfo.cpp", "bdLoginTaskReportExtendedAuthInfo::updateReportStatus", 0x82u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

