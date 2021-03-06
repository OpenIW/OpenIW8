/*
==============
HavokCloth_PhysicsProxyAction::operator delete
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokCloth_PhysicsProxyAction@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::operator delete
==============
*/

void __fastcall HavokCloth_ExternMeshShapeGeometry::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokCloth_ExternMeshShapeGeometry@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getNumTriangles
==============
*/

int __fastcall HavokCloth_ExternMeshShapeGeometry::getNumTriangles(HavokCloth_ExternMeshShapeGeometry *this)
{
  return ?getNumTriangles@HavokCloth_ExternMeshShapeGeometry@@UEBAHXZ(this);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getTriangleVertices
==============
*/

void __fastcall HavokCloth_ExternMeshShapeGeometry::getTriangleVertices(HavokCloth_ExternMeshShapeGeometry *this, int index, hkVector4f *verticesOut)
{
  ?getTriangleVertices@HavokCloth_ExternMeshShapeGeometry@@UEBAXHPEAVhkVector4f@@@Z(this, index, verticesOut);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getTriangleShapeTag
==============
*/

unsigned __int16 __fastcall HavokCloth_ExternMeshShapeGeometry::getTriangleShapeTag(HavokCloth_ExternMeshShapeGeometry *this, int index)
{
  return ?getTriangleShapeTag@HavokCloth_ExternMeshShapeGeometry@@UEBAGH@Z(this, index);
}

/*
==============
HavokCloth_PhysicsProxyAction::operator delete
==============
*/
void HavokCloth_PhysicsProxyAction::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  v2 = nbytes;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  if ( *((_WORD *)p + 8) != 0xFFFF )
    v2 = *((unsigned __int16 *)p + 8);
  Value->m_heap->blockFree(Value->m_heap, p, v2);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::operator delete
==============
*/
void HavokCloth_ExternMeshShapeGeometry::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  v2 = nbytes;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  if ( *((_WORD *)p + 8) != 0xFFFF )
    v2 = *((unsigned __int16 *)p + 8);
  Value->m_heap->blockFree(Value->m_heap, p, v2);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getNumTriangles
==============
*/
__int64 HavokCloth_ExternMeshShapeGeometry::getNumTriangles(HavokCloth_ExternMeshShapeGeometry *this)
{
  return (unsigned int)this->m_geometry.m_triangles.m_size;
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getTriangleShapeTag
==============
*/
__int64 HavokCloth_ExternMeshShapeGeometry::getTriangleShapeTag(HavokCloth_ExternMeshShapeGeometry *this, int index)
{
  return this->m_shapeTag;
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::getTriangleVertices
==============
*/
void HavokCloth_ExternMeshShapeGeometry::getTriangleVertices(HavokCloth_ExternMeshShapeGeometry *this, int index, hkVector4f *verticesOut)
{
  *verticesOut = this->m_geometry.m_vertices.m_data[this->m_geometry.m_triangles.m_data[index].m_a];
  verticesOut[1] = this->m_geometry.m_vertices.m_data[this->m_geometry.m_triangles.m_data[index].m_b];
  verticesOut[2] = this->m_geometry.m_vertices.m_data[this->m_geometry.m_triangles.m_data[index].m_c];
}

