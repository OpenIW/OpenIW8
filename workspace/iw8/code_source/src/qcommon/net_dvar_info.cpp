/*
==============
StringAppendBuffer::StringAppendBuffer
==============
*/

void __fastcall StringAppendBuffer::StringAppendBuffer(StringAppendBuffer *this)
{
  ??0StringAppendBuffer@@QEAA@XZ(this);
}

/*
==============
StringAppendBuffer::TryAppendEscaped
==============
*/

void __fastcall StringAppendBuffer::TryAppendEscaped(StringAppendBuffer *this, const char *src, const char *invalidTokens, const char escapeChar)
{
  ?TryAppendEscaped@StringAppendBuffer@@QEAAXPEBD0D@Z(this, src, invalidTokens, escapeChar);
}

/*
==============
StringAppendBuffer::~StringAppendBuffer
==============
*/

void __fastcall StringAppendBuffer::~StringAppendBuffer(StringAppendBuffer *this)
{
  ??1StringAppendBuffer@@QEAA@XZ(this);
}

/*
==============
GetDvarInfoBegin
==============
*/

void __fastcall GetDvarInfoBegin(char *buffer, const unsigned int bufferSize)
{
  ?GetDvarInfoBegin@@YAXPEADI@Z(buffer, bufferSize);
}

/*
==============
StringAppendBuffer::SetupBuffer
==============
*/

void __fastcall StringAppendBuffer::SetupBuffer(StringAppendBuffer *this, char *buffer, const unsigned int bufferSize)
{
  ?SetupBuffer@StringAppendBuffer@@QEAAXPEADI@Z(this, buffer, bufferSize);
}

/*
==============
StringAppendBuffer::Discard
==============
*/

void __fastcall StringAppendBuffer::Discard(StringAppendBuffer *this)
{
  ?Discard@StringAppendBuffer@@QEAAXXZ(this);
}

/*
==============
GetDvarInfoSingle
==============
*/

void __fastcall GetDvarInfoSingle(const char *const dvarName, char *buffer, const unsigned int bufferSize)
{
  ?GetDvarInfoSingle@@YAXQEBDPEADI@Z(dvarName, buffer, bufferSize);
}

/*
==============
StringAppendBuffer::TryAppendEscapedDefault
==============
*/

void __fastcall StringAppendBuffer::TryAppendEscapedDefault(StringAppendBuffer *this, const char *src)
{
  ?TryAppendEscapedDefault@StringAppendBuffer@@QEAAXPEBD@Z(this, src);
}

/*
==============
StringAppendBuffer::GetLength
==============
*/

unsigned int __fastcall StringAppendBuffer::GetLength(StringAppendBuffer *this)
{
  return ?GetLength@StringAppendBuffer@@QEBAIXZ(this);
}

/*
==============
StringAppendBuffer::Commit
==============
*/

void __fastcall StringAppendBuffer::Commit(StringAppendBuffer *this)
{
  ?Commit@StringAppendBuffer@@QEAAXXZ(this);
}

/*
==============
StringAppendBuffer::TryAppend
==============
*/

void __fastcall StringAppendBuffer::TryAppend(StringAppendBuffer *this, const char *src)
{
  ?TryAppend@StringAppendBuffer@@QEAAXPEBD@Z(this, src);
}

/*
==============
StringAppendBuffer::AppendSuccessful
==============
*/

bool __fastcall StringAppendBuffer::AppendSuccessful(StringAppendBuffer *this)
{
  return ?AppendSuccessful@StringAppendBuffer@@QEBA_NXZ(this);
}

/*
==============
StringAppendBuffer::GetCharsRemaining
==============
*/

unsigned int __fastcall StringAppendBuffer::GetCharsRemaining(StringAppendBuffer *this)
{
  return ?GetCharsRemaining@StringAppendBuffer@@QEBAIXZ(this);
}

/*
==============
GetDvarInfoMore
==============
*/

void __fastcall GetDvarInfoMore(const char *const dvarName, char *buffer, const unsigned int bufferSize)
{
  ?GetDvarInfoMore@@YAXQEBDPEADI@Z(dvarName, buffer, bufferSize);
}

