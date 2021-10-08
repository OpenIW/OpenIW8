/*
==============
Com_DevhostRescThread
==============
*/

void __fastcall Com_DevhostRescThread(unsigned int threadContext)
{
  ?Com_DevhostRescThread@@YAXI@Z(threadContext);
}

/*
==============
Com_DevhostGetDVarInfo
==============
*/

void __fastcall Com_DevhostGetDVarInfo(const char *dvarName, char *buf, int maxLen, int *outLength)
{
  ?Com_DevhostGetDVarInfo@@YAXPEBDPEADHPEAH@Z(dvarName, buf, maxLen, outLength);
}

/*
==============
Com_Devhost_RegisterDvars
==============
*/

void Com_Devhost_RegisterDvars(void)
{
  ?Com_Devhost_RegisterDvars@@YAXXZ();
}

/*
==============
Com_DevhostWriteToLog
==============
*/

void __fastcall Com_DevhostWriteToLog(int channel, const char *text)
{
  ?Com_DevhostWriteToLog@@YAXHPEBD@Z(channel, text);
}

/*
==============
Com_Devhost_Shutdown_App
==============
*/

void Com_Devhost_Shutdown_App(void)
{
  ?Com_Devhost_Shutdown_App@@YAXXZ();
}

/*
==============
Com_Devhost_Init_App
==============
*/

void Com_Devhost_Init_App(void)
{
  ?Com_Devhost_Init_App@@YAXXZ();
}

/*
==============
StartDevHostPollProcess
==============
*/
bool StartDevHostPollProcess()
{
  return Sys_SpawnDevHostThread(Com_DevhostRescThread);
}

/*
==============
DevhostSendGameInfo
==============
*/
void DevhostSendGameInfo()
{
  const struct tm *v0; 
  const char *BuildVersion; 
  const char *v2; 
  const char *name; 
  __int64 v4; 
  char dest[1024]; 
  char Buffer[1024]; 

  v0 = Com_LocalTimeFromUTC(comWorld.changeListInfo.time);
  strftime(Buffer, 0x400ui64, "%x %X", v0);
  memset_0(dest, 0, sizeof(dest));
  I_strcat(dest, 0x400ui64, "{");
  I_strcat(dest, 0x400ui64, "\"machinename\":\"");
  BuildVersion = Com_GetBuildVersion();
  I_strcat(dest, 0x400ui64, BuildVersion);
  I_strcat(dest, 0x400ui64, "\",");
  I_strcat(dest, 0x400ui64, "\"buildtype\":\"");
  v2 = j_va("%d %s %s", comWorld.changeListInfo.changeListNumber, comWorld.changeListInfo.userName, Buffer);
  I_strcat(dest, 0x400ui64, v2);
  I_strcat(dest, 0x400ui64, "\",");
  I_strcat(dest, 0x400ui64, "\"mapname\":\"");
  name = "none";
  if ( comWorld.name )
    name = comWorld.name;
  I_strcat(dest, 0x400ui64, name);
  I_strcat(dest, 0x400ui64, "\"");
  I_strcat(dest, 0x400ui64, "}");
  v4 = -1i64;
  do
    ++v4;
  while ( dest[v4] );
  Com_DevhostSendMessage(0, 0xEu, v4, dest);
}

/*
==============
WaitForEvent
==============
*/
void WaitForEvent(int evi)
{
  __int64 v1; 
  int v3; 

  v1 = evi;
  if ( (unsigned int)evi >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( evi ) < (unsigned)( NUM_DEVHOST_SIGNALS )", "evi doesn't index NUM_DEVHOST_SIGNALS\n\t%i not in [0, %i)", evi, v3) )
      __debugbreak();
  }
  Sys_WaitForSingleObject(&DevHostSignals[v1]);
}

/*
==============
SignalEvent
==============
*/
void SignalEvent(int evi)
{
  __int64 v1; 
  int v3; 

  v1 = evi;
  if ( (unsigned int)evi >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( evi ) < (unsigned)( NUM_DEVHOST_SIGNALS )", "evi doesn't index NUM_DEVHOST_SIGNALS\n\t%i not in [0, %i)", evi, v3) )
      __debugbreak();
  }
  Sys_SetEvent(&DevHostSignals[v1]);
}

/*
==============
SocketSocketTcp
==============
*/

bool __fastcall SocketSocketTcp(unsigned __int64 *s)
{
  return Com_SocketSocketTcp(s);
}

/*
==============
SocketClose
==============
*/

