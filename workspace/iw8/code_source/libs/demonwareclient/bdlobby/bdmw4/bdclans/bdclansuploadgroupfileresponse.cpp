/*
==============
bdClansUploadGroupFileResponse::serialize
==============
*/

bool __fastcall bdClansUploadGroupFileResponse::serialize(bdClansUploadGroupFileResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansUploadGroupFileResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansUploadGroupFileResponse::bdClansUploadGroupFileResponse
==============
*/

void __fastcall bdClansUploadGroupFileResponse::bdClansUploadGroupFileResponse(bdClansUploadGroupFileResponse *this)
{
  ??0bdClansUploadGroupFileResponse@@QEAA@XZ(this);
}

/*
==============
bdClansUploadGroupFileResponse::getFile
==============
*/

bdClansGroupFile *__fastcall bdClansUploadGroupFileResponse::getFile(bdClansUploadGroupFileResponse *this, bdClansGroupFile *result)
{
  return ?getFile@bdClansUploadGroupFileResponse@@QEBA?AVbdClansGroupFile@@XZ(this, result);
}

/*
==============
bdClansUploadGroupFileResponse::deserialize
==============
*/

bool __fastcall bdClansUploadGroupFileResponse::deserialize(bdClansUploadGroupFileResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansUploadGroupFileResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansUploadGroupFileResponse::bdClansUploadGroupFileResponse
==============
*/
void bdClansUploadGroupFileResponse::bdClansUploadGroupFileResponse(bdClansUploadGroupFileResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansUploadGroupFileResponse::`vbtable';
    *(_QWORD *)&this->m_file[368] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_file[376] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansUploadGroupFileResponse_vtbl *)&bdClansUploadGroupFileResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansUploadGroupFileResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansUploadGroupFileResponse_vtbl *)&bdClansUploadGroupFileResponse::`vftable'{for `bdReferencable'};
  bdClansGroupFile::bdClansGroupFile((bdClansGroupFile *)(&this->__vftable + 2));
}

/*
==============
bdClansUploadGroupFileResponse::deserialize
==============
*/
bool bdClansUploadGroupFileResponse::deserialize(bdClansUploadGroupFileResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&this->__vftable + 2));
}

/*
==============
bdClansUploadGroupFileResponse::getFile
==============
*/
bdClansGroupFile *bdClansUploadGroupFileResponse::getFile(bdClansUploadGroupFileResponse *this, bdClansGroupFile *result)
{
  bdClansUploadGroupFileResponse_vtbl **v3; 
  __int64 v4; 

  v3 = &this->__vftable + 2;
  *((_QWORD *)&result->__vftable + 1) = &bdClansGroupFile::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)(&result->m_updatedTimestamp + 1), (const bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24));
  v4 = 2i64;
  bdStructBufferSerializable::bdStructBufferSerializable(result, (const bdStructBufferSerializable *)v3);
  result->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  *((_QWORD *)&result->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&result->m_group[32], (const bdReferencable *)((char *)v3 + SHIDWORD(v3[3]->serialize) + 24));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&result->__vftable + 2), (const bdStructBufferSerializable *)(v3 + 2));
  *((_QWORD *)&result->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 3) + 4i64) + 24) = (bdClansGroupFile_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)result->m_group = *((_WORD *)v3 + 16);
  *(_QWORD *)&result->m_group[8] = v3[5];
  *(_WORD *)&result->m_group[16] = *((_WORD *)v3 + 24);
  *(_QWORD *)&result->m_group[24] = v3[7];
  _RCX = &result->m_fileName;
  _RAX = v3 + 10;
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
    }
    _RCX = (bdStructFixedSizeString<255> *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 16;
    --v4;
  }
  while ( v4 );
  result->m_fileData = (unsigned __int8 *)v3[42];
  result->m_fileSize = *((_DWORD *)v3 + 86);
  result->m_collisionField = *((_DWORD *)v3 + 87);
  result->m_createdTimestamp = (unsigned __int64)v3[44];
  result->m_updatedTimestamp = (unsigned __int64)v3[45];
  return result;
}

/*
==============
bdClansUploadGroupFileResponse::serialize
==============
*/
bool bdClansUploadGroupFileResponse::serialize(bdClansUploadGroupFileResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansuploadgroupfileresponse.cpp", "bdClansUploadGroupFileResponse::serialize", 0x17u, "NOT IMPLEMENTED");
  return 0;
}