/*
==============
StringAppendBuffer::StringAppendBuffer
==============
*/
void StringAppendBuffer::StringAppendBuffer(StringAppendBuffer *this)
{
  this->m_bufferBegin = NULL;
  this->m_bufferEnd = NULL;
  this->m_stringNull = NULL;
  this->m_writePos = NULL;
}

/*
==============
StringAppendBuffer::~StringAppendBuffer
==============
*/
void StringAppendBuffer::~StringAppendBuffer(StringAppendBuffer *this)
{
  if ( !this->m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 74, ASSERT_TYPE_ASSERT, "(m_writePos != nullptr)", "%s\n\tNeed to Discard() StringAppendBuffer", "m_writePos != nullptr") )
    __debugbreak();
  if ( this->m_writePos != this->m_stringNull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 75, ASSERT_TYPE_ASSERT, "(m_writePos == m_stringNull)", "%s\n\tNeed to Discard() or Commit() StringAppendBuffer", "m_writePos == m_stringNull") )
    __debugbreak();
}

/*
==============
AppendDvarInfoBegin
==============
*/
void AppendDvarInfoBegin(StringAppendBuffer *buffer, const char *dvarName)
{
  char *m_writePos; 
  const char *v3; 
  char v4; 

  m_writePos = buffer->m_writePos;
  v3 = "{";
  if ( m_writePos )
  {
    v4 = 123;
    if ( m_writePos >= buffer->m_bufferEnd )
    {
LABEL_5:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *m_writePos = v4;
        if ( !v4 )
          break;
        ++v3;
        m_writePos = buffer->m_writePos + 1;
        buffer->m_writePos = m_writePos;
        v4 = *v3;
        if ( m_writePos >= buffer->m_bufferEnd )
          goto LABEL_5;
      }
    }
  }
  AppendDvarInfoKVP(buffer, "Name", dvarName, 1);
}

/*
==============
AppendDvarInfoEnd
==============
*/
void AppendDvarInfoEnd(StringAppendBuffer *buffer)
{
  char *m_writePos; 
  const char *v2; 
  char v3; 

  m_writePos = buffer->m_writePos;
  v2 = "}\r\n";
  if ( m_writePos )
  {
    v3 = 125;
    if ( m_writePos >= buffer->m_bufferEnd )
    {
LABEL_5:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *m_writePos = v3;
        if ( !v3 )
          break;
        ++v2;
        m_writePos = buffer->m_writePos + 1;
        buffer->m_writePos = m_writePos;
        v3 = *v2;
        if ( m_writePos >= buffer->m_bufferEnd )
          goto LABEL_5;
      }
    }
  }
}

/*
==============
AppendDvarInfoFloatKVP
==============
*/
void AppendDvarInfoFloatKVP(StringAppendBuffer *buffer, const char *key, const float value, bool first)
{
  char dest[16]; 

  Com_sprintf_truncate(dest, 0x10ui64, "%f", value);
  AppendDvarInfoKVP(buffer, key, dest, first);
}

