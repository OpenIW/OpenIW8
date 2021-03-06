/*
==============
bdAuthHTTPUtility::getInternalErrorCodeString
==============
*/

const char *__fastcall bdAuthHTTPUtility::getInternalErrorCodeString(const int error)
{
  return ?getInternalErrorCodeString@bdAuthHTTPUtility@@SAPEBDH@Z(error);
}

/*
==============
bdAuthHTTPUtility::mapBdHTTPInternalErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdAuthHTTPUtility::mapBdHTTPInternalErrorCode(const bdLobbyErrorCode defaultError, const unsigned int internalErrorCode)
{
  return ?mapBdHTTPInternalErrorCode@bdAuthHTTPUtility@@SA?AW4bdLobbyErrorCode@@W42@I@Z(defaultError, internalErrorCode);
}

/*
==============
bdAuthHTTPUtility::getStatusCodeString
==============
*/

const char *__fastcall bdAuthHTTPUtility::getStatusCodeString(const bdHTTP::bdStatus status)
{
  return ?getStatusCodeString@bdAuthHTTPUtility@@SAPEBDW4bdStatus@bdHTTP@@@Z(status);
}

/*
==============
bdAuthHTTPUtility::deobfuscate
==============
*/

unsigned int __fastcall bdAuthHTTPUtility::deobfuscate(unsigned __int8 *dest, const unsigned __int8 *const source, const unsigned __int8 *const xorSource, unsigned int length)
{
  return ?deobfuscate@bdAuthHTTPUtility@@SAIPEAEQEBE1I@Z(dest, source, xorSource, length);
}

/*
==============
bdAuthHTTPUtility::mapHTTPErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdAuthHTTPUtility::mapHTTPErrorCode(const bdHTTP *http)
{
  return ?mapHTTPErrorCode@bdAuthHTTPUtility@@SA?AW4bdLobbyErrorCode@@AEBVbdHTTP@@@Z(http);
}

/*
==============
bdAuthHTTPUtility::deobfuscate
==============
*/
__int64 bdAuthHTTPUtility::deobfuscate(unsigned __int8 *dest, const unsigned __int8 *const source, const unsigned __int8 *const xorSource, unsigned int length)
{
  __int64 v4; 
  __int64 v7; 
  unsigned __int8 *v8; 
  int v9; 
  __int64 v12; 
  __int64 v17; 
  unsigned int v20; 
  const unsigned __int8 *v21; 
  __int64 v22; 
  signed __int64 v23; 
  signed __int64 v24; 

  v4 = 0i64;
  if ( length )
  {
    if ( length >= 0x40 )
    {
      v7 = length - 1;
      v8 = &dest[v7];
      if ( (dest > &xorSource[v7] || v8 < xorSource) && (dest > &source[length - 1] || v8 < source) )
      {
        v9 = 32;
        do
        {
          _XMM1 = *(_OWORD *)&source[v4];
          __asm { vpxor   xmm1, xmm1, xmmword ptr [r10+r8] }
          *(_OWORD *)&dest[v4] = _XMM1;
          v12 = (unsigned int)(v9 - 16);
          v4 = (unsigned int)(v4 + 64);
          _XMM1 = *(_OWORD *)&source[v12];
          __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+r8] }
          *(_OWORD *)&dest[v12] = _XMM1;
          _XMM1 = *(_OWORD *)&source[v9];
          __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+r8] }
          *(_OWORD *)&dest[v9] = _XMM1;
          v17 = (unsigned int)(v9 + 16);
          v9 += 64;
          _XMM1 = *(_OWORD *)&source[v17];
          __asm { vpxor   xmm1, xmm1, xmmword ptr [rax+r8] }
          *(_OWORD *)&dest[v17] = _XMM1;
        }
        while ( (unsigned int)v4 < (length & 0xFFFFFFC0) );
      }
    }
    if ( (unsigned int)v4 < length )
    {
      v20 = length - v4;
      v21 = &xorSource[(unsigned int)v4];
      v22 = v20;
      v23 = source - xorSource;
      v24 = dest - xorSource;
      LODWORD(v4) = v20 + v4;
      do
      {
        v21[v24] = *v21 ^ v21[v23];
        ++v21;
        --v22;
      }
      while ( v22 );
    }
  }
  return (unsigned int)v4;
}

