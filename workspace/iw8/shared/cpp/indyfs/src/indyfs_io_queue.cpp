/*
==============
indyfs_io_queue_push
==============
*/

int __fastcall indyfs_io_queue_push(IndyFsIOTaskQueue *ioTaskQueue, IndyFsFile *file, unsigned __int64 offset, unsigned __int64 size, void *dest, int deadline, IndyFsTaskHandle *handle, void (__fastcall *callback)(IndyFsTaskState, unsigned __int64, void *), void *callbackData, IndyFsLocalCaching cachingBehavior, IndyFsHttpTaskQueue *httpTaskQueue)
{
  return ?indyfs_io_queue_push@@YAHPEAUIndyFsIOTaskQueue@@PEAUIndyFsFile@@_K2PEAXHPEAUIndyFsTaskHandle@@P6AXW4IndyFsTaskState@@23@Z3W4IndyFsLocalCaching@@PEAUIndyFsHttpTaskQueue@@@Z(ioTaskQueue, file, offset, size, dest, deadline, handle, callback, callbackData, cachingBehavior, httpTaskQueue);
}

/*
==============
indyfs_io_queue_get_state
==============
*/

IndyFsTaskState __fastcall indyfs_io_queue_get_state(IndyFsTaskHandle *handle)
{
  return ?indyfs_io_queue_get_state@@YA?AW4IndyFsTaskState@@PEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_io_queue_quit
==============
*/

void indyfs_io_queue_quit(void)
{
  ?indyfs_io_queue_quit@@YAXXZ();
}

/*
==============
indyfs_io_queue_term
==============
*/

void __fastcall indyfs_io_queue_term(IndyFsIOTaskQueue *taskQueue)
{
  ?indyfs_io_queue_term@@YAXPEAUIndyFsIOTaskQueue@@@Z(taskQueue);
}

/*
==============
indyfs_io_queue_get_bytes_read
==============
*/

unsigned __int64 __fastcall indyfs_io_queue_get_bytes_read(IndyFsTaskHandle *handle)
{
  return ?indyfs_io_queue_get_bytes_read@@YA_KPEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_io_queue_cancel
==============
*/

void __fastcall indyfs_io_queue_cancel(IndyFsTaskHandle *handle)
{
  ?indyfs_io_queue_cancel@@YAXPEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_io_queue_init
==============
*/

void __fastcall indyfs_io_queue_init(IndyFsIOTaskQueue *taskQueue)
{
  ?indyfs_io_queue_init@@YAXPEAUIndyFsIOTaskQueue@@@Z(taskQueue);
}

/*
==============
indyfs_io_queue_alloc_http_task_handle
==============
*/

IndyFsHttpTaskHandle *__fastcall indyfs_io_queue_alloc_http_task_handle(IndyFsIOTaskQueue *taskQueue)
{
  return ?indyfs_io_queue_alloc_http_task_handle@@YAPEAUIndyFsHttpTaskHandle@@PEAUIndyFsIOTaskQueue@@@Z(taskQueue);
}

/*
==============
indyfs_io_queue_wait_until_finished
==============
*/

IndyFsTaskState __fastcall indyfs_io_queue_wait_until_finished(IndyFsTaskHandle *handle)
{
  return ?indyfs_io_queue_wait_until_finished@@YA?AW4IndyFsTaskState@@PEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_io_queue_thread_main
==============
*/

void __fastcall indyfs_io_queue_thread_main(const char *threadName)
{
  ?indyfs_io_queue_thread_main@@YAXPEBD@Z(threadName);
}

/*
==============
indyfs_io_queue_free_http_task_handle
==============
*/

void __fastcall indyfs_io_queue_free_http_task_handle(IndyFsIOTaskQueue *taskQueue, IndyFsHttpTaskHandle *handle)
{
  ?indyfs_io_queue_free_http_task_handle@@YAXPEAUIndyFsIOTaskQueue@@PEAUIndyFsHttpTaskHandle@@@Z(taskQueue, handle);
}

/*
==============
indyfs_io_queue_alloc_http_task_handle
==============
*/
IndyFsHttpTaskHandle *indyfs_io_queue_alloc_http_task_handle(IndyFsIOTaskQueue *taskQueue)
{
  IndyFsHttpTaskHandle *v2; 
  int v3; 
  int v4; 
  int v5; 
  __int64 i; 
  __int64 k; 
  __int64 j; 
  __int64 v9; 
  bool timedOut; 
  __int64 v12; 
  IndyFsScopedEvent v13; 

  v12 = -2i64;
  IndyFsScopedEvent::IndyFsScopedEvent(&v13, "IOQueue", "AllocTaskHandle");
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  v2 = NULL;
  v3 = 0;
  while ( 2 )
  {
    v4 = v3;
    v5 = 0;
    for ( i = 0i64; i < 64; ++i )
    {
      if ( !taskQueue->httpTaskHandlesInUse[i] )
      {
        v9 = v5;
        taskQueue->httpTaskHandlesInUse[v5] = 1;
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
        v2 = &taskQueue->httpTaskHandles[v9];
        goto LABEL_16;
      }
      ++v5;
    }
    ++v3;
    if ( v4 >= 8 )
    {
      indyfs_log_message(Error, "Failed to alloc HTTP Task Handle. Max loop tries. Possible deadlock");
      indyfs_log_message(Started, "taskHandlesInUse:");
      for ( j = 0i64; j < 64; ++j )
        indyfs_log_message(Started, "%d", taskQueue->httpTaskHandlesInUse[j]);
LABEL_10:
      indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
      goto LABEL_16;
    }
    timedOut = 0;
    if ( !indyfs_condition_variable_wait_timeout(&taskQueue->httpTaskHandlesNotAllClaimed, &taskQueue->httpTaskHandlesLock, 0xEA60u, &timedOut) )
    {
      if ( !timedOut )
        continue;
      indyfs_log_message(Error, "IndyFs - Failed to alloc HTTP Task Handle. Timed out while waiting. Possible deadlock");
      indyfs_log_message(Started, "taskHandlesInUse:");
      for ( k = 0i64; k < 64; ++k )
        indyfs_log_message(Started, "%d", taskQueue->httpTaskHandlesInUse[k]);
      goto LABEL_10;
    }
    break;
  }
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  indyfs_log_message(Error, "Failed to alloc HTTP Task Handle");
LABEL_16:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v13);
  return v2;
}

/*
==============
indyfs_io_queue_cancel
==============
*/
void indyfs_io_queue_cancel(IndyFsTaskHandle *handle)
{
  IndyFsIOTaskQueue *io_task_queue; 

  io_task_queue = indyfs_get_io_task_queue();
  indyfs_mutex_lock((LPCRITICAL_SECTION)&io_task_queue->lock);
  *(_DWORD *)handle->impl = 4;
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&io_task_queue->lock);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&io_task_queue->notFinishedCV);
}

/*
==============
indyfs_io_queue_free_http_task_handle
==============
*/
void indyfs_io_queue_free_http_task_handle(IndyFsIOTaskQueue *taskQueue, IndyFsHttpTaskHandle *handle)
{
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  taskQueue->httpTaskHandlesInUse[((char *)handle - (char *)taskQueue - 4800) >> 3] = 0;
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&taskQueue->httpTaskHandlesNotAllClaimed);
}