/*
==============
AppendDvarInfoKVP
==============
*/
void AppendDvarInfoKVP(StringAppendBuffer *buffer, const char *key, const char *value, bool first)
{
  char *m_writePos; 
  const char *v5; 
  const char *v8; 
  char i; 
  const char *v10; 
  char v11; 
  char *v12; 
  char v13; 
  char *v14; 
  const char *v15; 
  char v16; 
  char *v17; 
  char v18; 

  m_writePos = buffer->m_writePos;
  v5 = "\"";
  if ( first )
  {
    v8 = "\"";
    if ( !m_writePos )
      goto LABEL_12;
    for ( i = 34; m_writePos < buffer->m_bufferEnd; i = *v8 )
    {
      *m_writePos = i;
      if ( !i )
        goto LABEL_12;
      ++v8;
      m_writePos = buffer->m_writePos + 1;
      buffer->m_writePos = m_writePos;
    }
LABEL_11:
    buffer->m_writePos = NULL;
    goto LABEL_12;
  }
  v10 = ",\"";
  if ( !m_writePos )
    goto LABEL_12;
  v11 = 44;
  if ( m_writePos >= buffer->m_bufferEnd )
    goto LABEL_11;
  while ( 1 )
  {
    *m_writePos = v11;
    if ( !v11 )
      break;
    ++v10;
    m_writePos = buffer->m_writePos + 1;
    buffer->m_writePos = m_writePos;
    v11 = *v10;
    if ( m_writePos >= buffer->m_bufferEnd )
      goto LABEL_11;
  }
LABEL_12:
  v12 = buffer->m_writePos;
  if ( v12 )
  {
    v13 = *key;
    if ( v12 >= buffer->m_bufferEnd )
    {
LABEL_16:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *v12 = v13;
        if ( !v13 )
          break;
        ++key;
        v12 = buffer->m_writePos + 1;
        buffer->m_writePos = v12;
        v13 = *key;
        if ( v12 >= buffer->m_bufferEnd )
          goto LABEL_16;
      }
    }
  }
  v14 = buffer->m_writePos;
  v15 = "\":\"";
  if ( v14 )
  {
    v16 = 34;
    if ( v14 >= buffer->m_bufferEnd )
    {
LABEL_21:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *v14 = v16;
        if ( !v16 )
          break;
        ++v15;
        v14 = buffer->m_writePos + 1;
        buffer->m_writePos = v14;
        v16 = *v15;
        if ( v14 >= buffer->m_bufferEnd )
          goto LABEL_21;
      }
    }
  }
  StringAppendBuffer::TryAppendEscapedDefault(buffer, value);
  v17 = buffer->m_writePos;
  if ( v17 )
  {
    v18 = 34;
    if ( v17 >= buffer->m_bufferEnd )
    {
LABEL_26:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *v17 = v18;
        if ( !v18 )
          break;
        ++v5;
        v17 = buffer->m_writePos + 1;
        buffer->m_writePos = v17;
        v18 = *v5;
        if ( v17 >= buffer->m_bufferEnd )
          goto LABEL_26;
      }
    }
  }
}

/*
==============
StringAppendBuffer::AppendSuccessful
==============
*/
bool StringAppendBuffer::AppendSuccessful(StringAppendBuffer *this)
{
  return this->m_writePos != NULL;
}

/*
==============
StringAppendBuffer::Commit
==============
*/
void StringAppendBuffer::Commit(StringAppendBuffer *this)
{
  char *m_writePos; 

  if ( !this->m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 200, ASSERT_TYPE_ASSERT, "(m_writePos != nullptr)", "%s\n\tNeed to Discard() StringAppendBuffer", "m_writePos != nullptr") )
    __debugbreak();
  m_writePos = this->m_writePos;
  this->m_stringNull = m_writePos;
  if ( *m_writePos )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 204, ASSERT_TYPE_ASSERT, "(*m_stringNull == '\\0')", (const char *)&queryFormat, "*m_stringNull == '\\0'") )
      __debugbreak();
  }
}

/*
==============
StringAppendBuffer::Discard
==============
*/
void StringAppendBuffer::Discard(StringAppendBuffer *this)
{
  char *m_stringNull; 

  m_stringNull = this->m_stringNull;
  if ( m_stringNull < this->m_bufferEnd )
  {
    *m_stringNull = 0;
    m_stringNull = this->m_stringNull;
  }
  this->m_writePos = m_stringNull;
}

/*
==============
StringAppendBuffer::GetCharsRemaining
==============
*/
unsigned int StringAppendBuffer::GetCharsRemaining(StringAppendBuffer *this)
{
  if ( !this->m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 103, ASSERT_TYPE_ASSERT, "(m_writePos != nullptr)", "%s\n\tNeed to Discard() StringAppendBuffer", "m_writePos != nullptr") )
    __debugbreak();
  return truncate_cast<unsigned int,__int64>(this->m_bufferEnd - this->m_writePos);
}

/*
==============
GetDvarInfoBegin
==============
*/
void GetDvarInfoBegin(char *buffer, const unsigned int bufferSize)
{
  GetDvarInfoImpl(NULL, 0, buffer, bufferSize);
}