/*
==============
bdAuthHTTPUtility::getInternalErrorCodeString
==============
*/
const char *bdAuthHTTPUtility::getInternalErrorCodeString(const int error)
{
  const char *v1; 
  const char *result; 

  v1 = "Unknown";
  switch ( error )
  {
    case 0:
      result = "BD_HTTP_NO_ERROR";
      break;
    case 1:
      result = "BD_HTTP_SSL_CERTIFICATE_ERROR";
      break;
    case 2:
      result = "BD_HTTP_DNS_LOOKUP_FAILED_ERROR";
      break;
    case 3:
      result = "BD_HTTP_THIRD_PARTY_TOKEN_RETRIEVAL_ERROR";
      break;
    case 4:
      result = "BD_HTTP_CONNECT_ERROR";
      break;
    case 5:
      result = "BD_HTTP_ABORTED";
      break;
    case 6:
      v1 = "BD_HTTP_TIMEOUT";
      goto LABEL_9;
    default:
LABEL_9:
      result = v1;
      break;
  }
  return result;
}

/*
==============
bdAuthHTTPUtility::getStatusCodeString
==============
*/
const char *bdAuthHTTPUtility::getStatusCodeString(const bdHTTP::bdStatus status)
{
  const char *v1; 
  const char *result; 

  v1 = "Unknown";
  switch ( status )
  {
    case BD_EMPTY:
      result = "BD_UNINITIALIZED";
      break;
    case BD_PENDING:
      result = "BD_EMPTY";
      break;
    case BD_DONE:
      result = "BD_INITIALIZING";
      break;
    case BD_FAILED:
      result = "BD_PENDING";
      break;
    case BD_TIMED_OUT:
      result = "BD_ABORTING";
      break;
    case BD_CANCELLED:
      result = "BD_DONE";
      break;
    case BD_MAX_STATUS:
      result = "BD_FAILED";
      break;
    case BD_MAX_STATUS|BD_PENDING:
      v1 = "BD_ABORTED";
      goto LABEL_10;
    default:
LABEL_10:
      result = v1;
      break;
  }
  return result;
}

/*
==============
bdAuthHTTPUtility::mapBdHTTPInternalErrorCode
==============
*/
__int64 bdAuthHTTPUtility::mapBdHTTPInternalErrorCode(const bdLobbyErrorCode defaultError, const unsigned int internalErrorCode)
{
  __int64 result; 

  switch ( internalErrorCode )
  {
    case 0u:
      goto $LN2_20;
    case 1u:
      result = 741i64;
      break;
    case 2u:
      result = 740i64;
      break;
    case 3u:
      result = 733i64;
      break;
    case 4u:
      result = 742i64;
      break;
    case 5u:
      result = 751i64;
      break;
    case 6u:
      result = 750i64;
      break;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdAuthHTTPCommon", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdhttpauthcommon.cpp", "bdAuthHTTPUtility::mapBdHTTPInternalErrorCode", 0x4Du, "Ignoring unknown HTTP internalErrorCode[%d]", internalErrorCode);
$LN2_20:
      result = (unsigned int)defaultError;
      break;
  }
  return result;
}

/*
==============
bdAuthHTTPUtility::mapHTTPErrorCode
==============
*/
bdLobbyErrorCode bdAuthHTTPUtility::mapHTTPErrorCode(const bdHTTP *http)
{
  int v2; 
  unsigned int v3; 

  v2 = http->getLastHTTPStatus((bdHTTP *)http);
  v3 = http->getInternalError((bdHTTP *)http);
  if ( v2 <= 404 )
  {
    if ( v2 >= 403 )
      return 701;
    switch ( v2 )
    {
      case 0:
        return bdAuthHTTPUtility::mapBdHTTPInternalErrorCode(BD_AUTH_UNKNOWN_ERROR, v3);
      case 200:
        return 700;
      case 400:
        return 701;
    }
    goto LABEL_11;
  }
  if ( v2 == 429 )
    return bdAuthHTTPUtility::mapBdHTTPInternalErrorCode(BD_AUTH_TOO_MANY_REQUESTS, v3);
  if ( v2 != 503 )
  {
LABEL_11:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdAuthHTTPCommon", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdhttpauthcommon.cpp", "bdAuthHTTPUtility::mapHTTPErrorCode", 0x2Bu, "Unexpected HTTP Error Code[%d] received from Auth", v2);
    return 715;
  }
  return bdAuthHTTPUtility::mapBdHTTPInternalErrorCode(BD_AUTH_SERVER_UNAVAILABLE_ERROR, v3);
}