/*
==============
indyfs_io_queue_get_bytes_read
==============
*/
__int64 indyfs_io_queue_get_bytes_read(IndyFsTaskHandle *handle)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  __int64 v3; 

  p_lock = (_RTL_CRITICAL_SECTION *)&indyfs_get_io_task_queue()->lock;
  indyfs_mutex_lock(p_lock);
  v3 = *(_QWORD *)&handle->impl[16];
  indyfs_mutex_unlock(p_lock);
  return v3;
}

/*
==============
indyfs_io_queue_get_state
==============
*/
__int64 indyfs_io_queue_get_state(IndyFsTaskHandle *handle)
{
  _RTL_CRITICAL_SECTION *p_lock; 

  p_lock = (_RTL_CRITICAL_SECTION *)&indyfs_get_io_task_queue()->lock;
  indyfs_mutex_lock(p_lock);
  LODWORD(handle) = *(_DWORD *)handle->impl;
  indyfs_mutex_unlock(p_lock);
  return (unsigned int)handle;
}

/*
==============
indyfs_io_queue_init
==============
*/
void indyfs_io_queue_init(IndyFsIOTaskQueue *taskQueue)
{
  memset_0(taskQueue, 0, 0x1200ui64);
  *(_QWORD *)taskQueue->httpTaskHandlesInUse = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[8] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[16] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[24] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[32] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[40] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[48] = 0i64;
  *(_QWORD *)&taskQueue->httpTaskHandlesInUse[56] = 0i64;
  indyfs_mutex_init((LPCRITICAL_SECTION)&taskQueue->lock);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notEmptyCV);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notFullCV);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notFinishedCV);
  taskQueue->writeCursor = 1i64;
  taskQueue->readCursor = 1i64;
  indyfs_mutex_init((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->httpTaskHandlesNotAllClaimed);
  taskQueue->shouldQuit = 0;
}

