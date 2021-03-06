/*
==============
VertDecl_IsSuperTerrain
==============
*/

bool __fastcall VertDecl_IsSuperTerrain(const MaterialVertexDeclType vertDeclType)
{
  return ?VertDecl_IsSuperTerrain@@YA_NW4MaterialVertexDeclType@@@Z(vertDeclType);
}

/*
==============
R_HW_CreateVertexElementDescs
==============
*/

bool __fastcall R_HW_CreateVertexElementDescs(D3D12_INPUT_ELEMENT_DESC *descs, MaterialVertexDeclType vertDeclType, unsigned int streamCount, const MaterialStreamSource *streams)
{
  return ?R_HW_CreateVertexElementDescs@@YA_NPEAUD3D12_INPUT_ELEMENT_DESC@@W4MaterialVertexDeclType@@IPEBW4MaterialStreamSource@@@Z(descs, vertDeclType, streamCount, streams);
}

/*
==============
R_HW_CreateVertexElementDescs
==============
*/
char R_HW_CreateVertexElementDescs(D3D12_INPUT_ELEMENT_DESC *descs, MaterialVertexDeclType vertDeclType, unsigned int streamCount, const MaterialStreamSource *streams)
{
  unsigned int v8; 
  MaterialStreamSourceInfo *sources; 
  __int64 v10; 
  GfxVertexElementFormat *v11; 
  unsigned int v12; 
  D3D12_INPUT_ELEMENT_DESC *v13; 
  unsigned int v14; 
  __int64 v15; 
  D3D12_INPUT_ELEMENT_DESC *v16; 

  if ( (unsigned __int16)vertDeclType >= VERTDECL_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_vertex.cpp", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vertDeclType ) < (unsigned)( ( sizeof( *array_counter( g_vertexFormats ) ) + 0 ) )", "vertDeclType doesn't index ARRAY_COUNT( g_vertexFormats )\n\t%i not in [0, %i)", (unsigned __int16)vertDeclType, 26) )
    __debugbreak();
  v8 = 0;
  if ( !streamCount )
    return 1;
  sources = g_vertexFormats[(unsigned __int64)(unsigned __int16)vertDeclType].sources;
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)streams;
    v11 = (GfxVertexElementFormat *)&sources[v10];
    if ( *(_BYTE *)v11 == 0xFF )
      break;
    v12 = v8;
    if ( v8 )
    {
      v13 = &descs[v8];
      do
      {
        v14 = v12 - 1;
        v15 = v12 - 1;
        if ( descs[v15].InputSlot <= *(unsigned __int8 *)v11 )
          break;
        *v13-- = descs[v15];
        --v12;
      }
      while ( v14 );
    }
    v16 = &descs[v12];
    v16->SemanticName = R_GetStreamSourceSemanticName((MaterialStreamSource)v10);
    v16->SemanticIndex = R_GetStreamSourceSemanticIndex((MaterialStreamSource)v10);
    v16->Format = R_D3D_GetDXGIFormatFromVertexElementFormat(v11[1]);
    ++v8;
    v16->InputSlot = *(unsigned __int8 *)v11;
    ++streams;
    v16->AlignedByteOffset = *((unsigned __int8 *)v11 + 1);
    *(_QWORD *)&v16->InputSlotClass = 0i64;
    if ( v8 >= streamCount )
      return 1;
  }
  return 0;
}

/*
==============
VertDecl_IsSuperTerrain
==============
*/
bool VertDecl_IsSuperTerrain(const MaterialVertexDeclType vertDeclType)
{
  return (unsigned __int16)(vertDeclType - 19) <= 4u;
}

