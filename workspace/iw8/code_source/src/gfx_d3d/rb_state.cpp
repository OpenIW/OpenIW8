/*
==============
RB_UnbindAllImages
==============
*/

void __fastcall RB_UnbindAllImages(GfxCmdBufContext *gfxContext)
{
  ?RB_UnbindAllImages@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_InitSceneViewport
==============
*/

void __fastcall RB_InitSceneViewport(GfxCmdBufContext *gfxContext)
{
  ?RB_InitSceneViewport@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_GetBackendCmdBufContext
==============
*/

const GfxCmdBufContext *__fastcall RB_GetBackendCmdBufContext(const GfxCmdBufContext *result)
{
  return ?RB_GetBackendCmdBufContext@@YA?BUGfxCmdBufContext@@XZ(result);
}

/*
==============
RB_IsBackendCmdBufContext
==============
*/

bool __fastcall RB_IsBackendCmdBufContext(GfxCmdBufContext *context)
{
  return ?RB_IsBackendCmdBufContext@@YA_NUGfxCmdBufContext@@@Z(context);
}

/*
==============
RB_SetInitialState
==============
*/

void RB_SetInitialState(void)
{
  ?RB_SetInitialState@@YAXXZ();
}

/*
==============
RB_IsBackendCmdBufContextState
==============
*/

bool __fastcall RB_IsBackendCmdBufContextState(const GfxCmdBufState *state)
{
  return ?RB_IsBackendCmdBufContextState@@YA_NPEBUGfxCmdBufState@@@Z(state);
}

/*
==============
RB_InitImages
==============
*/

void RB_InitImages(void)
{
  ?RB_InitImages@@YAXXZ();
}

/*
==============
RB_GetBackendCmdBufContext
==============
*/
const GfxCmdBufContext *RB_GetBackendCmdBufContext(const GfxCmdBufContext *result)
{
  *result = s_backendGfxCmdBufContext;
  return result;
}

/*
==============
RB_InitImages
==============
*/
void RB_InitImages(void)
{
  RB_InitCodeImages();
  RB_InitRenderTargetImages();
}

/*
==============
RB_InitSceneViewport
==============
*/
void RB_InitSceneViewport(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 

  source = gfxContext->source;
  *(_QWORD *)&source->sceneViewport.x = 0i64;
  source->sceneViewport.width = vidConfig.displayWidth;
  source->sceneViewport.height = vidConfig.displayHeight;
}

/*
==============
RB_IsBackendCmdBufContext
==============
*/
bool RB_IsBackendCmdBufContext(GfxCmdBufContext *context)
{
  return context->source == &s_backendGfxCmdBufSourceState && context->state == &s_backendGfxCmdBufState;
}

/*
==============
RB_IsBackendCmdBufContextState
==============
*/
bool RB_IsBackendCmdBufContextState(const GfxCmdBufState *state)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 38, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  return state == &s_backendGfxCmdBufState;
}

/*
==============
RB_SetInitialState
==============
*/
void RB_SetInitialState(void)
{
  __int64 v2; 

  R_LockGfxImmediateContext();
  R_InitCmdBufSourceState(s_backendGfxCmdBufContext.source, &g_gfxCmdBufInput);
  _XMM0 = s_backendGfxCmdBufContext;
  __asm { vpextrq rdi, xmm0, 1 }
  _RDI[170] = g_dx.immediateContext;
  _RDI[310] = &g_dx.immediateDescState;
  R_InitDescriptorHeapInfoState(&g_dx.immediateDescState, &g_dx.backendDescHeapInfo);
  _RDI[312] = &g_dx.immediateConstantBufferAllocations;
  R_InitConstantBufferInfoState(&g_dx.immediateConstantBufferAllocations, &g_dx.constantBufferInfo, 0);
  R_LockGfxImmediateContext();
  R_InitCmdBufState(s_backendGfxCmdBufContext.state);
  R_UnlockGfxImmediateContext();
  v2 = 0i64;
  *(_QWORD *)&s_backendGfxCmdBufContext.source->sceneViewport.x = 0i64;
  s_backendGfxCmdBufContext.source->sceneViewport.width = vidConfig.displayWidth;
  s_backendGfxCmdBufContext.source->sceneViewport.height = vidConfig.displayHeight;
  if ( s_backendGfxCmdBufContext.source->renderTargetWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 87, ASSERT_TYPE_SANITY, "( gfxContext.source->renderTargetWidth == 0 )", (const char *)&queryFormat, "gfxContext.source->renderTargetWidth == 0") )
    __debugbreak();
  if ( s_backendGfxCmdBufContext.source->renderTargetHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 88, ASSERT_TYPE_SANITY, "( gfxContext.source->renderTargetHeight == 0 )", (const char *)&queryFormat, "gfxContext.source->renderTargetHeight == 0") )
    __debugbreak();
  if ( s_backendGfxCmdBufContext.source->viewportBehavior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 89, ASSERT_TYPE_SANITY, "( gfxContext.source->viewportBehavior == 0 )", (const char *)&queryFormat, "gfxContext.source->viewportBehavior == 0") )
    __debugbreak();
  if ( _RDI[365] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 92, ASSERT_TYPE_SANITY, "( gfxContext.state->indexBuffer == 0 )", (const char *)&queryFormat, "gfxContext.state->indexBuffer == NULL") )
    __debugbreak();
  do
  {
    if ( _RDI[v2 + 369] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 95, ASSERT_TYPE_SANITY, "( gfxContext.state->streams[i].buffer == 0 )", (const char *)&queryFormat, "gfxContext.state->streams[i].buffer == NULL") )
      __debugbreak();
    if ( LODWORD(_RDI[v2 + 370]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 96, ASSERT_TYPE_SANITY, "( gfxContext.state->streams[i].offset == 0 )", (const char *)&queryFormat, "gfxContext.state->streams[i].offset == 0") )
      __debugbreak();
    if ( HIDWORD(_RDI[v2 + 370]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 97, ASSERT_TYPE_SANITY, "( gfxContext.state->streams[i].stride == 0 )", (const char *)&queryFormat, "gfxContext.state->streams[i].stride == 0") )
      __debugbreak();
    v2 += 2i64;
  }
  while ( v2 < 10 );
  if ( _RDI[352] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 107, ASSERT_TYPE_SANITY, "( gfxContext.state->material == 0 )", (const char *)&queryFormat, "gfxContext.state->material == NULL") )
    __debugbreak();
  if ( _RDI[353] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 108, ASSERT_TYPE_SANITY, "( gfxContext.state->technique == 0 )", (const char *)&queryFormat, "gfxContext.state->technique == NULL") )
    __debugbreak();
  R_UnlockGfxImmediateContext();
}

/*
==============
RB_UnbindAllImages
==============
*/
void RB_UnbindAllImages(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufState *state; 

  if ( R_DeviceExists() && r_glob.startedRenderThread )
  {
    if ( gfxContext->state->device != g_dx.immediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_state.cpp", 137, ASSERT_TYPE_ASSERT, "(R_IsImmediateContext( gfxContext.state->device ))", (const char *)&queryFormat, "R_IsImmediateContext( gfxContext.state->device )") )
      __debugbreak();
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    state = gfxContext->state;
    R_ClearResourceBuffers(state);
    R_FlushResourceBuffers(state);
  }
}