/*
==============
indyfs_io_queue_push
==============
*/
__int64 indyfs_io_queue_push(IndyFsIOTaskQueue *ioTaskQueue, IndyFsFile *file, unsigned __int64 offset, unsigned __int64 size, void *dest, int deadline, IndyFsTaskHandle *handle, void (*callback)(IndyFsTaskState, unsigned __int64, void *), void *callbackData, IndyFsLocalCaching cachingBehavior, IndyFsHttpTaskQueue *httpTaskQueue)
{
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 chunkCount; 
  unsigned __int64 *p_size; 
  __int64 v24; 
  unsigned __int64 *v25; 
  unsigned __int64 v26; 
  IndyFsChunk *chunks; 
  __int64 v28; 
  __int64 v29; 
  IndyFsChunk *v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  IndyFsHttpTaskHandle *v38; 
  unsigned __int64 writeCursor; 
  IndyFsIOTask *v40; 
  IndyFsHttpTaskQueue *v41; 
  const char *v42; 
  int v44; 
  int v45; 
  int v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  bool timedOut; 
  unsigned __int64 v51; 
  __int64 v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  IndyFsChunk *v55; 
  IndyFsHttpTaskHandle *outputHandle; 
  unsigned __int64 v57; 
  unsigned __int64 sizea; 
  IndyFsFile *v59; 
  unsigned __int64 v60; 
  unsigned __int64 v61; 
  IndyFsHttpTaskQueue *taskQueue; 
  unsigned __int64 v63; 
  void (__fastcall *v64)(IndyFsTaskState, unsigned __int64, void *); 
  void *v65; 
  __int64 v66; 
  IndyFsScopedEvent v67; 
  IndyFsScopedEvent v68; 

  v66 = -2i64;
  sizea = size;
  v63 = offset;
  v59 = file;
  v64 = callback;
  v65 = callbackData;
  taskQueue = httpTaskQueue;
  IndyFsScopedEvent::IndyFsScopedEvent(&v68, "IOQueue", "Push");
  v14 = 0i64;
  *(_DWORD *)handle->impl = 0;
  *(_QWORD *)&handle->impl[8] = 0i64;
  *(_QWORD *)&handle->impl[16] = 0i64;
  v15 = indyfs_filesize(file);
  if ( offset >= v15 )
  {
    indyfs_mutex_lock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
    *(_DWORD *)handle->impl = 3;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
    if ( callback )
      callback(*(IndyFsTaskState *)handle->impl, *(_QWORD *)&handle->impl[16], callbackData);
    goto LABEL_58;
  }
  indyfs_statistics_internal_add_user_read_request(file->path, offset, sizea);
  v16 = v15 - offset;
  v17 = sizea;
  if ( sizea >= v16 )
    v17 = v16;
  v51 = v17;
  v18 = 1i64;
  v53 = 0i64;
  v19 = 0i64;
  v61 = 0i64;
  v52 = 0i64;
  v20 = 0i64;
  v21 = 0i64;
  chunkCount = file->chunkCount;
  if ( chunkCount )
  {
    p_size = &file->chunks->size;
    while ( 1 )
    {
      v24 = v20;
      v20 += *p_size;
      if ( v20 > offset )
        break;
      ++v21;
      p_size += 4;
      if ( v21 >= chunkCount )
        goto LABEL_12;
    }
    v53 = v21;
    v20 = v24;
    v52 = v24;
LABEL_12:
    v17 = v51;
  }
  if ( v21 < chunkCount )
  {
    v25 = &file->chunks[v21].size;
    while ( 1 )
    {
      v20 += *v25;
      if ( v20 >= offset + v17 )
        break;
      ++v18;
      ++v21;
      v25 += 4;
      if ( v21 >= chunkCount )
        goto LABEL_19;
    }
    v19 = v21;
    v61 = v21;
  }
LABEL_19:
  *(_QWORD *)&handle->impl[8] = v18;
  indyfs_statistics_internal_add_count("IOQueue", "TasksPerRead", v18);
  v26 = offset;
  v60 = offset;
  if ( v53 > v19 )
    goto LABEL_58;
  chunks = file->chunks;
  v28 = v53;
  v29 = v52;
  while ( 1 )
  {
    v30 = &chunks[v28];
    v55 = &chunks[v28];
    v31 = v26 - v29;
    v54 = v31;
    v32 = chunks[v28].size;
    v33 = v51;
    if ( v32 - v31 < v51 )
      v33 = v32 - v31;
    v57 = v33;
    if ( !v33 )
    {
      LODWORD(v51) = v30->sha1[19];
      LODWORD(v52) = v30->sha1[18];
      v49 = 0i64;
      v48 = v54;
      v47 = v55->size;
      v46 = v51;
      v45 = v52;
      v44 = v30->sha1[17];
      v42 = "Failed to queue read from image file [%s] - Offset: %llu  Size: %llu. Chunk read size is 0. \nChunk: %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x \nChunk size: %llu  Offest in Chunk: %llu  Chunk Read Size: %llu";
      goto LABEL_56;
    }
    if ( v33 + v31 > v32 )
    {
      LODWORD(v52) = v30->sha1[19];
      LODWORD(v51) = v30->sha1[18];
      v49 = v57;
      v48 = v54;
      v47 = v55->size;
      v46 = v52;
      v45 = v51;
      v44 = v30->sha1[17];
      v42 = "Failed to queue read from image file [%s] - Offset: %llu  Size: %llu. Chunk offset and size are too big. \nChunk: %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x \nChunk size: %llu  Offest in Chunk: %llu  Chunk Read Size: %llu";
LABEL_56:
      indyfs_log_message(Error, v42, v59, v63, sizea, v55->sha1[0], v55->sha1[1], v55->sha1[2], v55->sha1[3], v55->sha1[4], v30->sha1[5], v30->sha1[6], v30->sha1[7], v30->sha1[8], v30->sha1[9], v30->sha1[10], v30->sha1[11], v30->sha1[12], v30->sha1[13], v30->sha1[14], v30->sha1[15], v30->sha1[16], v44, v45, v46, v47, v48, v49);
      goto LABEL_57;
    }
    outputHandle = NULL;
    if ( cachingBehavior == ChunkDownload_LocalCaching )
    {
      IndyFsScopedEvent::IndyFsScopedEvent(&v67, "IOQueue", "AllocTaskHandle");
      indyfs_mutex_lock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
      v34 = 0;
LABEL_27:
      v35 = v34;
      v36 = 0;
      v37 = 0i64;
      while ( ioTaskQueue->httpTaskHandlesInUse[v37] )
      {
        ++v36;
        if ( ++v37 >= 64 )
        {
          ++v34;
          if ( v35 >= 8 )
          {
            indyfs_log_message(Error, "Failed to alloc HTTP Task Handle. Max loop tries. Possible deadlock");
            indyfs_log_message(Started, "taskHandlesInUse:");
            do
              indyfs_log_message(Started, "%d", ioTaskQueue->httpTaskHandlesInUse[v14++]);
            while ( v14 < 64 );
            goto LABEL_35;
          }
          timedOut = 0;
          if ( indyfs_condition_variable_wait_timeout(&ioTaskQueue->httpTaskHandlesNotAllClaimed, &ioTaskQueue->httpTaskHandlesLock, 0xEA60u, &timedOut) )
          {
            indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
            indyfs_log_message(Error, "Failed to alloc HTTP Task Handle");
          }
          else
          {
            if ( !timedOut )
              goto LABEL_27;
            indyfs_log_message(Error, "IndyFs - Failed to alloc HTTP Task Handle. Timed out while waiting. Possible deadlock");
            indyfs_log_message(Started, "taskHandlesInUse:");
            do
              indyfs_log_message(Started, "%d", ioTaskQueue->httpTaskHandlesInUse[v14++]);
            while ( v14 < 64 );
LABEL_35:
            indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
          }
          IndyFsScopedEvent::~IndyFsScopedEvent(&v67);
LABEL_48:
          indyfs_mutex_lock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
          indyfs_log_message(Started, "IOQueueSize: %zu", ioTaskQueue->writeCursor - ioTaskQueue->readCursor);
          indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
          v41 = taskQueue;
          indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->lock);
          indyfs_log_message(Started, "HTTPQueueSize: %zu", v41->writeCursor - v41->readCursor);
          indyfs_mutex_unlock((LPCRITICAL_SECTION)&v41->lock);
          goto LABEL_57;
        }
      }
      ioTaskQueue->httpTaskHandlesInUse[v37] = 1;
      indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
      v38 = &ioTaskQueue->httpTaskHandles[v36];
      IndyFsScopedEvent::~IndyFsScopedEvent(&v67);
      if ( !v38 )
        goto LABEL_48;
      if ( indyfs_http_queue_push(taskQueue, v30, v38, &outputHandle) )
      {
        indyfs_log_message(Error, "Failed to kick off HTTP fetch job");
        goto LABEL_57;
      }
      if ( v38 != outputHandle )
      {
        indyfs_mutex_lock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
        ioTaskQueue->httpTaskHandlesInUse[((char *)v38 - (char *)ioTaskQueue - 4800) >> 3] = 0;
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->httpTaskHandlesLock);
        indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&ioTaskQueue->httpTaskHandlesNotAllClaimed);
      }
      v31 = v54;
      v33 = v57;
    }
    indyfs_mutex_lock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
    writeCursor = ioTaskQueue->writeCursor;
    if ( writeCursor - ioTaskQueue->readCursor > 0x3F )
      break;