void __fastcall SocketClose(unsigned __int64 s)
{
  Com_SocketClose(s);
}

/*
==============
SocketBind
==============
*/

bool __fastcall SocketBind(unsigned __int64 s, unsigned __int16 m_port)
{
  return Com_SocketBind(s, m_port);
}

/*
==============
SocketListen
==============
*/

bool __fastcall SocketListen(unsigned __int64 s)
{
  return Com_SocketListen(s);
}

/*
==============
SocketSelect
==============
*/

bool __fastcall SocketSelect(unsigned __int64 s)
{
  return Com_SocketSelect(s);
}

/*
==============
SocketAccept
==============
*/

void __fastcall SocketAccept(unsigned __int64 s, unsigned __int64 *ds)
{
  Com_SocketAccept(s, ds);
}

/*
==============
SocketNoDelay
==============
*/

bool __fastcall SocketNoDelay(unsigned __int64 s)
{
  return Com_SocketNoDelay(s);
}

/*
==============
SocketPoll
==============
*/

bool __fastcall SocketPoll(unsigned __int64 s)
{
  return Com_SocketPoll(s);
}

/*
==============
SocketSend
==============
*/

int __fastcall SocketSend(unsigned __int64 s, const void *data, unsigned int len)
{
  return Com_SocketSend(s, data, len);
}

/*
==============
SocketRecv
==============
*/

int __fastcall SocketRecv(unsigned __int64 s, void *data, unsigned int len)
{
  return Com_SocketRecv(s, data, len);
}

/*
==============
Com_DevhostATClientCallback
==============
*/
char Com_DevhostATClientCallback(ComDevhostReadHandle *handle)
{
  __int64 v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 546, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( handle->m_size - handle->m_bytesRead >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 550, ASSERT_TYPE_SANITY, "( handle.BytesLeft() < max_msg_size )", (const char *)&queryFormat, "handle.BytesLeft() < max_msg_size") )
    __debugbreak();
  v3 = handle->m_size - handle->m_bytesRead;
  if ( (unsigned int)v3 >= 2 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x140978B9Ci64);
  }
  bytes_2[v3] = 0;
  ComDevhostReadHandle::Read(handle, bytes_2, handle->m_size - handle->m_bytesRead);
  if ( !handle->m_command )
  {
    if ( bytes_2[0] == 49 )
    {
      ATClient_DevHost_SubscribeToStates();
      return 1;
    }
    ATClient_DevHost_UnsubscribeToStates();
  }
  return 1;
}

/*
==============
Com_DevhostCmdCallback
==============
*/
char Com_DevhostCmdCallback(ComDevhostReadHandle *handle)
{
  __int64 v2; 
  __int64 v3; 
  __int16 m_command; 
  LocalClientNum_t FirstActiveLocalClient; 
  int ControllerFromClient; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 429, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( handle->m_size - handle->m_bytesRead >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 434, ASSERT_TYPE_SANITY, "( handle.BytesLeft() < max_msg_size )", (const char *)&queryFormat, "handle.BytesLeft() < max_msg_size") )
    __debugbreak();
  v3 = handle->m_size - handle->m_bytesRead;
  if ( (unsigned int)v3 >= 0x4000 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x140978D24i64);
  }
  bytes_0[v3] = 0;
  ComDevhostReadHandle::Read(handle, bytes_0, handle->m_size - handle->m_bytesRead);
  m_command = handle->m_command;
  if ( !m_command )
    goto LABEL_13;
  if ( m_command != 2 )
  {
    if ( m_command != 4 )
      return 1;
LABEL_13:
    if ( CL_GetLocalClientActiveCount() > 0 )
    {
      FirstActiveLocalClient = CL_GetFirstActiveLocalClient();
      ControllerFromClient = CL_Mgr_GetControllerFromClient(FirstActiveLocalClient);
      Cmd_ExecuteSingleCommand_Internal(FirstActiveLocalClient, ControllerFromClient, (const char *)bytes_0, 0);
    }
    return 1;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 453, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not Implemented") )
  {
    __debugbreak();
    return 1;
  }
  return 1;
}

/*
==============
Com_DevhostConsoleCommandComplete_f
==============
*/
void Com_DevhostConsoleCommandComplete_f()
{
  Com_DevhostSendMessage(1, 3u, 0, NULL);
}

