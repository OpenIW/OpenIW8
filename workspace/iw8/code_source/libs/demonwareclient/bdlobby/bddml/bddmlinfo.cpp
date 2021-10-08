/*
==============
bdDMLInfo::sizeOf
==============
*/

unsigned int __fastcall bdDMLInfo::sizeOf(bdDMLInfo *this)
{
  return ?sizeOf@bdDMLInfo@@UEAAIXZ(this);
}

/*
==============
bdDMLInfo::get2DCartesianLocation
==============
*/

void __fastcall bdDMLInfo::get2DCartesianLocation(bdDMLInfo *this, float *x, float *y, float standardLatitudeDegrees)
{
  ?get2DCartesianLocation@bdDMLInfo@@QEAAXAEAM0M@Z(this, x, y, standardLatitudeDegrees);
}

/*
==============
bdDMLInfo::deserialize
==============
*/

bool __fastcall bdDMLInfo::deserialize(bdDMLInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdDMLInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdDMLInfo::~bdDMLInfo
==============
*/

void __fastcall bdDMLInfo::~bdDMLInfo(bdDMLInfo *this)
{
  ??1bdDMLInfo@@UEAA@XZ(this);
}

/*
==============
bdDMLInfo::bdDMLInfo
==============
*/

void __fastcall bdDMLInfo::bdDMLInfo(bdDMLInfo *this)
{
  ??0bdDMLInfo@@QEAA@XZ(this);
}

/*
==============
bdDMLInfo::bdDMLInfo
==============
*/
void bdDMLInfo::bdDMLInfo(bdDMLInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDMLInfo::`vbtable';
    *((_QWORD *)&this->m_asn + 1) = &bdReferencable::`vftable';
    *(&this->m_asn + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdDMLInfo_vtbl *)&bdDMLInfo::`vftable'{for `bdTaskResult'};
  *(bdDMLInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDMLInfo_vtbl *)&bdDMLInfo::`vftable'{for `bdReferencable'};
  *(_QWORD *)&this->m_latitude = 0i64;
  this->m_asn = 0;
  memset_0(&this->__vftable + 2, 0, 0x10Fui64);
}

/*
==============
bdDMLInfo::~bdDMLInfo
==============
*/
void bdDMLInfo::~bdDMLInfo(bdDMLInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdDMLInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 296) = &bdDMLInfo::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdDMLInfo *)((char *)this - 288));
}

/*
==============
bdDMLInfo::deserialize
==============
*/
_BOOL8 bdDMLInfo::deserialize(bdDMLInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool String; 

  if ( bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 16, 3ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 19, 0x41ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_region, 0x41ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_city, 0x81ui64) && bdByteBuffer::readFloat32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_latitude) && bdByteBuffer::readFloat32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_longitude) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_asn) )
  {
    String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_timezone, 9ui64);
  }
  else
  {
    this->m_asn = 0;
    String = 0;
  }
  bdTelemetry::setRegion(this);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
bdDMLInfo::get2DCartesianLocation
==============
*/

void __fastcall bdDMLInfo::get2DCartesianLocation(bdDMLInfo *this, float *x, float *y, double standardLatitudeDegrees)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+120h]
    vmovaps [rsp+48h+var_18], xmm7
  }
  _RSI = y;
  __asm
  {
    vmulss  xmm7, xmm0, cs:__real@3c8efa35
    vmulss  xmm0, xmm3, cs:__real@3c8efa35; X
    vmovaps [rsp+48h+var_28], xmm8
  }
  _RDI = x;
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rbx+124h]
    vmulss  xmm2, xmm1, cs:__real@3c8efa35
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm7; X
    vmovss  dword ptr [rdi], xmm2
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm7, [rsp+48h+var_18]
    vdivss  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+48h+var_28]
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
bdDMLInfo::sizeOf
==============
*/
__int64 bdDMLInfo::sizeOf(bdDMLInfo *this)
{
  return 320i64;
}