LABEL_44:
    v40 = &ioTaskQueue->data[writeCursor & 0x3F];
    v40->chunk = v30;
    v40->offsetIntoChunk = v31;
    v40->size = v33;
    v40->dest = dest;
    v40->httpWaitHandle = outputHandle;
    v40->deadline = deadline;
    v40->handle = (IndyFsIOQueueTaskHandleImpl *)handle;
    v40->callback = v64;
    v40->callbackData = v65;
    v26 = v33 + v60;
    v60 += v33;
    v51 -= v33;
    dest = (char *)dest + v33;
    ++ioTaskQueue->writeCursor;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
    indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&ioTaskQueue->notEmptyCV);
    chunks = v59->chunks;
    v29 = chunks[v28].size + v52;
    v52 = v29;
    ++v53;
    ++v28;
    if ( v53 > v61 )
      goto LABEL_58;
  }
  while ( 1 )
  {
    IndyFsScopedEvent::IndyFsScopedEvent(&v67, "IOQueue", "WaitNotFull");
    if ( ioTaskQueue->shouldQuit )
      break;
    indyfs_condition_variable_wait(&ioTaskQueue->notFullCV, &ioTaskQueue->lock);
    IndyFsScopedEvent::~IndyFsScopedEvent(&v67);
    writeCursor = ioTaskQueue->writeCursor;
    if ( writeCursor - ioTaskQueue->readCursor <= 0x3F )
      goto LABEL_44;
  }
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&ioTaskQueue->lock);
  indyfs_log_message(Completed, "io_queue_quit() called during a io_queue_push()");
  IndyFsScopedEvent::~IndyFsScopedEvent(&v67);