/*
==============
Com_DevhostDvarCallback
==============
*/
char Com_DevhostDvarCallback(ComDevhostReadHandle *handle)
{
  __int64 v2; 
  __int16 m_command; 
  const char *Token; 
  const dvar_t *VarByName; 
  __int64 v6; 
  int outLength[4]; 
  char string[128]; 
  char dst[128]; 
  char dest[4096]; 

  if ( handle->m_size - handle->m_bytesRead >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 366, ASSERT_TYPE_SANITY, "( handle.BytesLeft() < max_msg_size )", (const char *)&queryFormat, "handle.BytesLeft() < max_msg_size") )
    __debugbreak();
  v2 = handle->m_size - handle->m_bytesRead;
  if ( (unsigned int)v2 >= 0x100 )
  {
    j___report_rangecheckfailure(handle);
    JUMPOUT(0x140978F8Fi64);
  }
  bytes[v2] = 0;
  ComDevhostReadHandle::Read(handle, bytes, handle->m_size - handle->m_bytesRead);
  m_command = handle->m_command;
  if ( m_command )
  {
    if ( m_command == 1 )
    {
      outLength[0] = 0;
      Com_sprintf<4096>((char (*)[4096])dest, "%s:", (const char *)bytes);
      v6 = -1i64;
      do
        ++v6;
      while ( dest[v6] );
      Com_DevhostGetDVarInfo((const char *)bytes, &dest[(int)v6], 4096 - v6, outLength);
      if ( com_unattendedMode->current.enabled )
        Sys_Printf("COM_DEVHOST_DVAR_REQUEST_GET %s\n", dest);
      Com_DevhostSendMessage(2, 2u, v6 + outLength[0], dest);
    }
  }
  else
  {
    Token = Com_DevhostNextToken((const char *)bytes, dst, 0x80u);
    Com_DevhostNextToken(Token, string, 0x80u);
    VarByName = Dvar_FindVarByName(dst);
    if ( VarByName )
    {
      Dvar_SetFromString(VarByName, string);
      if ( com_unattendedMode->current.enabled )
        Sys_Printf("COM_DEVHOST_DVAR_SET %s:%s\n", dst, string);
    }
  }
  return 1;
}

/*
==============
Com_DevhostGetDVarInfo
==============
*/
void Com_DevhostGetDVarInfo(const char *dvarName, char *buf, int maxLen, int *outLength)
{
  unsigned __int64 v6; 
  const dvar_t *VarByName; 
  __int64 v9; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 stringCount; 
  int v35; 
  int v36; 
  int v37; 
  int v40; 
  int v42; 
  int v43; 
  char *fmt; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmta; 
  char *fmtg; 
  char *fmth; 
  char *fmti; 
  char *fmtj; 
  char *fmtk; 
  char *fmtl; 
  char *fmtm; 
  char *fmtn; 
  char *fmto; 
  char *fmtp; 
  char *fmtb; 
  char *fmtq; 
  char *fmtr; 
  char *fmts; 
  char *fmtc; 
  char *fmtt; 
  DvarValue v70; 

  v6 = maxLen;
  VarByName = Dvar_FindVarByName(dvarName);
  v9 = 0i64;
  _R14 = VarByName;
  v11 = 0;
  if ( VarByName )
  {
    v12 = Com_sprintf(buf, v6, "%s%c", VarByName->description, 12);
    v13 = v12;
    if ( v12 > (int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 264, ASSERT_TYPE_ASSERT, "( p ) <= ( maxLen )", "%s <= %s\n\t%i, %i", "p", "maxLen", v12, v6) )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14+28h]
      vmovups [rsp+78h+var_28], xmm0
    }
    Dvar_ValueToStringBuffer(_R14, &v70, &buf[v13], (int)v6 - (int)v13);
    v15 = -1i64;
    do
      ++v15;
    while ( buf[v13 + v15] );
    v16 = v15 + v13;
    v17 = v16;
    v11 = v16 + 1;
    buf[v17] = 12;
    switch ( _R14->type )
    {
      case 0u:
        LODWORD(fmt) = 12;
        v18 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 101i64, fmt) + v11;
        LODWORD(fmtd) = 12;
        v19 = Com_sprintf(&buf[v18], (int)v6 - v18, "%d%c", 1i64, fmtd) + v18;
        LODWORD(fmte) = 12;
        v20 = Com_sprintf(&buf[v19], (int)v6 - v19, "%s%c", "0", fmte) + v19;
        LODWORD(fmtf) = 12;
        v11 = Com_sprintf(&buf[v20], (int)v6 - v20, "%s%c", "1", fmtf) + v20;
        break;
      case 1u:
        LODWORD(fmt) = 12;
        v21 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 102i64, fmt);
        v22 = 1i64;
        goto LABEL_21;
      case 2u:
        LODWORD(fmt) = 12;
        v21 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 102i64, fmt);
        v22 = 2i64;
        goto LABEL_21;
      case 3u:
      case 0xBu:
        LODWORD(fmt) = 12;
        v21 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 102i64, fmt);
        v22 = 3i64;
        goto LABEL_21;
      case 4u:
        LODWORD(fmt) = 12;
        v21 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 102i64, fmt);
        v22 = 4i64;