/*
==============
GetDvarInfoCallback
==============
*/
void GetDvarInfoCallback(const char *dvarName)
{
  bool finishedEarly; 
  StringAppendBuffer *responseString; 
  char *m_writePos; 
  const char *v5; 
  char v6; 
  StringAppendBuffer *v7; 
  char *v8; 
  char *m_stringNull; 
  bool v10; 

  finishedEarly = s_dvarInfoData.finishedEarly;
  if ( s_dvarInfoData.finishedWriting )
    finishedEarly = 1;
  s_dvarInfoData.finishedEarly = finishedEarly;
  if ( s_dvarInfoData.writeDvars )
  {
    if ( s_dvarInfoData.startAfterName )
    {
      if ( !I_stricmp(dvarName, s_dvarInfoData.startAfterName) )
        return;
      s_dvarInfoData.startAfterName = NULL;
    }
    responseString = s_dvarInfoData.responseString;
    if ( !s_dvarInfoData.firstDvar )
    {
      m_writePos = s_dvarInfoData.responseString->m_writePos;
      v5 = ", ";
      if ( m_writePos )
      {
        v6 = 44;
        if ( m_writePos >= s_dvarInfoData.responseString->m_bufferEnd )
        {
LABEL_15:
          responseString->m_writePos = NULL;
        }
        else
        {
          while ( 1 )
          {
            *m_writePos = v6;
            if ( !v6 )
              break;
            ++v5;
            m_writePos = responseString->m_writePos + 1;
            responseString->m_writePos = m_writePos;
            v6 = *v5;
            if ( m_writePos >= responseString->m_bufferEnd )
              goto LABEL_15;
          }
        }
      }
    }
    GetSingleDvarInfo(responseString, dvarName);
    v7 = s_dvarInfoData.responseString;
    v8 = s_dvarInfoData.responseString->m_writePos;
    if ( v8 )
    {
      if ( truncate_cast<unsigned int,__int64>(s_dvarInfoData.responseString->m_bufferEnd - v8) > 2 )
      {
        StringAppendBuffer::Commit(s_dvarInfoData.responseString);
        s_dvarInfoData.firstDvar = 0;
        return;
      }
      v7 = s_dvarInfoData.responseString;
    }
    m_stringNull = v7->m_stringNull;
    if ( m_stringNull < v7->m_bufferEnd )
    {
      *m_stringNull = 0;
      m_stringNull = v7->m_stringNull;
    }
    v10 = !s_dvarInfoData.firstDvar;
    v7->m_writePos = m_stringNull;
    if ( v10 )
    {
      s_dvarInfoData.finishedWriting = 1;
      s_dvarInfoData.writeDvars = 0;
    }
  }
  else if ( s_dvarInfoData.startAfterName )
  {
    if ( !I_stricmp(dvarName, s_dvarInfoData.startAfterName) )
      s_dvarInfoData.writeDvars = 1;
  }
}