LABEL_57:
  LODWORD(v14) = -1;
LABEL_58:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v68);
  return (unsigned int)v14;
}

/*
==============
indyfs_io_queue_quit
==============
*/
void indyfs_io_queue_quit(void)
{
  IndyFsIOTaskQueue *io_task_queue; 

  io_task_queue = indyfs_get_io_task_queue();
  indyfs_mutex_lock((LPCRITICAL_SECTION)&io_task_queue->lock);
  io_task_queue->shouldQuit = 1;
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&io_task_queue->lock);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&io_task_queue->notFullCV);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&io_task_queue->notEmptyCV);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&io_task_queue->notFinishedCV);
}

/*
==============
indyfs_io_queue_term
==============
*/
void indyfs_io_queue_term(IndyFsIOTaskQueue *taskQueue)
{
  indyfs_mutex_term((LPCRITICAL_SECTION)&taskQueue->lock);
  indyfs_condition_variable_term(&taskQueue->notEmptyCV);
  indyfs_condition_variable_term(&taskQueue->notFullCV);
  indyfs_condition_variable_term(&taskQueue->notFinishedCV);
  indyfs_mutex_term((LPCRITICAL_SECTION)&taskQueue->httpTaskHandlesLock);
  indyfs_condition_variable_term(&taskQueue->httpTaskHandlesNotAllClaimed);
}