LABEL_21:
        v42 = v21 + v11;
        LODWORD(fmta) = 12;
        v43 = Com_sprintf(&buf[v42], (int)v6 - v42, "%d%c", v22, fmta);
        __asm { vmovss  xmm3, dword ptr [r14+58h] }
        v37 = v43 + v42;
        LODWORD(fmtt) = 12;
        __asm
        {
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        v40 = Com_sprintf(&buf[v37], (int)v6 - v37, "%f%c", *(double *)&_XMM3, fmtt);
        __asm
        {
          vmovss  xmm3, dword ptr [r14+5Ch]
          vcvtss2sd xmm3, xmm3, xmm3
        }
        goto LABEL_22;
      case 5u:
        LODWORD(fmt) = 12;
        v23 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 105i64, fmt) + v11;
        LODWORD(fmtg) = 12;
        v24 = Com_sprintf(&buf[v23], (int)v6 - v23, "%d%c", 1i64, fmtg) + v23;
        LODWORD(fmth) = 12;
        v25 = Com_sprintf(&buf[v24], (int)v6 - v24, "%d%c", (unsigned int)_R14->domain.enumeration.stringCount, fmth) + v24;
        LODWORD(fmti) = 12;
        v11 = Com_sprintf(&buf[v25], (int)v6 - v25, "%d%c", (unsigned int)_R14->domain.integer.max, fmti) + v25;
        break;
      case 6u:
        LODWORD(fmt) = 12;
        v26 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 105i64, fmt) + v11;
        LODWORD(fmtj) = 12;
        v27 = Com_sprintf(&buf[v26], (int)v6 - v26, "%d%c", 1i64, fmtj) + v26;
        LODWORD(fmtk) = 12;
        v28 = Com_sprintf(&buf[v27], (int)v6 - v27, "%lli%c", _R14->domain.integer64.min, fmtk) + v27;
        LODWORD(fmtl) = 12;
        v11 = Com_sprintf(&buf[v28], (int)v6 - v28, "%lli%c", _R14->domain.integer64.max, fmtl) + v28;
        break;
      case 7u:
        LODWORD(fmt) = 12;
        v29 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 105i64, fmt) + v11;
        LODWORD(fmtm) = 12;
        v30 = Com_sprintf(&buf[v29], (int)v6 - v29, "%d%c", 1i64, fmtm) + v29;
        LODWORD(fmtn) = 12;
        v31 = Com_sprintf(&buf[v30], (int)v6 - v30, "%llu%c", _R14->domain.integer64.min, fmtn) + v30;
        LODWORD(fmto) = 12;
        v11 = Com_sprintf(&buf[v31], (int)v6 - v31, "%llu%c", _R14->domain.integer64.max, fmto) + v31;
        break;
      case 8u:
        LODWORD(fmt) = 12;
        v32 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 101i64, fmt) + v11;
        LODWORD(fmtp) = 12;
        v33 = Com_sprintf(&buf[v32], (int)v6 - v32, "%d%c", 1i64, fmtp);
        stringCount = _R14->domain.enumeration.stringCount;
        v11 = v33 + v32;
        if ( stringCount > 0 )
        {
          do
          {
            LODWORD(fmtb) = 12;
            v11 += Com_sprintf(&buf[v11], (int)v6 - v11, "%s%c", *(const char **)(_R14->domain.integer64.max + 8 * v9++), fmtb);
          }
          while ( v9 < stringCount );
        }
        break;
      case 9u:
        LODWORD(fmt) = 12;
        v35 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 115i64, fmt) + v11;
        LODWORD(fmtq) = 12;
        v11 = Com_sprintf(&buf[v35], (int)v6 - v35, "%d%c", 1i64, fmtq) + v35;
        break;
      case 0xAu:
        LODWORD(fmt) = 12;
        v36 = Com_sprintf(&buf[v11], (int)v6 - v11, "%c%c", 102i64, fmt) + v11;
        LODWORD(fmtr) = 12;
        v37 = Com_sprintf(&buf[v36], (int)v6 - v36, "%d%c", 4i64, fmtr) + v36;
        LODWORD(fmts) = 12;
        __asm
        {
          vxorpd  xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        v40 = Com_sprintf(&buf[v37], (int)v6 - v37, "%f%c", *(double *)&_XMM3, fmts);
        __asm { vmovsd  xmm3, cs:__real@3ff0000000000000 }
LABEL_22:
        LODWORD(fmtc) = 12;
        __asm { vmovq   r9, xmm3 }
        v11 = Com_sprintf(&buf[v40 + v37], (int)v6 - (v40 + v37), "%f%c", *(double *)&_XMM3, fmtc) + v40 + v37;
        break;
      default:
        break;
    }
  }
  else
  {
    Com_sprintf(buf, v6, "%d%c", 12i64, 12);
  }
  *outLength = v11;
}

