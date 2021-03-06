/*
==============
bdConnectionStatistics::addPacketSizeSent
==============
*/

void __fastcall bdConnectionStatistics::addPacketSizeSent(bdConnectionStatistics *this, const unsigned int bytes)
{
  ?addPacketSizeSent@bdConnectionStatistics@@QEAAXI@Z(this, bytes);
}

/*
==============
bdConnectionStatistics::reset
==============
*/

void __fastcall bdConnectionStatistics::reset(bdConnectionStatistics *this)
{
  ?reset@bdConnectionStatistics@@QEAAXXZ(this);
}

/*
==============
bdConnectionStatistics::setLastRTT
==============
*/

void __fastcall bdConnectionStatistics::setLastRTT(bdConnectionStatistics *this, const float time)
{
  ?setLastRTT@bdConnectionStatistics@@QEAAXM@Z(this, time);
}

/*
==============
bdConnectionStatistics::getBytesRecv
==============
*/

unsigned int __fastcall bdConnectionStatistics::getBytesRecv(bdConnectionStatistics *this)
{
  return ?getBytesRecv@bdConnectionStatistics@@QEBAIXZ(this);
}

/*
==============
bdConnectionStatistics::addPacketsRecv
==============
*/

void __fastcall bdConnectionStatistics::addPacketsRecv(bdConnectionStatistics *this, const unsigned int numPackets)
{
  ?addPacketsRecv@bdConnectionStatistics@@QEAAXI@Z(this, numPackets);
}

/*
==============
bdConnectionStatistics::addPacketSizeRecv
==============
*/

void __fastcall bdConnectionStatistics::addPacketSizeRecv(bdConnectionStatistics *this, const unsigned int bytes)
{
  ?addPacketSizeRecv@bdConnectionStatistics@@QEAAXI@Z(this, bytes);
}

/*
==============
bdConnectionStatistics::update
==============
*/

void __fastcall bdConnectionStatistics::update(bdConnectionStatistics *this, const float time)
{
  ?update@bdConnectionStatistics@@QEAAXM@Z(this, time);
}

/*
==============
bdConnectionStatistics::getPacketsSent
==============
*/

unsigned int __fastcall bdConnectionStatistics::getPacketsSent(bdConnectionStatistics *this)
{
  return ?getPacketsSent@bdConnectionStatistics@@QEBAIXZ(this);
}

/*
==============
bdConnectionStatistics::addBytesRecv
==============
*/

void __fastcall bdConnectionStatistics::addBytesRecv(bdConnectionStatistics *this, const unsigned int bytes)
{
  ?addBytesRecv@bdConnectionStatistics@@QEAAXI@Z(this, bytes);
}

/*
==============
bdConnectionStatistics::bdConnectionStatistics
==============
*/

void __fastcall bdConnectionStatistics::bdConnectionStatistics(bdConnectionStatistics *this)
{
  ??0bdConnectionStatistics@@QEAA@XZ(this);
}

/*
==============
bdConnectionStatistics::addBytesSent
==============
*/

void __fastcall bdConnectionStatistics::addBytesSent(bdConnectionStatistics *this, const unsigned int bytes)
{
  ?addBytesSent@bdConnectionStatistics@@QEAAXI@Z(this, bytes);
}

/*
==============
bdConnectionStatistics::getBytesSent
==============
*/

unsigned int __fastcall bdConnectionStatistics::getBytesSent(bdConnectionStatistics *this)
{
  return ?getBytesSent@bdConnectionStatistics@@QEBAIXZ(this);
}

/*
==============
bdConnectionStatistics::getPacketsRecv
==============
*/

unsigned int __fastcall bdConnectionStatistics::getPacketsRecv(bdConnectionStatistics *this)
{
  return ?getPacketsRecv@bdConnectionStatistics@@QEBAIXZ(this);
}

/*
==============
bdConnectionStatistics::getAvgRTT
==============
*/

double __fastcall bdConnectionStatistics::getAvgRTT(bdConnectionStatistics *this)
{
  double result; 

  *(float *)&result = ?getAvgRTT@bdConnectionStatistics@@QEBAMXZ(this);
  return result;
}