/*
==============
indyfs_io_queue_thread_main
==============
*/
void indyfs_io_queue_thread_main(const char *threadName)
{
  IndyFsHttpTaskQueue *http_task_queue; 
  IndyFsStorageServerInfo *storage_server_info; 
  IndyFsLocalCaching caching_behavior; 
  _RTL_CRITICAL_SECTION *p_lock; 
  unsigned __int64 readCursor; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  int v15; 
  int v28; 
  __int64 v29; 
  IndyFsHttpTaskHandle *v30; 
  int v31; 
  unsigned __int64 size; 
  IndyFsHttpTaskHandle *v33; 
  IndyFsHttpTaskStatus v34; 
  int v35; 
  bool v36; 
  int v37; 
  __int64 v38; 
  bool connectionGood; 
  IndyFsLocalCaching v40; 
  IndyFsHttpTaskQueue *taskQueue; 
  IndyFsStorageServerInfo *v42; 
  IndyFsFileCache *fileCache; 
  IndyFsChunk *chunk[4]; 
  IndyFsHttpTaskHandle *waitHandle[4]; 
  __int64 v46; 
  __int64 v47; 
  __m256i v48; 
  IndyFsScopedEvent v49; 
  IndyFsScopedEvent v50; 
  SimpleHttpConnection connection; 

  v47 = -2i64;
  if ( threadName )
    indyfs_profiler_set_current_thread_name(threadName);
  indyfs_profiler_internal_instant_event("IOQueue", "ThreadStart");
  _RBX = indyfs_get_io_task_queue();
  http_task_queue = indyfs_get_http_task_queue();
  taskQueue = http_task_queue;
  fileCache = indyfs_get_filecache();
  storage_server_info = indyfs_get_storage_server_info();
  v42 = storage_server_info;
  caching_behavior = indyfs_get_caching_behavior();
  v40 = caching_behavior;
  connectionGood = 0;
  p_lock = (_RTL_CRITICAL_SECTION *)&_RBX->lock;
  while ( 1 )
  {
    IndyFsScopedEvent::IndyFsScopedEvent(&v49, "IOQueue", "TaskLoop");
    indyfs_mutex_lock(p_lock);
    if ( _RBX->writeCursor == _RBX->readCursor )
    {
      while ( 1 )
      {
        IndyFsScopedEvent::IndyFsScopedEvent(&v50, "IOQueue", "WaitNotEmpty");
        indyfs_statistics_internal_add_count("IOQueue", "QueueSize", 0i64);
        if ( _RBX->shouldQuit )
          break;
        indyfs_condition_variable_wait(&_RBX->notEmptyCV, (IndyFsMutex *)p_lock);
        IndyFsScopedEvent::~IndyFsScopedEvent(&v50);
        if ( _RBX->writeCursor != _RBX->readCursor )
          goto LABEL_9;
      }
      IndyFsScopedEvent::~IndyFsScopedEvent(&v50);
    }
LABEL_9:
    if ( _RBX->shouldQuit )
      break;
    indyfs_statistics_internal_add_count("IOQueue", "QueueSize", _RBX->writeCursor - _RBX->readCursor);
    readCursor = _RBX->readCursor;
    v7 = readCursor + 1;
    if ( readCursor + 1 < _RBX->writeCursor )
    {
      v8 = _RBX->readCursor;
      do
      {
        _RAX = 9 * (v7 & 0x3F);
        __asm
        {
          vmovups ymm3, ymmword ptr [rbx+rax*8]
          vmovups ymm2, ymmword ptr [rbx+rax*8+20h]
          vmovups ymmword ptr [rbp+28A0h+var_28B0], ymm2
          vmovsd  xmm4, qword ptr [rbx+rax*8+40h]
        }
        v13 = v8;
        if ( v8 >= _RBX->readCursor )
        {
          v14 = v8 + 1;
          v15 = v48.m256i_i32[2];
          do
          {
            _RCX = &_RBX->data[v13 & 0x3F];
            if ( _RCX->deadline <= v15 )
              break;
            _RAX = 9 * (v14 & 0x3F);
            __asm
            {
              vmovups ymm0, ymmword ptr [rcx]
              vmovups ymmword ptr [rbx+rax*8], ymm0
              vmovups ymm1, ymmword ptr [rcx+20h]
              vmovups ymmword ptr [rbx+rax*8+20h], ymm1
              vmovsd  xmm0, qword ptr [rcx+40h]
              vmovsd  qword ptr [rbx+rax*8+40h], xmm0
            }
            --v13;
            --v14;
          }
          while ( v13 >= _RBX->readCursor );
        }
        _RAX = 9i64 * (((_BYTE)v13 + 1) & 0x3F);
        __asm
        {
          vmovups ymmword ptr [rbx+rax*8], ymm3
          vmovups ymmword ptr [rbx+rax*8+20h], ymm2
          vmovsd  qword ptr [rbx+rax*8+40h], xmm4
        }
        ++v7;
        ++v8;
      }
      while ( v7 < _RBX->writeCursor );
      readCursor = _RBX->readCursor;
    }
    _RAX = 9 * (readCursor & 0x3F);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+rax*8]
      vmovups ymmword ptr [rsp+29A0h+chunk], ymm0
      vmovups ymm1, ymmword ptr [rbx+rax*8+20h]
      vmovups ymmword ptr [rbp+28A0h+waitHandle], ymm1
      vmovsd  xmm0, qword ptr [rbx+rax*8+40h]
      vmovsd  [rbp+28A0h+var_28F0], xmm0
    }
    _RBX->readCursor = readCursor + 1;
    __asm
    {
      vextractf128 xmm0, ymm1, 1
      vmovq   r15, xmm0
    }
    v28 = *_R15;
    if ( *_R15 < 4 )
    {
      if ( v28 < 1 )
        v28 = 1;
      *_R15 = v28;
      indyfs_mutex_unlock(p_lock);
      indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&_RBX->notFullCV);
      v31 = -1;
      size = (unsigned __int64)chunk[2]->sha1;
      if ( caching_behavior == ChunkDownload_LocalCaching )
      {
        v33 = waitHandle[0];
        v34 = indyfs_http_queue_wait(taskQueue, waitHandle[0]);
        indyfs_mutex_lock((LPCRITICAL_SECTION)&_RBX->httpTaskHandlesLock);
        _RBX->httpTaskHandlesInUse[((char *)v33 - (char *)_RBX - 4800) >> 3] = 0;
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&_RBX->httpTaskHandlesLock);
        indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&_RBX->httpTaskHandlesNotAllClaimed);
        if ( v34 == Completed )
          v31 = indyfs_filecache_load(fileCache, chunk[0], chunk[3], (unsigned __int64)chunk[1]->sha1, size);
        caching_behavior = v40;
        p_lock = (_RTL_CRITICAL_SECTION *)&_RBX->lock;
      }
      else if ( caching_behavior )
      {
        indyfs_log_message(Error, "Failed to execute IOTask. Invalid caching behavior enum value - %d", (unsigned int)caching_behavior);
      }
      else
      {
        v31 = http_download_chunk_portion_to_memory_helper(&connection, storage_server_info, chunk[3], (unsigned __int64)chunk[2]->sha1, chunk[0]->sha1, chunk[0]->size, (unsigned __int64)chunk[1]->sha1, (unsigned __int64)chunk[2]->sha1, 0i64, &connectionGood);
      }
      indyfs_mutex_lock(p_lock);
      if ( v31 )
      {
        v35 = *_R15;
        v36 = *_R15 < 5;
        v37 = 5;
      }
      else
      {
        *((_QWORD *)_R15 + 2) += size;
        v35 = *_R15;
        v36 = *_R15 < 2;
        v37 = 2;
      }
      if ( v36 )
        v35 = v37;
      *_R15 = v35;
      v38 = --*((_QWORD *)_R15 + 1);
      indyfs_mutex_unlock(p_lock);
      indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&_RBX->notFinishedCV);
      if ( !v38 && waitHandle[3] )
        ((void (__fastcall *)(_QWORD, _QWORD, __int64))waitHandle[3])((unsigned int)*_R15, *((_QWORD *)_R15 + 2), v46);
      IndyFsScopedEvent::~IndyFsScopedEvent(&v49);
      http_task_queue = taskQueue;
      storage_server_info = v42;
    }
    else
    {
      v29 = --*((_QWORD *)_R15 + 1);
      indyfs_mutex_unlock(p_lock);
      if ( !v29 && waitHandle[3] )
        ((void (__fastcall *)(_QWORD, _QWORD, __int64))waitHandle[3])((unsigned int)*_R15, *((_QWORD *)_R15 + 2), v46);
      if ( caching_behavior == ChunkDownload_LocalCaching )
      {
        v30 = waitHandle[0];
        if ( !indyfs_http_queue_remove(http_task_queue, waitHandle[0]) )
          indyfs_http_queue_wait(http_task_queue, v30);
        indyfs_mutex_lock((LPCRITICAL_SECTION)&_RBX->httpTaskHandlesLock);
        _RBX->httpTaskHandlesInUse[((char *)v30 - (char *)_RBX - 4800) >> 3] = 0;
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&_RBX->httpTaskHandlesLock);
        indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&_RBX->httpTaskHandlesNotAllClaimed);
        p_lock = (_RTL_CRITICAL_SECTION *)&_RBX->lock;
      }
      indyfs_profiler_internal_instant_event("IOQueue", "Cancelled");
      IndyFsScopedEvent::~IndyFsScopedEvent(&v49);
      storage_server_info = v42;
    }
  }
  indyfs_mutex_unlock(p_lock);
  if ( connectionGood )
    simplehttp_close_connection(&connection);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v49);
}