/*
==============
GetDvarInfoImpl
==============
*/
void GetDvarInfoImpl(const char *const dvarName, const bool singleDvar, char *buffer, const unsigned int bufferSize)
{
  char *m_bufferEnd; 
  char *m_writePos; 
  const char *v10; 
  char v11; 
  const char *v12; 
  char *v13; 
  char *v14; 
  char v15; 
  StringAppendBuffer buffera; 

  buffera.m_bufferBegin = buffer;
  m_bufferEnd = &buffer[bufferSize];
  buffera.m_bufferEnd = m_bufferEnd;
  buffera.m_stringNull = buffer;
  m_writePos = buffer;
  buffera.m_writePos = buffer;
  if ( bufferSize )
  {
    *buffer = 0;
    m_writePos = buffera.m_writePos;
    m_bufferEnd = buffera.m_bufferEnd;
  }
  v10 = "?INFO.[";
  if ( !m_writePos || m_writePos >= m_bufferEnd )
    goto LABEL_32;
  while ( 1 )
  {
    v11 = *v10;
    *m_writePos = *v10;
    if ( !v11 )
      break;
    m_writePos = buffera.m_writePos + 1;
    buffera.m_writePos = m_writePos;
    ++v10;
    m_bufferEnd = buffera.m_bufferEnd;
    if ( m_writePos >= buffera.m_bufferEnd )
      goto LABEL_32;
  }
  if ( !buffera.m_writePos )
  {
    m_bufferEnd = buffera.m_bufferEnd;
LABEL_32:
    if ( buffera.m_stringNull < m_bufferEnd )
      *buffera.m_stringNull = 0;
    *buffer = 0;
LABEL_35:
    buffera.m_writePos = buffera.m_stringNull;
    goto LABEL_36;
  }
  buffera.m_stringNull = buffera.m_writePos;
  if ( *buffera.m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 204, ASSERT_TYPE_ASSERT, "(*m_stringNull == '\\0')", (const char *)&queryFormat, "*m_stringNull == '\\0'", -2i64, buffera.m_bufferBegin) )
    __debugbreak();
  if ( singleDvar )
  {
    if ( !dvarName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 508, ASSERT_TYPE_ASSERT, "(dvarName != nullptr)", (const char *)&queryFormat, "dvarName != nullptr") )
      __debugbreak();
    GetSingleDvarInfo(&buffera, dvarName);
  }
  else
  {
    s_dvarInfoData.responseString = &buffera;
    s_dvarInfoData.startAfterName = dvarName;
    s_dvarInfoData.writeDvars = dvarName == NULL;
    s_dvarInfoData.firstDvar = 1;
    *(_WORD *)&s_dvarInfoData.finishedWriting = 0;
    Cmd_ForEach(GetDvarInfoCallback);
    Dvar_ForEachName_UNSAFE_LockBegin();
    Dvar_ForEachName_UNSAFE(GetDvarInfoCallback);
    Dvar_ForEachName_UNSAFE_LockEnd();
    if ( s_dvarInfoData.finishedEarly && bufferSize > 5 )
      buffer[5] = 43;
  }
  v12 = "]";
  v13 = buffera.m_writePos;
  if ( !buffera.m_writePos )
    goto LABEL_27;
  v14 = buffera.m_bufferEnd;
  if ( buffera.m_writePos >= buffera.m_bufferEnd )
  {
LABEL_28:
    if ( buffera.m_stringNull < v14 )
      *buffera.m_stringNull = 0;
    *buffer = 0;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v15 = *v12;
    *v13 = *v12;
    if ( !v15 )
      break;
    v13 = buffera.m_writePos + 1;
    buffera.m_writePos = v13;
    ++v12;
    v14 = buffera.m_bufferEnd;
    if ( v13 >= buffera.m_bufferEnd )
      goto LABEL_28;
  }
  if ( !buffera.m_writePos )
  {
LABEL_27:
    v14 = buffera.m_bufferEnd;
    goto LABEL_28;
  }
  StringAppendBuffer::Commit(&buffera);
LABEL_36:
  if ( !buffera.m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 74, ASSERT_TYPE_ASSERT, "(m_writePos != nullptr)", "%s\n\tNeed to Discard() StringAppendBuffer", "m_writePos != nullptr") )
    __debugbreak();
  if ( buffera.m_writePos != buffera.m_stringNull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 75, ASSERT_TYPE_ASSERT, "(m_writePos == m_stringNull)", "%s\n\tNeed to Discard() or Commit() StringAppendBuffer", "m_writePos == m_stringNull") )
    __debugbreak();
}

/*
==============
GetDvarInfoMore
==============
*/
void GetDvarInfoMore(const char *const dvarName, char *buffer, const unsigned int bufferSize)
{
  GetDvarInfoImpl(dvarName, 0, buffer, bufferSize);
}

/*
==============
GetDvarInfoSingle
==============
*/
void GetDvarInfoSingle(const char *const dvarName, char *buffer, const unsigned int bufferSize)
{
  GetDvarInfoImpl(dvarName, 1, buffer, bufferSize);
}