/*
==============
bdConnectionStatistics::addPacketsSent
==============
*/

void __fastcall bdConnectionStatistics::addPacketsSent(bdConnectionStatistics *this, const unsigned int numPackets)
{
  ?addPacketsSent@bdConnectionStatistics@@QEAAXI@Z(this, numPackets);
}

/*
==============
bdConnectionStatistics::getBytesSentPerSecond
==============
*/

unsigned int __fastcall bdConnectionStatistics::getBytesSentPerSecond(bdConnectionStatistics *this)
{
  return ?getBytesSentPerSecond@bdConnectionStatistics@@QEBAIXZ(this);
}

/*
==============
bdConnectionStatistics::bdConnectionStatistics
==============
*/
void bdConnectionStatistics::bdConnectionStatistics(bdConnectionStatistics *this)
{
  this->m_minPacketSizeSent = -1;
  *(_QWORD *)&this->m_bytesSent = 0i64;
  *(_QWORD *)&this->m_avgBytesSent = 0i64;
  *(_QWORD *)&this->m_bytesRecv = 0i64;
  *(_QWORD *)&this->m_avgPacketRecvSize = 0i64;
  *(_QWORD *)&this->m_packetsSent = 0i64;
  this->m_maxPacketSizeRecv = 0;
  *(_QWORD *)&this->m_maxRTT = 0i64;
  this->m_avgRTT = 0.0;
  this->m_minPacketSizeRecv = -1;
}

/*
==============
bdConnectionStatistics::addBytesRecv
==============
*/
void bdConnectionStatistics::addBytesRecv(bdConnectionStatistics *this, const unsigned int bytes)
{
  this->m_bytesRecv += bytes;
}

/*
==============
bdConnectionStatistics::addBytesSent
==============
*/
void bdConnectionStatistics::addBytesSent(bdConnectionStatistics *this, const unsigned int bytes)
{
  this->m_bytesSent += bytes;
}

/*
==============
bdConnectionStatistics::addPacketSizeRecv
==============
*/
void bdConnectionStatistics::addPacketSizeRecv(bdConnectionStatistics *this, const unsigned int bytes)
{
  unsigned int m_maxPacketSizeRecv; 
  unsigned int m_avgPacketRecvSize; 
  bool v4; 
  unsigned int m_minPacketSizeRecv; 

  m_maxPacketSizeRecv = bytes;
  m_avgPacketRecvSize = this->m_avgPacketRecvSize;
  if ( this->m_maxPacketSizeRecv > bytes )
    m_maxPacketSizeRecv = this->m_maxPacketSizeRecv;
  v4 = this->m_minPacketSizeRecv < bytes;
  this->m_maxPacketSizeRecv = m_maxPacketSizeRecv;
  m_minPacketSizeRecv = bytes;
  if ( v4 )
    m_minPacketSizeRecv = this->m_minPacketSizeRecv;
  this->m_minPacketSizeRecv = m_minPacketSizeRecv;
  if ( m_avgPacketRecvSize )
    this->m_avgPacketRecvSize = (bytes + m_avgPacketRecvSize) >> 1;
  else
    this->m_avgPacketRecvSize = bytes;
}

/*
==============
bdConnectionStatistics::addPacketSizeSent
==============
*/
void bdConnectionStatistics::addPacketSizeSent(bdConnectionStatistics *this, const unsigned int bytes)
{
  unsigned int m_maxPacketSizeSent; 
  unsigned int m_avgPacketSentSize; 
  bool v4; 
  unsigned int m_minPacketSizeSent; 

  m_maxPacketSizeSent = bytes;
  m_avgPacketSentSize = this->m_avgPacketSentSize;
  if ( this->m_maxPacketSizeSent > bytes )
    m_maxPacketSizeSent = this->m_maxPacketSizeSent;
  v4 = this->m_minPacketSizeSent < bytes;
  this->m_maxPacketSizeSent = m_maxPacketSizeSent;
  m_minPacketSizeSent = bytes;
  if ( v4 )
    m_minPacketSizeSent = this->m_minPacketSizeSent;
  this->m_minPacketSizeSent = m_minPacketSizeSent;
  if ( m_avgPacketSentSize )
    this->m_avgPacketSentSize = (bytes + m_avgPacketSentSize) >> 1;
  else
    this->m_avgPacketSentSize = bytes;
}