/*
==============
Com_DevhostNextToken
==============
*/
const char *Com_DevhostNextToken(const char *src, char *dst, unsigned int len)
{
  unsigned int v6; 
  unsigned int v7; 
  const char *v8; 
  const char *v9; 
  unsigned int v10; 
  char v11; 
  __int64 v12; 
  const char *v13; 
  const char *result; 

  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 205, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  *dst = 0;
  if ( !src || !*src )
    return 0i64;
  v6 = 0;
  v7 = 0;
  if ( len )
  {
    v8 = src;
    do
    {
      if ( !isspace(*v8) )
        break;
      ++v6;
      ++v7;
      ++v8;
    }
    while ( v7 < len );
  }
  v9 = &src[v6];
  if ( !*v9 )
    return 0i64;
  v10 = v6;
  if ( v6 < len )
  {
    while ( !isspace(*v9) )
    {
      v11 = *v9;
      if ( !*v9 )
        break;
      ++v9;
      v12 = v10 - v6;
      ++v10;
      dst[v12] = v11;
      if ( v10 >= len )
        goto LABEL_20;
    }
    dst[v10 - v6] = 0;
    if ( v10 < len )
    {
      v13 = &src[v10];
      do
      {
        if ( !isspace(*v13) )
          break;
        ++v10;
        ++v13;
      }
      while ( v10 < len );
    }
  }
LABEL_20:
  result = &src[v10];
  if ( !*result )
    return 0i64;
  return result;
}

/*
==============
Com_DevhostQueryCallback
==============
*/
char Com_DevhostQueryCallback(ComDevhostReadHandle *handle)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  __int64 FirstActiveLocalClient; 
  unsigned int refdefViewOrg_aab; 
  __int64 v24; 
  char *fmt; 
  __int64 v27; 
  double v28; 
  __int64 v29; 
  double v30; 
  int v31; 
  int v32; 
  int v33; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 507, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( handle->m_size - handle->m_bytesRead >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_app.cpp", 511, ASSERT_TYPE_SANITY, "( handle.BytesLeft() < max_msg_size )", (const char *)&queryFormat, "handle.BytesLeft() < max_msg_size") )
    __debugbreak();
  v3 = handle->m_size - handle->m_bytesRead;
  if ( (unsigned int)v3 >= 0x4000 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x140979D89i64);
  }
  bytes_1[v3] = 0;
  ComDevhostReadHandle::Read(handle, (unsigned __int8 *)bytes_1, handle->m_size - handle->m_bytesRead);
  if ( !handle->m_command )
  {
    v4 = 0i64;
    v5 = 0x7FFFFFFFi64;
    do
    {
      v6 = bytes_1[v4];
      v7 = v5;
      v8 = aViewpos_0[v4++];
      --v5;
      if ( !v7 )
        break;
      if ( v6 != v8 )
        return 1;
    }
    while ( v6 );
    FirstActiveLocalClient = CL_GetFirstActiveLocalClient();
    if ( (unsigned int)FirstActiveLocalClient >= cg_t::ms_allocatedCount )
    {
      LODWORD(v27) = FirstActiveLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v27, cg_t::ms_allocatedCount) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[FirstActiveLocalClient] )
    {
      LODWORD(v29) = FirstActiveLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v29) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v29) = FirstActiveLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v29) )
        __debugbreak();
    }
    _RDI = cg_t::ms_cgArray[FirstActiveLocalClient];
    if ( _RDI->nextSnap )
    {
      if ( _RDI == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = _RDI->refdef.view.refdefViewOrg_aab;
      if ( _RDI == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+178C0h]
        vmovss  xmm1, dword ptr [rdi+178C4h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+78h+var_48], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+78h+var_50], xmm1
      }
      v31 = LODWORD(_RDI->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26936)) + 2));
      __asm
      {
        vmovss  xmm2, [rsp+78h+var_38]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      v32 = LODWORD(_RDI->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26940)) + 2));
      __asm
      {
        vmovss  xmm3, [rsp+78h+var_34]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      v33 = LODWORD(_RDI->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_RDI + 26944)) + 2));
      __asm
      {
        vmovss  xmm4, [rsp+78h+var_30]
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+78h+fmt], xmm4
      }
      Com_sprintf<16384>((char (*)[16384])bytes_1, "%.0f;%.0f;%.0f;%.0f;%.0f", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v28, v30);
    }
    else
    {
      Com_sprintf<16384>((char (*)[16384])bytes_1, "NOT AVAIL");
    }
    v24 = -1i64;
    do
      ++v24;
    while ( bytes_1[v24] );
    Com_DevhostSendMessage(6, 1u, v24, bytes_1);
  }
  return 1;
}