/*
==============
StringAppendBuffer::GetLength
==============
*/
unsigned int StringAppendBuffer::GetLength(StringAppendBuffer *this)
{
  if ( !this->m_writePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_dvar_info.cpp", 96, ASSERT_TYPE_ASSERT, "(m_writePos != nullptr)", "%s\n\tNeed to Discard() StringAppendBuffer", "m_writePos != nullptr") )
    __debugbreak();
  return truncate_cast<unsigned int,__int64>(this->m_writePos - this->m_bufferBegin);
}

/*
==============
GetSingleDvarInfo
==============
*/
void GetSingleDvarInfo(StringAppendBuffer *buffer, const char *dvarName)
{
  const dvar_t *VarByName; 
  const dvar_t *v5; 
  char *m_writePos; 
  const char *v7; 
  char v8; 
  char *v9; 
  const char *v10; 
  char v11; 
  const char *v12; 
  unsigned __int8 type; 
  const char *v14; 
  const char *v15; 
  char *v16; 
  const char *v17; 
  char v18; 
  const char *description; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  char *v23; 
  const char *v24; 
  char v25; 
  int v26; 
  __int64 v27; 
  char *v28; 
  const char *v29; 
  char v30; 
  char *v31; 
  const char *v32; 
  char v33; 
  char *v34; 
  const char *v35; 
  char v36; 
  char *v37; 
  const char *v38; 
  char v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  char dest[16]; 

  VarByName = Dvar_FindVarByName(dvarName);
  v5 = VarByName;
  if ( !VarByName )
  {
    m_writePos = buffer->m_writePos;
    v7 = "{";
    if ( m_writePos )
    {
      v8 = 123;
      if ( m_writePos >= buffer->m_bufferEnd )
      {
LABEL_6:
        buffer->m_writePos = NULL;
      }
      else
      {
        while ( 1 )
        {
          *m_writePos = v8;
          if ( !v8 )
            break;
          ++v7;
          m_writePos = buffer->m_writePos + 1;
          buffer->m_writePos = m_writePos;
          v8 = *v7;
          if ( m_writePos >= buffer->m_bufferEnd )
            goto LABEL_6;
        }
      }
    }
    AppendDvarInfoKVP(buffer, "Name", dvarName, 1);
    AppendDvarInfoKVP(buffer, "Type", "function", 0);
    v9 = buffer->m_writePos;
    v10 = "}\r\n";
    if ( v9 )
    {
      v11 = 125;
      if ( v9 >= buffer->m_bufferEnd )
      {
LABEL_11:
        buffer->m_writePos = NULL;
      }
      else
      {
        while ( 1 )
        {
          *v9 = v11;
          if ( !v11 )
            break;
          ++v10;
          v9 = buffer->m_writePos + 1;
          buffer->m_writePos = v9;
          v11 = *v10;
          if ( v9 >= buffer->m_bufferEnd )
            goto LABEL_11;
        }
      }
    }
    return;
  }
  v12 = Dvar_DisplayableValue(VarByName);
  type = v5->type;
  v14 = v12;
  AppendDvarInfoBegin(buffer, dvarName);
  if ( type )
  {
    switch ( type )
    {
      case 1u:
        AppendDvarInfoKVP(buffer, "Type", "float", 0);
        AppendDvarInfoKVP(buffer, "Value", v14, 0);
        description = v5->description;
        if ( description && *description )
          AppendDvarInfoKVP(buffer, "Description", description, 0);
        Com_sprintf_truncate(dest, 0x10ui64, "%f", v5->domain.value.min);
        AppendDvarInfoKVP(buffer, "Min", dest, 0);
        Com_sprintf_truncate(dest, 0x10ui64, "%f", v5->domain.value.max);
        AppendDvarInfoKVP(buffer, "Max", dest, 0);
        Com_sprintf_truncate(dest, 0x10ui64, "%f", v5->domain.value.devguiStep);
        AppendDvarInfoKVP(buffer, "Step", dest, 0);
        goto LABEL_83;
      case 5u:
        AppendDvarInfoKVP(buffer, "Type", "int", 0);
        AppendDvarInfoKVP(buffer, "Value", v14, 0);
        v20 = v5->description;
        if ( v20 && *v20 )
          AppendDvarInfoKVP(buffer, "Description", v20, 0);
        Com_sprintf_truncate(dest, 0x10ui64, "%d", (unsigned int)v5->domain.enumeration.stringCount);
        AppendDvarInfoKVP(buffer, "Min", dest, 0);
        Com_sprintf_truncate(dest, 0x10ui64, "%d", (unsigned int)v5->domain.integer.max);
        AppendDvarInfoKVP(buffer, "Max", dest, 0);
        goto LABEL_83;
      case 9u:
        v21 = "string";
        break;
      case 8u:
        AppendDvarInfoKVP(buffer, "Type", "enum", 0);
        AppendDvarInfoKVP(buffer, "Value", v14, 0);
        v22 = v5->description;
        if ( v22 && *v22 )
          AppendDvarInfoKVP(buffer, "Description", v22, 0);
        v23 = buffer->m_writePos;
        v24 = ",\"Domain\":[";
        if ( v23 )
        {
          v25 = 44;
          if ( v23 >= buffer->m_bufferEnd )
          {
LABEL_41:
            buffer->m_writePos = NULL;
          }
          else
          {
            while ( 1 )
            {
              *v23 = v25;
              if ( !v25 )
                break;
              ++v24;
              v23 = buffer->m_writePos + 1;
              buffer->m_writePos = v23;
              v25 = *v24;
              if ( v23 >= buffer->m_bufferEnd )
                goto LABEL_41;
            }
          }
        }
        v26 = 0;
        if ( v5->domain.enumeration.stringCount > 0 )
        {
          v27 = 0i64;
          do
          {
            if ( v27 > 0 )
            {
              v28 = buffer->m_writePos;
              v29 = ",";
              if ( v28 )
              {
                v30 = 44;
                if ( v28 >= buffer->m_bufferEnd )
                {
LABEL_49:
                  buffer->m_writePos = NULL;
                }
                else
                {
                  while ( 1 )
                  {
                    *v28 = v30;
                    if ( !v30 )
                      break;
                    ++v29;
                    v28 = buffer->m_writePos + 1;
                    buffer->m_writePos = v28;
                    v30 = *v29;
                    if ( v28 >= buffer->m_bufferEnd )
                      goto LABEL_49;
                  }
                }
              }
            }
            v31 = buffer->m_writePos;
            v32 = "\"";
            if ( v31 )
            {
              v33 = 34;
              if ( v31 >= buffer->m_bufferEnd )
              {
LABEL_54:
                buffer->m_writePos = NULL;
              }
              else
              {
                while ( 1 )
                {
                  *v31 = v33;
                  if ( !v33 )
                    break;
                  ++v32;
                  v31 = buffer->m_writePos + 1;
                  buffer->m_writePos = v31;
                  v33 = *v32;
                  if ( v31 >= buffer->m_bufferEnd )
                    goto LABEL_54;
                }
              }
            }
            StringAppendBuffer::TryAppendEscapedDefault(buffer, *(const char **)(v5->domain.integer64.max + 8 * v27));
            v34 = buffer->m_writePos;
            v35 = "\"";
            if ( v34 )
            {
              v36 = 34;
              if ( v34 >= buffer->m_bufferEnd )
              {
LABEL_59:
                buffer->m_writePos = NULL;
              }
              else
              {
                while ( 1 )
                {
                  *v34 = v36;
                  if ( !v36 )
                    break;
                  ++v35;
                  v34 = buffer->m_writePos + 1;
                  buffer->m_writePos = v34;
                  v36 = *v35;
                  if ( v34 >= buffer->m_bufferEnd )
                    goto LABEL_59;
                }
              }
            }
            ++v26;
            ++v27;
          }
          while ( v26 < v5->domain.enumeration.stringCount );
        }
        v37 = buffer->m_writePos;
        v38 = "]";
        if ( v37 )
        {
          v39 = 93;
          if ( v37 >= buffer->m_bufferEnd )
          {
LABEL_65:
            buffer->m_writePos = NULL;
          }
          else
          {
            while ( 1 )
            {
              *v37 = v39;
              if ( !v39 )
                break;
              ++v38;
              v37 = buffer->m_writePos + 1;
              buffer->m_writePos = v37;
              v39 = *v38;
              if ( v37 >= buffer->m_bufferEnd )
                goto LABEL_65;
            }
          }
        }
        goto LABEL_83;
      case 0xAu:
        v21 = "color";
        break;
      case 0xBu:
        v21 = "vec3color";
        break;
      default:
        switch ( type )
        {
          case 2u:
            v41 = "float2";
            break;
          case 3u:
            v41 = "float3";
            break;
          case 4u:
            v41 = "float4";
            break;
          default:
LABEL_83:
            AppendDvarInfoEnd(buffer);
            return;
        }
        AppendDvarInfoKVP(buffer, "Type", v41, 0);
        AppendDvarInfoKVP(buffer, "Value", v14, 0);
        v42 = v5->description;
        if ( v42 && *v42 )
          AppendDvarInfoKVP(buffer, "Description", v42, 0);
        AppendDvarInfoFloatKVP(buffer, "Min", v5->domain.value.min, 0);
        AppendDvarInfoFloatKVP(buffer, "Max", v5->domain.value.max, 0);
        goto LABEL_83;
    }
    AppendDvarInfoKVP(buffer, "Type", v21, 0);
    AppendDvarInfoKVP(buffer, "Value", v14, 0);
    v40 = v5->description;
    if ( v40 && *v40 )
      AppendDvarInfoKVP(buffer, "Description", v40, 0);
    goto LABEL_83;
  }
  AppendDvarInfoKVP(buffer, "Type", "bool", 0);
  AppendDvarInfoKVP(buffer, "Value", v14, 0);
  v15 = v5->description;
  if ( v15 )
  {
    if ( *v15 )
      AppendDvarInfoKVP(buffer, "Description", v15, 0);
  }
  v16 = buffer->m_writePos;
  v17 = "}\r\n";
  if ( v16 )
  {
    v18 = 125;
    if ( v16 >= buffer->m_bufferEnd )
    {
LABEL_20:
      buffer->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *v16 = v18;
        if ( !v18 )
          break;
        ++v17;
        v16 = buffer->m_writePos + 1;
        buffer->m_writePos = v16;
        v18 = *v17;
        if ( v16 >= buffer->m_bufferEnd )
          goto LABEL_20;
      }
    }
  }
}