/*
==============
bdConnectionStatistics::addPacketsRecv
==============
*/
void bdConnectionStatistics::addPacketsRecv(bdConnectionStatistics *this, const unsigned int numPackets)
{
  this->m_packetsRecv += numPackets;
}

/*
==============
bdConnectionStatistics::addPacketsSent
==============
*/
void bdConnectionStatistics::addPacketsSent(bdConnectionStatistics *this, const unsigned int numPackets)
{
  this->m_packetsSent += numPackets;
}

/*
==============
bdConnectionStatistics::getAvgRTT
==============
*/
float bdConnectionStatistics::getAvgRTT(bdConnectionStatistics *this)
{
  return this->m_avgRTT;
}

/*
==============
bdConnectionStatistics::getBytesRecv
==============
*/
__int64 bdConnectionStatistics::getBytesRecv(bdConnectionStatistics *this)
{
  return this->m_bytesRecv;
}

/*
==============
bdConnectionStatistics::getBytesSent
==============
*/
__int64 bdConnectionStatistics::getBytesSent(bdConnectionStatistics *this)
{
  return this->m_bytesSent;
}

/*
==============
bdConnectionStatistics::getBytesSentPerSecond
==============
*/
__int64 bdConnectionStatistics::getBytesSentPerSecond(bdConnectionStatistics *this)
{
  return this->m_bytesSentPerSecond;
}

/*
==============
bdConnectionStatistics::getPacketsRecv
==============
*/
__int64 bdConnectionStatistics::getPacketsRecv(bdConnectionStatistics *this)
{
  return this->m_packetsRecv;
}

/*
==============
bdConnectionStatistics::getPacketsSent
==============
*/
__int64 bdConnectionStatistics::getPacketsSent(bdConnectionStatistics *this)
{
  return this->m_packetsSent;
}

/*
==============
bdConnectionStatistics::reset
==============
*/
void bdConnectionStatistics::reset(bdConnectionStatistics *this)
{
  this->m_minPacketSizeSent = -1;
  *(_QWORD *)&this->m_bytesSent = 0i64;
  *(_QWORD *)&this->m_avgBytesSent = 0i64;
  *(_QWORD *)&this->m_bytesRecv = 0i64;
  *(_QWORD *)&this->m_avgPacketRecvSize = 0i64;
  *(_QWORD *)&this->m_packetsSent = 0i64;
  this->m_maxPacketSizeRecv = 0;
  *(_QWORD *)&this->m_maxRTT = 0i64;
  this->m_avgRTT = 0.0;
  this->m_minPacketSizeRecv = -1;
}

/*
==============
bdConnectionStatistics::setLastRTT
==============
*/

void __fastcall bdConnectionStatistics::setLastRTT(bdConnectionStatistics *this, double time)
{
  _XMM0 = LODWORD(this->m_maxRTT);
  _XMM2 = *(_OWORD *)&time;
  if ( *(float *)&_XMM0 == 0.0 && this->m_minRTT == 0.0 )
  {
    this->m_minRTT = *(float *)&time;
    _XMM0 = *(_OWORD *)&time;
  }
  __asm
  {
    vminss  xmm1, xmm2, dword ptr [rcx+38h]
    vmaxss  xmm0, xmm0, xmm2
  }
  this->m_maxRTT = *(float *)&_XMM0;
  this->m_minRTT = *(float *)&_XMM1;
  this->m_avgRTT = *(float *)&_XMM2;
}

/*
==============
bdConnectionStatistics::update
==============
*/
void bdConnectionStatistics::update(bdConnectionStatistics *this, const float time)
{
  unsigned int v2; 
  unsigned int v3; 
  float v4; 

  if ( time > 0.0 )
  {
    v2 = this->m_bytesSent - this->m_lastBytesSent;
    this->m_lastBytesSent = this->m_bytesSent;
    v3 = (v2 + this->m_avgBytesSent) >> 1;
    v4 = (float)v3;
    this->m_avgBytesSent = v3;
    this->m_bytesSentPerSecond = (int)(float)(v4 / time);
  }
}