/*
==============
Com_DevhostRescThread
==============
*/
void Com_DevhostRescThread(unsigned int threadContext)
{
  g_devhostPollingStarted = 1;
  while ( Com_DevhostPoll() )
    Sys_Sleep(16);
  g_devhostPollingStarted = 0;
}

/*
==============
Com_DevhostWriteToLog
==============
*/
void Com_DevhostWriteToLog(int channel, const char *text)
{
  __int64 v3; 
  ScopedDevHostMessage v4; 
  __int64 v5; 
  char dest[8]; 

  v5 = -2i64;
  if ( s_devhostAppInitialized )
  {
    if ( (unsigned int)channel > 0x63 )
      channel = 0;
    Com_sprintf(dest, 5ui64, "~~%02i", (unsigned int)channel);
    v3 = -1i64;
    do
      ++v3;
    while ( text[v3] );
    ScopedDevHostMessage::ScopedDevHostMessage(&v4, 1, 1u, v3 + 4);
    Com_DevhostSendBody(1, 4u, dest);
    Com_DevhostSendBody(1, v3, text);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v4);
  }
}

/*
==============
Com_Devhost_Init_App
==============
*/
void Com_Devhost_Init_App(void)
{
  void **v0; 
  __int64 v1; 
  int m_port; 
  ComDevhostConfig config; 

  if ( !s_devhostAppInitialized )
  {
    v0 = DevHostSignals;
    config.m_allocMemPool = Com_DEVHOST_BUFFERMEM;
    v1 = 2i64;
    config.m_port = 5235;
    config.m_allocMemPoolSize = 53248i64;
    config.m_channelNum = 13;
    do
    {
      Sys_CreateEvent(0, 0, v0++);
      --v1;
    }
    while ( v1 );
    if ( devhost_port )
    {
      m_port = config.m_port;
      if ( devhost_port->current.integer != config.m_port )
        m_port = devhost_port->current.integer;
      config.m_port = m_port;
    }
    Com_DevhostInit(&Com_Devhost_Int, &config);
    Com_DevhostRegisterCallback(2, (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostDvarCallback);
    Com_DevhostRegisterCallback(1, (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostCmdCallback);
    Com_DevhostRegisterCallback(6, (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostQueryCallback);
    Com_DevhostRegisterCallback(12, (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostATClientCallback);
    Cmd_AddCommandInternal("devhost_console_cmd_complete", Com_DevhostConsoleCommandComplete_f, &Com_DevhostConsoleCommandComplete_f_VAR);
    s_devhostAppInitialized = 1;
  }
}

/*
==============
Com_Devhost_RegisterDvars
==============
*/
void Com_Devhost_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  devhost_port = Dvar_RegisterInt("NLTSOTNPMK", 5235, 0, 0x7FFFFFFF, 0x800u, "Port number of Devhost connection");
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_Devhost_Shutdown_App
==============
*/
void Com_Devhost_Shutdown_App(void)
{
  void **v0; 
  __int64 v1; 

  if ( s_devhostAppInitialized )
  {
    s_devhostAppInitialized = 0;
    Com_DevhostShutdown();
    while ( g_devhostPollingStarted )
      Sys_Sleep(1);
    Com_Devhost_Int.EnterCriticalSection();
    v0 = DevHostSignals;
    v1 = 2i64;
    do
    {
      Sys_CloseEvent(v0++);
      --v1;
    }
    while ( v1 );
    Com_Devhost_Int.LeaveCriticalSection();
  }
}