/*
==============
indyfs_io_queue_wait_until_finished
==============
*/
__int64 indyfs_io_queue_wait_until_finished(IndyFsTaskHandle *handle)
{
  IndyFsIOTaskQueue *io_task_queue; 
  IndyFsMutex *p_lock; 
  unsigned int v4; 
  IndyFsScopedEvent v6; 
  IndyFsScopedEvent v7; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v7, "IOQueue", "WaitUntilFinished");
  io_task_queue = indyfs_get_io_task_queue();
  p_lock = &io_task_queue->lock;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&io_task_queue->lock);
  if ( *(_QWORD *)&handle->impl[8] )
  {
    while ( 1 )
    {
      IndyFsScopedEvent::IndyFsScopedEvent(&v6, "IOQueue", "WaitUntilFinished_Wait");
      if ( io_task_queue->shouldQuit )
        break;
      indyfs_condition_variable_wait(&io_task_queue->notFinishedCV, p_lock);
      IndyFsScopedEvent::~IndyFsScopedEvent(&v6);
      if ( !*(_QWORD *)&handle->impl[8] )
        goto LABEL_4;
    }
    indyfs_mutex_unlock((LPCRITICAL_SECTION)p_lock);
    indyfs_log_message(Completed, "io_queue_quit() called during a indyfs_io_queue_wait_until_finished()");
    IndyFsScopedEvent::~IndyFsScopedEvent(&v6);
    v4 = 5;
  }
  else
  {
LABEL_4:
    v4 = *(_DWORD *)handle->impl;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)p_lock);
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v7);
  return v4;
}

