/*
==============
bdBitBuffer::readFloat32
==============
*/

bool __fastcall bdBitBuffer::readFloat32(bdBitBuffer *this, float *f)
{
  return ?readFloat32@bdBitBuffer@@QEAA_NAEAM@Z(this, f);
}

/*
==============
bdBitBuffer::writeFloat32
==============
*/

void __fastcall bdBitBuffer::writeFloat32(bdBitBuffer *this, const float f)
{
  ?writeFloat32@bdBitBuffer@@QEAAXM@Z(this, f);
}

/*
==============
bdBitBuffer::writeInt32
==============
*/

void __fastcall bdBitBuffer::writeInt32(bdBitBuffer *this, const int i)
{
  ?writeInt32@bdBitBuffer@@QEAAXH@Z(this, i);
}

/*
==============
bdBitBuffer::readFloat32
==============
*/
char bdBitBuffer::readFloat32(bdBitBuffer *this, float *f)
{
  float bits; 

  if ( !bdBitBuffer::readDataType(this, BD_BB_FLOAT32_TYPE) || !bdBitBuffer::readBits(this, &bits, 0x20u) )
    return 0;
  *f = bits;
  return 1;
}

/*
==============
bdBitBuffer::writeFloat32
==============
*/
void bdBitBuffer::writeFloat32(bdBitBuffer *this, const float f)
{
  unsigned int v3; 
  float bits; 

  if ( this->m_typeChecked )
  {
    bdHandleAssert(1, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
    v3 = bdBitOperations::highBitNumber(0x1Fu);
    LODWORD(bits) = 13;
    bdBitBuffer::writeBits(this, &bits, v3 + 1);
  }
  bits = f;
  bdBitBuffer::writeBits(this, &bits, 0x20u);
}

/*
==============
bdBitBuffer::writeInt32
==============
*/
void bdBitBuffer::writeInt32(bdBitBuffer *this, const int i)
{
  unsigned int v4; 
  int bits; 

  if ( this->m_typeChecked )
  {
    bdHandleAssert(1, "end >= begin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbitbuffer.cpp", "bdBitBuffer::writeRangedUInt32", 0x52u, "bdBitBuffer::writeRangedUInt, end of range is less than the begining");
    v4 = bdBitOperations::highBitNumber(0x1Fu);
    bits = 7;
    bdBitBuffer::writeBits(this, &bits, v4 + 1);
  }
  bits = i;
  bdBitBuffer::writeBits(this, &bits, 0x20u);
}

