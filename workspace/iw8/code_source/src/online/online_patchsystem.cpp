/*
==============
Online_PatchStreamer::GetPatchingProgressForMode
==============
*/

double __fastcall Online_PatchStreamer::GetPatchingProgressForMode(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gamemode)
{
  double result; 

  *(float *)&result = ?GetPatchingProgressForMode@Online_PatchStreamer@@AEAAMW4CCSPatchType@@W4GameModeType@@@Z(this, patchType, gamemode);
  return result;
}

/*
==============
Online_PatchStreamer::ProcessManifestEntry
==============
*/

bool __fastcall Online_PatchStreamer::ProcessManifestEntry(Online_PatchStreamer *this, const CCSPatchType patchType, const unsigned int entryIndex, const psManifestFileEntry_t *inManifestEntry, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutPermDCacheFiles, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutTempDcacheFiles, psManifestActionInfo_t *outAction)
{
  return ?ProcessManifestEntry@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@IPEBUpsManifestFileEntry_t@@PEAV?$fixed_list@PEAUdcacheFileDetails_t@@$0IAA@$0A@@ntl@@2PEAUpsManifestActionInfo_t@@@Z(this, patchType, entryIndex, inManifestEntry, inOutPermDCacheFiles, inOutTempDcacheFiles, outAction);
}

/*
==============
Online_PatchStreamer::RegisterLuaFunctions
==============
*/