/*
==============
StringAppendBuffer::SetupBuffer
==============
*/
void StringAppendBuffer::SetupBuffer(StringAppendBuffer *this, char *buffer, const unsigned int bufferSize)
{
  this->m_bufferBegin = buffer;
  this->m_bufferEnd = &buffer[bufferSize];
  this->m_stringNull = buffer;
  this->m_writePos = buffer;
  if ( bufferSize )
    *buffer = 0;
}

/*
==============
StringAppendBuffer::TryAppend
==============
*/
void StringAppendBuffer::TryAppend(StringAppendBuffer *this, const char *src)
{
  char *m_writePos; 
  char v3; 

  m_writePos = this->m_writePos;
  if ( m_writePos )
  {
    v3 = *src;
    if ( m_writePos >= this->m_bufferEnd )
    {
LABEL_5:
      this->m_writePos = NULL;
    }
    else
    {
      while ( 1 )
      {
        *m_writePos = v3;
        if ( !v3 )
          break;
        ++src;
        m_writePos = this->m_writePos + 1;
        this->m_writePos = m_writePos;
        v3 = *src;
        if ( m_writePos >= this->m_bufferEnd )
          goto LABEL_5;
      }
    }
  }
}

/*
==============
StringAppendBuffer::TryAppendEscaped
==============
*/
void StringAppendBuffer::TryAppendEscaped(StringAppendBuffer *this, const char *src, const char *invalidTokens, const char escapeChar)
{
  char v8; 
  char *m_writePos; 
  char *v10; 

  if ( this->m_writePos )
  {
    while ( 1 )
    {
      v8 = *src;
      if ( *src && strchr_0(invalidTokens, v8) )
      {
        m_writePos = this->m_writePos;
        if ( m_writePos >= this->m_bufferEnd )
          break;
        *m_writePos = escapeChar;
        ++this->m_writePos;
      }
      v10 = this->m_writePos;
      if ( v10 >= this->m_bufferEnd )
        break;
      *v10 = v8;
      if ( !v8 )
        return;
      ++this->m_writePos;
      ++src;
    }
    this->m_writePos = NULL;
  }
}

/*
==============
StringAppendBuffer::TryAppendEscapedDefault
==============
*/
void StringAppendBuffer::TryAppendEscapedDefault(StringAppendBuffer *this, const char *src)
{
  char v4; 
  char *m_writePos; 
  char *v6; 

  if ( this->m_writePos )
  {
    while ( 1 )
    {
      v4 = *src;
      if ( *src && strchr_0("\"\\", v4) )
      {
        m_writePos = this->m_writePos;
        if ( m_writePos >= this->m_bufferEnd )
          break;
        *m_writePos = 92;
        ++this->m_writePos;
      }
      v6 = this->m_writePos;
      if ( v6 >= this->m_bufferEnd )
        break;
      *v6 = v4;
      if ( !v4 )
        return;
      ++this->m_writePos;
      ++src;
    }
    this->m_writePos = NULL;
  }
}

