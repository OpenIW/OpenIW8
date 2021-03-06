/*
==============
bdHashSHA256::~bdHashSHA256
==============
*/

void __fastcall bdHashSHA256::~bdHashSHA256(bdHashSHA256 *this)
{
  ??1bdHashSHA256@@UEAA@XZ(this);
}

/*
==============
bdHashSHA256::cleanHashHandle
==============
*/

void __fastcall bdHashSHA256::cleanHashHandle(bdHashSHA256 *this)
{
  ?cleanHashHandle@bdHashSHA256@@IEAAXXZ(this);
}

/*
==============
bdHashSHA256::bdHashSHA256
==============
*/

void __fastcall bdHashSHA256::bdHashSHA256(bdHashSHA256 *this)
{
  ??0bdHashSHA256@@QEAA@XZ(this);
}

/*
==============
bdHashSHA256::hash
==============
*/

bool __fastcall bdHashSHA256::hash(bdHashSHA256 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashSHA256@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashSHA256::ensureHashHandle
==============
*/

bool __fastcall bdHashSHA256::ensureHashHandle(bdHashSHA256 *this)
{
  return ?ensureHashHandle@bdHashSHA256@@IEAA_NXZ(this);
}

/*
==============
bdHashSHA256::bdHashSHA256
==============
*/
void bdHashSHA256::bdHashSHA256(bdHashSHA256 *this)
{
  bdHash::bdHash(this, BD_HASH_SHA256, 0x20u);
  this->__vftable = (bdHashSHA256_vtbl *)&bdHashSHA256::`vftable';
  this->m_hashHandle = NULL;
  if ( !bdHashSHA256::s_provider )
  {
    bdHashSHA256::s_reusableHash = 1;
    getBCryptProvider(&bdHashSHA256::s_provider, L"SHA256", 0x20u);
  }
}

/*
==============
bdHashSHA256::~bdHashSHA256
==============
*/
void bdHashSHA256::~bdHashSHA256(bdHashSHA256 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHashSHA256_vtbl *)&bdHashSHA256::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA256", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHash::~bdHash(this);
}

/*
==============
bdHashSHA256::cleanHashHandle
==============
*/
void bdHashSHA256::cleanHashHandle(bdHashSHA256 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA256", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHashSHA256::ensureHashHandle
==============
*/
bool bdHashSHA256::ensureHashHandle(bdHashSHA256 *this)
{
  BCRYPT_ALG_HANDLE v2; 
  bool v4; 
  NTSTATUS Hash_0; 
  void *m_hashHandle; 
  NTSTATUS v7; 

  v2 = bdHashSHA256::s_provider;
  if ( bdHashSHA256::s_provider && this->m_hashHandle )
  {
    if ( bdHashSHA256::s_reusableHash )
      return 1;
    bdHashSHA256::cleanHashHandle(this);
    v2 = bdHashSHA256::s_provider;
  }
  if ( v2 )
  {
    v4 = this->m_hashHandle == NULL;
    if ( !this->m_hashHandle )
    {
      Hash_0 = BCryptCreateHash_0(v2, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA256::s_reusableHash ? 0x20 : 0);
      if ( Hash_0 < 0 )
      {
        logBCryptResult("bdHashSHA256", "BCryptCreateHash", Hash_0);
        bdHashSHA256::cleanHashHandle(this);
      }
      v4 = this->m_hashHandle == NULL;
    }
    return !v4;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA256", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha256.cpp", "bdHashSHA256::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
    m_hashHandle = this->m_hashHandle;
    if ( m_hashHandle )
    {
      v7 = BCryptDestroyHash_0(m_hashHandle);
      if ( v7 < 0 )
        logBCryptResult("bdHashSHA256", "BCryptDestroyHash", v7);
      this->m_hashHandle = NULL;
    }
    return 0;
  }
}

/*
==============
bdHashSHA256::hash
==============
*/
__int64 bdHashSHA256::hash(bdHashSHA256 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned __int8 v9; 
  BCRYPT_ALG_HANDLE v10; 
  BCRYPT_HASH_HANDLE m_hashHandle; 
  void **p_m_hashHandle; 
  NTSTATUS Hash_0; 
  NTSTATUS v14; 
  NTSTATUS v15; 
  __m256i v16; 
  NTSTATUS v17; 
  unsigned __int8 pbOutput[32]; 

  v9 = 0;
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha256.cpp", "bdHashSHA256::hash", 0xA7u, "SHA256 input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha256.cpp", "bdHashSHA256::hash", 0xA8u, "SHA256 digest buffer cannot be NULL");
  bdHandleAssert(*resultSize >= 0x20, "(resultSize >= BD_SHA256_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha256.cpp", "bdHashSHA256::hash", 0xA9u, "SHA256 requires digest buffer >= 32 bytes");
  if ( data && result && *resultSize >= 0x20 )
  {
    v10 = bdHashSHA256::s_provider;
    if ( bdHashSHA256::s_provider )
    {
      m_hashHandle = this->m_hashHandle;
      p_m_hashHandle = &this->m_hashHandle;
      if ( m_hashHandle )
      {
        if ( bdHashSHA256::s_reusableHash )
        {
LABEL_13:
          v14 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, dataSize, 0);
          if ( v14 < 0 )
          {
            logBCryptResult("bdHashSHA256", "BCryptHashData", v14);
            bdHashSHA256::cleanHashHandle(this);
          }
          else
          {
            v15 = BCryptFinishHash_0(*p_m_hashHandle, pbOutput, 0x20u, 0);
            if ( v15 < 0 )
            {
              logBCryptResult("bdHashSHA256", "BCryptFinishHash", v15);
              bdHashSHA256::cleanHashHandle(this);
            }
            else
            {
              v16 = *(__m256i *)pbOutput;
              *resultSize = 32;
              v9 = 1;
              *(__m256i *)result = v16;
            }
          }
          return v9;
        }
        bdHashSHA256::cleanHashHandle(this);
        v10 = bdHashSHA256::s_provider;
      }
    }
    p_m_hashHandle = &this->m_hashHandle;
    if ( v10 )
    {
      if ( !*p_m_hashHandle )
      {
        Hash_0 = BCryptCreateHash_0(v10, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA256::s_reusableHash ? 0x20 : 0);
        if ( Hash_0 < 0 )
        {
          logBCryptResult("bdHashSHA256", "BCryptCreateHash", Hash_0);
          bdHashSHA256::cleanHashHandle(this);
        }
      }
      m_hashHandle = *p_m_hashHandle;
      if ( *p_m_hashHandle )
        goto LABEL_13;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA256", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha256.cpp", "bdHashSHA256::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
      if ( *p_m_hashHandle )
      {
        v17 = BCryptDestroyHash_0(*p_m_hashHandle);
        if ( v17 < 0 )
          logBCryptResult("bdHashSHA256", "BCryptDestroyHash", v17);
        this->m_hashHandle = NULL;
      }
    }
  }
  return v9;
}