void __fastcall Online_PatchStreamer::RegisterLuaFunctions(Online_PatchStreamer *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_PatchStreamer@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_PatchStreamer::GetActionContext
==============
*/

PatchManifestActionContext __fastcall Online_PatchStreamer::GetActionContext(Online_PatchStreamer *this, GameModeType gameMode)
{
  return ?GetActionContext@Online_PatchStreamer@@AEAA?AW4PatchManifestActionContext@@W4GameModeType@@@Z(this, gameMode);
}

/*
==============
Online_PatchStreamer::Reset
==============
*/

void __fastcall Online_PatchStreamer::Reset(Online_PatchStreamer *this, const CCSPatchType patchType, const bool persistManifestVersion)
{
  ?Reset@Online_PatchStreamer@@QEAAXW4CCSPatchType@@_N@Z(this, patchType, persistManifestVersion);
}

/*
==============
Online_PatchStreamer::Uninit
==============
*/

void __fastcall Online_PatchStreamer::Uninit(Online_PatchStreamer *this)
{
  ?Uninit@Online_PatchStreamer@@UEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::FetchManifest
==============
*/

bool __fastcall Online_PatchStreamer::FetchManifest(Online_PatchStreamer *this, const CCSPatchType patchType, bool preRelease)
{
  return ?FetchManifest@Online_PatchStreamer@@QEAA_NW4CCSPatchType@@_N@Z(this, patchType, preRelease);
}

/*
==============
Online_PatchStreamer::OnSignedIn
==============
*/

void __fastcall Online_PatchStreamer::OnSignedIn(Online_PatchStreamer *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_PatchStreamer@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_PatchStreamer::OnPatchFileSuccess
==============
*/

void __fastcall Online_PatchStreamer::OnPatchFileSuccess(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  ?OnPatchFileSuccess@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@I_N@Z(this, patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
Online_PatchStreamer::GetPatchManifestVersion
==============
*/

unsigned __int16 __fastcall Online_PatchStreamer::GetPatchManifestVersion(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?GetPatchManifestVersion@Online_PatchStreamer@@QEAAGW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::OnRegistered
==============
*/

void __fastcall Online_PatchStreamer::OnRegistered(Online_PatchStreamer *this)
{
  ?OnRegistered@Online_PatchStreamer@@UEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::GetManifestFileName
==============
*/

bool __fastcall Online_PatchStreamer::GetManifestFileName(Online_PatchStreamer *this, const CCSPatchType patchType, char *manifestFilename)
{
  return ?GetManifestFileName@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@PEAD@Z(this, patchType, manifestFilename);
}

/*
==============
Online_PatchStreamer::ProcessDownloadActions
==============
*/

void __fastcall Online_PatchStreamer::ProcessDownloadActions(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gameMode, const bool reevaluate, const bool requestDownload)
{
  ?ProcessDownloadActions@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4GameModeType@@_N2@Z(this, patchType, gameMode, reevaluate, requestDownload);
}

/*
==============
Online_PatchStreamer::OnPatchFileFailure
==============
*/

void __fastcall Online_PatchStreamer::OnPatchFileFailure(Online_PatchStreamer *this, const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  ?OnPatchFileFailure@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4Online_Error_CAT_CCS_t@@@Z(this, patchType, error);
}

/*
==============
Online_PatchStreamer::GetDCachePatchManifestData
==============
*/

bool __fastcall Online_PatchStreamer::GetDCachePatchManifestData(Online_PatchStreamer *this, const CCSPatchType patchType, unsigned __int8 (*manifestBuffer)[917504], psSignedManifestData_t *outManifestData)
{
  return ?GetDCachePatchManifestData@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@PEAY0OAAAA@EPEAUpsSignedManifestData_t@@@Z(this, patchType, manifestBuffer, outManifestData);
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleUnpack
==============
*/

bool __fastcall Online_PatchStreamer::StartupProcessingHandleUnpack(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  return ?StartupProcessingHandleUnpack@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@AEAUpsManifestActionInfo_t@@@Z(this, patchType, action);
}

/*
==============
Online_PatchStreamer::GetPatchPackFileDetails
==============
*/

bool __fastcall Online_PatchStreamer::GetPatchPackFileDetails(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheFileDetails_t *outFileDetails)
{
  return ?GetPatchPackFileDetails@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@PEAUdcacheFileDetails_t@@@Z(this, patchType, outFileDetails);
}

/*
==============
Online_PatchStreamer::HandlePatchSystemError
==============
*/

void __fastcall Online_PatchStreamer::HandlePatchSystemError(Online_PatchStreamer *this, CCSPatchType patchType, Online_Error_CAT_PATCHER_t error, const char *context, bool restartWithError)
{
  ?HandlePatchSystemError@Online_PatchStreamer@@AEAAXW4CCSPatchType@@W4Online_Error_CAT_PATCHER_t@@PEBD_N@Z(this, patchType, error, context, restartWithError);
}

/*
==============
Online_PatchStreamer::GetPatchTypeString
==============
*/

const char *__fastcall Online_PatchStreamer::GetPatchTypeString(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?GetPatchTypeString@Online_PatchStreamer@@AEAAPEBDW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::PerformStartupPatchManifestProcessing
==============
*/

void __fastcall Online_PatchStreamer::PerformStartupPatchManifestProcessing(Online_PatchStreamer *this)
{
  ?PerformStartupPatchManifestProcessing@Online_PatchStreamer@@QEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::OnPatchManifestProgress
==============
*/

void __fastcall Online_PatchStreamer::OnPatchManifestProgress(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  ?OnPatchManifestProgress@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@III@Z(this, patchType, cacheType, fileID, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
Online_PatchStreamer::StartPatchProcess
==============
*/

bool __fastcall Online_PatchStreamer::StartPatchProcess(Online_PatchStreamer *this, const CCSPatchType patchType, const int controllerIndex)
{
  return ?StartPatchProcess@Online_PatchStreamer@@QEAA_NW4CCSPatchType@@H@Z(this, patchType, controllerIndex);
}

/*
==============
PatchStreamer_OnManifestSuccess
==============
*/

void __fastcall PatchStreamer_OnManifestSuccess(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  ?PatchStreamer_OnManifestSuccess@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@I_N@Z(patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
Online_PatchStreamer::Frame
==============
*/

void __fastcall Online_PatchStreamer::Frame(Online_PatchStreamer *this)
{
  ?Frame@Online_PatchStreamer@@UEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::OnDWLogonStart
==============
*/

void __fastcall Online_PatchStreamer::OnDWLogonStart(Online_PatchStreamer *this, const int controllerIndex)
{
  ?OnDWLogonStart@Online_PatchStreamer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_PatchStreamer::AddAction
==============
*/

void __fastcall Online_PatchStreamer::AddAction(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *inActionInfo)
{
  ?AddAction@Online_PatchStreamer@@AEAAXW4CCSPatchType@@PEAUpsManifestActionInfo_t@@@Z(this, patchType, inActionInfo);
}

/*
==============
Online_PatchStreamer::GetCCSPatchData
==============
*/

CCSPatchData *__fastcall Online_PatchStreamer::GetCCSPatchData(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?GetCCSPatchData@Online_PatchStreamer@@AEAAPEAUCCSPatchData@@W4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::DoWeHaveManifest
==============
*/

bool __fastcall Online_PatchStreamer::DoWeHaveManifest(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?DoWeHaveManifest@Online_PatchStreamer@@QEAA_NW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
PatchStreamer_OnPatchFileFailure
==============
*/

void __fastcall PatchStreamer_OnPatchFileFailure(const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  ?PatchStreamer_OnPatchFileFailure@@YAXW4CCSPatchType@@W4Online_Error_CAT_CCS_t@@@Z(patchType, error);
}

/*
==============
Online_PatchStreamer::EvaluatePatchManifestVersion
==============
*/

bool __fastcall Online_PatchStreamer::EvaluatePatchManifestVersion(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?EvaluatePatchManifestVersion@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
PatchStreamer_OnManifestProgress
==============
*/

void __fastcall PatchStreamer_OnManifestProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  ?PatchStreamer_OnManifestProgress@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@III@Z(patchType, cacheType, fileID, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
Online_PatchStreamer::GetPatchingErrorCode
==============
*/

int __fastcall Online_PatchStreamer::GetPatchingErrorCode(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?GetPatchingErrorCode@Online_PatchStreamer@@QEAAHW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleDecrypt
==============
*/

bool __fastcall Online_PatchStreamer::StartupProcessingHandleDecrypt(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  return ?StartupProcessingHandleDecrypt@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@AEAUpsManifestActionInfo_t@@@Z(this, patchType, action);
}

/*
==============
PatchStreamer_OnPatchFileSuccess
==============
*/

void __fastcall PatchStreamer_OnPatchFileSuccess(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  ?PatchStreamer_OnPatchFileSuccess@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@I_N@Z(patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
Online_PatchStreamer::CheckManifestUpdate
==============
*/

bool __fastcall Online_PatchStreamer::CheckManifestUpdate(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?CheckManifestUpdate@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::OnPatchFileProgress
==============
*/

void __fastcall Online_PatchStreamer::OnPatchFileProgress(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  ?OnPatchFileProgress@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@III@Z(this, patchType, cacheType, fileID, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
PS_DebugStartPatchStreamer_f
==============
*/

void __fastcall PS_DebugStartPatchStreamer_f()
{
  ?PS_DebugStartPatchStreamer_f@@YAXXZ();
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleInflate
==============
*/

bool __fastcall Online_PatchStreamer::StartupProcessingHandleInflate(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  return ?StartupProcessingHandleInflate@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@AEAUpsManifestActionInfo_t@@@Z(this, patchType, action);
}

/*
==============
Online_PatchStreamer::OnFenceReset
==============
*/

void __fastcall Online_PatchStreamer::OnFenceReset(Online_PatchStreamer *this)
{
  ?OnFenceReset@Online_PatchStreamer@@QEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::GetInstance
==============
*/

Online_PatchStreamer *__fastcall Online_PatchStreamer::GetInstance()
{
  return ?GetInstance@Online_PatchStreamer@@SAAEAV1@XZ();
}

/*
==============
Online_PatchStreamer::GetDCachePatchManifestBuffer
==============
*/

bool __fastcall Online_PatchStreamer::GetDCachePatchManifestBuffer(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, unsigned __int8 (*outManifestBuffer)[917504])
{
  return ?GetDCachePatchManifestBuffer@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@PEAY0OAAAA@E@Z(this, patchType, cacheType, fileID, location, outManifestBuffer);
}

/*
==============
Online_PatchStreamer::AllocatePMem
==============
*/

void __fastcall Online_PatchStreamer::AllocatePMem(Online_PatchStreamer *this, unsigned __int8 (**outManifestBuffer)[917504], psSignedManifestData_t **outManifestData)
{
  ?AllocatePMem@Online_PatchStreamer@@AEAAXPEAPEAY0OAAAA@EPEAPEAUpsSignedManifestData_t@@@Z(this, outManifestBuffer, outManifestData);
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleDecryptInflate
==============
*/

bool __fastcall Online_PatchStreamer::StartupProcessingHandleDecryptInflate(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  return ?StartupProcessingHandleDecryptInflate@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@AEAUpsManifestActionInfo_t@@@Z(this, patchType, action);
}

/*
==============
Online_PatchStreamer::GenerateManifestResults
==============
*/

bool __fastcall Online_PatchStreamer::GenerateManifestResults(Online_PatchStreamer *this, const CCSPatchType patchType, psSignedManifestData_t *manifestData, bool purgeCache)
{
  return ?GenerateManifestResults@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@PEAUpsSignedManifestData_t@@_N@Z(this, patchType, manifestData, purgeCache);
}

/*
==============
Online_PatchStreamer::OnPatchManifestFailure
==============
*/

void __fastcall Online_PatchStreamer::OnPatchManifestFailure(Online_PatchStreamer *this, const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  ?OnPatchManifestFailure@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4Online_Error_CAT_CCS_t@@@Z(this, patchType, error);
}

/*
==============
PatchStreamer_OnPatchFileProgress
==============
*/

void __fastcall PatchStreamer_OnPatchFileProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes, const unsigned int currentDownloadBytes, const unsigned int totalSizeBytes)
{
  ?PatchStreamer_OnPatchFileProgress@@YAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@III@Z(patchType, cacheType, fileID, location, packetBytes, currentDownloadBytes, totalSizeBytes);
}

/*
==============
Online_PatchStreamer::GetInstancePtr
==============
*/

Online_PatchStreamer *__fastcall Online_PatchStreamer::GetInstancePtr()
{
  return ?GetInstancePtr@Online_PatchStreamer@@SAPEAV1@XZ();
}

/*
==============
Online_PatchStreamer::PerformManifestDownloadAction
==============
*/

bool __fastcall Online_PatchStreamer::PerformManifestDownloadAction(Online_PatchStreamer *this, const CCSPatchType patchType, GameModeType gameMode, const psManifestActionInfo_t *actionInfo)
{
  return ?PerformManifestDownloadAction@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@W4GameModeType@@AEBUpsManifestActionInfo_t@@@Z(this, patchType, gameMode, actionInfo);
}

/*
==============
Online_PatchStreamer::GetPatchingProgress
==============
*/

double __fastcall Online_PatchStreamer::GetPatchingProgress(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  double result; 

  *(float *)&result = ?GetPatchingProgress@Online_PatchStreamer@@QEAAMW4CCSPatchType@@@Z(this, patchType);
  return result;
}

/*
==============
Online_PatchStreamer::OnDisconnect
==============
*/

void __fastcall Online_PatchStreamer::OnDisconnect(Online_PatchStreamer *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_PatchStreamer@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleCopy
==============
*/

bool __fastcall Online_PatchStreamer::StartupProcessingHandleCopy(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  return ?StartupProcessingHandleCopy@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@AEAUpsManifestActionInfo_t@@@Z(this, patchType, action);
}

/*
==============
Online_PatchStreamer::OnSignedOut
==============
*/

void __fastcall Online_PatchStreamer::OnSignedOut(Online_PatchStreamer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_PatchStreamer@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_PatchStreamer::PerformStartupPatchManifestProcessing_Internal
==============
*/

bool __fastcall Online_PatchStreamer::PerformStartupPatchManifestProcessing_Internal(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?PerformStartupPatchManifestProcessing_Internal@Online_PatchStreamer@@AEAA_NW4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::Online_PatchStreamer
==============
*/

void __fastcall Online_PatchStreamer::Online_PatchStreamer(Online_PatchStreamer *this)
{
  ??0Online_PatchStreamer@@AEAA@XZ(this);
}

/*
==============
Online_PatchStreamer::MarkAllForDelete
==============
*/

void __fastcall Online_PatchStreamer::MarkAllForDelete(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheType_t cacheType, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutDCacheFiles)
{
  ?MarkAllForDelete@Online_PatchStreamer@@AEAAXW4CCSPatchType@@W4dcacheType_t@@PEAV?$fixed_list@PEAUdcacheFileDetails_t@@$0IAA@$0A@@ntl@@@Z(this, patchType, cacheType, inOutDCacheFiles);
}

/*
==============
Online_PatchStreamer::ResetAll
==============
*/

void __fastcall Online_PatchStreamer::ResetAll(Online_PatchStreamer *this, const bool persistManifestVersion)
{
  ?ResetAll@Online_PatchStreamer@@QEAAX_N@Z(this, persistManifestVersion);
}

/*
==============
Online_PatchStreamer::OnPatchManifestSuccess
==============
*/

void __fastcall Online_PatchStreamer::OnPatchManifestSuccess(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  ?OnPatchManifestSuccess@Online_PatchStreamer@@QEAAXW4CCSPatchType@@W4dcacheType_t@@_KW4dcacheLocation_t@@I_N@Z(this, patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
Online_PatchStreamer::GetManifestFileVersion
==============
*/

bool __fastcall Online_PatchStreamer::GetManifestFileVersion(Online_PatchStreamer *this, bool preRelease, int *manifestVersion)
{
  return ?GetManifestFileVersion@Online_PatchStreamer@@AEAA_N_NPEAH@Z(this, preRelease, manifestVersion);
}

/*
==============
Online_PatchStreamer::ControllerFrame
==============
*/

void __fastcall Online_PatchStreamer::ControllerFrame(Online_PatchStreamer *this, const int controllerIndex)
{
  ?ControllerFrame@Online_PatchStreamer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_PatchStreamer::GetPackFileName
==============
*/

void __fastcall Online_PatchStreamer::GetPackFileName(Online_PatchStreamer *this, const CCSPatchType patchType, char *packFileName)
{
  ?GetPackFileName@Online_PatchStreamer@@AEAAXW4CCSPatchType@@PEAD@Z(this, patchType, packFileName);
}

/*
==============
PS_DebugSetGameMode_f
==============
*/

void __fastcall PS_DebugSetGameMode_f()
{
  ?PS_DebugSetGameMode_f@@YAXXZ();
}

/*
==============
Online_PatchStreamer::UpdatePatchingStatus
==============
*/

void __fastcall Online_PatchStreamer::UpdatePatchingStatus(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gamemode)
{
  ?UpdatePatchingStatus@Online_PatchStreamer@@AEAAXW4CCSPatchType@@W4GameModeType@@@Z(this, patchType, gamemode);
}

/*
==============
Online_PatchStreamer::SendActionReport
==============
*/

void __fastcall Online_PatchStreamer::SendActionReport(Online_PatchStreamer *this)
{
  ?SendActionReport@Online_PatchStreamer@@QEAAXXZ(this);
}

/*
==============
PatchFenceDependenciesUpdated
==============
*/

void __fastcall PatchFenceDependenciesUpdated(int controllerIndex, bool value)
{
  ?PatchFenceDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_PatchStreamer::GetPatchingStatus
==============
*/

PSPatchingStatus __fastcall Online_PatchStreamer::GetPatchingStatus(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  return ?GetPatchingStatus@Online_PatchStreamer@@QEAA?AW4PSPatchingStatus@@W4CCSPatchType@@@Z(this, patchType);
}

/*
==============
Online_PatchStreamer::Init
==============
*/

bool __fastcall Online_PatchStreamer::Init(Online_PatchStreamer *this)
{
  return ?Init@Online_PatchStreamer@@UEAA_NXZ(this);
}

/*
==============
Online_PatchStreamer::FreePMem
==============
*/

void __fastcall Online_PatchStreamer::FreePMem(Online_PatchStreamer *this)
{
  ?FreePMem@Online_PatchStreamer@@AEAAXXZ(this);
}

/*
==============
Online_PatchStreamer::OnUnregistered
==============
*/

void __fastcall Online_PatchStreamer::OnUnregistered(Online_PatchStreamer *this)
{
  ?OnUnregistered@Online_PatchStreamer@@UEAAXXZ(this);
}

/*
==============
PatchStreamer_OnManifestFailure
==============
*/

void __fastcall PatchStreamer_OnManifestFailure(const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  ?PatchStreamer_OnManifestFailure@@YAXW4CCSPatchType@@W4Online_Error_CAT_CCS_t@@@Z(patchType, error);
}

/*
==============
Online_PatchStreamer::OutputCurrentState
==============
*/

void __fastcall Online_PatchStreamer::OutputCurrentState(Online_PatchStreamer *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_PatchStreamer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_PatchStreamer::OnRegistered
==============
*/
void Online_PatchStreamer::OnRegistered(Online_PatchStreamer *this)
{
  ;
}

/*
==============
Online_PatchStreamer::OnUnregistered
==============
*/
void Online_PatchStreamer::OnUnregistered(Online_PatchStreamer *this)
{
  ;
}

/*
==============
Online_PatchStreamer::Init
==============
*/
char Online_PatchStreamer::Init(Online_PatchStreamer *this)
{
  CachedContentCrypto *Instance; 
  __int64 v3; 
  int i; 
  __int64 v5; 
  bool v6; 

  OnlineSystem::DebugLog(this, "Online_PatchStreamer::Init");
  Cmd_AddCommandInternal("ps_Start", PS_DebugStartPatchStreamer_f, &PS_DebugStartPatchStreamer_f_VAR);
  Cmd_AddCommandInternal("ps_SetGameMode", PS_DebugSetGameMode_f, &PS_DebugSetGameMode_f_VAR);
  Instance = CachedContentCrypto::GetInstance();
  CachedContentCrypto::Init(Instance);
  v3 = 0i64;
  for ( i = 0; i < 2; ++i )
    Online_PatchStreamer::Reset(this, (const CCSPatchType)i, 1);
  this->m_initialized = 1;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      j___report_rangecheckfailure(v5);
      JUMPOUT(0x140E1F14Di64);
    }
    s_patchFenceDependenciesMet[v3] = 0;
    v6 = (unsigned __int64)++v3 < 8;
  }
  while ( v3 < 8 );
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_PATCH, PatchFenceDependenciesUpdated);
  return 1;
}

/*
==============
Online_PatchStreamer::Uninit
==============
*/
void Online_PatchStreamer::Uninit(Online_PatchStreamer *this)
{
  Cmd_RemoveCommand("ps_Start");
}

/*
==============
Online_PatchStreamer::Frame
==============
*/
void Online_PatchStreamer::Frame(Online_PatchStreamer *this)
{
  unsigned __int8 ActiveGameMode; 
  int v3; 
  bool v4; 
  PSPatchingStatus *p_patchingStatus; 
  unsigned __int8 v6; 
  PSPatchingStatus v7; 
  const dvar_t *v8; 
  __int64 v9; 
  __int64 v10; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v3 = 0;
  v4 = 1;
  p_patchingStatus = &this->m_ccsPatchData[0].patchingStatus;
  v6 = ActiveGameMode;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v7 = *p_patchingStatus;
    if ( *((_BYTE *)p_patchingStatus - 89) )
    {
      if ( v7 == PS_PATCHING_IN_PROGRESS )
        goto LABEL_15;
    }
    else if ( v7 == PS_PATCHING_IN_PROGRESS )
    {
      Online_PatchStreamer::ProcessDownloadActions(this, (const CCSPatchType)v3, (const GameModeType)v6, 0, 1);
      goto LABEL_15;
    }
    if ( Com_FrontEnd_IsInFrontEnd() && this->m_manifestUpdateNextCheckTime <= Sys_Milliseconds() )
    {
      ++this->m_manifestUpdateCheckAttemptCount;
      v8 = DVARINT_online_patching_fetch_prerelease;
      if ( !DVARINT_online_patching_fetch_prerelease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_patching_fetch_prerelease") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      Online_PatchStreamer::FetchManifest(this, (const CCSPatchType)v3, v8->current.integer != 0);
    }
LABEL_15:
    ++v3;
    p_patchingStatus += 100;
    v4 = (unsigned int)v3 < 2;
  }
  while ( v3 < 2 );
}

/*
==============
Online_PatchStreamer::ControllerFrame
==============
*/
void Online_PatchStreamer::ControllerFrame(Online_PatchStreamer *this, const int controllerIndex)
{
  int v2; 
  __int64 v3; 
  bool v4; 
  bool *p_downloadedManifest; 
  const dvar_t *v6; 
  CCSPatchData *CCSPatchData; 
  int Int_Internal_DebugName; 
  __int64 v9; 
  __int64 v10; 

  v2 = 0;
  v3 = controllerIndex;
  v4 = 1;
  p_downloadedManifest = &Online_PatchStreamer::s_instance.m_ccsPatchData[0].downloadedManifest;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !*p_downloadedManifest && s_patchFenceDependenciesMet[v3] && Live_IsUserSignedInToDemonware(v3) )
    {
      v6 = DVARBOOL_online_ccs_cs_support_enabled;
      if ( !DVARBOOL_online_ccs_cs_support_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_cs_support_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( !v6->current.enabled || LiveStorage_CS_IsAvailable(v3) )
      {
        if ( Online_PatchStreamer::s_instance.m_controllerIndex == -1 )
        {
          Online_PatchStreamer::s_instance.m_controllerIndex = v3;
        }
        else if ( Online_PatchStreamer::s_instance.m_controllerIndex != (_DWORD)v3 )
        {
          goto LABEL_19;
        }
        CCSPatchData = Online_PatchStreamer::GetCCSPatchData(&Online_PatchStreamer::s_instance, (const CCSPatchType)v2);
        if ( !CCSPatchData->requestedManifest && !CCSPatchData->downloadedManifest )
        {
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_patching_fetch_prerelease, "online_patching_fetch_prerelease");
          Online_PatchStreamer::FetchManifest(&Online_PatchStreamer::s_instance, (const CCSPatchType)v2, Int_Internal_DebugName != 0);
        }
      }
    }
LABEL_19:
    ++v2;
    p_downloadedManifest += 100;
    v4 = (unsigned int)v2 < 2;
  }
  while ( v2 < 2 );
}

/*
==============
Online_PatchStreamer::OnSignedIn
==============
*/
void Online_PatchStreamer::OnSignedIn(Online_PatchStreamer *this, const int controllerIndex, GenericSignInState signinState)
{
  int v5; 
  bool v6; 
  bool *p_downloadedManifest; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 

  if ( this->m_controllerIndex == controllerIndex )
  {
    v5 = 0;
    v6 = 1;
    p_downloadedManifest = &this->m_ccsPatchData[0].downloadedManifest;
    do
    {
      if ( !v6 )
      {
        LODWORD(v10) = 2;
        LODWORD(v9) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      v8 = *(p_downloadedManifest - 2) || *p_downloadedManifest;
      if ( v8 && (unsigned __int8)(p_downloadedManifest[86] - 1) > 1u && signinState < SignedInToDemonWare )
        Online_PatchStreamer::Reset(this, (const CCSPatchType)v5, 1);
      ++v5;
      p_downloadedManifest += 100;
      v6 = (unsigned int)v5 < 2;
    }
    while ( v5 < 2 );
  }
}

/*
==============
Online_PatchStreamer::OnSignedOut
==============
*/
void Online_PatchStreamer::OnSignedOut(Online_PatchStreamer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  const char *v5; 
  int i; 

  v5 = j_va("Online_PatchStreamer::OnSignedOut: m_controllerIndex=%d, controllerIndex=%d ", (unsigned int)this->m_controllerIndex, (unsigned int)controllerIndex);
  OnlineSystem::DebugLog(this, v5);
  for ( i = 0; i < 2; ++i )
  {
    if ( this->m_controllerIndex == controllerIndex )
      Online_PatchStreamer::Reset(this, (const CCSPatchType)i, 1);
  }
}

/*
==============
Online_PatchStreamer::OnDisconnect
==============
*/
void Online_PatchStreamer::OnDisconnect(Online_PatchStreamer *this, ONLINE_DISCONNECT reason)
{
  const char *v3; 
  int i; 

  v3 = j_va("Online_PatchStreamer::OnDisconnect: m_controllerIndex=%d, reason=%d ", (unsigned int)this->m_controllerIndex, (unsigned int)reason);
  OnlineSystem::DebugLog(this, v3);
  for ( i = 0; i < 2; ++i )
    Online_PatchStreamer::Reset(this, (const CCSPatchType)i, 1);
}

/*
==============
Online_PatchStreamer::RegisterLuaFunctions
==============
*/
void Online_PatchStreamer::RegisterLuaFunctions(Online_PatchStreamer *this, lua_State *luaVM)
{
  ;
}

/*
==============
Online_PatchStreamer::OutputCurrentState
==============
*/
void Online_PatchStreamer::OutputCurrentState(Online_PatchStreamer *this, const int controllerIndex)
{
  Com_Printf(25, "PATCHSTREAMER SYSTEM DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "PATCHSTREAMER SYSTEM DUMP END\n");
}

/*
==============
Online_PatchStreamer::Online_PatchStreamer
==============
*/
void Online_PatchStreamer::Online_PatchStreamer(Online_PatchStreamer *this)
{
  int v2; 
  CCSPatchData *m_ccsPatchData; 
  __int64 v4; 
  ntl::internal::pool_allocator_freelist<672> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<672> *v6; 
  unsigned int v7; 
  bool *v8; 
  unsigned int *allActions; 
  Online_PatchStreamer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t> > *p_m_listHead; 
  Online_PatchStreamer *m_nextSystem; 

  v2 = 0;
  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (Online_PatchStreamer_vtbl *)&Online_PatchStreamer::`vftable';
  m_ccsPatchData = this->m_ccsPatchData;
  v4 = 2i64;
  do
  {
    CCSPatchData::CCSPatchData(m_ccsPatchData++);
    --v4;
  }
  while ( v4 );
  p_m_freelist = &this->m_currentActions.actionInfoList.m_freelist;
  v6 = &this->m_currentActions.actionInfoList.m_freelist;
  do
  {
    v6 -= 84;
    v6->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v6;
  }
  while ( v6 > (ntl::internal::pool_allocator_freelist<672> *)&this->m_currentActions.actionInfoList );
  this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = &v6->m_head;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_prev = &this->m_currentActions.actionInfoList.m_listHead.m_sentinel;
  this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next = &this->m_currentActions.actionInfoList.m_listHead.m_sentinel;
  v7 = 0;
  v8 = &this->m_currentActions.valid[1];
  allActions = this->m_currentActions.allActions;
  do
  {
    *(v8 - 1) = 0;
    allActions[2] = 0;
    *allActions = 0;
    *v8 = 0;
    allActions[3] = 0;
    allActions[1] = 0;
    v7 += 2;
    allActions += 2;
    v8 += 2;
  }
  while ( v7 < 2 );
  mp_next = (Online_PatchStreamer *)this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_currentActions.actionInfoList.m_listHead;
  if ( mp_next != (Online_PatchStreamer *)&this->m_currentActions.actionInfoList.m_listHead )
  {
    do
    {
      m_nextSystem = (Online_PatchStreamer *)mp_next->m_nextSystem;
      mp_next->__vftable = (Online_PatchStreamer_vtbl *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
      this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      mp_next = m_nextSystem;
    }
    while ( m_nextSystem != (Online_PatchStreamer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next = &this->m_currentActions.actionInfoList.m_listHead.m_sentinel;
  do
    Online_PatchStreamer::Reset(this, (const CCSPatchType)v2++, 0);
  while ( v2 < 2 );
}

/*
==============
Online_PatchStreamer::AddAction
==============
*/
void Online_PatchStreamer::AddAction(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *inActionInfo)
{
  __int64 v3; 
  ntl::internal::pool_allocator_freelist<672> *p_m_freelist; 
  ntl::internal::list_node<psManifestActionInfo_t> *mp_next; 
  __int64 v9; 

  v3 = patchType;
  if ( !inActionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1731, ASSERT_TYPE_ASSERT, "(inActionInfo)", (const char *)&queryFormat, "inActionInfo") )
    __debugbreak();
  p_m_freelist = &this->m_currentActions.actionInfoList.m_freelist;
  if ( !this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<672> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x2A0ui64, 0x1000ui64) )
    __debugbreak();
  mp_next = (ntl::internal::list_node<psManifestActionInfo_t> *)p_m_freelist->m_head.mp_next;
  _RCX = inActionInfo;
  v9 = 5i64;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  mp_next->mp_prev = NULL;
  mp_next->mp_next = NULL;
  _RAX = &mp_next->m_data;
  do
  {
    _RAX = (psManifestActionInfo_t *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = (psManifestActionInfo_t *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rax], xmm0
  }
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::insert_before(&this->m_currentActions.actionInfoList.m_listHead, (ntl::internal::list_node<psManifestActionInfo_t> *)&this->m_currentActions.actionInfoList.m_listHead, mp_next);
  this->m_currentActions.allActions[v3] |= inActionInfo->action;
  if ( (inActionInfo->action & 0x10) != 0 )
    this->m_currentActions.downloadActionContexts[v3] |= inActionInfo->context;
}

/*
==============
Online_PatchStreamer::AllocatePMem
==============
*/
void Online_PatchStreamer::AllocatePMem(Online_PatchStreamer *this, unsigned __int8 (**outManifestBuffer)[917504], psSignedManifestData_t **outManifestData)
{
  PMem_BeginAlloc("patch_system", PMEM_STACK_GAME);
  *outManifestBuffer = (unsigned __int8 (*)[917504])PMem_Alloc(0xE0000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "patch_system:m_currentManifestBuffer");
  *outManifestData = (psSignedManifestData_t *)PMem_Alloc(0xDC10Cui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "patch_system:m_currentManifestData");
  PMem_EndAlloc("patch_system", PMEM_STACK_GAME);
  if ( !*outManifestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 223, ASSERT_TYPE_ASSERT, "(*outManifestBuffer)", (const char *)&queryFormat, "*outManifestBuffer") )
    __debugbreak();
  if ( !*outManifestData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 224, ASSERT_TYPE_ASSERT, "(*outManifestData)", (const char *)&queryFormat, "*outManifestData") )
    __debugbreak();
}

/*
==============
Online_PatchStreamer::CheckManifestUpdate
==============
*/
bool Online_PatchStreamer::CheckManifestUpdate(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  const dvar_t *v4; 

  if ( !Com_FrontEnd_IsInFrontEnd() || this->m_manifestUpdateNextCheckTime > Sys_Milliseconds() )
    return 0;
  ++this->m_manifestUpdateCheckAttemptCount;
  v4 = DVARINT_online_patching_fetch_prerelease;
  if ( !DVARINT_online_patching_fetch_prerelease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_patching_fetch_prerelease") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return Online_PatchStreamer::FetchManifest(this, patchType, v4->current.integer != 0);
}

/*
==============
Online_PatchStreamer::DoWeHaveManifest
==============
*/
_BOOL8 Online_PatchStreamer::DoWeHaveManifest(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  int v6; 

  v2 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v6) )
      __debugbreak();
  }
  return this->m_ccsPatchData[v2].downloadedManifest;
}

/*
==============
Online_PatchStreamer::EvaluatePatchManifestVersion
==============
*/
char Online_PatchStreamer::EvaluatePatchManifestVersion(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  unsigned __int64 FileIDByFilename; 
  char *v5; 
  const char *v6; 
  char v7; 
  int v8; 
  unsigned __int8 (*v9)[917504]; 
  psSignedManifestData_t *v10; 
  CachedContentCrypto *Instance; 
  CachedContentCrypto *v12; 
  CachedContentCrypto *v13; 
  CachedContentCrypto *v14; 
  const char *v15; 
  Online_ErrorReporting *InstancePtr; 
  const char *v17; 
  Online_ErrorReporting *v18; 
  CCSPatchData *CCSPatchData; 
  unsigned __int8 (*outManifestBuffer)[917504]; 
  psSignedManifestData_t *outManifestData; 
  cccHashValueSHA256_t hash; 
  StreamerMemLoan result; 
  char manifestFilename[256]; 

  v2 = patchType;
  memset(&hash, 0, sizeof(hash));
  Online_PatchStreamer::GetManifestFileName(this, patchType, manifestFilename);
  FileIDByFilename = DCache_GetFileIDByFilename(manifestFilename, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_CCS_DEFAULT);
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v2, 2) )
    __debugbreak();
  v5 = (char *)this + 100 * v2;
  if ( FileIDByFilename )
  {
    v8 = 0;
    outManifestData = NULL;
    outManifestBuffer = NULL;
    Online_PatchStreamer::AllocatePMem(this, &outManifestBuffer, &outManifestData);
    v9 = outManifestBuffer;
    if ( Online_PatchStreamer::GetDCachePatchManifestBuffer(this, (const CCSPatchType)v2, DCACHE_TYPE_PERSISTENT, FileIDByFilename, DCACHE_LOC_CCS_DEFAULT, outManifestBuffer) && (v10 = outManifestData, Online_PatchStreamer::GetDCachePatchManifestData(this, (const CCSPatchType)v2, v9, outManifestData)) )
    {
      Instance = CachedContentCrypto::GetInstance();
      if ( !CachedContentCrypto::Hash_SHA256Init(Instance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1299, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
        __debugbreak();
      v12 = CachedContentCrypto::GetInstance();
      if ( !CachedContentCrypto::Hash_SHA256Process(v12, (unsigned __int8 *)v10, 0xDC00Cu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1301, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
        __debugbreak();
      v13 = CachedContentCrypto::GetInstance();
      if ( !CachedContentCrypto::Hash_SHA256Done(v13, &hash) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1303, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
        __debugbreak();
      v14 = CachedContentCrypto::GetInstance();
      if ( !CachedContentCrypto::RSAVerify_SHA256(v14, &hash, &v10->signature) )
      {
        v15 = j_va("GetPatchManifestVersion: Error: Manifest signature mismatch!\n");
        OnlineSystem::DebugLog(this, v15);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
      }
      *((_WORD *)v5 + 40) = v10->data.manifestVersion;
      Online_PatchStreamer::FreePMem(this);
      return 1;
    }
    else
    {
      v17 = j_va("GetPatchManifestVersion: Error processing manifest. \n");
      OnlineSystem::DebugLog(this, v17);
      PMem_Free(&result, "patch_system", PMEM_STACK_GAME);
      StreamerMemLoan::~StreamerMemLoan(&result);
      v18 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v18, MOVEMENT, NULL);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
      do
      {
        if ( v8 >= 65 )
          break;
        ++v8;
      }
      while ( ((0x800000000000ui64 >> v8) & 1) == 0 );
      v7 = 0;
      CCSPatchData->patchingErrorCode = v8;
      *((_WORD *)v5 + 40) = 32766;
    }
  }
  else
  {
    v6 = j_va("GetPatchManifestVersion: Manifest file not found. \n");
    OnlineSystem::DebugLog(this, v6);
    v7 = 0;
    *((_WORD *)v5 + 40) = 0x7FFF;
  }
  return v7;
}

/*
==============
Online_PatchStreamer::FetchManifest
==============
*/
bool Online_PatchStreamer::FetchManifest(Online_PatchStreamer *this, const CCSPatchType patchType, bool preRelease)
{
  const char *v6; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v9; 
  bool result; 
  const dvar_t *v11; 
  unsigned int fileVersion; 
  CCSPatchData *v13; 
  Online_CachedContentStreamer *Instance; 
  Online_ErrorReporting *v15; 
  CCSPatchData *v16; 
  char manifestFilename[256]; 

  if ( this->m_controllerIndex == -1 )
  {
    v6 = j_va("%d", preRelease);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v6);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v6);
    v9 = 0;
    do
    {
      if ( v9 >= 65 )
        break;
      ++v9;
    }
    while ( ((0x10000000000000ui64 >> v9) & 1) == 0 );
    CCSPatchData->patchingErrorCode = v9;
    return 0;
  }
  else
  {
    Online_PatchStreamer::GetManifestFileName(this, patchType, manifestFilename);
    v11 = DVARINT_patchmanifestversionoverride;
    if ( !DVARINT_patchmanifestversionoverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchmanifestversionoverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    fileVersion = v11->current.unsignedInt;
    if ( !fileVersion )
      fileVersion = preRelease + 1;
    v13 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    Instance = Online_CachedContentStreamer::GetInstance();
    if ( Online_CachedContentStreamer::TryRequestStreamToCache(Instance, this->m_controllerIndex, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_CCS_DEFAULT, manifestFilename, fileVersion, 1, patchType, PatchStreamer_OnManifestSuccess, PatchStreamer_OnManifestFailure, PatchStreamer_OnManifestProgress) )
    {
      this->m_manifestUpdateNextCheckTime = 60000 * patchManifestUpdateCheckMinutes->current.integer + Sys_Milliseconds();
      result = 1;
      v13->requestedManifest = 1;
      v13->requestedPreRelease = preRelease;
    }
    else
    {
      v15 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v15, DODGE, NULL);
      v16 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      v16->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
      result = 0;
      v16->patchingErrorCode = 0;
    }
  }
  return result;
}

/*
==============
Online_PatchStreamer::FreePMem
==============
*/
void Online_PatchStreamer::FreePMem(Online_PatchStreamer *this)
{
  StreamerMemLoan result; 

  PMem_Free(&result, "patch_system", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
Online_PatchStreamer::GenerateManifestResults
==============
*/
char Online_PatchStreamer::GenerateManifestResults(Online_PatchStreamer *this, const CCSPatchType patchType, psSignedManifestData_t *manifestData, bool purgeCache)
{
  psSignedManifestData_t *v5; 
  CCSPatchType v6; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  char *v9; 
  ntl::internal::pool_allocator_freelist<24> *v10; 
  char *v11; 
  CachedContentCrypto *Instance; 
  CachedContentCrypto *v13; 
  CachedContentCrypto *v14; 
  CachedContentCrypto *v15; 
  const char *v16; 
  Online_ErrorReporting *InstancePtr; 
  const char *v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> *v21; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v22; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> *v23; 
  const char *v24; 
  __int64 v25; 
  ntl::internal::list_node_base *i; 
  const char *v27; 
  ntl::internal::list_node_base *v28; 
  ntl::internal::list_node_base *mp_prev; 
  const char *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  __int64 v33; 
  ntl::internal::list_node_base *j; 
  const char *v35; 
  ntl::internal::list_node_base *v36; 
  ntl::internal::list_node_base *v37; 
  const char *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  unsigned __int16 dataVersionFF; 
  const char *v42; 
  unsigned int k; 
  __int64 v44; 
  ntl::internal::list_node_base *m; 
  __int64 v46; 
  ntl::internal::list_node_base *n; 
  const char *v48; 
  const dvar_t *v49; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v50; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v51; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> *v52; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v53; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v54; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> *v55; 
  char *fmt; 
  psManifestActionInfo_t inActionInfo; 
  cccHashValueSHA256_t hash; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> inOutDCacheFiles; 
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> outFiles; 

  v5 = manifestData;
  v6 = patchType;
  memset(&hash, 0, sizeof(hash));
  p_m_freelist = &outFiles.m_freelist;
  v9 = &outFiles.m_data.m_buffer[49128];
  do
  {
    *(_QWORD *)v9 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<24> *)v9;
    v9 -= 24;
  }
  while ( v9 + 24 > (char *)&outFiles );
  outFiles.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  outFiles.m_listHead.m_sentinel.mp_prev = &outFiles.m_listHead.m_sentinel;
  outFiles.m_listHead.m_sentinel.mp_next = &outFiles.m_listHead.m_sentinel;
  v10 = &inOutDCacheFiles.m_freelist;
  v11 = &inOutDCacheFiles.m_data.m_buffer[49128];
  do
  {
    *(_QWORD *)v11 = v10;
    v10 = (ntl::internal::pool_allocator_freelist<24> *)v11;
    v11 -= 24;
  }
  while ( v11 + 24 > (char *)&inOutDCacheFiles );
  inOutDCacheFiles.m_freelist.m_head.mp_next = &v10->m_head;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  inOutDCacheFiles.m_listHead.m_sentinel.mp_prev = &inOutDCacheFiles.m_listHead.m_sentinel;
  inOutDCacheFiles.m_listHead.m_sentinel.mp_next = &inOutDCacheFiles.m_listHead.m_sentinel;
  psManifestActionInfo_t::psManifestActionInfo_t(&inActionInfo);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1130, ASSERT_TYPE_ASSERT, "(manifestData)", (const char *)&queryFormat, "manifestData") )
    __debugbreak();
  Instance = CachedContentCrypto::GetInstance();
  if ( !CachedContentCrypto::Hash_SHA256Init(Instance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1138, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
    __debugbreak();
  v13 = CachedContentCrypto::GetInstance();
  if ( !CachedContentCrypto::Hash_SHA256Process(v13, (unsigned __int8 *)v5, 0xDC00Cu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1140, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
    __debugbreak();
  v14 = CachedContentCrypto::GetInstance();
  if ( !CachedContentCrypto::Hash_SHA256Done(v14, &hash) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1142, ASSERT_TYPE_ASSERT, "(hashResult)", (const char *)&queryFormat, "hashResult") )
    __debugbreak();
  v15 = CachedContentCrypto::GetInstance();
  if ( !CachedContentCrypto::RSAVerify_SHA256(v15, &hash, &v5->signature) )
  {
    v16 = j_va("GenerateManifestResults: Error: Manifest signature mismatch!\n");
    OnlineSystem::DebugLog(this, v16);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)16, NULL);
  }
  v18 = j_va("GenerateManifestResults: Started.\n");
  OnlineSystem::DebugLog(this, v18);
  psManifestActionResults_t::Reset(&this->m_currentActions, v6);
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)outFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)outFiles.m_listHead.m_sentinel.mp_next != &outFiles.m_listHead )
  {
    v19 = outFiles.m_freelist.m_head.mp_next;
    do
    {
      v21 = (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)mp_next[1].mp_next;
      mp_next->mp_next = v19;
      v19 = mp_next;
      outFiles.m_freelist.m_head.mp_next = mp_next;
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v21;
    }
    while ( v21 != (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)&outFiles.m_listHead );
  }
  outFiles.m_listHead.m_sentinel.mp_prev = &outFiles.m_listHead.m_sentinel;
  outFiles.m_listHead.m_sentinel.mp_next = &outFiles.m_listHead.m_sentinel;
  v22 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)inOutDCacheFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)inOutDCacheFiles.m_listHead.m_sentinel.mp_next != &inOutDCacheFiles.m_listHead )
  {
    v19 = inOutDCacheFiles.m_freelist.m_head.mp_next;
    do
    {
      v23 = (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)v22[1].mp_next;
      v22->mp_next = v19;
      v19 = v22;
      inOutDCacheFiles.m_freelist.m_head.mp_next = v22;
      v22 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v23;
    }
    while ( v23 != (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)&inOutDCacheFiles.m_listHead );
  }
  inOutDCacheFiles.m_listHead.m_sentinel.mp_prev = &inOutDCacheFiles.m_listHead.m_sentinel;
  inOutDCacheFiles.m_listHead.m_sentinel.mp_next = &inOutDCacheFiles.m_listHead.m_sentinel;
  if ( purgeCache )
  {
    v24 = j_va("GenerateManifestResults: Requested to purge the perm cache. Assume the perm cache is empty when generating actions.\n", v19);
    OnlineSystem::DebugLog(this, v24);
  }
  else
  {
    DCache_TOC_GetCacheLocationFiles(DCACHE_TYPE_PERSISTENT, 496, &outFiles);
  }
  v25 = 0i64;
  for ( i = outFiles.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&outFiles.m_listHead; i = i->mp_next )
    ++v25;
  v27 = j_va("\t Perm Files(cacheType, fileID, location, size, name) - count(%zu): \n", v25);
  OnlineSystem::DebugLog(this, v27);
  v28 = outFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)outFiles.m_listHead.m_sentinel.mp_next != &outFiles.m_listHead )
  {
    do
    {
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = v28[1].mp_prev;
      LODWORD(fmt) = mp_prev[11].mp_prev;
      v30 = j_va("\t\t %20d %20zu %20d %20d %40s \n", 1i64, mp_prev->mp_prev, LODWORD(mp_prev->mp_next), fmt, (const char *)&mp_prev->mp_next + 4);
      v31 = DVARINT_onlineSystemDebugAll;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v30);
      v28 = v28->mp_next;
    }
    while ( v28 != (ntl::internal::list_node_base *)&outFiles.m_listHead );
    v5 = manifestData;
    v6 = patchType;
  }
  v32 = DVARINT_onlineSystemDebugAll;
  if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.integer || this->ShowLogOutput(this) )
    DCache_TOC_DumpTOC(DCACHE_TYPE_PERSISTENT);
  DCache_TOC_GetCacheLocationFiles(DCACHE_TYPE_TEMPORARY, 496, &inOutDCacheFiles);
  v33 = 0i64;
  for ( j = inOutDCacheFiles.m_listHead.m_sentinel.mp_next; j != (ntl::internal::list_node_base *)&inOutDCacheFiles.m_listHead; j = j->mp_next )
    ++v33;
  v35 = j_va("\t Temp Files(cacheType, fileID, location, size, name) - count(%zu): \n", v33);
  OnlineSystem::DebugLog(this, v35);
  v36 = inOutDCacheFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)inOutDCacheFiles.m_listHead.m_sentinel.mp_next != &inOutDCacheFiles.m_listHead )
  {
    do
    {
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v37 = v36[1].mp_prev;
      LODWORD(fmt) = v37[11].mp_prev;
      v38 = j_va("\t\t %20d %20zu %20d %20d %40s \n", 0i64, v37->mp_prev, LODWORD(v37->mp_next), fmt, (const char *)&v37->mp_next + 4);
      v39 = DVARINT_onlineSystemDebugAll;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      if ( v39->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v38);
      v36 = v36->mp_next;
    }
    while ( v36 != (ntl::internal::list_node_base *)&inOutDCacheFiles.m_listHead );
    v5 = manifestData;
    v6 = patchType;
  }
  v40 = DVARINT_onlineSystemDebugAll;
  if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.integer || this->ShowLogOutput(this) )
    DCache_TOC_DumpTOC(DCACHE_TYPE_TEMPORARY);
  dataVersionFF = v5->data.dataVersionFF;
  if ( dataVersionFF == 4111 )
  {
    for ( k = 0; k < v5->data.fileCount; ++k )
    {
      if ( Online_PatchStreamer::ProcessManifestEntry(this, v6, k, &v5->data.files[k], &outFiles, &inOutDCacheFiles, &inActionInfo) )
        Online_PatchStreamer::AddAction(this, v6, &inActionInfo);
      v44 = 0i64;
      for ( m = inOutDCacheFiles.m_listHead.m_sentinel.mp_next; m != (ntl::internal::list_node_base *)&inOutDCacheFiles.m_listHead; m = m->mp_next )
        ++v44;
      v46 = 0i64;
      for ( n = outFiles.m_listHead.m_sentinel.mp_next; n != (ntl::internal::list_node_base *)&outFiles.m_listHead; n = n->mp_next )
        ++v46;
      v48 = j_va("\t Adding Action: action:%10d, cacheType:%10d, location:%10d, permFiles:%10zu, tempFiles:%10zu, name:%40s \n", (unsigned int)inActionInfo.action, (unsigned int)inActionInfo.dcacheType, (unsigned int)inActionInfo.fileDetails.m_location, v46, v44, inActionInfo.fileDetails.m_name);
      v49 = DVARINT_onlineSystemDebugAll;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v48);
    }
    Online_PatchStreamer::MarkAllForDelete(this, v6, DCACHE_TYPE_PERSISTENT, &outFiles);
    Online_PatchStreamer::MarkAllForDelete(this, v6, DCACHE_TYPE_TEMPORARY, &inOutDCacheFiles);
    v42 = j_va("GenerateManifestResults: Ended.\n");
  }
  else
  {
    v42 = j_va("GenerateManifestResults: FF version mismatch, no actions generated. Expecting %d, Manifest contains %d.\n", 4111i64, dataVersionFF);
  }
  OnlineSystem::DebugLog(this, v42);
  this->m_currentActions.valid[v6] = 1;
  v50 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)inOutDCacheFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)inOutDCacheFiles.m_listHead.m_sentinel.mp_next != &inOutDCacheFiles.m_listHead )
  {
    v51 = inOutDCacheFiles.m_freelist.m_head.mp_next;
    do
    {
      v52 = (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)v50[1].mp_next;
      v50->mp_next = v51;
      v51 = v50;
      inOutDCacheFiles.m_freelist.m_head.mp_next = v50;
      v50 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v52;
    }
    while ( v52 != (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)&inOutDCacheFiles.m_listHead );
  }
  inOutDCacheFiles.m_listHead.m_sentinel.mp_prev = &inOutDCacheFiles.m_listHead.m_sentinel;
  inOutDCacheFiles.m_listHead.m_sentinel.mp_next = &inOutDCacheFiles.m_listHead.m_sentinel;
  v53 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)outFiles.m_listHead.m_sentinel.mp_next;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *)outFiles.m_listHead.m_sentinel.mp_next != &outFiles.m_listHead )
  {
    v54 = outFiles.m_freelist.m_head.mp_next;
    do
    {
      v55 = (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)v53[1].mp_next;
      v53->mp_next = v54;
      v54 = v53;
      outFiles.m_freelist.m_head.mp_next = v53;
      v53 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v55;
    }
    while ( v55 != (ntl::fixed_list<dcacheFileDetails_t *,2048,0> *)&outFiles.m_listHead );
  }
  return 1;
}

/*
==============
Online_PatchStreamer::GetActionContext
==============
*/
__int64 Online_PatchStreamer::GetActionContext(Online_PatchStreamer *this, GameModeType gameMode)
{
  switch ( (unsigned __int8)gameMode )
  {
    case HALF:
      return 2i64;
    case HALF_HALF:
      return 4i64;
    case LONG:
      return 8i64;
  }
  return 1i64;
}

/*
==============
Online_PatchStreamer::GetCCSPatchData
==============
*/
CCSPatchData *Online_PatchStreamer::GetCCSPatchData(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  int v6; 

  v2 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v6) )
      __debugbreak();
  }
  return &this->m_ccsPatchData[v2];
}

/*
==============
Online_PatchStreamer::GetDCachePatchManifestBuffer
==============
*/
char Online_PatchStreamer::GetDCachePatchManifestBuffer(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, unsigned __int8 (*outManifestBuffer)[917504])
{
  unsigned __int8 (*buffer)[917504]; 
  const char *v11; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v14; 
  char *fmt; 

  buffer = outManifestBuffer;
  if ( !outManifestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1093, ASSERT_TYPE_ASSERT, "(outManifestBuffer)", (const char *)&queryFormat, "outManifestBuffer") )
    __debugbreak();
  memset_0(buffer, 0, sizeof(unsigned __int8[917504]));
  if ( DCache_ReadFromCacheByOffset(cacheType, fileID, DCACHE_LOC_CCS_DEFAULT, 0, 917504, (unsigned __int8 *)buffer, (int *)*outManifestBuffer, 1) )
    return 1;
  LODWORD(fmt) = location;
  v11 = j_va("%d,%d,%zu,%d", (unsigned int)patchType, (unsigned int)cacheType, fileID, fmt);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)4, v11);
  CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
  CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)4, v11);
  v14 = 0;
  do
  {
    if ( v14 >= 65 )
      break;
    ++v14;
  }
  while ( ((4ui64 >> v14) & 1) == 0 );
  CCSPatchData->patchingErrorCode = v14;
  return 0;
}

/*
==============
Online_PatchStreamer::GetDCachePatchManifestData
==============
*/
char Online_PatchStreamer::GetDCachePatchManifestData(Online_PatchStreamer *this, const CCSPatchType patchType, unsigned __int8 (*manifestBuffer)[917504], psSignedManifestData_t *outManifestData)
{
  const char *v8; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v11; 

  if ( !manifestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1109, ASSERT_TYPE_ASSERT, "(manifestBuffer)", (const char *)&queryFormat, "manifestBuffer") )
    __debugbreak();
  if ( !outManifestData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1110, ASSERT_TYPE_ASSERT, "(outManifestData)", (const char *)&queryFormat, "outManifestData") )
    __debugbreak();
  if ( ProcessManifestBuffer((unsigned __int8 *)manifestBuffer, outManifestData) )
    return 1;
  v8 = j_va("%d", (unsigned int)patchType);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)8, v8);
  CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
  CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)8, v8);
  v11 = 0;
  do
  {
    if ( v11 >= 65 )
      break;
    ++v11;
  }
  while ( ((8ui64 >> v11) & 1) == 0 );
  CCSPatchData->patchingErrorCode = v11;
  return 0;
}

/*
==============
Online_PatchStreamer::GetInstance
==============
*/
Online_PatchStreamer *Online_PatchStreamer::GetInstance()
{
  return &Online_PatchStreamer::s_instance;
}

/*
==============
Online_PatchStreamer::GetInstancePtr
==============
*/
Online_PatchStreamer *Online_PatchStreamer::GetInstancePtr()
{
  return &Online_PatchStreamer::s_instance;
}

/*
==============
Online_PatchStreamer::GetManifestFileName
==============
*/
char Online_PatchStreamer::GetManifestFileName(Online_PatchStreamer *this, const CCSPatchType patchType, char *manifestFilename)
{
  const dvar_t *v5; 
  const char *v6; 

  if ( !manifestFilename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1672, ASSERT_TYPE_ASSERT, "(manifestFilename)", (const char *)&queryFormat, "manifestFilename") )
    __debugbreak();
  v5 = DVARSTR_patchmanifestoverride;
  if ( !DVARSTR_patchmanifestoverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchmanifestoverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  Core_strcpy(manifestFilename, 0x100ui64, v5->current.string);
  if ( *manifestFilename )
    return 1;
  if ( patchType == MOVEMENT || (v6 = "comms", patchType != DODGE) )
    v6 = "patch";
  Com_sprintf(manifestFilename, 0x100ui64, "%s_%s_%s_%s.%s", "dev_manifest", v6, "xb3", "8.24", "txt");
  return 0;
}

/*
==============
Online_PatchStreamer::GetManifestFileVersion
==============
*/
char Online_PatchStreamer::GetManifestFileVersion(Online_PatchStreamer *this, bool preRelease, int *manifestVersion)
{
  const dvar_t *v3; 
  int integer; 

  v3 = DVARINT_patchmanifestversionoverride;
  if ( !DVARINT_patchmanifestversionoverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "patchmanifestversionoverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  *manifestVersion = integer;
  if ( integer )
    return 1;
  *manifestVersion = preRelease + 1;
  return 0;
}

/*
==============
Online_PatchStreamer::GetPackFileName
==============
*/
void Online_PatchStreamer::GetPackFileName(Online_PatchStreamer *this, const CCSPatchType patchType, char *packFileName)
{
  const char *v5; 

  if ( !packFileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1691, ASSERT_TYPE_ASSERT, "(packFileName)", (const char *)&queryFormat, "packFileName") )
    __debugbreak();
  if ( patchType == MOVEMENT || (v5 = "comms", patchType != DODGE) )
    v5 = "patch";
  Com_sprintf(packFileName, 0x100ui64, "%s_%s_%s_%s.%s", "dev_pack", v5, "xb3", "8.24", "bin");
}

/*
==============
Online_PatchStreamer::GetPatchManifestVersion
==============
*/
__int64 Online_PatchStreamer::GetPatchManifestVersion(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  int v6; 

  v2 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v6) )
      __debugbreak();
  }
  return this->m_ccsPatchData[v2].currentManifestVersion;
}

/*
==============
Online_PatchStreamer::GetPatchPackFileDetails
==============
*/
bool Online_PatchStreamer::GetPatchPackFileDetails(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheFileDetails_t *outFileDetails)
{
  const char *v4; 
  unsigned __int64 outFileID; 
  char dest[256]; 

  if ( patchType == MOVEMENT || (v4 = "comms", patchType != DODGE) )
    v4 = "patch";
  Com_sprintf(dest, 0x100ui64, "%s_%s_%s_%s.%s", "dev_pack", v4, "xb3", "8.24", "bin");
  return DCache_TOC_GetFileIDByFilename(dest, DCACHE_TYPE_TEMPORARY, DCACHE_LOC_PATCH_MAN, &outFileID) && DCache_TOC_GetFileDetails(DCACHE_TYPE_TEMPORARY, outFileID, DCACHE_LOC_PATCH_MAN, outFileDetails);
}

/*
==============
Online_PatchStreamer::GetPatchTypeString
==============
*/
const char *Online_PatchStreamer::GetPatchTypeString(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  const char *result; 

  if ( patchType == MOVEMENT )
    return "patch";
  result = "comms";
  if ( patchType != DODGE )
    return "patch";
  return result;
}

/*
==============
Online_PatchStreamer::GetPatchingErrorCode
==============
*/
__int64 Online_PatchStreamer::GetPatchingErrorCode(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  int v6; 

  v2 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v6) )
      __debugbreak();
  }
  return (unsigned int)this->m_ccsPatchData[v2].patchingErrorCode;
}

/*
==============
Online_PatchStreamer::GetPatchingProgress
==============
*/
double Online_PatchStreamer::GetPatchingProgress(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  unsigned __int8 ActiveGameMode; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  return Online_PatchStreamer::GetPatchingProgressForMode(this, patchType, (const GameModeType)ActiveGameMode);
}

/*
==============
Online_PatchStreamer::GetPatchingProgressForMode
==============
*/
double Online_PatchStreamer::GetPatchingProgressForMode(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gamemode)
{
  __int64 v5; 
  unsigned __int8 v6; 
  __int64 v8; 

  v5 = patchType;
  v6 = gamemode;
  if ( (unsigned int)patchType >= COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, 2) )
    __debugbreak();
  v8 = v6 + 5 * v5;
  if ( this->m_ccsPatchData[0].downloadInfo[v8].valid )
  {
    if ( this->m_ccsPatchData[0].downloadInfo[v8].patchFilesNeeded <= 0 || this->m_ccsPatchData[0].downloadInfo[v8].totalPatchBytes <= 0 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
}

/*
==============
Online_PatchStreamer::GetPatchingStatus
==============
*/
__int64 Online_PatchStreamer::GetPatchingStatus(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  int v6; 

  v2 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v6) )
      __debugbreak();
  }
  return (unsigned __int8)this->m_ccsPatchData[v2].patchingStatus;
}

/*
==============
Online_PatchStreamer::HandlePatchSystemError
==============
*/
void Online_PatchStreamer::HandlePatchSystemError(Online_PatchStreamer *this, CCSPatchType patchType, unsigned __int64 error, const char *context, bool restartWithError)
{
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v11; 

  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)error, context);
  if ( restartWithError )
  {
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)error, context);
    v11 = 0;
    if ( (error & 1) == 0 )
    {
      do
      {
        if ( v11 >= 65 )
          break;
        ++v11;
      }
      while ( ((error >> v11) & 1) == 0 );
    }
    CCSPatchData->patchingErrorCode = v11;
  }
}

/*
==============
Online_PatchStreamer::MarkAllForDelete
==============
*/
void Online_PatchStreamer::MarkAllForDelete(Online_PatchStreamer *this, const CCSPatchType patchType, dcacheType_t cacheType, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutDCacheFiles)
{
  ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *p_m_listHead; 
  ntl::internal::list_node<dcacheFileDetails_t *> *mp_next; 
  __int16 m_originID; 
  char *v12; 
  ntl::internal::list_node_base *v26; 
  __int64 i; 
  const dvar_t *v28; 
  const char *v29; 
  psManifestActionInfo_t inActionInfo; 

  psManifestActionInfo_t::psManifestActionInfo_t(&inActionInfo);
  if ( !inOutDCacheFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 2084, ASSERT_TYPE_ASSERT, "(inOutDCacheFiles)", (const char *)&queryFormat, "inOutDCacheFiles") )
    __debugbreak();
  memset_0(&inActionInfo, 0, 0xC8ui64);
  memset_0(&inActionInfo.manifestEntry, 0, 0x1BCui64);
  inActionInfo.dcacheType = cacheType;
  p_m_listHead = &inOutDCacheFiles->m_listHead;
  mp_next = (ntl::internal::list_node<dcacheFileDetails_t *> *)inOutDCacheFiles->m_listHead.m_sentinel.mp_next;
  inActionInfo.action = PATCH_MAN_ACT_DELETE;
  inActionInfo.context = PATCH_MAN_ACT_CONTEXT_SHARED;
  if ( mp_next != (ntl::internal::list_node<dcacheFileDetails_t *> *)&inOutDCacheFiles->m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      _RAX = mp_next->m_data;
      m_originID = _RAX->m_originID;
      if ( m_originID == (_WORD)patchType )
      {
        __asm { vmovups xmm0, xmmword ptr [rax] }
        _RCX = &inActionInfo;
        __asm
        {
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rcx+40h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rcx+50h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rcx+70h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rcx+80h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rcx+90h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rcx+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rcx+0B0h], xmm1
        }
        *(_QWORD *)&inActionInfo.fileDetails.m_timestamp = *(_QWORD *)&_RAX->m_timestamp;
        ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *>>::remove(&inOutDCacheFiles->m_listHead, mp_next);
        mp_next->mp_prev = (ntl::internal::list_node_base *)inOutDCacheFiles->m_freelist.m_head.mp_next;
        inOutDCacheFiles->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
        Online_PatchStreamer::AddAction(this, patchType, &inActionInfo);
        v26 = inOutDCacheFiles->m_listHead.m_sentinel.mp_next;
        for ( i = 0i64; v26 != (ntl::internal::list_node_base *)p_m_listHead; ++i )
          v26 = v26->mp_next;
        v12 = j_va("\t Adding Action: action:%10d, cacheType:%10d, location:%10d, cacheFiles:%31zu, name:%40s \n", (unsigned int)inActionInfo.action, (unsigned int)inActionInfo.dcacheType, (unsigned int)inActionInfo.fileDetails.m_location, i, inActionInfo.fileDetails.m_name);
      }
      else
      {
        v12 = j_va("\t MarkAllForDelete: skipping file %s due to origin ID mismatch. PatchType: %d, File Origin ID: %d \n", _RAX->m_name, (unsigned int)patchType, (unsigned int)m_originID);
      }
      v28 = DVARINT_onlineSystemDebugAll;
      v29 = v12;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v29);
      mp_next = (ntl::internal::list_node<dcacheFileDetails_t *> *)mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node<dcacheFileDetails_t *> *)p_m_listHead );
  }
}

/*
==============
Online_PatchStreamer::OnDWLogonStart
==============
*/
void Online_PatchStreamer::OnDWLogonStart(Online_PatchStreamer *this, const int controllerIndex)
{
  int *p_totalPatchBytes; 
  int v4; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  if ( this->m_controllerIndex == controllerIndex )
  {
    p_totalPatchBytes = &this->m_ccsPatchData[0].downloadInfo[1].totalPatchBytes;
    v4 = 0;
    v5 = 1;
    do
    {
      if ( !v5 )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      *(p_totalPatchBytes - 9) = 0;
      *((_WORD *)p_totalPatchBytes + 26) = 4;
      *((_BYTE *)p_totalPatchBytes + 54) = 0;
      p_totalPatchBytes[14] = 0;
      *((_BYTE *)p_totalPatchBytes + 60) = 0;
      psManifestActionResults_t::Reset(&this->m_currentActions, (const CCSPatchType)v4);
      *((_BYTE *)p_totalPatchBytes - 28) = 0;
      ++v4;
      *((_QWORD *)p_totalPatchBytes - 3) = 0i64;
      *((_QWORD *)p_totalPatchBytes - 2) = 0i64;
      *((_BYTE *)p_totalPatchBytes - 8) = 0;
      *(_QWORD *)(p_totalPatchBytes - 1) = 0i64;
      *(_QWORD *)(p_totalPatchBytes + 1) = 0i64;
      *((_BYTE *)p_totalPatchBytes + 12) = 0;
      *((_QWORD *)p_totalPatchBytes + 2) = 0i64;
      *((_QWORD *)p_totalPatchBytes + 3) = 0i64;
      *((_BYTE *)p_totalPatchBytes + 32) = 0;
      *(_QWORD *)(p_totalPatchBytes + 9) = 0i64;
      *(_QWORD *)(p_totalPatchBytes + 11) = 0i64;
      p_totalPatchBytes += 25;
      this->m_controllerIndex = -1;
      *(_QWORD *)&this->m_manifestUpdateNextCheckTime = 0x7FFFFFFFi64;
      v5 = (unsigned int)v4 < 2;
    }
    while ( v4 < 2 );
  }
}

/*
==============
Online_PatchStreamer::OnFenceReset
==============
*/
void Online_PatchStreamer::OnFenceReset(Online_PatchStreamer *this)
{
  int v1; 
  bool *p_requestedManifest; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = 0;
  p_requestedManifest = &this->m_ccsPatchData[0].requestedManifest;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !p_requestedManifest[88] && !p_requestedManifest[2] && *p_requestedManifest && p_requestedManifest[89] )
    {
      *p_requestedManifest = 0;
      p_requestedManifest[89] = 0;
    }
    ++v1;
    p_requestedManifest += 100;
    v3 = (unsigned int)v1 < 2;
  }
  while ( v1 < 2 );
}

/*
==============
Online_PatchStreamer::OnPatchFileFailure
==============
*/
void Online_PatchStreamer::OnPatchFileFailure(Online_PatchStreamer *this, const CCSPatchType patchType, __int64 error)
{
  CCSPatchData *CCSPatchData; 
  const char *v7; 
  Online_ErrorReporting *InstancePtr; 
  const char *v9; 
  const char *v10; 
  Online_ErrorReporting *v11; 
  CCSPatchData *v12; 
  int v13; 

  if ( error == 0x1000000000000000i64 )
  {
    Online_PatchStreamer::Reset(this, patchType, 1);
  }
  else
  {
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    if ( !CCSPatchData->errorDetected )
    {
      if ( this->m_controllerIndex == -1 )
      {
        v7 = j_va("OnPatchFileFailure: error:%zu with an invalid controller ID, ignoring.\n", error);
        OnlineSystem::DebugLog(this, v7);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        v9 = j_va("%zu", error);
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v9);
      }
      else
      {
        v10 = j_va("OnPatchFileFailure: error:%zu.\n", error);
        OnlineSystem::DebugLog(this, v10);
        CCSPatchData->errorDetected = 1;
        v11 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_PATCHER_t)64, NULL);
        v12 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        v12->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)64, NULL);
        v13 = 0;
        do
        {
          if ( v13 >= 65 )
            break;
          ++v13;
        }
        while ( ((0x40ui64 >> v13) & 1) == 0 );
        v12->patchingErrorCode = v13;
        *(_WORD *)&CCSPatchData->requestedPreRelease = 256;
        CCSPatchData->requestedManifest = 0;
      }
    }
  }
}

/*
==============
Online_PatchStreamer::OnPatchFileProgress
==============
*/
void Online_PatchStreamer::OnPatchFileProgress(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes)
{
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  unsigned __int8 v13; 
  unsigned __int8 ActiveGameMode; 
  Online_ErrorReporting *v18; 
  CCSPatchData *v19; 
  int v20; 
  __int64 v22; 
  char dest[1024]; 

  if ( this->m_controllerIndex == -1 )
  {
    Com_sprintf(dest, 0x400ui64, "OnPatchFileProgress: Invalid controller ID. (%d, %d, %zu)\n", (unsigned int)cacheType, location, fileID);
    OnlineSystem::DebugLog(this, dest);
    LODWORD(v22) = location;
    Com_sprintf(dest, 0x400ui64, "%d, %d, %zu", (unsigned int)cacheType, v22, fileID);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, dest);
  }
  else
  {
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    if ( CCSPatchData->requestedDownload && (v13 = CCSPatchData->requestedContext[0], v13 < 4u) )
    {
      CCSPatchData->downloadInfo[v13].streamedPatchBytesCurrent += packetBytes;
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      *(double *)&_XMM0 = Online_PatchStreamer::GetPatchingProgressForMode(this, patchType, (const GameModeType)ActiveGameMode);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@42c80000
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x400ui64, "OnPatchFileProgress: patch progress %f %% \n", *(double *)&_XMM3);
      OnlineSystem::DebugLog(this, dest);
    }
    else
    {
      OnlineSystem::DebugLog(this, "OnPatchFileProgress: File progress callback not expected. \n");
      Com_sprintf(dest, 0x400ui64, "%d, %d, %zu", (unsigned int)cacheType, location, fileID);
      v18 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v18, MOVEMENT, dest);
      v19 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      v19->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, dest);
      v20 = 0;
      do
      {
        if ( v20 >= 65 )
          break;
        ++v20;
      }
      while ( ((0x400000000000ui64 >> v20) & 1) == 0 );
      v19->patchingErrorCode = v20;
    }
  }
}

/*
==============
Online_PatchStreamer::OnPatchFileSuccess
==============
*/
void Online_PatchStreamer::OnPatchFileSuccess(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location)
{
  __int64 v5; 
  const char *v7; 
  CCSPatchData *v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  v5 = patchType;
  v7 = j_va("OnPatchFileSuccess: cacheType:%d, fileID:%zu location:%d\n", (unsigned int)cacheType, fileID, (unsigned int)location);
  OnlineSystem::DebugLog(this, v7);
  if ( (unsigned int)v5 >= 2 )
  {
    v12 = 2;
    v11 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v8 = &this->m_ccsPatchData[v5];
  v9 = (unsigned __int8)this->m_ccsPatchData[v5].requestedContext[0];
  v8->requestedDownload = 0;
  v8->requestedContext[0] = 4;
  v10 = v9;
  LODWORD(v9) = v8->downloadInfo[v9].streamedPatchBytesCurrent;
  --v8->downloadInfo[v10].patchFilesNeeded;
  v8->downloadInfo[v10].streamedPatchBytesTotal += v9;
  v8->downloadInfo[v10].streamedPatchBytesCurrent = 0;
}

/*
==============
Online_PatchStreamer::OnPatchManifestFailure
==============
*/
void Online_PatchStreamer::OnPatchManifestFailure(Online_PatchStreamer *this, const CCSPatchType patchType, __int64 error)
{
  const char *v6; 
  Online_ErrorReporting *InstancePtr; 
  const char *v8; 
  CCSPatchData *CCSPatchData; 
  const dvar_t *v10; 
  CCSPatchData *v11; 
  int m_manifestUpdateCheckAttemptCount; 
  Online_ErrorReporting *v13; 
  const char *v14; 
  Online_ErrorReporting *v15; 
  Online_ErrorReporting *v16; 
  char manifestFilename[256]; 

  if ( error == 0x1000000000000000i64 )
  {
    Online_PatchStreamer::Reset(this, patchType, 1);
  }
  else
  {
    Online_PatchStreamer::GetManifestFileName(this, patchType, manifestFilename);
    if ( this->m_controllerIndex == -1 )
    {
      v6 = j_va("OnPatchManifestFailure: error:%zu with an invalid controller ID, ignoring.\n", error);
      OnlineSystem::DebugLog(this, v6);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v8 = j_va("%s, %zu", manifestFilename, error);
      Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v8);
    }
    else
    {
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      v10 = DVARINT_online_patching_fetch_prerelease;
      v11 = CCSPatchData;
      if ( !DVARINT_online_patching_fetch_prerelease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_patching_fetch_prerelease") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.integer == 1 && v11->requestedPreRelease )
      {
        Online_PatchStreamer::FetchManifest(this, patchType, 0);
      }
      else if ( !v11->errorDetected )
      {
        m_manifestUpdateCheckAttemptCount = this->m_manifestUpdateCheckAttemptCount;
        if ( m_manifestUpdateCheckAttemptCount <= 0 || m_manifestUpdateCheckAttemptCount >= patchManifestUpdateRetryAttempts->current.integer )
        {
          this->m_manifestUpdateCheckAttemptCount = 0;
          v11->errorDetected = 1;
          v15 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v15, (Online_Error_CAT_CCS_t)error, manifestFilename);
          v16 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v16, (Online_Error_CAT_PATCHER_t)32, manifestFilename);
          v11->downloadedManifest = 0;
          v11->requestedManifest = 1;
        }
        else
        {
          v13 = Online_ErrorReporting::GetInstancePtr();
          v14 = j_va("%s, %zu, %d", manifestFilename, error, (unsigned int)this->m_manifestUpdateCheckAttemptCount);
          Online_ErrorReporting::ReportError(v13, MOVEMENT, v14);
          this->m_manifestUpdateNextCheckTime = 1000 * patchManifestUpdateRetrySeconds->current.integer + Sys_Milliseconds();
        }
      }
    }
  }
}

/*
==============
Online_PatchStreamer::OnPatchManifestProgress
==============
*/
void Online_PatchStreamer::OnPatchManifestProgress(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID)
{
  ;
}

/*
==============
Online_PatchStreamer::OnPatchManifestSuccess
==============
*/
void Online_PatchStreamer::OnPatchManifestSuccess(Online_PatchStreamer *this, const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  __int64 v8; 
  int v10; 
  const char *v11; 
  const dvar_t *v12; 
  unsigned int unsignedInt; 
  const char *v14; 
  Online_ErrorReporting *InstancePtr; 
  int Int_Internal_DebugName; 
  unsigned __int8 (*v17)[917504]; 
  psSignedManifestData_t *v18; 
  const char *v19; 
  Online_ErrorReporting *v20; 
  CCSPatchData *CCSPatchData; 
  const char *v22; 
  const char *v23; 
  Online_ErrorReporting *v24; 
  unsigned __int8 ActiveGameMode; 
  const char *v26; 
  Online_ErrorReporting *v27; 
  char *fmt; 
  unsigned __int8 (*v29)[917504]; 
  __int64 v30; 
  unsigned __int8 (*outManifestBuffer)[917504]; 
  psSignedManifestData_t *outManifestData; 
  dcacheFileDetails_t outFileDetails; 
  char outHexString[8]; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  char v43; 

  v8 = patchType;
  if ( (unsigned int)patchType >= COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, 2) )
    __debugbreak();
  if ( (Online_PatchStreamer *)((char *)this + 100 * v8) == (Online_PatchStreamer *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 799, ASSERT_TYPE_ASSERT, "(patchData)", (const char *)&queryFormat, "patchData") )
    __debugbreak();
  v10 = 0;
  *(_WORD *)&this->m_ccsPatchData[v8].requestedPreRelease = 256;
  this->m_ccsPatchData[v8].requestedManifest = 0;
  this->m_manifestUpdateCheckAttemptCount = 0;
  if ( fileSize > 0xE0000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 809, ASSERT_TYPE_ASSERT, "(fileSize <= 896*1024)", (const char *)&queryFormat, "fileSize <= PS_PATCH_MANIFEST_FILE_SIZE_MAX") )
    __debugbreak();
  if ( !Online_PatchStreamer::EvaluatePatchManifestVersion(this, (const CCSPatchType)v8) )
  {
    v11 = j_va("OnPatchManifestSuccess: EvaluatePatchManifestVersion failed. \n");
    OnlineSystem::DebugLog(this, v11);
    return;
  }
  v12 = DVARINT_ccs_expectedPatchVersion;
  if ( DVARINT_ccs_expectedPatchVersion )
  {
    Dvar_CheckFrontendServerThread(DVARINT_ccs_expectedPatchVersion);
    unsignedInt = v12->current.unsignedInt;
  }
  else
  {
    unsignedInt = 0;
  }
  if ( unsignedInt && !(_DWORD)v8 && this->m_ccsPatchData[v8].currentManifestVersion != unsignedInt )
  {
    memset_0(&outFileDetails, 0, sizeof(outFileDetails));
    DCache_TOC_GetFileDetails(DCACHE_TYPE_PERSISTENT, fileID, DCACHE_LOC_CCS_DEFAULT, &outFileDetails);
    *(_QWORD *)outHexString = 0i64;
    v36 = 0i64;
    v37 = 0i64;
    v38 = 0i64;
    v39 = 0i64;
    v40 = 0i64;
    v41 = 0i64;
    v42 = 0i64;
    v43 = 0;
    ByteBufferToHexString(outFileDetails.m_computedHashValue.hashBytes, 32, outHexString, 65);
    LODWORD(v30) = outFileDetails.m_size;
    LODWORD(v29) = outFileDetails.m_serverModifiedTime;
    LODWORD(fmt) = outFileDetails.m_serverCreateTime;
    v14 = j_va("[%d != %d], %s, [%d,%d], %d, %d, %d, %s", this->m_ccsPatchData[v8].currentManifestVersion, unsignedInt, outFileDetails.m_name, fmt, v29, v30, outFileDetails.m_streamingInProgress, outFileDetails.m_version, outHexString);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v14);
  }
  if ( !existingFile && Online_PatchStreamer::GetPatchingStatus(this, (const CCSPatchType)v8) )
  {
    if ( DVARINT_ccs_single_restart_enabled )
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ccs_single_restart_enabled, "ccs_single_restart_enabled");
    else
      Int_Internal_DebugName = 0;
    if ( !Int_Internal_DebugName )
    {
      this->m_ccsPatchData[v8].patchingStatus = PS_PATCHING_UPDATE_NEEDED;
      return;
    }
    this->m_ccsPatchData[v8].patchingStatus = PS_PATCHING_IN_PROGRESS;
  }
  if ( Online_PatchStreamer::GetPatchingStatus(this, (const CCSPatchType)v8) )
    return;
  outManifestData = NULL;
  outManifestBuffer = NULL;
  Online_PatchStreamer::AllocatePMem(this, &outManifestBuffer, &outManifestData);
  v17 = outManifestBuffer;
  if ( Online_PatchStreamer::GetDCachePatchManifestBuffer(this, (const CCSPatchType)v8, cacheType, fileID, location, outManifestBuffer) && (v18 = outManifestData, Online_PatchStreamer::GetDCachePatchManifestData(this, (const CCSPatchType)v8, v17, outManifestData)) )
  {
    if ( Online_PatchStreamer::GenerateManifestResults(this, (const CCSPatchType)v8, v18, 0) )
    {
      if ( (this->m_currentActions.allActions[v8] & 0x10) == 0 || !v18->data.purgeCache || Online_PatchStreamer::GenerateManifestResults(this, (const CCSPatchType)v8, v18, 1) )
      {
        Online_PatchStreamer::FreePMem(this);
        ActiveGameMode = Com_GameMode_GetActiveGameMode();
        Online_PatchStreamer::ProcessDownloadActions(this, (const CCSPatchType)v8, (const GameModeType)ActiveGameMode, 1, 0);
        return;
      }
      Online_PatchStreamer::FreePMem(this);
      v22 = j_va("OnPatchManifestSuccess: Error generating actions WITH purge cache. \n");
      OnlineSystem::DebugLog(this, v22);
      v23 = j_va("%d,%zu,%d", (unsigned int)cacheType, fileID, (unsigned int)location);
      v24 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v24, (Online_Error_CAT_PATCHER_t)256, v23);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v8);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)256, v23);
      do
      {
        if ( v10 >= 65 )
          break;
        ++v10;
      }
      while ( ((0x100ui64 >> v10) & 1) == 0 );
    }
    else
    {
      Online_PatchStreamer::FreePMem(this);
      v19 = j_va("%d,%zu,%d", (unsigned int)cacheType, fileID, (unsigned int)location);
      v20 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v20, (Online_Error_CAT_PATCHER_t)256, v19);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v8);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)256, v19);
      do
      {
        if ( v10 >= 65 )
          break;
        ++v10;
      }
      while ( ((0x100ui64 >> v10) & 1) == 0 );
    }
  }
  else
  {
    Online_PatchStreamer::FreePMem(this);
    v26 = j_va("%d,%zu,%d", (unsigned int)cacheType, fileID, (unsigned int)location);
    v27 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v27, (Online_Error_CAT_PATCHER_t)512, v26);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v8);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)512, v26);
    do
    {
      if ( v10 >= 65 )
        break;
      ++v10;
    }
    while ( ((0x200ui64 >> v10) & 1) == 0 );
  }
  CCSPatchData->patchingErrorCode = v10;
}

/*
==============
PS_DebugSetGameMode_f
==============
*/
void PS_DebugSetGameMode_f(void)
{
  unsigned __int8 v0; 

  v0 = 2;
  if ( Cmd_Argc() >= 1 )
    v0 = Cmd_ArgInt(1);
  Online_PatchStreamer::ProcessDownloadActions(&Online_PatchStreamer::s_instance, MOVEMENT, (const GameModeType)v0, 1, 1);
}

/*
==============
PS_DebugStartPatchStreamer_f
==============
*/
void PS_DebugStartPatchStreamer_f(void)
{
  Online_PatchStreamer::FetchManifest(&Online_PatchStreamer::s_instance, MOVEMENT, 0);
}

/*
==============
PatchFenceDependenciesUpdated
==============
*/
void PatchFenceDependenciesUpdated(int controllerIndex, bool value)
{
  s_patchFenceDependenciesMet[controllerIndex] = value;
}

/*
==============
PatchStreamer_OnManifestFailure
==============
*/
void PatchStreamer_OnManifestFailure(const CCSPatchType patchType, const Online_Error_CAT_CCS_t error)
{
  Online_PatchStreamer::OnPatchManifestFailure(&Online_PatchStreamer::s_instance, patchType, error);
}

/*
==============
PatchStreamer_OnManifestProgress
==============
*/
void PatchStreamer_OnManifestProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location)
{
  ;
}

/*
==============
PatchStreamer_OnManifestSuccess
==============
*/
void PatchStreamer_OnManifestSuccess(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int fileSize, const bool existingFile)
{
  Online_PatchStreamer::OnPatchManifestSuccess(&Online_PatchStreamer::s_instance, patchType, cacheType, fileID, location, fileSize, existingFile);
}

/*
==============
PatchStreamer_OnPatchFileFailure
==============
*/
void PatchStreamer_OnPatchFileFailure(const CCSPatchType patchType, __int64 error)
{
  CCSPatchData *CCSPatchData; 
  const char *v5; 
  Online_ErrorReporting *InstancePtr; 
  const char *v7; 
  const char *v8; 
  Online_ErrorReporting *v9; 
  CCSPatchData *v10; 
  int v11; 

  if ( error == 0x1000000000000000i64 )
  {
    Online_PatchStreamer::Reset(&Online_PatchStreamer::s_instance, patchType, 1);
  }
  else
  {
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(&Online_PatchStreamer::s_instance, patchType);
    if ( !CCSPatchData->errorDetected )
    {
      if ( Online_PatchStreamer::s_instance.m_controllerIndex == -1 )
      {
        v5 = j_va("OnPatchFileFailure: error:%zu with an invalid controller ID, ignoring.\n", error);
        OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, v5);
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        v7 = j_va("%zu", error);
        Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v7);
      }
      else
      {
        v8 = j_va("OnPatchFileFailure: error:%zu.\n", error);
        OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, v8);
        CCSPatchData->errorDetected = 1;
        v9 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v9, (Online_Error_CAT_PATCHER_t)64, NULL);
        v10 = Online_PatchStreamer::GetCCSPatchData(&Online_PatchStreamer::s_instance, patchType);
        v10->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)64, NULL);
        v11 = 0;
        do
        {
          if ( v11 >= 65 )
            break;
          ++v11;
        }
        while ( ((0x40ui64 >> v11) & 1) == 0 );
        v10->patchingErrorCode = v11;
        *(_WORD *)&CCSPatchData->requestedPreRelease = 256;
        CCSPatchData->requestedManifest = 0;
      }
    }
  }
}

/*
==============
PatchStreamer_OnPatchFileProgress
==============
*/
void PatchStreamer_OnPatchFileProgress(const CCSPatchType patchType, const dcacheType_t cacheType, const unsigned __int64 fileID, const dcacheLocation_t location, const unsigned int packetBytes)
{
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  unsigned __int8 v12; 
  unsigned __int8 ActiveGameMode; 
  Online_ErrorReporting *v17; 
  CCSPatchData *v18; 
  int v19; 
  __int64 v21; 
  dcacheLocation_t v22; 
  char dest[1024]; 

  if ( Online_PatchStreamer::s_instance.m_controllerIndex == -1 )
  {
    Com_sprintf(dest, 0x400ui64, "OnPatchFileProgress: Invalid controller ID. (%d, %d, %zu)\n", (unsigned int)cacheType, location, fileID);
    OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, dest);
    LODWORD(v21) = location;
    Com_sprintf(dest, 0x400ui64, "%d, %d, %zu", (unsigned int)cacheType, v21, fileID);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, dest);
  }
  else
  {
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(&Online_PatchStreamer::s_instance, patchType);
    if ( CCSPatchData->requestedDownload && (v12 = CCSPatchData->requestedContext[0], v12 < 4u) )
    {
      CCSPatchData->downloadInfo[v12].streamedPatchBytesCurrent += packetBytes;
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      *(double *)&_XMM0 = Online_PatchStreamer::GetPatchingProgressForMode(&Online_PatchStreamer::s_instance, patchType, (const GameModeType)ActiveGameMode);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@42c80000
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x400ui64, "OnPatchFileProgress: patch progress %f %% \n", *(double *)&_XMM3);
      OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, dest);
    }
    else
    {
      OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, "OnPatchFileProgress: File progress callback not expected. \n");
      v22 = location;
      Com_sprintf(dest, 0x400ui64, "%d, %d, %zu", (unsigned int)cacheType, v22, fileID);
      v17 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v17, MOVEMENT, dest);
      v18 = Online_PatchStreamer::GetCCSPatchData(&Online_PatchStreamer::s_instance, patchType);
      v18->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, dest);
      v19 = 0;
      do
      {
        if ( v19 >= 65 )
          break;
        ++v19;
      }
      while ( ((0x400000000000ui64 >> v19) & 1) == 0 );
      v18->patchingErrorCode = v19;
    }
  }
}

/*
==============
PatchStreamer_OnPatchFileSuccess
==============
*/
void PatchStreamer_OnPatchFileSuccess(const CCSPatchType patchType, __int64 cacheType, const unsigned __int64 fileID, __int64 location)
{
  __int64 v4; 
  const char *v5; 
  CCSPatchData *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v4 = patchType;
  v5 = j_va("OnPatchFileSuccess: cacheType:%d, fileID:%zu location:%d\n", cacheType, fileID, location);
  OnlineSystem::DebugLog(&Online_PatchStreamer::s_instance, v5);
  if ( (unsigned int)v4 >= 2 )
  {
    v10 = 2;
    v9 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = &Online_PatchStreamer::s_instance.m_ccsPatchData[v4];
  v7 = (unsigned __int8)v6->requestedContext[0];
  v6->requestedDownload = 0;
  v6->requestedContext[0] = 4;
  v8 = v7;
  LODWORD(v7) = v6->downloadInfo[v7].streamedPatchBytesCurrent;
  --v6->downloadInfo[v8].patchFilesNeeded;
  v6->downloadInfo[v8].streamedPatchBytesTotal += v7;
  v6->downloadInfo[v8].streamedPatchBytesCurrent = 0;
}

/*
==============
Online_PatchStreamer::PerformManifestDownloadAction
==============
*/
char Online_PatchStreamer::PerformManifestDownloadAction(Online_PatchStreamer *this, const CCSPatchType patchType, GameModeType gameMode, const psManifestActionInfo_t *actionInfo)
{
  char v5; 
  Online_CachedContentStreamer *Instance; 
  const char *v9; 
  CCSPatchData *CCSPatchData; 
  const char *v12; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *v14; 
  int v15; 
  char *fmt; 
  CCSPatchType ccsPatchType; 
  int OnSuccess; 

  v5 = gameMode;
  if ( actionInfo->action != PATCH_MAN_ACT_DOWNLOAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 609, ASSERT_TYPE_ASSERT, "(actionInfo.action == PATCH_MAN_ACT_DOWNLOAD)", (const char *)&queryFormat, "actionInfo.action == PATCH_MAN_ACT_DOWNLOAD") )
    __debugbreak();
  if ( this->m_controllerIndex == -1 )
  {
    OnSuccess = -1;
    ccsPatchType = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 610, ASSERT_TYPE_ASSERT, "( m_controllerIndex ) != ( (-1) )", "%s != %s\n\t%i, %i", "m_controllerIndex", "INVALID_CONTROLLER_PORT", ccsPatchType, OnSuccess) )
      __debugbreak();
  }
  Instance = Online_CachedContentStreamer::GetInstance();
  if ( Online_CachedContentStreamer::TryRequestStreamToCache(Instance, this->m_controllerIndex, (const dcacheType_t)actionInfo->dcacheType, actionInfo->fileDetails.m_location, actionInfo->fileDetails.m_name, actionInfo->fileDetails.m_version, 1, patchType, PatchStreamer_OnPatchFileSuccess, PatchStreamer_OnPatchFileFailure, PatchStreamer_OnPatchFileProgress) )
  {
    LODWORD(fmt) = actionInfo->fileDetails.m_location;
    v9 = j_va("PerformManifestDownloadAction: contorller Idx:%d, action:%d, cacheType:%d, location:%d, name:%s\n", (unsigned int)this->m_controllerIndex, (unsigned int)actionInfo->action, (unsigned int)actionInfo->dcacheType, fmt, actionInfo->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v9);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->requestedDownload = 1;
    CCSPatchData->requestedContext[0] = v5;
    return 1;
  }
  else
  {
    LODWORD(fmt) = actionInfo->fileDetails.m_location;
    v12 = j_va("%d,%s,%d,%d", (unsigned int)actionInfo->dcacheType, actionInfo->fileDetails.m_name, actionInfo->fileDetails.m_version, fmt);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, COUNT, v12);
    v14 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    v14->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, COUNT, v12);
    v15 = 0;
    do
    {
      if ( v15 >= 65 )
        break;
      ++v15;
    }
    while ( ((2ui64 >> v15) & 1) == 0 );
    v14->patchingErrorCode = v15;
    return 0;
  }
}

/*
==============
Online_PatchStreamer::PerformStartupPatchManifestProcessing
==============
*/
void Online_PatchStreamer::PerformStartupPatchManifestProcessing(Online_PatchStreamer *this)
{
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  CCSPatchType v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 35096);
  if ( (unsigned int)(*((_DWORD *)Value + 8774) + 1) >= 3 )
  {
    v13 = 3;
    v11 = *((_DWORD *)Value + 8774) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(v12) = 3;
    LODWORD(v10) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = &v3[*v3 + 2];
  v7 = __rdtsc();
  *v6 = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v9 = MOVEMENT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 825, NULL, 0);
  do
    Online_PatchStreamer::PerformStartupPatchManifestProcessing_Internal(this, v9++);
  while ( (unsigned int)v9 < COUNT );
  Profile_EndInternal(NULL);
}

/*
==============
Online_PatchStreamer::PerformStartupPatchManifestProcessing_Internal
==============
*/
char Online_PatchStreamer::PerformStartupPatchManifestProcessing_Internal(Online_PatchStreamer *this, const CCSPatchType patchType)
{
  __int64 v2; 
  unsigned __int64 FileIDByFilename; 
  const char *v5; 
  int v7; 
  unsigned __int8 (*v8)[917504]; 
  psSignedManifestData_t *v9; 
  const char *v10; 
  Online_ErrorReporting *v11; 
  CCSPatchData *CCSPatchData; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  Online_ErrorReporting *v16; 
  CCSPatchData *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t> > *p_m_listHead; 
  ntl::internal::list_node_base *i; 
  __int64 mp_next_high; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  Online_ErrorReporting *v28; 
  CCSPatchData *v29; 
  const char *v30; 
  ntl::internal::list_node_base *j; 
  const char *v32; 
  ntl::internal::list_node_base *mp_next; 
  psSignedManifestData_t *v34; 
  __int64 mp_prev_low; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  Online_ErrorReporting *v39; 
  unsigned int v40; 
  const char *v41; 
  const char *v42; 
  Online_ErrorReporting *v43; 
  CCSPatchData *v44; 
  int v45; 
  const char *v46; 
  const char *v47; 
  Online_ErrorReporting *v48; 
  const char *v49; 
  const char *v50; 
  Online_ErrorReporting *v51; 
  const char *v52; 
  const char *v53; 
  Online_ErrorReporting *v54; 
  CCSPatchData *v55; 
  int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  char v60; 
  int k; 
  const char *v62; 
  const char *v63; 
  Online_ErrorReporting *v64; 
  CCSPatchData *v65; 
  int v66; 
  bool v67; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *v71; 
  Online_ErrorReporting *InstancePtr; 
  __int64 location; 
  __int64 locationa; 
  unsigned __int8 (*v75)[917504]; 
  psSignedManifestData_t *outManifestData; 
  unsigned __int8 (*outManifestBuffer)[917504]; 
  StreamerMemLoan result; 
  char manifestFilename[256]; 

  v2 = patchType;
  Online_PatchStreamer::GetManifestFileName(this, patchType, manifestFilename);
  FileIDByFilename = DCache_GetFileIDByFilename(manifestFilename, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_CCS_DEFAULT);
  if ( !FileIDByFilename )
  {
    v5 = j_va("PerformStartupPatchManifestProcessing: Manifest file not found. \n");
LABEL_3:
    OnlineSystem::DebugLog(this, v5);
    return 0;
  }
  if ( !Online_PatchStreamer::EvaluatePatchManifestVersion(this, (const CCSPatchType)v2) )
  {
    v5 = j_va("PerformStartupPatchManifestProcessing: EvaluatePatchManifestVersion failed. \n");
    goto LABEL_3;
  }
  v7 = 0;
  outManifestData = NULL;
  outManifestBuffer = NULL;
  Online_PatchStreamer::AllocatePMem(this, &outManifestBuffer, &outManifestData);
  v8 = outManifestBuffer;
  if ( !Online_PatchStreamer::GetDCachePatchManifestBuffer(this, (const CCSPatchType)v2, DCACHE_TYPE_PERSISTENT, FileIDByFilename, DCACHE_LOC_CCS_DEFAULT, outManifestBuffer) || (v9 = outManifestData, !Online_PatchStreamer::GetDCachePatchManifestData(this, (const CCSPatchType)v2, v8, outManifestData)) )
  {
    v71 = j_va("PerformStartupPatchManifestProcessing: Error processing manifest. \n");
    OnlineSystem::DebugLog(this, v71);
    PMem_Free(&result, "patch_system", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)2048, NULL);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)2048, NULL);
    do
    {
      if ( v7 >= 65 )
        break;
      ++v7;
    }
    while ( ((0x800ui64 >> v7) & 1) == 0 );
LABEL_119:
    CCSPatchData->patchingErrorCode = v7;
    return 0;
  }
  if ( !Online_PatchStreamer::GenerateManifestResults(this, (const CCSPatchType)v2, v9, 0) )
  {
    v10 = j_va("PerformStartupPatchManifestProcessing: Error generating actions with NO purge cache. \n");
    OnlineSystem::DebugLog(this, v10);
    Online_PatchStreamer::FreePMem(this);
    v11 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_PATCHER_t)1024, NULL);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)1024, NULL);
    while ( v7 < 65 )
    {
      if ( ((0x400ui64 >> ++v7) & 1) != 0 )
      {
        CCSPatchData->patchingErrorCode = v7;
        return 0;
      }
    }
    goto LABEL_119;
  }
  if ( !this->m_currentActions.allActions[v2] )
  {
    v13 = j_va("PerformStartupPatchManifestProcessing: No actions to perform. \n");
    OnlineSystem::DebugLog(this, v13);
    Online_PatchStreamer::FreePMem(this);
    return 1;
  }
  if ( v9->data.purgeCache && !Online_PatchStreamer::GenerateManifestResults(this, (const CCSPatchType)v2, v9, 1) )
  {
    v14 = j_va("PerformStartupPatchManifestProcessing: Error reevaluating actions with purgeCache = %d. \n", v9->data.purgeCache);
    OnlineSystem::DebugLog(this, v14);
    Online_PatchStreamer::FreePMem(this);
    v15 = j_va("%d", v9->data.purgeCache);
    v16 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v16, (Online_Error_CAT_PATCHER_t)1024, v15);
    v17 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
    v17->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)1024, v15);
    do
    {
      if ( v7 >= 65 )
        break;
      ++v7;
    }
    while ( ((0x400ui64 >> v7) & 1) == 0 );
    v17->patchingErrorCode = v7;
    return 0;
  }
  if ( (this->m_currentActions.allActions[v2] & 0x10) != 0 && (this->m_currentActions.downloadActionContexts[v2] & 1) != 0 )
  {
    v18 = j_va("PerformStartupPatchManifestProcessing: Cannot perform startup actions until we atleast have all shared files. \n");
    OnlineSystem::DebugLog(this, v18);
    Online_PatchStreamer::FreePMem(this);
    return 0;
  }
  v19 = j_va("PerformStartupPatchManifestProcessing: Started.\n");
  OnlineSystem::DebugLog(this, v19);
  if ( v9->data.purgeCache )
  {
    v20 = j_va("PerformStartupPatchManifestProcessing: Purging perm cache as requested by the manifest.\n");
    OnlineSystem::DebugLog(this, v20);
    Com_DCache_Clear(DCACHE_TYPE_PERSISTENT);
  }
  p_m_listHead = &this->m_currentActions.actionInfoList.m_listHead;
  if ( (this->m_currentActions.allActions[v2] & 0x400) != 0 )
  {
    for ( i = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)p_m_listHead; i = i->mp_next )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next_high = HIDWORD(i[13].mp_next);
      if ( (_DWORD)mp_next_high == 1024 )
      {
        if ( !Online_PatchStreamer::StartupProcessingHandleUnpack(this, (const CCSPatchType)v2, (psManifestActionInfo_t *)&i[1]) )
        {
          v30 = j_va("PerformStartupPatchManifestProcessing: failed to unpack file %s \n", (const char *)&i[1].mp_next + 4);
          OnlineSystem::DebugLog(this, v30);
          Online_PatchStreamer::FreePMem(this);
          return 0;
        }
        outManifestData = (psSignedManifestData_t *)i;
        ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::remove(&this->m_currentActions.actionInfoList.m_listHead, (ntl::internal::list_node<psManifestActionInfo_t> *)i);
        i->mp_prev = (ntl::internal::list_node_base *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
        this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)i;
        v25 = j_va("\t Unpack action: name:%s, cacheType:%d, location:%d \n", (const char *)&i[1].mp_next + 4, LODWORD(i[13].mp_next), LODWORD(i[1].mp_next));
        OnlineSystem::DebugLog(this, v25);
        if ( Sys_IsMainThread() )
          Sys_LoadingProcessEvents();
      }
      else
      {
        v24 = j_va("PerformStartupPatchManifestProcessing: skipping action %d for file %s as it's not unpacking related. \n", mp_next_high, (const char *)&i[1].mp_next + 4);
        OnlineSystem::DebugLog(this, v24);
      }
    }
    DCache_SaveTOC(DCACHE_TYPE_TEMPORARY);
    DCache_SaveTOC(DCACHE_TYPE_PERSISTENT);
    if ( !Online_PatchStreamer::GenerateManifestResults(this, (const CCSPatchType)v2, v9, 0) )
    {
      v26 = j_va("PerformStartupPatchManifestProcessing: Error reevaluating actions with purgeCache = %d. \n", v9->data.purgeCache);
      OnlineSystem::DebugLog(this, v26);
      Online_PatchStreamer::FreePMem(this);
      v27 = j_va("%d", v9->data.purgeCache);
      v28 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v28, (Online_Error_CAT_PATCHER_t)1024, v27);
      v29 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
      v29->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)1024, v27);
      do
      {
        if ( v7 >= 65 )
          break;
        ++v7;
      }
      while ( ((0x400ui64 >> v7) & 1) == 0 );
LABEL_41:
      v29->patchingErrorCode = v7;
      return 0;
    }
  }
  Online_PatchStreamer::FreePMem(this);
  if ( (this->m_currentActions.allActions[v2] & 1) != 0 )
  {
    for ( j = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next; j != (ntl::internal::list_node_base *)&this->m_currentActions.actionInfoList.m_listHead; j = j->mp_next )
    {
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( (BYTE4(j[13].mp_next) & 1) != 0 )
      {
        if ( !DCache_DeleteFromCacheInMemory((dcacheType_t)j[13].mp_next, (unsigned __int64)j[1].mp_prev, (dcacheLocation_t)j[1].mp_next) )
        {
          v37 = j_va("PerformStartupPatchManifestProcessing: failed to delete %s \n", (const char *)&j[1].mp_next + 4);
          OnlineSystem::DebugLog(this, v37);
          v38 = j_va("%d,%zu,%d", LODWORD(j[13].mp_next), j[1].mp_prev, LODWORD(j[1].mp_next));
          v39 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v39, (Online_Error_CAT_PATCHER_t)4096, v38);
          v29 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
          v29->patchingStatus = PS_PATCHING_FAILED;
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)4096, v38);
          do
          {
            if ( v7 >= 65 )
              break;
            ++v7;
          }
          while ( ((0x1000ui64 >> v7) & 1) == 0 );
          goto LABEL_41;
        }
        v32 = j_va("\t Performed Action : action:%10d, cacheType:%10d, location:%10d, name:%40s \n", HIDWORD(j[13].mp_next), LODWORD(j[13].mp_next), LODWORD(j[1].mp_next), (const char *)&j[1].mp_next + 4);
        OnlineSystem::DebugLog(this, v32);
        outManifestData = (psSignedManifestData_t *)j;
        ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::remove(&this->m_currentActions.actionInfoList.m_listHead, (ntl::internal::list_node<psManifestActionInfo_t> *)j);
        j->mp_prev = (ntl::internal::list_node_base *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
        this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)j;
      }
      if ( Sys_IsMainThread() )
        Sys_LoadingProcessEvents();
    }
  }
  mp_next = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
  {
LABEL_115:
    DCache_SaveTOC(DCACHE_TYPE_PERSISTENT);
    DCache_SaveTOC(DCACHE_TYPE_TEMPORARY);
    v70 = j_va("PerformStartupPatchManifestProcessing: completed.\n");
    OnlineSystem::DebugLog(this, v70);
    return 1;
  }
  v34 = (psSignedManifestData_t *)&this->m_currentActions.downloadActionContexts[v2];
  for ( outManifestData = v34; ; v34 = outManifestData )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_prev_low = LODWORD(mp_next[14].mp_prev);
    if ( ((unsigned int)mp_prev_low & *(_DWORD *)v34->data.files[0].fileName) != 0 )
    {
      v36 = j_va("PerformStartupPatchManifestProcessing: skipping action for file %s as not all context files present for context %u. \n", (const char *)&mp_next[1].mp_next + 4, mp_prev_low);
      OnlineSystem::DebugLog(this, v36);
      goto LABEL_112;
    }
    v40 = HIDWORD(mp_next[13].mp_next);
    if ( v40 > 0x10 )
    {
      v57 = v40 - 64;
      if ( v57 )
      {
        v58 = v57 - 64;
        if ( v58 )
        {
          v59 = v58 - 128;
          if ( v59 )
          {
            if ( v59 != 256 )
              goto LABEL_96;
            v67 = Online_PatchStreamer::StartupProcessingHandleDecryptInflate(this, (const CCSPatchType)v2, (psManifestActionInfo_t *)&mp_next[1]);
          }
          else
          {
            v67 = Online_PatchStreamer::StartupProcessingHandleInflate(this, (const CCSPatchType)v2, (psManifestActionInfo_t *)&mp_next[1]);
          }
        }
        else
        {
          v67 = Online_PatchStreamer::StartupProcessingHandleDecrypt(this, (const CCSPatchType)v2, (psManifestActionInfo_t *)&mp_next[1]);
        }
      }
      else
      {
        v67 = Online_PatchStreamer::StartupProcessingHandleCopy(this, (const CCSPatchType)v2, (psManifestActionInfo_t *)&mp_next[1]);
      }
      if ( !v67 )
        goto LABEL_112;
      goto LABEL_110;
    }
    if ( v40 != 16 )
      break;
    v52 = j_va("PerformStartupPatchManifestProcessing: ignored download action for file %s with context %u \n", (const char *)&mp_next[1].mp_next + 4, mp_prev_low);
    OnlineSystem::DebugLog(this, v52);
    if ( (~*(_DWORD *)v34->data.files[0].fileName & (__int64)mp_next[14].mp_prev) != 0 )
    {
      v53 = j_va("%d,%zu,%d", LODWORD(mp_next[13].mp_next), mp_next[1].mp_prev, LODWORD(mp_next[1].mp_next));
      v54 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v54, MOVEMENT, v53);
      v55 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
      v55->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v53);
      v56 = 0;
      do
      {
        if ( v56 >= 65 )
          break;
        ++v56;
      }
      while ( ((0x200000000000ui64 >> v56) & 1) == 0 );
      v55->patchingErrorCode = v56;
    }
LABEL_112:
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      goto LABEL_115;
  }
  switch ( v40 )
  {
    case 0u:
      goto LABEL_110;
    case 2u:
      if ( !DCache_TOC_SetNewLocation((dcacheType_t)mp_next[13].mp_next, (unsigned __int64)mp_next[1].mp_prev, (dcacheLocation_t)mp_next[1].mp_next, DCACHE_LOC_PATCH_MAN_DORM) )
      {
        v49 = j_va("PerformStartupPatchManifestProcessing: failed to mark dormant %s \n", (const char *)&mp_next[1].mp_next + 4);
        OnlineSystem::DebugLog(this, v49);
        v50 = j_va("%d,%zu,%d", LODWORD(mp_next[13].mp_next), mp_next[1].mp_prev, LODWORD(mp_next[1].mp_next));
        v51 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v51, (Online_Error_CAT_PATCHER_t)0x2000, v50);
        v44 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
        v44->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x2000, v50);
        v45 = 0;
        do
        {
          if ( v45 >= 65 )
            break;
          ++v45;
        }
        while ( ((0x2000ui64 >> v45) & 1) == 0 );
        goto LABEL_86;
      }
LABEL_110:
      v68 = j_va("\t Performed Action : action:%10d, cacheType:%10d, location:%10d, name:%40s \n", HIDWORD(mp_next[13].mp_next), LODWORD(mp_next[13].mp_next), LODWORD(mp_next[1].mp_next), (const char *)&mp_next[1].mp_next + 4);
      OnlineSystem::DebugLog(this, v68);
      ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::remove(&this->m_currentActions.actionInfoList.m_listHead, (ntl::internal::list_node<psManifestActionInfo_t> *)mp_next);
      mp_next->mp_prev = (ntl::internal::list_node_base *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
      this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      if ( Sys_IsMainThread() )
        Sys_LoadingProcessEvents();
      goto LABEL_112;
    case 4u:
      if ( DCache_TOC_SetNewLocation((dcacheType_t)mp_next[13].mp_next, (unsigned __int64)mp_next[1].mp_prev, (dcacheLocation_t)mp_next[1].mp_next, DCACHE_LOC_PATCH_MAN) )
        goto LABEL_110;
      v46 = j_va("PerformStartupPatchManifestProcessing: failed to mark avail %s \n", (const char *)&mp_next[1].mp_next + 4);
      OnlineSystem::DebugLog(this, v46);
      v47 = j_va("%d,%zu,%d", LODWORD(mp_next[13].mp_next), mp_next[1].mp_prev, LODWORD(mp_next[1].mp_next));
      v48 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v48, (Online_Error_CAT_PATCHER_t)0x20000000, v47);
      v44 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
      v44->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x20000000, v47);
      v45 = 0;
      while ( v45 < 65 )
      {
        if ( ((0x20000000ui64 >> ++v45) & 1) != 0 )
        {
          v44->patchingErrorCode = v45;
          goto LABEL_110;
        }
      }
      goto LABEL_86;
    case 8u:
      if ( DCache_TOC_SetNewLocation((dcacheType_t)mp_next[13].mp_next, (unsigned __int64)mp_next[1].mp_prev, (dcacheLocation_t)mp_next[1].mp_next, DCACHE_LOC_PATCH_MAN_ENC) )
        goto LABEL_110;
      v41 = j_va("PerformStartupPatchManifestProcessing: failed to mark avail enc %s \n", (const char *)&mp_next[1].mp_next + 4);
      OnlineSystem::DebugLog(this, v41);
      v42 = j_va("%d,%zu,%d", LODWORD(mp_next[13].mp_next), mp_next[1].mp_prev, LODWORD(mp_next[1].mp_next));
      v43 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v43, (Online_Error_CAT_PATCHER_t)0x40000000, v42);
      v44 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
      v44->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x40000000, v42);
      v45 = 0;
      while ( v45 < 65 )
      {
        if ( ((0x40000000ui64 >> ++v45) & 1) != 0 )
        {
          v44->patchingErrorCode = v45;
          goto LABEL_110;
        }
      }
LABEL_86:
      v44->patchingErrorCode = v45;
      goto LABEL_110;
  }
LABEL_96:
  v60 = 0;
  for ( k = 0; k < 2; ++k )
    v60 |= DCache_OnCorruption((dcacheType_t)k, CORRUPTION_UNEXPECTED_ACTION);
  LODWORD(location) = mp_next[1].mp_next;
  v62 = j_va("\t Unexpected action: action:%d, name:%s, cacheType:%d, location:%d \n", HIDWORD(mp_next[13].mp_next), (const char *)&mp_next[1].mp_next + 4, LODWORD(mp_next[13].mp_next), location);
  OnlineSystem::DebugLog(this, v62);
  LODWORD(locationa) = mp_next[1].mp_next;
  v63 = j_va("%d,%d,%zu,%d", HIDWORD(mp_next[13].mp_next), LODWORD(mp_next[13].mp_next), mp_next[1].mp_prev, locationa);
  v64 = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(v64, MOVEMENT, v63);
  v65 = Online_PatchStreamer::GetCCSPatchData(this, (const CCSPatchType)v2);
  v65->patchingStatus = PS_PATCHING_FAILED;
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v63);
  v66 = 0;
  do
  {
    if ( v66 >= 65 )
      break;
    ++v66;
  }
  while ( ((0x20000000000ui64 >> v66) & 1) == 0 );
  v65->patchingErrorCode = v66;
  LODWORD(v75) = HIDWORD(mp_next[13].mp_next);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1611, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected action: action: %d", v75) )
    __debugbreak();
  if ( !v60 )
    goto LABEL_112;
  v69 = j_va("PerformStartupPatchManifestProcessing: failed.\n");
  OnlineSystem::DebugLog(this, v69);
  return 0;
}

/*
==============
Online_PatchStreamer::ProcessDownloadActions
==============
*/
void Online_PatchStreamer::ProcessDownloadActions(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gameMode, const bool reevaluate, const bool requestDownload)
{
  __int64 v8; 
  __int64 v11; 
  CCSPatchData *v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  bool valid; 
  __int64 v17; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v19; 
  ntl::internal::list_node<psManifestActionInfo_t> *v20; 
  CCSPatchType v21; 
  bool v22; 
  unsigned int v23; 
  const char *v24; 
  int *p_totalPatchBytes; 
  char *v27; 
  const dvar_t *v28; 
  const char *v29; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  double v34; 
  __int64 v35; 
  unsigned int v37; 
  unsigned __int8 v39; 

  v39 = gameMode;
  v8 = patchType;
  if ( (unsigned int)patchType >= COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, 2) )
      __debugbreak();
    LOBYTE(gameMode) = v39;
  }
  v11 = v8;
  v35 = v8;
  v12 = &this->m_ccsPatchData[v8];
  if ( this->m_currentActions.valid[v8] )
  {
    v37 = (unsigned __int8)gameMode;
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    switch ( (unsigned __int8)gameMode )
    {
      case HALF:
        v13 = 3;
        break;
      case HALF_HALF:
        v13 = 5;
        break;
      case LONG:
        v13 = 9;
        break;
      default:
        v13 = 1;
        break;
    }
    v14 = 0;
    v15 = (unsigned __int8)gameMode;
    valid = v12->downloadInfo[(unsigned __int8)gameMode].valid;
    if ( reevaluate || !valid )
    {
      *(_QWORD *)&v12->downloadInfo[(unsigned __int8)gameMode].patchFilesNeeded = 0i64;
      *(_QWORD *)&v12->downloadInfo[(unsigned __int8)gameMode].streamedPatchBytesTotal = 0i64;
      v12->downloadInfo[(unsigned __int8)gameMode].valid = 1;
    }
    if ( (this->m_currentActions.allActions[v8] & 0x10) != 0 && (v13 & this->m_currentActions.downloadActionContexts[v8]) != 0 )
    {
      if ( reevaluate || !valid )
      {
        if ( v12->requestedDownload )
        {
          v17 = (unsigned __int8)this->m_ccsPatchData[v8].requestedContext[0];
          this->m_ccsPatchData[v8].requestedContext[0] = gameMode;
          v12->downloadInfo[(unsigned __int8)gameMode].patchFilesNeeded = 1;
          v12->downloadInfo[(unsigned __int8)gameMode].totalPatchBytes = v12->downloadInfo[v17].totalPatchBytes;
          v12->downloadInfo[(unsigned __int8)gameMode].streamedPatchBytesCurrent = v12->downloadInfo[v17].streamedPatchBytesCurrent;
          v12->downloadInfo[(unsigned __int8)gameMode].streamedPatchBytesTotal = v12->downloadInfo[v17].streamedPatchBytesTotal;
        }
        mp_next = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
        if ( mp_next != (ntl::internal::list_node_base *)&this->m_currentActions.actionInfoList.m_listHead )
        {
          do
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( (BYTE4(mp_next[13].mp_next) & 0x10) != 0 && (v13 & (__int64)mp_next[14].mp_prev) != 0 )
            {
              v12->downloadInfo[v15].totalPatchBytes += LODWORD(mp_next[12].mp_prev);
              ++v12->downloadInfo[v15].patchFilesNeeded;
              if ( !LODWORD(mp_next[13].mp_next) )
                this->m_ccsPatchData[v8].restartRequired = 1;
            }
            mp_next = mp_next->mp_next;
          }
          while ( mp_next != (ntl::internal::list_node_base *)&this->m_currentActions.actionInfoList.m_listHead );
          v11 = v8;
          v14 = 0;
        }
      }
      if ( requestDownload )
      {
        v19 = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
        if ( v19 != (ntl::internal::list_node_base *)&this->m_currentActions.actionInfoList.m_listHead )
        {
          do
          {
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( (BYTE4(v19[13].mp_next) & 0x10) != 0 && (v13 & (__int64)v19[14].mp_prev) != 0 && !v12->requestedDownload && v12->patchingStatus != PS_PATCHING_FAILED && Online_PatchStreamer::PerformManifestDownloadAction(this, patchType, (GameModeType)v39, (const psManifestActionInfo_t *)&v19[1]) )
            {
              v20 = (ntl::internal::list_node<psManifestActionInfo_t> *)v19;
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
                __debugbreak();
              v19 = v19->mp_next;
              ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t>>::remove(&this->m_currentActions.actionInfoList.m_listHead, v20);
              v20->mp_prev = (ntl::internal::list_node_base *)this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next;
              this->m_currentActions.actionInfoList.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20;
            }
            else
            {
              v19 = v19->mp_next;
            }
          }
          while ( v19 != (ntl::internal::list_node_base *)&this->m_currentActions.actionInfoList.m_listHead );
          v14 = 0;
        }
        v11 = v35;
      }
    }
    v21 = patchType;
    if ( (unsigned int)patchType >= COUNT )
    {
      LODWORD(v33) = 2;
      LODWORD(v32) = patchType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( v12->patchingStatus != PS_PATCHING_FAILED && v12->downloadInfo[v15].valid && this->m_currentActions.valid[v11] )
    {
      v22 = v12->downloadInfo[v15].patchFilesNeeded <= 0;
      v23 = v37;
      if ( v22 )
      {
        v24 = j_va("UpdatePatchingStatus: All patch files acquired for mode %d", v37);
        OnlineSystem::DebugLog(this, v24);
        if ( v12->restartRequired || (this->m_currentActions.allActions[v11] & 0x40F) != 0 )
        {
          if ( DVARINT_ccs_sendActionReport && Dvar_GetInt_Internal_DebugName(DVARINT_ccs_sendActionReport, "ccs_sendActionReport") )
            Online_PatchStreamer::SendActionReport(this);
          OnlineSystem::DebugLog(this, "UpdatePatchingStatus: Restart requested.");
          v12->patchingStatus = PS_PATCHING_COMPLETE_RESTART;
        }
        else
        {
          v12->patchingStatus = PS_PATCHING_COMPLETE;
        }
      }
      else
      {
        v12->patchingStatus = PS_PATCHING_IN_PROGRESS;
      }
    }
    else
    {
      v23 = v37;
    }
    __asm { vmovss  xmm6, cs:__real@42c80000 }
    p_totalPatchBytes = &v12->downloadInfo[0].totalPatchBytes;
    do
    {
      if ( *((_BYTE *)p_totalPatchBytes - 8) )
      {
        *(double *)&_XMM0 = Online_PatchStreamer::GetPatchingProgressForMode(this, v21, (const GameModeType)v39);
        __asm { vmulss  xmm1, xmm0, xmm6 }
      }
      else
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+98h+var_68], xmm0
      }
      LODWORD(v32) = v12->restartRequired;
      LODWORD(fmt) = *p_totalPatchBytes;
      v27 = j_va("ProcessDownloadActions: [Current Gamemode:%d], GameMode:%d, File Needed: %d, Total Size: %d, Restart:%d, Percent: %f %% \n", v23, v14, (unsigned int)*(p_totalPatchBytes - 1), fmt, v32, v34);
      v28 = DVARINT_onlineSystemDebugAll;
      v29 = v27;
      if ( !DVARINT_onlineSystemDebugAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineSystemDebugAll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.integer || this->ShowLogOutput(this) )
        Com_Printf(25, "%s: %s", this->m_name, v29);
      v21 = patchType;
      ++v14;
      p_totalPatchBytes += 5;
      v23 = v39;
    }
    while ( v14 < 4 );
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
  }
}

/*
==============
Online_PatchStreamer::ProcessManifestEntry
==============
*/
char Online_PatchStreamer::ProcessManifestEntry(Online_PatchStreamer *this, const CCSPatchType patchType, const unsigned int entryIndex, const psManifestFileEntry_t *inManifestEntry, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutPermDCacheFiles, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *inOutTempDcacheFiles, psManifestActionInfo_t *outAction)
{
  ntl::fixed_list<dcacheFileDetails_t *,2048,0> *v7; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  PatchManifestActionContext v27; 
  ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  __int64 v30; 
  const psManifestFileEntry_t *v31; 
  char *v32; 
  char v33; 
  char v34; 
  __int64 mp_next_low; 
  const char *v39; 
  const char *v40; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v43; 
  ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *v51; 
  ntl::internal::list_node_base *mp_prev; 
  __int64 v75; 
  const psManifestFileEntry_t *v76; 
  char *v77; 
  char v78; 
  char v79; 
  ntl::internal::list_node<dcacheFileDetails_t *> *v81; 
  ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *> > *v82; 
  __int64 v83; 
  const psManifestFileEntry_t *v84; 
  char *m_name; 
  char v86; 
  char v87; 
  dcacheType_t v90; 
  __int64 v91; 
  const char *v92; 
  const char *v93; 
  Online_ErrorReporting *v94; 
  CCSPatchData *v95; 
  int v96; 
  int v97; 
  __int64 v125; 
  const char *v126; 
  const char *v127; 
  Online_ErrorReporting *v128; 
  __int64 v143; 
  const char *v144; 
  const char *v145; 
  Online_ErrorReporting *v146; 
  const char *v162; 
  const char *v163; 
  Online_ErrorReporting *v164; 
  __int64 v165; 
  const char *v167; 
  const char *v168; 
  Online_ErrorReporting *v169; 
  __int64 v184; 
  __int64 m_location; 
  const char *v186; 
  const char *v187; 
  Online_ErrorReporting *v188; 
  int v189; 
  __int64 v205; 
  int v206; 
  char *v207; 
  signed __int64 v208; 
  char v209; 
  __int64 v210; 
  char v211; 
  char *v212; 
  char v213; 
  __int64 v214; 
  char v215; 
  bool v216; 
  int fileSizeCompressed; 
  __int64 v218; 
  __int64 v219; 
  __int64 Buf1[4]; 
  __int64 v223; 
  __int64 v224; 
  char dest[256]; 

  v7 = inOutTempDcacheFiles;
  _RBP = outAction;
  v223 = 0i64;
  v224 = 0i64;
  if ( !inManifestEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1753, ASSERT_TYPE_ASSERT, "(inManifestEntry)", (const char *)&queryFormat, "inManifestEntry") )
    __debugbreak();
  if ( !inOutPermDCacheFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1754, ASSERT_TYPE_ASSERT, "(inOutPermDCacheFiles)", (const char *)&queryFormat, "inOutPermDCacheFiles") )
    __debugbreak();
  if ( !inOutTempDcacheFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1755, ASSERT_TYPE_ASSERT, "(inOutTempDcacheFiles)", (const char *)&queryFormat, "inOutTempDcacheFiles") )
    __debugbreak();
  if ( !outAction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 1756, ASSERT_TYPE_ASSERT, "(outAction)", (const char *)&queryFormat, "outAction") )
    __debugbreak();
  if ( patchType == MOVEMENT || (v11 = "comms", patchType != DODGE) )
    v11 = "patch";
  v12 = 256i64;
  Com_sprintf(dest, 0x100ui64, "%s_%s_%s_%s.%s", "dev_pack", v11, "xb3", "8.24", "bin");
  memset(Buf1, 0, sizeof(Buf1));
  v223 = 0i64;
  v224 = 0i64;
  memset_0(outAction, 0, sizeof(psManifestActionInfo_t));
  v13 = 3i64;
  _RCX = &outAction->manifestEntry;
  _RAX = inManifestEntry;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RCX = (psManifestFileEntry_t *)((char *)_RCX + 128);
    _RAX = (const psManifestFileEntry_t *)((char *)_RAX + 128);
    __asm { vmovups xmmword ptr [rcx-10h], xmm1 }
    --v13;
  }
  while ( v13 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
  }
  *(_QWORD *)&_RCX->fileName[48] = *(_QWORD *)&_RAX->fileName[48];
  switch ( inManifestEntry->gameMode[0] )
  {
    case 1:
      v27 = PATCH_MAN_ACT_CONTEXT_SP;
      break;
    case 2:
      v27 = PATCH_MAN_ACT_CONTEXT_MP;
      break;
    case 3:
      v27 = PATCH_MAN_ACT_CONTEXT_CP;
      break;
    default:
      v27 = PATCH_MAN_ACT_CONTEXT_SHARED;
      break;
  }
  outAction->context = v27;
  p_m_listHead = &inOutPermDCacheFiles->m_listHead;
  mp_next = inOutPermDCacheFiles->m_listHead.m_sentinel.mp_next;
  if ( inManifestEntry->isDormant )
  {
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
    while ( 2 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v30 = 128i64;
      v31 = inManifestEntry;
      v32 = (char *)&mp_next[1].mp_prev->mp_next + 4;
      if ( mp_next[1].mp_prev == (ntl::internal::list_node_base *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v33 = *v32++;
        v34 = v31->fileName[0];
        v31 = (const psManifestFileEntry_t *)((char *)v31 + 1);
        if ( !v30-- )
          break;
        if ( v33 != v34 )
          goto LABEL_38;
      }
      while ( v33 );
      _RDI = mp_next[1].mp_prev;
      if ( memcmp_0(&_RDI[9], &inManifestEntry->rawHash, 0x20ui64) && memcmp_0(&_RDI[9], &inManifestEntry->encryptedHash, 0x20ui64) )
      {
LABEL_38:
        mp_next = mp_next->mp_next;
        if ( mp_next != (ntl::internal::list_node_base *)&inOutPermDCacheFiles->m_listHead )
          continue;
        return 0;
      }
      break;
    }
    mp_next_low = LODWORD(_RDI->mp_next);
    switch ( (_DWORD)mp_next_low )
    {
      case 0x10:
        goto LABEL_50;
      case 0x20:
        goto LABEL_47;
      case 0x40:
LABEL_50:
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rbp+0], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rbp+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rbp+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rbp+30h], xmm1
          vmovups xmm0, xmmword ptr [rdi+40h]
          vmovups xmmword ptr [rbp+40h], xmm0
          vmovups xmm1, xmmword ptr [rdi+50h]
          vmovups xmmword ptr [rbp+50h], xmm1
          vmovups xmm0, xmmword ptr [rdi+60h]
          vmovups xmmword ptr [rbp+60h], xmm0
          vmovups xmm1, xmmword ptr [rdi+70h]
        }
        _R14 = 128i64;
        __asm { vmovups xmmword ptr [r14+rbp-10h], xmm1 }
        _RDI = _RDI + 8;
        _RCX = &outAction->fileDetails.m_name[116];
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
        }
        mp_prev = _RDI[4].mp_prev;
        outAction->action = PATCH_MAN_ACT_MARK_DORM;
        goto LABEL_51;
    }
    v39 = j_va("\t Stale: Unexpected Location: name:%s, cacheType:%d, location:%d \n", (const char *)&_RDI->mp_next + 4, 1i64, mp_next_low);
    OnlineSystem::DebugLog(this, v39);
    v40 = j_va("%d,%zu,%d", 1i64, mp_next[1].mp_prev->mp_prev, LODWORD(mp_next[1].mp_prev->mp_next));
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v40);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v40);
    v43 = 0;
    do
    {
      if ( v43 >= 65 )
        break;
      ++v43;
    }
    while ( ((0x400000000ui64 >> v43) & 1) == 0 );
LABEL_46:
    CCSPatchData->patchingErrorCode = v43;
    return 0;
  }
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    goto LABEL_67;
  do
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v75 = 128i64;
    v76 = inManifestEntry;
    v77 = (char *)&mp_next[1].mp_prev->mp_next + 4;
    if ( mp_next[1].mp_prev == (ntl::internal::list_node_base *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v78 = *v77++;
      v79 = v76->fileName[0];
      v76 = (const psManifestFileEntry_t *)((char *)v76 + 1);
      if ( !v75-- )
        break;
      if ( v78 != v79 )
        goto LABEL_65;
    }
    while ( v78 );
    _RDI = mp_next[1].mp_prev;
    if ( !memcmp_0(&_RDI[9], &inManifestEntry->rawHash, 0x20ui64) )
    {
      v125 = LODWORD(_RDI->mp_next);
      if ( (_DWORD)v125 == 16 )
      {
LABEL_47:
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rbp+0], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rbp+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rbp+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rbp+30h], xmm1
          vmovups xmm0, xmmword ptr [rdi+40h]
          vmovups xmmword ptr [rbp+40h], xmm0
          vmovups xmm1, xmmword ptr [rdi+50h]
          vmovups xmmword ptr [rbp+50h], xmm1
          vmovups xmm0, xmmword ptr [rdi+60h]
        }
        v51 = &inOutPermDCacheFiles->m_listHead;
        __asm
        {
          vmovups xmmword ptr [rbp+60h], xmm0
          vmovups xmm1, xmmword ptr [rdi+70h]
        }
        _RBP = &outAction->fileDetails.m_name[116];
        _RDI = _RDI + 8;
        goto LABEL_48;
      }
      if ( (_DWORD)v125 != 32 )
      {
        v126 = j_va("\t Perm Raw match: Unexpected Location: name:%s, cacheType:%d, location:%d \n", (const char *)&_RDI->mp_next + 4, 1i64, v125);
        OnlineSystem::DebugLog(this, v126);
        v127 = j_va("%d,%zu,%d", 1i64, mp_next[1].mp_prev->mp_prev, LODWORD(mp_next[1].mp_prev->mp_next));
        v128 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v128, MOVEMENT, v127);
        CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v127);
        v43 = 0;
        while ( v43 < 65 )
        {
          if ( ((0x800000000ui64 >> ++v43) & 1) != 0 )
          {
            CCSPatchData->patchingErrorCode = v43;
            return 0;
          }
        }
        goto LABEL_46;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbp+0], xmm0
        vmovups xmm1, xmmword ptr [rdi+10h]
        vmovups xmmword ptr [rbp+10h], xmm1
        vmovups xmm0, xmmword ptr [rdi+20h]
        vmovups xmmword ptr [rbp+20h], xmm0
        vmovups xmm1, xmmword ptr [rdi+30h]
        vmovups xmmword ptr [rbp+30h], xmm1
        vmovups xmm0, xmmword ptr [rdi+40h]
        vmovups xmmword ptr [rbp+40h], xmm0
        vmovups xmm1, xmmword ptr [rdi+50h]
        vmovups xmmword ptr [rbp+50h], xmm1
        vmovups xmm0, xmmword ptr [rdi+60h]
        vmovups xmmword ptr [rbp+60h], xmm0
        vmovups xmm1, xmmword ptr [rdi+70h]
      }
      _R14 = 128i64;
      __asm { vmovups xmmword ptr [r14+rbp-10h], xmm1 }
      _RDI = _RDI + 8;
      _RCX = &outAction->fileDetails.m_name[116];
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rdi+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rdi+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rdi+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
      }
      mp_prev = _RDI[4].mp_prev;
      outAction->action = PATCH_MAN_ACT_MARK_AVAIL;
LABEL_51:
      *((_QWORD *)_RCX + 8) = mp_prev;
      v51 = &inOutPermDCacheFiles->m_listHead;
      outAction->dcacheType = DCACHE_TYPE_PERSISTENT;
LABEL_52:
      ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *>>::remove(v51, (ntl::internal::list_node<dcacheFileDetails_t *> *)mp_next);
      mp_next->mp_prev = (ntl::internal::list_node_base *)inOutPermDCacheFiles->m_freelist.m_head.mp_next;
      inOutPermDCacheFiles->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      return 1;
    }
    if ( !memcmp_0(&_RDI[9], &inManifestEntry->encryptedHash, 0x20ui64) )
    {
      v91 = LODWORD(_RDI->mp_next);
      if ( (_DWORD)v91 != 32 )
      {
        if ( (_DWORD)v91 != 64 )
        {
          v92 = j_va("\tPerm Ecrypted match: Unexpected Location: name:%s, cacheType:%d, location:%d \n", (const char *)&_RDI->mp_next + 4, 1i64, v91);
          OnlineSystem::DebugLog(this, v92);
          v93 = j_va("%d,%zu,%d", 1i64, mp_next[1].mp_prev->mp_prev, LODWORD(mp_next[1].mp_prev->mp_next));
          v94 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v94, MOVEMENT, v93);
          v95 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
          v95->patchingStatus = PS_PATCHING_FAILED;
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v93);
          v96 = 0;
          do
          {
            if ( v96 >= 65 )
              break;
            ++v96;
          }
          while ( ((0x1000000000ui64 >> v96) & 1) == 0 );
          goto LABEL_88;
        }
        v97 = memcmp_0(Buf1, &inManifestEntry->encryptionKey, 0x30ui64);
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rbp+0], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rbp+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rbp+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rbp+30h], xmm1
          vmovups xmm0, xmmword ptr [rdi+40h]
          vmovups xmmword ptr [rbp+40h], xmm0
          vmovups xmm1, xmmword ptr [rdi+50h]
          vmovups xmmword ptr [rbp+50h], xmm1
          vmovups xmm0, xmmword ptr [rdi+60h]
          vmovups xmmword ptr [rbp+60h], xmm0
          vmovups xmm1, xmmword ptr [rdi+70h]
        }
        _R14 = 128i64;
        v51 = &inOutPermDCacheFiles->m_listHead;
        _RDI = _RDI + 8;
        if ( v97 )
        {
          __asm
          {
            vmovups xmmword ptr [r14+rbp-10h], xmm1
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [r14+rbp], xmm0
            vmovups xmm1, xmmword ptr [rdi+10h]
          }
          _RDX = &outAction->fileDetails.m_name[116];
          __asm
          {
            vmovups xmmword ptr [rdx+10h], xmm1
            vmovups xmm0, xmmword ptr [rdi+20h]
            vmovups xmmword ptr [rdx+20h], xmm0
            vmovups xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rdx+30h], xmm1
          }
          *(_QWORD *)&outAction->fileDetails.m_timestamp = _RDI[4].mp_prev;
          outAction->dcacheType = DCACHE_TYPE_PERSISTENT;
          if ( inManifestEntry->fileSizeCompressed )
            LODWORD(_R14) = 512;
          outAction->action = _R14;
          goto LABEL_52;
        }
        _RBP = &outAction->fileDetails.m_name[116];
LABEL_48:
        __asm
        {
          vmovups xmmword ptr [rbp-10h], xmm1
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rbp+0], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rbp+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rbp+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rbp+30h], xmm1
        }
        *((_QWORD *)_RBP + 8) = _RDI[4].mp_prev;
        ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *>>::remove(v51, (ntl::internal::list_node<dcacheFileDetails_t *> *)mp_next);
        mp_next->mp_prev = (ntl::internal::list_node_base *)inOutPermDCacheFiles->m_freelist.m_head.mp_next;
        inOutPermDCacheFiles->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
        return 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbp+0], xmm0
        vmovups xmm1, xmmword ptr [rdi+10h]
        vmovups xmmword ptr [rbp+10h], xmm1
        vmovups xmm0, xmmword ptr [rdi+20h]
        vmovups xmmword ptr [rbp+20h], xmm0
        vmovups xmm1, xmmword ptr [rdi+30h]
        vmovups xmmword ptr [rbp+30h], xmm1
        vmovups xmm0, xmmword ptr [rdi+40h]
        vmovups xmmword ptr [rbp+40h], xmm0
        vmovups xmm1, xmmword ptr [rdi+50h]
        vmovups xmmword ptr [rbp+50h], xmm1
        vmovups xmm0, xmmword ptr [rdi+60h]
        vmovups xmmword ptr [rbp+60h], xmm0
        vmovups xmm1, xmmword ptr [rdi+70h]
      }
      _R14 = 128i64;
      __asm { vmovups xmmword ptr [r14+rbp-10h], xmm1 }
      _RDI = _RDI + 8;
      _RCX = &outAction->fileDetails.m_name[116];
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rdi+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rdi+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rdi+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
      }
      mp_prev = _RDI[4].mp_prev;
      outAction->action = PATCH_MAN_ACT_MARK_ENC;
      goto LABEL_51;
    }
LABEL_65:
    mp_next = mp_next->mp_next;
  }
  while ( mp_next != (ntl::internal::list_node_base *)&inOutPermDCacheFiles->m_listHead );
  v7 = inOutTempDcacheFiles;
LABEL_67:
  v81 = (ntl::internal::list_node<dcacheFileDetails_t *> *)v7->m_listHead.m_sentinel.mp_next;
  v82 = &v7->m_listHead;
  if ( v81 == (ntl::internal::list_node<dcacheFileDetails_t *> *)&v7->m_listHead )
  {
LABEL_81:
    v90 = DCACHE_TYPE_TEMPORARY;
    if ( inManifestEntry->packSize )
    {
      outAction->action = PATCH_MAN_ACT_UNPACK;
    }
    else if ( (this->m_currentActions.allActions[patchType] & 0x400) != 0 )
    {
LABEL_144:
      outAction->action = PATCH_MAN_ACT_DOWNLOAD;
    }
    else
    {
      v212 = dest;
      do
      {
        v213 = v212[(char *)inManifestEntry - dest];
        v214 = v12;
        v215 = *v212++;
        --v12;
        if ( !v214 )
          break;
        if ( v213 != v215 )
          goto LABEL_144;
      }
      while ( v213 );
      outAction->action = PATCH_MAN_ACT_NONE;
    }
    Core_strcpy(outAction->fileDetails.m_name, 0x80ui64, inManifestEntry->fileName);
    outAction->fileDetails.m_version = inManifestEntry->fileVersion;
    if ( inManifestEntry->fileSizeEncrypted )
    {
      outAction->fileDetails.m_location = DCACHE_LOC_PATCH_MAN_ENC;
      outAction->fileDetails.m_size = inManifestEntry->fileSizeEncrypted;
      v216 = memcmp_0(Buf1, &inManifestEntry->encryptionKey, 0x30ui64) == 0;
    }
    else
    {
      fileSizeCompressed = inManifestEntry->fileSizeCompressed;
      if ( fileSizeCompressed )
      {
        outAction->fileDetails.m_size = fileSizeCompressed;
        outAction->fileDetails.m_location = DCACHE_LOC_PATCH_MAN_CMP;
LABEL_151:
        outAction->dcacheType = v90;
        return 1;
      }
      outAction->fileDetails.m_size = inManifestEntry->fileSizeRaw;
      outAction->fileDetails.m_location = DCACHE_LOC_PATCH_MAN;
      v216 = inManifestEntry->forceRestart == 0;
    }
    LOBYTE(v90) = v216;
    goto LABEL_151;
  }
  while ( 2 )
  {
    if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v83 = 128i64;
    v84 = inManifestEntry;
    m_name = v81->m_data->m_name;
    if ( v81->m_data == (dcacheFileDetails_t *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v86 = *m_name++;
      v87 = v84->fileName[0];
      v84 = (const psManifestFileEntry_t *)((char *)v84 + 1);
      if ( !v83-- )
        break;
      if ( v86 != v87 )
        goto LABEL_80;
    }
    while ( v86 );
    _RDI = v81->m_data;
    if ( !memcmp_0(&_RDI->m_computedHashValue, &inManifestEntry->rawHash, 0x20ui64) )
    {
      m_location = (unsigned int)_RDI->m_location;
      if ( (_DWORD)m_location == 16 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rbp+0], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rbp+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rbp+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rbp+30h], xmm1
          vmovups xmm0, xmmword ptr [rdi+40h]
          vmovups xmmword ptr [rbp+40h], xmm0
          vmovups xmm1, xmmword ptr [rdi+50h]
          vmovups xmmword ptr [rbp+50h], xmm1
          vmovups xmm0, xmmword ptr [rdi+60h]
          vmovups xmmword ptr [rbp+60h], xmm0
          vmovups xmm1, xmmword ptr [rdi+70h]
        }
        _R14 = 128i64;
        __asm { vmovups xmmword ptr [r14+rbp-10h], xmm1 }
        _RDI = &_RDI->m_name[116];
        _RCX = &outAction->fileDetails.m_name[116];
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
        }
        v205 = *((_QWORD *)_RDI + 8);
        v206 = 0;
        *(_QWORD *)&outAction->fileDetails.m_timestamp = v205;
        v207 = dest;
        outAction->dcacheType = DCACHE_TYPE_TEMPORARY;
        v208 = (char *)inManifestEntry - dest;
        while ( 1 )
        {
          v209 = v207[v208];
          v210 = v12;
          v211 = *v207++;
          --v12;
          if ( !v210 )
            break;
          if ( v209 != v211 )
          {
            v206 = 1;
            if ( v209 < v211 )
              v206 = -1;
            break;
          }
          if ( !v209 )
          {
            outAction->action = PATCH_MAN_ACT_NONE;
            goto LABEL_111;
          }
        }
        outAction->action = v206 != 0 ? PATCH_MAN_ACT_COPY : PATCH_MAN_ACT_NONE;
        goto LABEL_111;
      }
      v186 = j_va("\t Temp raw match: Unexpected Location: name:%s, cacheType:%d, location:%d \n", _RDI->m_name, 0i64, m_location);
      OnlineSystem::DebugLog(this, v186);
      v187 = j_va("%d,%zu,%d", 0i64, v81->m_data->m_fileID, (unsigned int)v81->m_data->m_location);
      v188 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v188, MOVEMENT, v187);
      if ( (unsigned int)patchType >= COUNT )
      {
        LODWORD(v219) = 2;
        LODWORD(v218) = patchType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", v218, v219) )
          __debugbreak();
      }
      this->m_ccsPatchData[patchType].patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v187);
      v189 = 0;
      do
      {
        if ( v189 >= 65 )
          break;
        ++v189;
      }
      while ( ((0x2000000000ui64 >> v189) & 1) == 0 );
      this->m_ccsPatchData[patchType].patchingErrorCode = v189;
      return 0;
    }
    else
    {
      if ( !memcmp_0(&_RDI->m_computedHashValue, &inManifestEntry->compressedHash, 0x20ui64) )
      {
        v165 = (unsigned int)_RDI->m_location;
        _R14 = 128i64;
        if ( (_DWORD)v165 == 128 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rbp+0], xmm0
            vmovups xmm1, xmmword ptr [rdi+10h]
            vmovups xmmword ptr [rbp+10h], xmm1
            vmovups xmm0, xmmword ptr [rdi+20h]
            vmovups xmmword ptr [rbp+20h], xmm0
            vmovups xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rbp+30h], xmm1
            vmovups xmm0, xmmword ptr [rdi+40h]
            vmovups xmmword ptr [rbp+40h], xmm0
            vmovups xmm1, xmmword ptr [rdi+50h]
            vmovups xmmword ptr [rbp+50h], xmm1
            vmovups xmm0, xmmword ptr [rdi+60h]
            vmovups xmmword ptr [rbp+60h], xmm0
            vmovups xmm1, xmmword ptr [rdi+70h]
            vmovups xmmword ptr [r14+rbp-10h], xmm1
          }
          _RDI = &_RDI->m_name[116];
          _RCX = &outAction->fileDetails.m_name[116];
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rdi+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
            vmovups xmm0, xmmword ptr [rdi+20h]
            vmovups xmmword ptr [rcx+20h], xmm0
            vmovups xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rcx+30h], xmm1
          }
          v184 = *((_QWORD *)_RDI + 8);
          outAction->dcacheType = DCACHE_TYPE_TEMPORARY;
          *(_QWORD *)&outAction->fileDetails.m_timestamp = v184;
          outAction->action = PATCH_MAN_ACT_INFLATE;
LABEL_111:
          ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *>>::remove(v82, v81);
          v81->mp_prev = (ntl::internal::list_node_base *)inOutTempDcacheFiles->m_freelist.m_head.mp_next;
          inOutTempDcacheFiles->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v81;
          return 1;
        }
        v167 = j_va("\t Temp Compressed match: Unexpected Location: name:%s, cacheType:%d, location:%d \n", _RDI->m_name, 0i64, v165);
        OnlineSystem::DebugLog(this, v167);
        v168 = j_va("%d,%zu,%d", 0i64, v81->m_data->m_fileID, (unsigned int)v81->m_data->m_location);
        v169 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v169, MOVEMENT, v168);
        v95 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        v95->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v168);
        v96 = 0;
        while ( v96 < 65 )
        {
          if ( ((0x4000000000ui64 >> ++v96) & 1) != 0 )
          {
            v95->patchingErrorCode = v96;
            return 0;
          }
        }
      }
      else
      {
        if ( memcmp_0(&_RDI->m_computedHashValue, &inManifestEntry->encryptedHash, 0x20ui64) )
        {
LABEL_80:
          v81 = (ntl::internal::list_node<dcacheFileDetails_t *> *)v81->mp_next;
          if ( v81 != (ntl::internal::list_node<dcacheFileDetails_t *> *)v82 )
            continue;
          goto LABEL_81;
        }
        v143 = (unsigned int)_RDI->m_location;
        if ( (_DWORD)v143 != 64 )
        {
          v144 = j_va("\t Temp Encrypted match: Unexpected Location: name:%s, cacheType:%d, location:%d \n", _RDI->m_name, 0i64, v143);
          OnlineSystem::DebugLog(this, v144);
          v145 = j_va("%d,%zu,%d", 0i64, v81->m_data->m_fileID, (unsigned int)v81->m_data->m_location);
          v146 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v146, MOVEMENT, v145);
          v95 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
          v95->patchingStatus = PS_PATCHING_FAILED;
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v145);
          v96 = 0;
          while ( v96 < 65 )
          {
            if ( ((0x8000000000ui64 >> ++v96) & 1) != 0 )
            {
              v95->patchingErrorCode = v96;
              return 0;
            }
          }
          goto LABEL_88;
        }
        if ( memcmp_0(Buf1, &inManifestEntry->encryptionKey, 0x30ui64) )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rbp+0], xmm0
            vmovups xmm1, xmmword ptr [rdi+10h]
            vmovups xmmword ptr [rbp+10h], xmm1
            vmovups xmm0, xmmword ptr [rdi+20h]
            vmovups xmmword ptr [rbp+20h], xmm0
            vmovups xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rbp+30h], xmm1
            vmovups xmm0, xmmword ptr [rdi+40h]
            vmovups xmmword ptr [rbp+40h], xmm0
            vmovups xmm1, xmmword ptr [rdi+50h]
            vmovups xmmword ptr [rbp+50h], xmm1
            vmovups xmm0, xmmword ptr [rdi+60h]
            vmovups xmmword ptr [rbp+60h], xmm0
            vmovups xmm1, xmmword ptr [rdi+70h]
          }
          _R14 = 128i64;
          __asm { vmovups xmmword ptr [r14+rbp-10h], xmm1 }
          _RDI = &_RDI->m_name[116];
          _RDX = &outAction->fileDetails.m_name[116];
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rdx], xmm0
            vmovups xmm1, xmmword ptr [rdi+10h]
            vmovups xmmword ptr [rdx+10h], xmm1
            vmovups xmm0, xmmword ptr [rdi+20h]
            vmovups xmmword ptr [rdx+20h], xmm0
            vmovups xmm1, xmmword ptr [rdi+30h]
            vmovups xmmword ptr [rdx+30h], xmm1
          }
          *(_QWORD *)&outAction->fileDetails.m_timestamp = *((_QWORD *)_RDI + 8);
          outAction->dcacheType = DCACHE_TYPE_TEMPORARY;
          if ( inManifestEntry->fileSizeCompressed )
            LODWORD(_R14) = 512;
          outAction->action = _R14;
          goto LABEL_111;
        }
        v162 = j_va("\t Temp Encrypted match: no key available: name:%s, cacheType:%d, location:%d \n", _RDI->m_name, 0i64, 64i64);
        OnlineSystem::DebugLog(this, v162);
        v163 = j_va("%d,%zu,%d", 0i64, v81->m_data->m_fileID, (unsigned int)v81->m_data->m_location);
        v164 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v164, MOVEMENT, v163);
        v95 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        v95->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v163);
        v96 = 0;
        while ( v96 < 65 )
        {
          if ( ((0x10000000000ui64 >> ++v96) & 1) != 0 )
          {
            v95->patchingErrorCode = v96;
            return 0;
          }
        }
      }
LABEL_88:
      v95->patchingErrorCode = v96;
      return 0;
    }
  }
}

/*
==============
Online_PatchStreamer::Reset
==============
*/
void Online_PatchStreamer::Reset(Online_PatchStreamer *this, const CCSPatchType patchType, const bool persistManifestVersion)
{
  __int64 v3; 
  CCSPatchData *v6; 

  v3 = patchType;
  if ( (unsigned int)patchType >= COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, 2) )
    __debugbreak();
  v6 = &this->m_ccsPatchData[v3];
  *(_DWORD *)&v6->requestedDownload = 0;
  *(_WORD *)v6->requestedContext = 4;
  v6->errorDetected = 0;
  v6->patchingErrorCode = 0;
  v6->restartRequired = 0;
  psManifestActionResults_t::Reset(&this->m_currentActions, (const CCSPatchType)v3);
  this->m_ccsPatchData[v3].downloadInfo[0].valid = 0;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[0].patchFilesNeeded = 0i64;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[0].streamedPatchBytesTotal = 0i64;
  this->m_ccsPatchData[v3].downloadInfo[1].valid = 0;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[1].patchFilesNeeded = 0i64;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[1].streamedPatchBytesTotal = 0i64;
  this->m_ccsPatchData[v3].downloadInfo[2].valid = 0;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[2].patchFilesNeeded = 0i64;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[2].streamedPatchBytesTotal = 0i64;
  this->m_ccsPatchData[v3].downloadInfo[3].valid = 0;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[3].patchFilesNeeded = 0i64;
  *(_QWORD *)&this->m_ccsPatchData[v3].downloadInfo[3].streamedPatchBytesTotal = 0i64;
  if ( !persistManifestVersion )
    this->m_ccsPatchData[v3].currentManifestVersion = 0x7FFF;
  this->m_controllerIndex = -1;
  *(_QWORD *)&this->m_manifestUpdateNextCheckTime = 0x7FFFFFFFi64;
}

/*
==============
Online_PatchStreamer::ResetAll
==============
*/
void Online_PatchStreamer::ResetAll(Online_PatchStreamer *this, const bool persistManifestVersion)
{
  CCSPatchType i; 
  __int64 v5; 

  for ( i = MOVEMENT; (unsigned int)i < COUNT; ++i )
  {
    v5 = i;
    *(_DWORD *)&this->m_ccsPatchData[v5].requestedDownload = 0;
    *(_WORD *)this->m_ccsPatchData[v5].requestedContext = 4;
    this->m_ccsPatchData[v5].errorDetected = 0;
    this->m_ccsPatchData[v5].patchingErrorCode = 0;
    this->m_ccsPatchData[v5].restartRequired = 0;
    psManifestActionResults_t::Reset(&this->m_currentActions, i);
    this->m_ccsPatchData[v5].downloadInfo[0].valid = 0;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[0].patchFilesNeeded = 0i64;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[0].streamedPatchBytesTotal = 0i64;
    this->m_ccsPatchData[v5].downloadInfo[1].valid = 0;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[1].patchFilesNeeded = 0i64;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[1].streamedPatchBytesTotal = 0i64;
    this->m_ccsPatchData[v5].downloadInfo[2].valid = 0;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[2].patchFilesNeeded = 0i64;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[2].streamedPatchBytesTotal = 0i64;
    this->m_ccsPatchData[v5].downloadInfo[3].valid = 0;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[3].patchFilesNeeded = 0i64;
    *(_QWORD *)&this->m_ccsPatchData[v5].downloadInfo[3].streamedPatchBytesTotal = 0i64;
    if ( !persistManifestVersion )
      this->m_ccsPatchData[v5].currentManifestVersion = 0x7FFF;
    this->m_controllerIndex = -1;
    *(_QWORD *)&this->m_manifestUpdateNextCheckTime = 0x7FFFFFFFi64;
  }
}

/*
==============
Online_PatchStreamer::SendActionReport
==============
*/
void Online_PatchStreamer::SendActionReport(Online_PatchStreamer *this)
{
  unsigned int v2; 
  ntl::internal::list_node_base *mp_next; 
  __int64 i; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  Online_ErrorReporting *InstancePtr; 
  const char *v9; 
  Online_ErrorReporting *v10; 
  const char *v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  ntl::internal::list_head_base<ntl::internal::list_node<psManifestActionInfo_t> > *p_m_listHead; 
  __int64 Buf1[4]; 
  char outHexString[8]; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  char v34; 
  char dest[1024]; 

  memset(Buf1, 0, sizeof(Buf1));
  v2 = 0;
  v23 = 0;
  memset_0(dest, 0, sizeof(dest));
  mp_next = this->m_currentActions.actionInfoList.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_currentActions.actionInfoList.m_listHead;
  for ( i = -1i64; mp_next != (ntl::internal::list_node_base *)p_m_listHead; mp_next = mp_next->mp_next )
  {
    *(_QWORD *)outHexString = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    v34 = 0;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( memcmp_0(Buf1, &mp_next[10], 0x20ui64) )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      ByteBufferToHexString((const unsigned __int8 *)&mp_next[10], 32, outHexString, 65);
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    LODWORD(v22) = BYTE4(mp_next[13].mp_prev);
    LODWORD(v21) = HIDWORD(mp_next[9].mp_next);
    LODWORD(v20) = HIDWORD(mp_next[12].mp_next);
    LODWORD(v19) = mp_next[12].mp_next;
    LODWORD(v18) = mp_next[12].mp_prev;
    LODWORD(v17) = SWORD2(mp_next[12].mp_prev);
    LODWORD(v16) = mp_next[1].mp_next;
    LODWORD(v15) = mp_next[41].mp_next;
    LODWORD(v14) = HIDWORD(mp_next[41].mp_prev);
    LODWORD(v13) = HIDWORD(mp_next[39].mp_prev);
    LODWORD(fmt) = HIDWORD(mp_next[41].mp_next);
    i = -1i64;
    v5 = j_va("[%d,%d,%d,%d],[%s,%d,%d,%d],[%s,%d,%d,%d,%d,%d,%d,%d,%s], ", HIDWORD(mp_next[13].mp_next), LODWORD(mp_next[13].mp_next), LODWORD(mp_next[14].mp_prev), fmt, (const char *)&mp_next[14].mp_prev + 4, v13, v14, v15, (const char *)&mp_next[1].mp_next + 4, v16, v17, v18, v19, v20, v21, v22, outHexString);
    v6 = -1i64;
    do
      ++v6;
    while ( dest[v6] );
    v7 = -1i64;
    do
      ++v7;
    while ( v5[v7] );
    v2 = v23;
    if ( (unsigned int)v7 >= 1024 - (int)v6 )
    {
      v2 = v23 + 1;
      v23 = v2;
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v9 = j_va("%d:%s", v2, dest);
      Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v9);
      memset_0(dest, 0, sizeof(dest));
      i = -1i64;
    }
    I_strcat_truncate(dest, 0x400ui64, v5);
  }
  do
    ++i;
  while ( dest[i] );
  if ( (_DWORD)i )
  {
    v10 = Online_ErrorReporting::GetInstancePtr();
    v11 = j_va("%d:%s", v2, dest);
    Online_ErrorReporting::ReportError(v10, MOVEMENT, v11);
  }
}

/*
==============
Online_PatchStreamer::StartPatchProcess
==============
*/
bool Online_PatchStreamer::StartPatchProcess(Online_PatchStreamer *this, const CCSPatchType patchType, const int controllerIndex)
{
  const dvar_t *v6; 
  int m_controllerIndex; 
  CCSPatchData *CCSPatchData; 
  int Int_Internal_DebugName; 

  if ( !Live_IsUserSignedInToDemonware(controllerIndex) )
    return 0;
  v6 = DVARBOOL_online_ccs_cs_support_enabled;
  if ( !DVARBOOL_online_ccs_cs_support_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_ccs_cs_support_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && !LiveStorage_CS_IsAvailable(controllerIndex) )
    return 0;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 )
  {
    this->m_controllerIndex = controllerIndex;
  }
  else if ( m_controllerIndex != controllerIndex )
  {
    return 0;
  }
  CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
  if ( !CCSPatchData->requestedManifest && !CCSPatchData->downloadedManifest )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_patching_fetch_prerelease, "online_patching_fetch_prerelease");
    return Online_PatchStreamer::FetchManifest(this, patchType, Int_Internal_DebugName != 0);
  }
  return 0;
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleCopy
==============
*/
__int64 Online_PatchStreamer::StartupProcessingHandleCopy(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  const char *v20; 
  const char *v21; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v24; 
  const char *v25; 
  const char *v26; 
  Online_ErrorReporting *v27; 
  unsigned __int8 v28; 
  const char *v29; 
  const char *v30; 
  Online_ErrorReporting *v31; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t fileSpecifier; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v34; 
  CachedContentIOStreamDCache v35; 
  CachedContentIOStreamDCache v36; 

  _RBX = action;
  memset(&fileSpecifier.fileDetails.m_computedHashValue, 0, sizeof(fileSpecifier.fileDetails.m_computedHashValue));
  fileSpecifier.cacheType = action->dcacheType;
  _RCX = &fileSpecifier.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [r8+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [r8+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [r8+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [r8+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  *(_QWORD *)&fileSpecifier.fileDetails.m_timestamp = *(_QWORD *)&action->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v36, &fileSpecifier, CCIOSModeRead);
  memset(&v34.fileDetails.m_computedHashValue, 0, sizeof(v34.fileDetails.m_computedHashValue));
  v34.cacheType = DCACHE_TYPE_PERSISTENT;
  _RCX = &v34.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rbx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rbx+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm0
  }
  *(_QWORD *)&v34.fileDetails.m_timestamp = *(_QWORD *)&_RBX->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v35, &v34, CCIOSModeWrite);
  if ( !CachedContentIOStreamCopy::PerformCopy(&v36, &v35) )
  {
    v20 = j_va("StartupProcessingHandleCopy: failed to copy %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v20);
    v21 = j_va("%d,%d,%zu,%d", (unsigned int)_RBX->dcacheType, 1i64, _RBX->fileDetails.m_fileID, _RBX->fileDetails.m_location);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)0x4000, v21);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x4000, v21);
    v24 = 0;
    do
    {
      if ( v24 >= 65 )
        break;
      ++v24;
    }
    while ( ((0x4000ui64 >> v24) & 1) == 0 );
LABEL_16:
    CCSPatchData->patchingErrorCode = v24;
    v28 = 0;
    goto LABEL_17;
  }
  CachedContentIOStreamDCache::Close(&v36);
  CachedContentIOStreamDCache::Close(&v35);
  if ( !DCache_TOC_VerifyHash(DCACHE_TYPE_PERSISTENT, _RBX->fileDetails.m_fileID, _RBX->fileDetails.m_location, &_RBX->fileDetails.m_computedHashValue) )
  {
    v29 = j_va("StartupProcessingHandleCopy: copy hash mismatch %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v29);
    v30 = j_va("%d,%zu,%d", (unsigned int)_RBX->dcacheType, _RBX->fileDetails.m_fileID, (unsigned int)_RBX->fileDetails.m_location);
    v31 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v31, (Online_Error_CAT_PATCHER_t)0x8000, v30);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x8000, v30);
    v24 = 0;
    do
    {
      if ( v24 >= 65 )
        break;
      ++v24;
    }
    while ( ((0x8000ui64 >> v24) & 1) == 0 );
    goto LABEL_16;
  }
  if ( !DCache_DeleteFromCacheInMemory(_RBX->dcacheType, _RBX->fileDetails.m_fileID, _RBX->fileDetails.m_location) )
  {
    v25 = j_va("StartupProcessingHandleCopy: copy temp delete %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v25);
    v26 = j_va("%d,%zu,%d", (unsigned int)_RBX->dcacheType, _RBX->fileDetails.m_fileID, (unsigned int)_RBX->fileDetails.m_location);
    v27 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v27, (Online_Error_CAT_PATCHER_t)0x10000, v26);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x10000, v26);
    v24 = 0;
    do
    {
      if ( v24 >= 65 )
        break;
      ++v24;
    }
    while ( ((0x10000ui64 >> v24) & 1) == 0 );
    goto LABEL_16;
  }
  v28 = 1;
LABEL_17:
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v35);
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v36);
  return v28;
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleDecrypt
==============
*/
__int64 Online_PatchStreamer::StartupProcessingHandleDecrypt(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  int v13; 
  const char *v21; 
  const char *v22; 
  Online_ErrorReporting *v23; 
  CCSPatchData *CCSPatchData; 
  const char *v25; 
  const char *v26; 
  Online_ErrorReporting *v27; 
  CachedContentCrypto *Instance; 
  const char *v36; 
  const char *v37; 
  Online_ErrorReporting *v38; 
  CCSPatchData *v39; 
  const char *v40; 
  const char *v41; 
  Online_ErrorReporting *InstancePtr; 
  unsigned __int8 v43; 
  const char *v44; 
  const char *v45; 
  Online_ErrorReporting *v46; 
  const char *v47; 
  const char *v48; 
  Online_ErrorReporting *v49; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v51; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v52; 
  CachedContentIOStreamDCache v53; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t fileSpecifier; 
  CachedContentIOStreamDCache v55; 
  CachedContentIOStreamDCache v56; 
  char outHexString[112]; 

  _RDI = action;
  memset(&fileSpecifier.fileDetails.m_computedHashValue, 0, sizeof(fileSpecifier.fileDetails.m_computedHashValue));
  fileSpecifier.cacheType = action->dcacheType;
  _RCX = &fileSpecifier.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [r8+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [r8+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [r8+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [r8+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  *(_QWORD *)&fileSpecifier.fileDetails.m_timestamp = *(_QWORD *)&action->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v53, &fileSpecifier, CCIOSModeRead);
  v13 = 0;
  if ( _RDI->dcacheType != DCACHE_TYPE_PERSISTENT )
    goto LABEL_14;
  memset(&v52.fileDetails.m_computedHashValue, 0, sizeof(v52.fileDetails.m_computedHashValue));
  v52.cacheType = DCACHE_TYPE_TEMPORARY;
  _RCX = &v52.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rdi+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm0
  }
  *(_QWORD *)&v52.fileDetails.m_timestamp = *(_QWORD *)&_RDI->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v55, &v52, CCIOSModeWrite);
  if ( CachedContentIOStreamCopy::PerformCopy(&v53, &v55) )
  {
    CachedContentIOStreamDCache::Close(&v53);
    CachedContentIOStreamDCache::Close(&v55);
    if ( !DCache_TOC_VerifyHash(DCACHE_TYPE_TEMPORARY, _RDI->fileDetails.m_fileID, _RDI->fileDetails.m_location, &_RDI->fileDetails.m_computedHashValue) )
    {
      v40 = j_va("StartupProcessingHandleCopy: copy hash mismatch %s \n", _RDI->fileDetails.m_name);
      OnlineSystem::DebugLog(this, v40);
      v41 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v41);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v41);
      do
      {
        if ( v13 >= 65 )
          break;
        ++v13;
      }
      while ( ((0x100000000000ui64 >> v13) & 1) == 0 );
      goto LABEL_22;
    }
    if ( !DCache_DeleteFromCacheInMemory(_RDI->dcacheType, _RDI->fileDetails.m_fileID, _RDI->fileDetails.m_location) )
    {
      v25 = j_va("StartupProcessingHandleDecrypt: temp delete %s \n", _RDI->fileDetails.m_name);
      OnlineSystem::DebugLog(this, v25);
      v26 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
      v27 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v27, MOVEMENT, v26);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v26);
      do
      {
        if ( v13 >= 65 )
          break;
        ++v13;
      }
      while ( ((0x80000000000ui64 >> v13) & 1) == 0 );
      goto LABEL_22;
    }
    CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v53);
    CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v53, &v52, CCIOSModeRead);
    CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v55);
LABEL_14:
    memset(&v51.fileDetails.m_computedHashValue, 0, sizeof(v51.fileDetails.m_computedHashValue));
    v51.cacheType = DCACHE_TYPE_PERSISTENT;
    _RCX = &v51.fileDetails;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rdi+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rdi+0A0h]
      vmovups ymmword ptr [rcx+0A0h], ymm0
    }
    *(_QWORD *)&v51.fileDetails.m_timestamp = *(_QWORD *)&_RDI->fileDetails.m_timestamp;
    v51.fileDetails.m_size = _RDI->manifestEntry.fileSizeRaw;
    v51.fileDetails.m_location = DCACHE_LOC_PATCH_MAN;
    CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v56, &v51, CCIOSModeWrite);
    Instance = CachedContentCrypto::GetInstance();
    if ( CachedContentCrypto::Cipher_AESDecryptStream(Instance, &_RDI->manifestEntry.encryptionKey, &v53, &v56, _RDI->manifestEntry.fileSizeRaw) )
    {
      CachedContentIOStreamDCache::Close(&v53);
      CachedContentIOStreamDCache::Close(&v56);
      if ( DCache_TOC_VerifyHash(DCACHE_TYPE_PERSISTENT, _RDI->fileDetails.m_fileID, DCACHE_LOC_PATCH_MAN, &_RDI->manifestEntry.rawHash) )
      {
        if ( DCache_DeleteFromCacheInMemory(DCACHE_TYPE_TEMPORARY, _RDI->fileDetails.m_fileID, _RDI->fileDetails.m_location) )
        {
          v43 = 1;
LABEL_34:
          CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v56);
          goto LABEL_35;
        }
        v44 = j_va("StartupProcessingHandleDecrypt: decrypt temp delete %s \n", _RDI->fileDetails.m_name);
        OnlineSystem::DebugLog(this, v44);
        v45 = j_va("%d,%zu,%d", 0i64, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
        v46 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v46, (Online_Error_CAT_PATCHER_t)0x400000, v45);
        v39 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        v39->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x400000, v45);
        do
        {
          if ( v13 >= 65 )
            break;
          ++v13;
        }
        while ( ((0x400000ui64 >> v13) & 1) == 0 );
      }
      else
      {
        memset_0(outHexString, 0, 0x61ui64);
        ByteBufferToHexString(_RDI->manifestEntry.encryptionKey.keyBytes, 48, outHexString, 97);
        v47 = j_va("StartupProcessingHandleDecrypt: decrypt hash mismatch %s using key %s\n", _RDI->fileDetails.m_name, outHexString);
        OnlineSystem::DebugLog(this, v47);
        v48 = j_va("%d,%zu,%d", 1i64, _RDI->fileDetails.m_fileID, 16i64);
        v49 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v49, (Online_Error_CAT_PATCHER_t)0x200000, v48);
        v39 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
        v39->patchingStatus = PS_PATCHING_FAILED;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x200000, v48);
        do
        {
          if ( v13 >= 65 )
            break;
          ++v13;
        }
        while ( ((0x200000ui64 >> v13) & 1) == 0 );
      }
    }
    else
    {
      v36 = j_va("StartupProcessingHandleDecrypt: failed to decrypt %s using key\n", _RDI->fileDetails.m_name);
      OnlineSystem::DebugLog(this, v36);
      v37 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
      v38 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v38, (Online_Error_CAT_PATCHER_t)0x100000, v37);
      v39 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      v39->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x100000, v37);
      do
      {
        if ( v13 >= 65 )
          break;
        ++v13;
      }
      while ( ((0x100000ui64 >> v13) & 1) == 0 );
    }
    v39->patchingErrorCode = v13;
    v43 = 0;
    goto LABEL_34;
  }
  v21 = j_va("StartupProcessingHandleDecrypt: failed to copy %s \n", _RDI->fileDetails.m_name);
  OnlineSystem::DebugLog(this, v21);
  v22 = j_va("%d,%d,%zu,%d", (unsigned int)_RDI->dcacheType, 0i64, _RDI->fileDetails.m_fileID, _RDI->fileDetails.m_location);
  v23 = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(v23, MOVEMENT, v22);
  CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
  CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v22);
  do
  {
    if ( v13 >= 65 )
      break;
    ++v13;
  }
  while ( ((0x40000000000ui64 >> v13) & 1) == 0 );
LABEL_22:
  CCSPatchData->patchingErrorCode = v13;
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v55);
  v43 = 0;
LABEL_35:
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v53);
  return v43;
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleDecryptInflate
==============
*/
__int64 Online_PatchStreamer::StartupProcessingHandleDecryptInflate(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  int v13; 
  CachedContentCrypto *Instance; 
  const char *v22; 
  const char *v23; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  const char *v26; 
  const char *v27; 
  Online_ErrorReporting *v28; 
  CachedContentCompressor *v36; 
  const char *v37; 
  const char *v38; 
  Online_ErrorReporting *v39; 
  CCSPatchData *v40; 
  const char *v41; 
  const char *v42; 
  Online_ErrorReporting *v43; 
  unsigned __int8 v44; 
  const char *v45; 
  const char *v46; 
  Online_ErrorReporting *v47; 
  const char *v48; 
  const char *v49; 
  Online_ErrorReporting *v50; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v52; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v53; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t fileSpecifier; 
  CachedContentIOStreamDCache v55; 
  CachedContentIOStreamDCache v56; 
  CachedContentIOStreamDCache v57; 
  CachedContentIOStreamDCache v58; 

  _RDI = action;
  memset(&fileSpecifier.fileDetails.m_computedHashValue, 0, sizeof(fileSpecifier.fileDetails.m_computedHashValue));
  fileSpecifier.cacheType = action->dcacheType;
  _RCX = &fileSpecifier.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [r8+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [r8+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [r8+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [r8+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  *(_QWORD *)&fileSpecifier.fileDetails.m_timestamp = *(_QWORD *)&action->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v58, &fileSpecifier, CCIOSModeRead);
  memset(&v52.fileDetails.m_computedHashValue, 0, sizeof(v52.fileDetails.m_computedHashValue));
  v13 = 0;
  v52.cacheType = DCACHE_TYPE_TEMPORARY;
  _RCX = &v52.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rdi+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm0
  }
  *(_QWORD *)&v52.fileDetails.m_timestamp = *(_QWORD *)&_RDI->fileDetails.m_timestamp;
  v52.fileDetails.m_size = _RDI->manifestEntry.fileSizeCompressed;
  v52.fileDetails.m_location = DCACHE_LOC_PATCH_MAN_SCRATCHPAD;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v57, &v52, CCIOSModeWrite);
  Instance = CachedContentCrypto::GetInstance();
  if ( !CachedContentCrypto::Cipher_AESDecryptStream(Instance, &_RDI->manifestEntry.encryptionKey, &v58, &v57, _RDI->manifestEntry.fileSizeCompressed) )
  {
    v22 = j_va("StartupProcessingHandleDecryptInflate: failed to decrypt %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v22);
    v23 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)0x800000, v23);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x800000, v23);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x800000ui64 >> v13) & 1) == 0 );
LABEL_32:
    CCSPatchData->patchingErrorCode = v13;
    v44 = 0;
    goto LABEL_33;
  }
  CachedContentIOStreamDCache::Close(&v58);
  CachedContentIOStreamDCache::Close(&v57);
  if ( !DCache_TOC_VerifyHash(DCACHE_TYPE_TEMPORARY, _RDI->fileDetails.m_fileID, DCACHE_LOC_PATCH_MAN_SCRATCHPAD, &_RDI->manifestEntry.compressedHash) )
  {
    v48 = j_va("StartupProcessingHandleDecryptInflate: decrypt hash mismatch %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v48);
    v49 = j_va("%d,%zu,%d", 0i64, _RDI->fileDetails.m_fileID, 256i64);
    v50 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v50, (Online_Error_CAT_PATCHER_t)0x1000000, v49);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x1000000, v49);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x1000000ui64 >> v13) & 1) == 0 );
    goto LABEL_32;
  }
  if ( !DCache_DeleteFromCacheInMemory(_RDI->dcacheType, _RDI->fileDetails.m_fileID, _RDI->fileDetails.m_location) )
  {
    v26 = j_va("StartupProcessingHandleDecryptInflate: decrypt temp delete %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v26);
    v27 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
    v28 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v28, (Online_Error_CAT_PATCHER_t)0x2000000, v27);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x2000000, v27);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x2000000ui64 >> v13) & 1) == 0 );
    goto LABEL_32;
  }
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v56, &v52, CCIOSModeRead);
  memset(&v53.fileDetails.m_computedHashValue, 0, sizeof(v53.fileDetails.m_computedHashValue));
  v53.cacheType = DCACHE_TYPE_PERSISTENT;
  _RCX = &v53.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rdi+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm0
  }
  *(_QWORD *)&v53.fileDetails.m_timestamp = *(_QWORD *)&_RDI->fileDetails.m_timestamp;
  v53.fileDetails.m_size = _RDI->manifestEntry.fileSizeRaw;
  v53.fileDetails.m_location = DCACHE_LOC_PATCH_MAN;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v55, &v53, CCIOSModeWrite);
  v36 = CachedContentCompressor::GetInstance();
  if ( !CachedContentCompressor::InflateStream(v36, &v56, &v55) )
  {
    v37 = j_va("StartupProcessingHandleDecryptInflate: failed to inflate %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v37);
    v38 = j_va("%d,%zu,%d", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location);
    v39 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v39, (Online_Error_CAT_PATCHER_t)0x4000000, v38);
    v40 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    v40->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x4000000, v38);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x4000000ui64 >> v13) & 1) == 0 );
LABEL_27:
    v40->patchingErrorCode = v13;
    v44 = 0;
    goto LABEL_28;
  }
  CachedContentIOStreamDCache::Close(&v56);
  CachedContentIOStreamDCache::Close(&v55);
  if ( !DCache_TOC_VerifyHash(DCACHE_TYPE_PERSISTENT, _RDI->fileDetails.m_fileID, DCACHE_LOC_PATCH_MAN, &_RDI->manifestEntry.rawHash) )
  {
    v45 = j_va("StartupProcessingHandleDecryptInflate: inflate hash mismatch %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v45);
    v46 = j_va("%d,%zu,%d", 1i64, _RDI->fileDetails.m_fileID, 16i64);
    v47 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v47, (Online_Error_CAT_PATCHER_t)0x8000000, v46);
    v40 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    v40->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x8000000, v46);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x8000000ui64 >> v13) & 1) == 0 );
    goto LABEL_27;
  }
  if ( !DCache_DeleteFromCacheInMemory(DCACHE_TYPE_TEMPORARY, _RDI->fileDetails.m_fileID, DCACHE_LOC_PATCH_MAN_SCRATCHPAD) )
  {
    v41 = j_va("StartupProcessingHandleDecryptInflate: inflate temp delete %s \n", _RDI->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v41);
    v42 = j_va("%d,%zu,%d", 0i64, _RDI->fileDetails.m_fileID, 256i64);
    v43 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v43, (Online_Error_CAT_PATCHER_t)0x10000000, v42);
    v40 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    v40->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x10000000, v42);
    do
    {
      if ( v13 >= 65 )
        break;
      ++v13;
    }
    while ( ((0x10000000ui64 >> v13) & 1) == 0 );
    goto LABEL_27;
  }
  v44 = 1;
LABEL_28:
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v55);
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v56);
LABEL_33:
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v57);
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v58);
  return v44;
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleInflate
==============
*/
__int64 Online_PatchStreamer::StartupProcessingHandleInflate(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  CachedContentCompressor *Instance; 
  const char *v21; 
  const char *v22; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  int v25; 
  const char *v26; 
  const char *v27; 
  Online_ErrorReporting *v28; 
  unsigned __int8 v29; 
  const char *v30; 
  const char *v31; 
  Online_ErrorReporting *v32; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v34; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t fileSpecifier; 
  CachedContentIOStreamDCache v36; 
  CachedContentIOStreamDCache v37; 

  _RBX = action;
  memset(&fileSpecifier.fileDetails.m_computedHashValue, 0, sizeof(fileSpecifier.fileDetails.m_computedHashValue));
  fileSpecifier.cacheType = action->dcacheType;
  _RCX = &fileSpecifier.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [r8+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [r8+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [r8+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [r8+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  *(_QWORD *)&fileSpecifier.fileDetails.m_timestamp = *(_QWORD *)&action->fileDetails.m_timestamp;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v37, &fileSpecifier, CCIOSModeRead);
  memset(&v34.fileDetails.m_computedHashValue, 0, sizeof(v34.fileDetails.m_computedHashValue));
  v34.cacheType = DCACHE_TYPE_PERSISTENT;
  _RCX = &v34.fileDetails;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rbx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rbx+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm0
  }
  *(_QWORD *)&v34.fileDetails.m_timestamp = *(_QWORD *)&_RBX->fileDetails.m_timestamp;
  v34.fileDetails.m_size = _RBX->manifestEntry.fileSizeRaw;
  v34.fileDetails.m_location = DCACHE_LOC_PATCH_MAN;
  CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v36, &v34, CCIOSModeWrite);
  Instance = CachedContentCompressor::GetInstance();
  if ( !CachedContentCompressor::InflateStream(Instance, &v37, &v36) )
  {
    v21 = j_va("StartupProcessingHandleInflate: failed to inflate %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v21);
    v22 = j_va("%d,%d,%zu,%d", (unsigned int)_RBX->dcacheType, 1i64, _RBX->fileDetails.m_fileID, _RBX->fileDetails.m_location);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PATCHER_t)0x20000, v22);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x20000, v22);
    v25 = 0;
    do
    {
      if ( v25 >= 65 )
        break;
      ++v25;
    }
    while ( ((0x20000ui64 >> v25) & 1) == 0 );
LABEL_16:
    CCSPatchData->patchingErrorCode = v25;
    v29 = 0;
    goto LABEL_17;
  }
  CachedContentIOStreamDCache::Close(&v37);
  CachedContentIOStreamDCache::Close(&v36);
  if ( !DCache_TOC_VerifyHash(DCACHE_TYPE_PERSISTENT, _RBX->fileDetails.m_fileID, DCACHE_LOC_PATCH_MAN, &_RBX->manifestEntry.rawHash) )
  {
    v30 = j_va("StartupProcessingHandleInflate: inflate hash mismatch %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v30);
    v31 = j_va("%d,%zu,%d", (unsigned int)_RBX->dcacheType, _RBX->fileDetails.m_fileID, (unsigned int)_RBX->fileDetails.m_location);
    v32 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v32, (Online_Error_CAT_PATCHER_t)0x40000, v31);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x40000, v31);
    v25 = 0;
    do
    {
      if ( v25 >= 65 )
        break;
      ++v25;
    }
    while ( ((0x40000ui64 >> v25) & 1) == 0 );
    goto LABEL_16;
  }
  if ( !DCache_DeleteFromCacheInMemory(_RBX->dcacheType, _RBX->fileDetails.m_fileID, _RBX->fileDetails.m_location) )
  {
    v26 = j_va("StartupProcessingHandleInflate: inflate temp delete %s \n", _RBX->fileDetails.m_name);
    OnlineSystem::DebugLog(this, v26);
    v27 = j_va("%d,%zu,%d", (unsigned int)_RBX->dcacheType, _RBX->fileDetails.m_fileID, (unsigned int)_RBX->fileDetails.m_location);
    v28 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v28, (Online_Error_CAT_PATCHER_t)0x80000, v27);
    CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PATCHER_t)0x80000, v27);
    v25 = 0;
    do
    {
      if ( v25 >= 65 )
        break;
      ++v25;
    }
    while ( ((0x80000ui64 >> v25) & 1) == 0 );
    goto LABEL_16;
  }
  v29 = 1;
LABEL_17:
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v36);
  CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v37);
  return v29;
}

/*
==============
Online_PatchStreamer::StartupProcessingHandleUnpack
==============
*/
char Online_PatchStreamer::StartupProcessingHandleUnpack(Online_PatchStreamer *this, const CCSPatchType patchType, psManifestActionInfo_t *action)
{
  int v6; 
  const char *v7; 
  const char *v15; 
  const char *v16; 
  Online_ErrorReporting *InstancePtr; 
  CCSPatchData *CCSPatchData; 
  char v19; 
  const char *v21; 
  Online_ErrorReporting *v22; 
  CCSPatchData *v23; 
  char *fmt; 
  __int64 v25; 
  unsigned __int64 outFileID[2]; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t v27; 
  CachedContentIOStreamDCache::dcacheStreamFileSpecifier_t fileSpecifier; 
  CachedContentIOStreamDCache v29; 
  CachedContentIOStreamDCache v30; 
  char dest[256]; 

  outFileID[1] = -2i64;
  _RDI = action;
  if ( action->action != PATCH_MAN_ACT_UNPACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 2136, ASSERT_TYPE_ASSERT, "(action.action == PATCH_MAN_ACT_UNPACK)", (const char *)&queryFormat, "action.action == PATCH_MAN_ACT_UNPACK") )
    __debugbreak();
  memset(&fileSpecifier.fileDetails.m_computedHashValue, 0, sizeof(fileSpecifier.fileDetails.m_computedHashValue));
  v6 = 0;
  fileSpecifier.cacheType = DCACHE_TYPE_TEMPORARY;
  if ( patchType == MOVEMENT || (v7 = "comms", patchType != DODGE) )
    v7 = "patch";
  Com_sprintf(dest, 0x100ui64, "%s_%s_%s_%s.%s", "dev_pack", v7, "xb3", "8.24", "bin");
  if ( DCache_TOC_GetFileIDByFilename(dest, DCACHE_TYPE_TEMPORARY, DCACHE_LOC_PATCH_MAN, outFileID) && DCache_TOC_GetFileDetails(DCACHE_TYPE_TEMPORARY, outFileID[0], DCACHE_LOC_PATCH_MAN, &fileSpecifier.fileDetails) )
  {
    CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v30, &fileSpecifier, CCIOSModeRead);
    memset(&v27.fileDetails.m_computedHashValue, 0, sizeof(v27.fileDetails.m_computedHashValue));
    v27.cacheType = _RDI->dcacheType;
    _RCX = &v27.fileDetails;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm1, ymmword ptr [rdi+80h]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rdi+0A0h]
      vmovups ymmword ptr [rcx+0A0h], ymm1
    }
    *(_QWORD *)&v27.fileDetails.m_timestamp = *(_QWORD *)&_RDI->fileDetails.m_timestamp;
    v27.fileDetails.m_fileID = DCache_GetNextLocalFileID();
    CachedContentIOStreamDCache::CachedContentIOStreamDCache(&v29, &v27, CCIOSModeWrite);
    if ( CachedContentIOStreamCopy::PerformCopyOffsetSize(&v30, _RDI->manifestEntry.packOffset, _RDI->manifestEntry.packSize, &v29) )
    {
      CachedContentIOStreamDCache::Close(&v30);
      CachedContentIOStreamDCache::Close(&v29);
      v19 = 1;
    }
    else
    {
      v15 = j_va("StartupProcessingHandleUnpack: failed to copy %s \n", _RDI->fileDetails.m_name);
      OnlineSystem::DebugLog(this, v15);
      LODWORD(v25) = _RDI->manifestEntry.packSize;
      LODWORD(fmt) = _RDI->manifestEntry.packOffset;
      v16 = j_va("%d,%zu,%d,%u,%u", (unsigned int)_RDI->dcacheType, _RDI->fileDetails.m_fileID, (unsigned int)_RDI->fileDetails.m_location, fmt, v25);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v16);
      CCSPatchData = Online_PatchStreamer::GetCCSPatchData(this, patchType);
      CCSPatchData->patchingStatus = PS_PATCHING_FAILED;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, v16);
      do
      {
        if ( v6 >= 65 )
          break;
        ++v6;
      }
      while ( ((0x800000000000000ui64 >> v6) & 1) == 0 );
      CCSPatchData->patchingErrorCode = v6;
      v19 = 0;
    }
    CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v29);
    CachedContentIOStreamDCache::~CachedContentIOStreamDCache(&v30);
    return v19;
  }
  else
  {
    v21 = j_va("StartupProcessingHandleUnpack: failed to unpack due to missing pack file. \n");
    OnlineSystem::DebugLog(this, v21);
    v22 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v22, MOVEMENT, NULL);
    v23 = Online_PatchStreamer::GetCCSPatchData(this, patchType);
    v23->patchingStatus = PS_PATCHING_FAILED;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
    do
    {
      if ( v6 >= 65 )
        break;
      ++v6;
    }
    while ( ((0x400000000000000ui64 >> v6) & 1) == 0 );
    v23->patchingErrorCode = v6;
    return 0;
  }
}

/*
==============
Online_PatchStreamer::UpdatePatchingStatus
==============
*/
void Online_PatchStreamer::UpdatePatchingStatus(Online_PatchStreamer *this, const CCSPatchType patchType, const GameModeType gamemode)
{
  __int64 v3; 
  unsigned __int8 v4; 
  __int64 v6; 
  CCSPatchData *v7; 
  const char *v8; 
  int v10; 

  v3 = patchType;
  v4 = gamemode;
  if ( (unsigned int)patchType >= COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_patchsystem.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( patchType ) ) < (unsigned)( static_cast< int >( CCSPatchType::COUNT ) )", "static_cast< int >( patchType ) doesn't index static_cast< int >( CCSPatchType::COUNT )\n\t%i not in [0, %i)", patchType, v10) )
      __debugbreak();
  }
  v6 = v3;
  v7 = &this->m_ccsPatchData[v3];
  if ( v7->patchingStatus != PS_PATCHING_FAILED && v7->downloadInfo[v4].valid && this->m_currentActions.valid[v6] )
  {
    if ( v7->downloadInfo[v4].patchFilesNeeded <= 0 )
    {
      v8 = j_va("UpdatePatchingStatus: All patch files acquired for mode %d", v4);
      OnlineSystem::DebugLog(this, v8);
      if ( v7->restartRequired || (this->m_currentActions.allActions[v6] & 0x40F) != 0 )
      {
        if ( DVARINT_ccs_sendActionReport )
        {
          if ( Dvar_GetInt_Internal_DebugName(DVARINT_ccs_sendActionReport, "ccs_sendActionReport") )
            Online_PatchStreamer::SendActionReport(this);
        }
        OnlineSystem::DebugLog(this, "UpdatePatchingStatus: Restart requested.");
        v7->patchingStatus = PS_PATCHING_COMPLETE_RESTART;
      }
      else
      {
        v7->patchingStatus = PS_PATCHING_COMPLETE;
      }
    }
    else
    {
      v7->patchingStatus = PS_PATCHING_IN_PROGRESS;
    }
  }
}

