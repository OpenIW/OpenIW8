/*
==============
HavokPhysicsProcessHandler::operator delete
==============
*/

void __fastcall HavokPhysicsProcessHandler::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsProcessHandler@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsProcessHandler::operator delete
==============
*/
void HavokPhysicsProcessHandler::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

