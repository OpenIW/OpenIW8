/*
==============
HttpRequest::GetHeaderLength
==============
*/

unsigned __int64 __fastcall HttpRequest::GetHeaderLength(HttpRequest *this)
{
  return ?GetHeaderLength@HttpRequest@@QEAA_KXZ(this);
}

/*
==============
HttpCallback::ReadDataFromStream
==============
*/

HRESULT __fastcall HttpCallback::ReadDataFromStream(HttpCallback *this, ISequentialStream *pStream)
{
  return ?ReadDataFromStream@HttpCallback@@QEAAJPEAUISequentialStream@@@Z(this, pStream);
}

/*
==============
RequestStream::GetTypeInfoCount
==============
*/

HRESULT __fastcall RequestStream::GetTypeInfoCount(RequestStream *this, unsigned int *pctinfo)
{
  return ?GetTypeInfoCount@RequestStream@@UEAAJPEAI@Z(this, pctinfo);
}

/*
==============
RequestStream::GetTypeInfo
==============
*/

HRESULT __fastcall RequestStream::GetTypeInfo(RequestStream *this, unsigned int iTInfo, unsigned int lcid, ITypeInfo **ppTInfo)
{
  return ?GetTypeInfo@RequestStream@@UEAAJIKPEAPEAUITypeInfo@@@Z(this, iTInfo, lcid, ppTInfo);
}

/*
==============
HttpCallback::operator new
==============
*/

void *__fastcall HttpCallback::operator new(unsigned __int64 size, void *p)
{
  return ??2HttpCallback@@SAPEAX_KPEAX@Z(size, p);
}

/*
==============
HttpCallback::HttpCallback
==============
*/

void __fastcall HttpCallback::HttpCallback(HttpCallback *this)
{
  ??0HttpCallback@@QEAA@XZ(this);
}

/*
==============
HttpCallback::OnHeadersAvailable
==============
*/

HRESULT __fastcall HttpCallback::OnHeadersAvailable(HttpCallback *this, IXMLHTTPRequest2 *pXHR, unsigned int dwStatus, const wchar_t *pwszStatus)
{
  return ?OnHeadersAvailable@HttpCallback@@UEAAJPEAUIXMLHTTPRequest2@@KPEB_W@Z(this, pXHR, dwStatus, pwszStatus);
}

/*
==============
HttpRequest::HttpRequest
==============
*/

void __fastcall HttpRequest::HttpRequest(HttpRequest *this, wchar_t *pAppBuffer, unsigned __int64 AppBufferLength, const int XContractType)
{
  ??0HttpRequest@@QEAA@PEA_W_KH@Z(this, pAppBuffer, AppBufferLength, XContractType);
}

/*
==============
HttpCallback::OnDataAvailable
==============
*/

HRESULT __fastcall HttpCallback::OnDataAvailable(HttpCallback *this, IXMLHTTPRequest2 *pXHR, ISequentialStream *pResponseStream)
{
  return ?OnDataAvailable@HttpCallback@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, pXHR, pResponseStream);
}

/*
==============
HttpRequest::CancelTransaction
==============
*/

void __fastcall HttpRequest::CancelTransaction(HttpRequest *this)
{
  ?CancelTransaction@HttpRequest@@QEAAXXZ(this);
}

/*
==============
HttpCallback::OnRedirect
==============
*/

HRESULT __fastcall HttpCallback::OnRedirect(HttpCallback *this, IXMLHTTPRequest2 *pXHR, const wchar_t *pRedirectUrl)
{
  return ?OnRedirect@HttpCallback@@UEAAJPEAUIXMLHTTPRequest2@@PEB_W@Z(this, pXHR, pRedirectUrl);
}

/*
==============
RequestStream::operator delete
==============
*/

void __fastcall RequestStream::operator delete(void *p_addr)
{
  ??3RequestStream@@SAXPEAX@Z(p_addr);
}

/*
==============
HttpCallback::IsFinished
==============
*/

int __fastcall HttpCallback::IsFinished(HttpCallback *this)
{
  return ?IsFinished@HttpCallback@@QEAAHXZ(this);
}

/*
==============
HttpRequest::operator delete
==============
*/

void __fastcall HttpRequest::operator delete(void *p_addr)
{
  ??3HttpRequest@@SAXPEAX@Z(p_addr);
}

/*
==============
RequestStream::AddRef
==============
*/

unsigned int __fastcall RequestStream::AddRef(RequestStream *this)
{
  return ?AddRef@RequestStream@@UEAAKXZ(this);
}

/*
==============
RequestStream::QueryInterface
==============
*/

HRESULT __fastcall RequestStream::QueryInterface(RequestStream *this, const _GUID *riid, void **ppvObject)
{
  return ?QueryInterface@RequestStream@@UEAAJAEBU_GUID@@PEAPEAX@Z(this, riid, ppvObject);
}

/*
==============
HttpRequest::Open
==============
*/

HRESULT __fastcall HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, const char *data, unsigned int dataLength, bool ignoreCacheAndETag, Windows::Xbox::System::User *currentUser)
{
  return ?Open@HttpRequest@@QEAAJPEB_W0PEBDI_NPE$AAVUser@System@Xbox@Windows@@@Z(this, verb, url, data, dataLength, ignoreCacheAndETag, currentUser);
}

/*
==============
HttpRequest::Open
==============
*/

HRESULT __fastcall HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, const char *data, unsigned int dataLength, Windows::Xbox::System::User *currentUser)
{
  return ?Open@HttpRequest@@QEAAJPEB_W0PEBDIPE$AAVUser@System@Xbox@Windows@@@Z(this, verb, url, data, dataLength, currentUser);
}

/*
==============
ReportFailureAndStop
==============
*/

void ReportFailureAndStop(const char *pFmt, const char *strFileName, unsigned int dwLineNumber, ...)
{
  ?ReportFailureAndStop@@YAXPEBD0KZZ(pFmt, strFileName, dwLineNumber);
}

/*
==============
RequestStream::~RequestStream
==============
*/

void __fastcall RequestStream::~RequestStream(RequestStream *this)
{
  ??1RequestStream@@UEAA@XZ(this);
}

/*
==============
HttpCallback::RuntimeClassInitialize
==============
*/

HRESULT __fastcall HttpCallback::RuntimeClassInitialize(HttpCallback *this, wchar_t *pAppBuffer, unsigned __int64 AppBufferByteLength)
{
  return ?RuntimeClassInitialize@HttpCallback@@QEAAJPEA_W_K@Z(this, pAppBuffer, AppBufferByteLength);
}

/*
==============
RequestStream::Write
==============
*/

HRESULT __fastcall RequestStream::Write(RequestStream *this, const void *pv, unsigned int cb, unsigned int *pcbWritten)
{
  return ?Write@RequestStream@@UEAAJPEBXKPEAK@Z(this, pv, cb, pcbWritten);
}

/*
==============
HttpRequest::Open
==============
*/

HRESULT __fastcall HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, Windows::Xbox::System::User *currentUser)
{
  return ?Open@HttpRequest@@QEAAJPEB_W0PE$AAVUser@System@Xbox@Windows@@@Z(this, verb, url, currentUser);
}

/*
==============
HttpCallback::OnResponseReceived
==============
*/

HRESULT __fastcall HttpCallback::OnResponseReceived(HttpCallback *this, IXMLHTTPRequest2 *pXHR, ISequentialStream *pResponseStream)
{
  return ?OnResponseReceived@HttpCallback@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, pXHR, pResponseStream);
}

/*
==============
HttpCallback::~HttpCallback
==============
*/

void __fastcall HttpCallback::~HttpCallback(HttpCallback *this)
{
  ??1HttpCallback@@UEAA@XZ(this);
}

/*
==============
HttpCallback::OnError
==============
*/

HRESULT __fastcall HttpCallback::OnError(HttpCallback *this, IXMLHTTPRequest2 *pXHR, HRESULT hrError)
{
  return ?OnError@HttpCallback@@UEAAJPEAUIXMLHTTPRequest2@@J@Z(this, pXHR, hrError);
}

/*
==============
HttpRequest::RequestAuthToken
==============
*/

HRESULT __fastcall HttpRequest::RequestAuthToken(HttpRequest *this, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *httpMethod, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *url, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *authTokenHeaderString, const char *data, unsigned int dataLength, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *AuthTokenOut, Windows::Xbox::System::User *currentUser)
{
  return ?RequestAuthToken@HttpRequest@@AEAAJV?$basic_string@_WU?$char_traits@_W@std@@U?$STLHeapAllocator@_W@@@std@@00PEBDIPEAV23@PE$AAVUser@System@Xbox@Windows@@@Z(this, httpMethod, url, authTokenHeaderString, data, dataLength, AuthTokenOut, currentUser);
}

/*
==============
RequestStream::RequestStream
==============
*/

void __fastcall RequestStream::RequestStream(RequestStream *this)
{
  ??0RequestStream@@QEAA@XZ(this);
}

/*
==============
RequestStream::Open
==============
*/

HRESULT __fastcall RequestStream::Open(RequestStream *this, const char *psBuffer, unsigned int cbBufferSize)
{
  return ?Open@RequestStream@@QEAAJPEBDK@Z(this, psBuffer, cbBufferSize);
}

/*
==============
HttpRequest::Open
==============
*/

HRESULT __fastcall HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, bool ignoreCacheAndETag, Windows::Xbox::System::User *currentUser)
{
  return ?Open@HttpRequest@@QEAAJPEB_W0_NPE$AAVUser@System@Xbox@Windows@@@Z(this, verb, url, ignoreCacheAndETag, currentUser);
}

/*
==============
RequestStream::operator new
==============
*/

void *__fastcall RequestStream::operator new(unsigned __int64 size, void *p)
{
  return ??2RequestStream@@SAPEAX_KPEAX@Z(size, p);
}

/*
==============
HttpRequest::GetData
==============
*/

const wchar_t *__fastcall HttpRequest::GetData(HttpRequest *this)
{
  return ?GetData@HttpRequest@@QEAAPEB_WXZ(this);
}

/*
==============
HttpRequest::IsFinished
==============
*/

int __fastcall HttpRequest::IsFinished(HttpRequest *this)
{
  return ?IsFinished@HttpRequest@@QEAAHXZ(this);
}

/*
==============
RequestStream::Release
==============
*/

unsigned int __fastcall RequestStream::Release(RequestStream *this)
{
  return ?Release@RequestStream@@UEAAKXZ(this);
}

/*
==============
HttpRequest::operator new
==============
*/

void *__fastcall HttpRequest::operator new(unsigned __int64 size)
{
  return ??2HttpRequest@@SAPEAX_K@Z(size);
}

/*
==============
HttpRequest::~HttpRequest
==============
*/

void __fastcall HttpRequest::~HttpRequest(HttpRequest *this)
{
  ??1HttpRequest@@QEAA@XZ(this);
}

/*
==============
HttpCallback::operator new
==============
*/

void *__fastcall HttpCallback::operator new(unsigned __int64 size)
{
  return ??2HttpCallback@@SAPEAX_K@Z(size);
}

/*
==============
RequestStream::GetIDsOfNames
==============
*/

HRESULT __fastcall RequestStream::GetIDsOfNames(RequestStream *this, const _GUID *riid, wchar_t **rgszNames, unsigned int cNames, unsigned int lcid, int *rgDispId)
{
  return ?GetIDsOfNames@RequestStream@@UEAAJAEBU_GUID@@PEAPEA_WIKPEAJ@Z(this, riid, rgszNames, cNames, lcid, rgDispId);
}

/*
==============
DetermineByteCountLeftDanglingFromUTF8Conversion
==============
*/

unsigned int __fastcall DetermineByteCountLeftDanglingFromUTF8Conversion(const char *bufferToConvert, unsigned int bytesToConvert)
{
  return ?DetermineByteCountLeftDanglingFromUTF8Conversion@@YAIPEBDK@Z(bufferToConvert, bytesToConvert);
}

/*
==============
RequestStream::Size
==============
*/

unsigned __int64 __fastcall RequestStream::Size(RequestStream *this)
{
  return ?Size@RequestStream@@QEAA_KXZ(this);
}

/*
==============
RequestStream::Invoke
==============
*/

HRESULT __fastcall RequestStream::Invoke(RequestStream *this, int dispIdMember, const _GUID *riid, unsigned int lcid, unsigned __int16 wFlags, tagDISPPARAMS *pDispParams, tagVARIANT *pVarResult, tagEXCEPINFO *pExcepInfo, unsigned int *puArgErr)
{
  return ?Invoke@RequestStream@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
}

/*
==============
HttpCallback::operator delete
==============
*/

void __fastcall HttpCallback::operator delete(void *p_addr)
{
  ??3HttpCallback@@SAXPEAX@Z(p_addr);
}

/*
==============
HttpRequest::WaitForFinish
==============
*/

unsigned int __fastcall HttpRequest::WaitForFinish(HttpRequest *this)
{
  return ?WaitForFinish@HttpRequest@@QEAAKXZ(this);
}

/*
==============
RequestStream::Read
==============
*/

HRESULT __fastcall RequestStream::Read(RequestStream *this, void *pv, unsigned int cb, unsigned int *pcbNumReadBytes)
{
  return ?Read@RequestStream@@UEAAJPEAXKPEAK@Z(this, pv, cb, pcbNumReadBytes);
}

/*
==============
RequestStream::operator delete
==============
*/

void __fastcall RequestStream::operator delete(void *ptr, void *p)
{
  ??3RequestStream@@SAXPEAX0@Z(ptr, p);
}

/*
==============
HttpCallback::ConvertAndStoreData
==============
*/

void __fastcall HttpCallback::ConvertAndStoreData(HttpCallback *this, char *bufferToConvert, unsigned int bytesToConvert)
{
  ?ConvertAndStoreData@HttpCallback@@AEAAXPEADK@Z(this, bufferToConvert, bytesToConvert);
}

/*
==============
HttpCallback::WaitForFinish
==============
*/

int __fastcall HttpCallback::WaitForFinish(HttpCallback *this)
{
  return ?WaitForFinish@HttpCallback@@QEAAHXZ(this);
}

/*
==============
HttpCallback::operator delete
==============
*/

void __fastcall HttpCallback::operator delete(void *ptr, void *p)
{
  ??3HttpCallback@@SAXPEAX0@Z(ptr, p);
}

/*
==============
HttpRequest::GetHeaders
==============
*/

const wchar_t *__fastcall HttpRequest::GetHeaders(HttpRequest *this)
{
  return ?GetHeaders@HttpRequest@@QEAAPEB_WXZ(this);
}

/*
==============
HttpRequest::GetDataLength
==============
*/

unsigned __int64 __fastcall HttpRequest::GetDataLength(HttpRequest *this)
{
  return ?GetDataLength@HttpRequest@@QEAA_KXZ(this);
}

/*
==============
RequestStream::operator new
==============
*/

void *__fastcall RequestStream::operator new(unsigned __int64 size)
{
  return ??2RequestStream@@SAPEAX_K@Z(size);
}

/*
==============
HttpCallback::HttpCallback
==============
*/
void HttpCallback::HttpCallback(HttpCallback *this)
{
  this->refcount_ = 1;
  this->__vftable = (HttpCallback_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IXMLHTTPRequest2Callback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  this->__vftable = (HttpCallback_vtbl *)&HttpCallback::`vftable';
  *(_QWORD *)&this->m_hr = 0i64;
  this->m_headers._Mypair._Myval2._Mysize = 0i64;
  this->m_headers._Mypair._Myval2._Myres = 7i64;
  this->m_headers._Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_pBuffer = NULL;
  this->m_bufferMaxByteLength = 0i64;
  this->m_bufferResultByteLength = 0i64;
  this->m_hasApplicationSuppliedBuffer = 0;
  this->m_bufferWritePosition = 0;
  this->m_countBytesRemainingForDecode = 0i64;
  this->m_hComplete = NULL;
  *(_WORD *)this->m_remainingBytesForConversion = 0;
  this->m_remainingBytesForConversion[2] = 0;
}

/*
==============
HttpRequest::HttpRequest
==============
*/
void HttpRequest::HttpRequest(HttpRequest *this, wchar_t *pAppBuffer, unsigned __int64 AppBufferLength, const int XContractType)
{
  __int64 v5; 
  HRESULT Instance; 
  __int64 v7; 
  int v8; 
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); 
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); 
  __int64 v11; 
  int v12; 
  wchar_t *arg1; 
  unsigned __int64 arg2; 

  arg2 = AppBufferLength;
  arg1 = pAppBuffer;
  *(_QWORD *)&this->id = 0i64;
  *(_QWORD *)&this->method[4] = 0i64;
  *(_QWORD *)&this->url[4] = 0i64;
  *(_QWORD *)&this->url[12] = 0i64;
  *(_QWORD *)&this->url[20] = 0i64;
  *(_DWORD *)&this->url[28] = XContractType;
  v5 = *(_QWORD *)&this->id;
  if ( v5 )
  {
    *(_QWORD *)&this->id = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  }
  Instance = CoCreateInstance(&GUID_88d96a09_f192_11d4_a65f_0040963251e5, NULL, 0x15u, &GUID_e5d37dc0_552a_4d52_9cc0_a14d546fbd04, (LPVOID *)this);
  if ( Instance < 0 )
    ReportFailureAndStop("Failure with HRESULT of %x", "c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 0x277u, (unsigned int)Instance);
  v7 = *(_QWORD *)&this->url[4];
  if ( v7 )
  {
    *(_QWORD *)&this->url[4] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<HttpCallback,HttpCallback,wchar_t * &,unsigned __int64 &>((HttpCallback **)&this->url[4], &arg1, &arg2);
  if ( v8 < 0 )
    ReportFailureAndStop("Failure with HRESULT of %x", "c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 0x27Cu, (unsigned int)v8);
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))&this->url[4];
  v10 = **v9;
  v11 = *(_QWORD *)&this->method[4];
  if ( v11 )
  {
    *(_QWORD *)&this->method[4] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  }
  v12 = v10(v9, &GUID_a44a9299_e321_40de_8866_341b41669162, &this->method[4]);
  if ( v12 < 0 )
    ReportFailureAndStop("Failure with HRESULT of %x", "c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 0x27Du, (unsigned int)v12);
}

/*
==============
RequestStream::RequestStream
==============
*/
void RequestStream::RequestStream(RequestStream *this)
{
  this->refcount_ = 1;
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (RequestStream_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (RequestStream_vtbl *)&RequestStream::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&RequestStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  this->m_cRef = 1;
  this->m_buffer = NULL;
  this->m_buffSize = 0i64;
  this->m_buffSeekIndex = 0i64;
}

/*
==============
HttpCallback::~HttpCallback
==============
*/
void HttpCallback::~HttpCallback(HttpCallback *this)
{
  void *m_hComplete; 
  wchar_t *m_pBuffer; 

  this->__vftable = (HttpCallback_vtbl *)&HttpCallback::`vftable';
  m_hComplete = this->m_hComplete;
  if ( m_hComplete )
    CloseHandle(m_hComplete);
  if ( !this->m_hasApplicationSuppliedBuffer )
  {
    m_pBuffer = this->m_pBuffer;
    if ( m_pBuffer )
    {
      HttpHeapFree(m_pBuffer);
      this->m_pBuffer = NULL;
    }
  }
  if ( this->m_headers._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(this->m_headers._Mypair._Myval2._Bx._Ptr);
  this->m_headers._Mypair._Myval2._Mysize = 0i64;
  this->m_headers._Mypair._Myval2._Myres = 7i64;
  this->m_headers._Mypair._Myval2._Bx._Buf[0] = 0;
  this->refcount_ = -1073741823;
}

/*
==============
HttpRequest::~HttpRequest
==============
*/
void HttpRequest::~HttpRequest(HttpRequest *this)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = *(_QWORD *)&this->url[20];
  if ( v2 )
  {
    *(_QWORD *)&this->url[20] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  }
  v3 = *(_QWORD *)&this->url[12];
  if ( v3 )
  {
    *(_QWORD *)&this->url[12] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
  v4 = *(_QWORD *)&this->url[4];
  if ( v4 )
  {
    *(_QWORD *)&this->url[4] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  }
  v5 = *(_QWORD *)&this->method[4];
  if ( v5 )
  {
    *(_QWORD *)&this->method[4] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  }
  v6 = *(_QWORD *)&this->id;
  if ( *(_QWORD *)&this->id )
  {
    *(_QWORD *)&this->id = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  }
}

/*
==============
RequestStream::~RequestStream
==============
*/
void RequestStream::~RequestStream(RequestStream *this)
{
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (RequestStream_vtbl *)&RequestStream::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&RequestStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  HttpHeapFree(this->m_buffer);
  this->refcount_ = -1073741823;
}

/*
==============
HttpCallback::operator new
==============
*/

void *__fastcall HttpCallback::operator new(unsigned __int64 size)
{
  return HttpHeapMalloc(size);
}

/*
==============
HttpCallback::operator new
==============
*/
void *HttpCallback::operator new(unsigned __int64 size, void *p)
{
  return p;
}

/*
==============
HttpRequest::operator new
==============
*/

void *__fastcall HttpRequest::operator new(unsigned __int64 size)
{
  return HttpHeapMalloc(size);
}

/*
==============
RequestStream::operator new
==============
*/

void *__fastcall RequestStream::operator new(unsigned __int64 size)
{
  return HttpHeapMalloc(size);
}

/*
==============
RequestStream::operator new
==============
*/
void *RequestStream::operator new(unsigned __int64 size, void *p)
{
  return p;
}

/*
==============
HttpCallback::operator delete
==============
*/
void HttpCallback::operator delete(void *ptr, void *p)
{
  ;
}

/*
==============
HttpCallback::operator delete
==============
*/
void HttpCallback::operator delete(void *p_addr)
{
  HttpHeapFree(p_addr);
}

/*
==============
HttpRequest::operator delete
==============
*/
void HttpRequest::operator delete(void *p_addr)
{
  HttpHeapFree(p_addr);
}

/*
==============
RequestStream::operator delete
==============
*/
void RequestStream::operator delete(void *ptr, void *p)
{
  ;
}

/*
==============
RequestStream::operator delete
==============
*/
void RequestStream::operator delete(void *p_addr)
{
  HttpHeapFree(p_addr);
}

/*
==============
RequestStream::AddRef
==============
*/
__int64 RequestStream::AddRef(RequestStream *this)
{
  return (unsigned int)_InterlockedIncrement(&this->m_cRef);
}

/*
==============
HttpRequest::CancelTransaction
==============
*/
void HttpRequest::CancelTransaction(HttpRequest *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this->id + 40i64))(*(_QWORD *)&this->id);
}

/*
==============
HttpCallback::ConvertAndStoreData
==============
*/
void HttpCallback::ConvertAndStoreData(HttpCallback *this, char *bufferToConvert, unsigned int bytesToConvert)
{
  __int64 v3; 
  int v4; 
  int v5; 
  char v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int64 m_bufferMaxByteLength; 
  unsigned int v16; 
  __int64 v17; 
  DWORD LastError; 
  __int64 m_bufferWritePosition; 

  v3 = bytesToConvert - 1;
  v4 = 0;
  v5 = bytesToConvert;
  while ( 1 )
  {
    v8 = bufferToConvert[v3];
    if ( (v8 & 0xC0) == 0xC0 || v8 >= 0 )
      break;
    v3 = (unsigned int)(v3 - 1);
    ++v4;
  }
  v9 = v4 + 1;
  if ( (unsigned __int8)v8 < 0xF0u )
  {
    if ( (unsigned __int8)v8 < 0xE0u )
    {
      v10 = 1;
      if ( (unsigned __int8)v8 >= 0xC0u )
        v10 = 2;
    }
    else
    {
      v10 = 3;
    }
  }
  else
  {
    v10 = 4;
  }
  v11 = 0;
  if ( v9 != v10 )
    v11 = v9;
  if ( !v11 )
    goto LABEL_18;
  if ( (unsigned __int64)v11 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 374, ASSERT_TYPE_ASSERT, "(BytesToCopy <= sizeof(m_remainingBytesForConversion))", (const char *)&queryFormat, "BytesToCopy <= sizeof(m_remainingBytesForConversion)") )
    __debugbreak();
  v5 -= v11;
  memcpy_0(this->m_remainingBytesForConversion, &bufferToConvert[v5], v11);
  this->m_countBytesRemainingForDecode = v11;
  bufferToConvert[v5] = 0;
  if ( v5 )
  {
LABEL_18:
    v12 = MultiByteToWideChar(0xFDE9u, 8u, bufferToConvert, v5, NULL, 0);
    v13 = v12;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 394, ASSERT_TYPE_ASSERT, "(charactersNeeded > 0)", (const char *)&queryFormat, "charactersNeeded > 0") )
      __debugbreak();
    v14 = 2 * v13;
    if ( v14 + this->m_bufferResultByteLength >= this->m_bufferMaxByteLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 398, ASSERT_TYPE_ASSERT, "((m_bufferResultByteLength + (charactersNeeded * sizeof(WCHAR))) < m_bufferMaxByteLength)", (const char *)&queryFormat, "(m_bufferResultByteLength + (charactersNeeded * sizeof(WCHAR))) < m_bufferMaxByteLength") )
      __debugbreak();
    m_bufferMaxByteLength = this->m_bufferMaxByteLength;
    if ( v14 + this->m_bufferResultByteLength >= m_bufferMaxByteLength )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144512EE0, 1105i64);
      m_bufferMaxByteLength = this->m_bufferMaxByteLength;
    }
    v16 = MultiByteToWideChar(0xFDE9u, 8u, bufferToConvert, v5, &this->m_pBuffer[this->m_bufferWritePosition], (m_bufferMaxByteLength >> 1) - this->m_bufferWritePosition);
    v17 = v16;
    if ( !v16 )
    {
      LastError = GetLastError();
      Com_PrintError(25, "!!!!!!!!!!!! IXMLHTTP: MultiByteToWideChar Error: 0x%x.!!!!!!!!!!!!\n", LastError);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 433, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MultiByteToWideChar failed on HTTP response!\n") )
        __debugbreak();
    }
    this->m_bufferWritePosition += v17;
    m_bufferWritePosition = this->m_bufferWritePosition;
    this->m_bufferResultByteLength += 2 * v17;
    this->m_pBuffer[m_bufferWritePosition] = 0;
  }
}

/*
==============
DetermineByteCountLeftDanglingFromUTF8Conversion
==============
*/
__int64 DetermineByteCountLeftDanglingFromUTF8Conversion(const char *bufferToConvert, unsigned int bytesToConvert)
{
  __int64 v2; 
  int v3; 
  int v4; 
  char v5; 
  unsigned int v6; 

  v2 = bytesToConvert - 1;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v5 = bufferToConvert[v2];
    if ( (v5 & 0xC0) == 0xC0 || v5 >= 0 )
      break;
    v2 = (unsigned int)(v2 - 1);
    ++v3;
  }
  v6 = v3 + 1;
  if ( (unsigned __int8)v5 < 0xF0u )
  {
    if ( (unsigned __int8)v5 < 0xE0u )
    {
      if ( (unsigned __int8)v5 >= 0xC0u )
        v4 = 2;
      if ( v6 == v4 )
        return 0;
      return v6;
    }
    else
    {
      if ( v6 == 3 )
        return 0;
      return v6;
    }
  }
  else
  {
    if ( v6 == 4 )
      return 0;
    return v6;
  }
}

/*
==============
HttpRequest::GetData
==============
*/
const wchar_t *HttpRequest::GetData(HttpRequest *this)
{
  return *(const wchar_t **)(*(_QWORD *)&this->url[4] + 56i64);
}

/*
==============
HttpRequest::GetDataLength
==============
*/
unsigned __int64 HttpRequest::GetDataLength(HttpRequest *this)
{
  return *(_QWORD *)(*(_QWORD *)&this->url[4] + 72i64);
}

/*
==============
HttpRequest::GetHeaderLength
==============
*/
unsigned __int64 HttpRequest::GetHeaderLength(HttpRequest *this)
{
  return *(_QWORD *)(*(_QWORD *)&this->url[4] + 40i64);
}

/*
==============
HttpRequest::GetHeaders
==============
*/
const wchar_t *HttpRequest::GetHeaders(HttpRequest *this)
{
  const wchar_t *result; 

  result = (const wchar_t *)(*(_QWORD *)&this->url[4] + 24i64);
  if ( *(_QWORD *)(*(_QWORD *)&this->url[4] + 48i64) >= 8ui64 )
    return *(const wchar_t **)result;
  return result;
}

/*
==============
RequestStream::GetIDsOfNames
==============
*/
__int64 RequestStream::GetIDsOfNames(RequestStream *this, const _GUID *riid, wchar_t **rgszNames, unsigned int cNames)
{
  return 2147614726i64;
}

/*
==============
RequestStream::GetTypeInfo
==============
*/
__int64 RequestStream::GetTypeInfo(RequestStream *this, unsigned int iTInfo, unsigned int lcid, ITypeInfo **ppTInfo)
{
  __int64 result; 

  result = 2147500033i64;
  if ( ppTInfo )
    *ppTInfo = NULL;
  return result;
}

/*
==============
RequestStream::GetTypeInfoCount
==============
*/
__int64 RequestStream::GetTypeInfoCount(RequestStream *this, unsigned int *pctinfo)
{
  __int64 result; 

  result = 2147500033i64;
  if ( pctinfo )
    *pctinfo = 0;
  return result;
}

/*
==============
RequestStream::Invoke
==============
*/
__int64 RequestStream::Invoke(RequestStream *this, int dispIdMember, const _GUID *riid, unsigned int lcid)
{
  return 0i64;
}

/*
==============
HttpCallback::IsFinished
==============
*/
_BOOL8 HttpCallback::IsFinished(HttpCallback *this)
{
  DWORD v2; 
  HRESULT LastError; 

  v2 = WaitForSingleObject(this->m_hComplete, 0);
  if ( v2 != -1 )
    return v2 == 0;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  this->m_hr = LastError;
  return 0i64;
}

/*
==============
HttpRequest::IsFinished
==============
*/
_BOOL8 HttpRequest::IsFinished(HttpRequest *this)
{
  __int64 v1; 
  DWORD v2; 
  signed int LastError; 

  v1 = *(_QWORD *)&this->url[4];
  if ( !v1 )
    return 0i64;
  v2 = WaitForSingleObject(*(HANDLE *)(v1 + 104), 0);
  if ( v2 == -1 )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    *(_DWORD *)(v1 + 16) = LastError;
    return 0i64;
  }
  return v2 == 0;
}

/*
==============
HttpCallback::OnDataAvailable
==============
*/
__int64 HttpCallback::OnDataAvailable(HttpCallback *this, IXMLHTTPRequest2 *pXHR, ISequentialStream *pResponseStream)
{
  unsigned int v5; 
  __int64 m_countBytesRemainingForDecode_low; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int bytesToConvert[4]; 
  char bufferToConvert[512]; 

  if ( pResponseStream )
  {
    v5 = 0;
    while ( 1 )
    {
      m_countBytesRemainingForDecode_low = LODWORD(this->m_countBytesRemainingForDecode);
      bytesToConvert[0] = 0;
      if ( (_DWORD)m_countBytesRemainingForDecode_low )
        memcpy_0(bufferToConvert, this->m_remainingBytesForConversion, (unsigned int)m_countBytesRemainingForDecode_low);
      v8 = pResponseStream->Read(pResponseStream, &bufferToConvert[m_countBytesRemainingForDecode_low], 511 - m_countBytesRemainingForDecode_low, bytesToConvert);
      v10 = (unsigned int)(m_countBytesRemainingForDecode_low + bytesToConvert[0]);
      bytesToConvert[0] += m_countBytesRemainingForDecode_low;
      if ( v8 < 0 || !(_DWORD)v10 )
        break;
      this->m_countBytesRemainingForDecode = 0i64;
      *(_WORD *)this->m_remainingBytesForConversion = 0;
      this->m_remainingBytesForConversion[2] = 0;
      if ( (unsigned int)v10 >= 0x200 )
      {
        j___report_rangecheckfailure(v9);
        JUMPOUT(0x1428248EDi64);
      }
      bufferToConvert[v10] = 0;
      Com_Printf(25, "IXMLHTTP: Read %u bytes.\n", v10);
      HttpCallback::ConvertAndStoreData(this, bufferToConvert, bytesToConvert[0]);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  this->m_hr = v5;
  Com_Printf(25, "IXMLHTTP: Data available: 0x%x.\n", v5);
  return (unsigned int)this->m_hr;
}

/*
==============
HttpCallback::OnError
==============
*/
__int64 HttpCallback::OnError(HttpCallback *this, IXMLHTTPRequest2 *pXHR, HRESULT hrError)
{
  SetEvent(this->m_hComplete);
  this->m_hr = hrError;
  Com_PrintError(25, "!!!!!!!!!!!! IXMLHTTP: Error: 0x%x.!!!!!!!!!!!!\n", (unsigned int)hrError);
  return 0i64;
}

/*
==============
HttpCallback::OnHeadersAvailable
==============
*/
__int64 HttpCallback::OnHeadersAvailable(HttpCallback *this, IXMLHTTPRequest2 *pXHR, __int64 dwStatus, const wchar_t *pwszStatus)
{
  unsigned int v4; 
  IXMLHTTPRequest2_vtbl *v8; 
  int v9; 
  unsigned __int64 v10; 
  IXMLHTTPRequest2_vtbl *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  wchar_t *v15; 
  wchar_t *_Ptr; 

  v4 = dwStatus;
  if ( !pXHR )
    return 2147942487i64;
  v8 = pXHR->__vftable;
  _Ptr = NULL;
  v9 = ((__int64 (__fastcall *)(IXMLHTTPRequest2 *, wchar_t **, __int64, const wchar_t *))v8->GetAllResponseHeaders)(pXHR, &_Ptr, dwStatus, pwszStatus);
  if ( v9 >= 0 )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( _Ptr[v10] );
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::append(&this->m_headers, _Ptr, v10);
    v9 = 0;
  }
  if ( _Ptr )
  {
    CoTaskMemFree(_Ptr);
    _Ptr = NULL;
  }
  this->m_httpStatus = v4;
  Com_Printf(25, "IXMLHTTP: Headers available. Status code: %u\n", v4);
  v11 = pXHR->__vftable;
  v15 = NULL;
  v11->GetResponseHeader(pXHR, L"Content-Length", &v15);
  if ( v15 )
  {
    v12 = _wtoi(v15);
    v13 = v12 + 1;
    Com_Printf(25, "IXMLHTTP: \"Content Length: %d\"\n", v12);
    if ( this->m_hasApplicationSuppliedBuffer || !v13 )
    {
      if ( this->m_bufferMaxByteLength < (int)(2 * v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\httprequest.cpp", 252, ASSERT_TYPE_ASSERT, "(m_bufferMaxByteLength >= (ContentLength * 2))", (const char *)&queryFormat, "m_bufferMaxByteLength >= (ContentLength * 2)") )
        __debugbreak();
    }
    else
    {
      v14 = (int)(2 * v13);
      this->m_bufferMaxByteLength = v14;
      this->m_pBuffer = (wchar_t *)HttpHeapMalloc(v14);
    }
  }
  return (unsigned int)v9;
}

/*
==============
HttpCallback::OnRedirect
==============
*/
__int64 HttpCallback::OnRedirect(HttpCallback *this, IXMLHTTPRequest2 *pXHR, const wchar_t *pRedirectUrl)
{
  return 0i64;
}

/*
==============
HttpCallback::OnResponseReceived
==============
*/
__int64 HttpCallback::OnResponseReceived(HttpCallback *this, IXMLHTTPRequest2 *pXHR, ISequentialStream *pResponseStream)
{
  SetEvent(this->m_hComplete);
  Com_Printf(25, "IXMLHTTP: Response received: 0x%x.\n", (unsigned int)this->m_hr);
  return (unsigned int)this->m_hr;
}

/*
==============
HttpRequest::Open
==============
*/
HRESULT HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, Windows::Xbox::System::User *currentUser)
{
  return HttpRequest::Open(this, verb, url, NULL, 0, 0, currentUser);
}

/*
==============
HttpRequest::Open
==============
*/
HRESULT HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, const char *data, unsigned int dataLength, Windows::Xbox::System::User *currentUser)
{
  return HttpRequest::Open(this, verb, url, data, dataLength, 0, currentUser);
}

/*
==============
HttpRequest::Open
==============
*/
__int64 HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, const char *data, unsigned int dataLength, bool ignoreCacheAndETag, Windows::Xbox::System::User *currentUser)
{
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v13; 
  int v14; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v15; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v16; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *Ptr; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v18; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v19; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v20; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *Myhead; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *Left; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v23; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v24; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v25; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v26; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *Right; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *i; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *j; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v30; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v31; 
  HSTRING v32; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v33; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v34; 
  HSTRING v35; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v36; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v37; 
  HSTRING v38; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v39; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v40; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v41; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v42; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v43; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *p_p_addr; 
  _DWORD *v45; 
  _DWORD *v46; 
  __int64 v47; 
  unsigned int v48; 
  char *v49; 
  __int64 v50; 
  __int64 v51; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *_Newnode; 
  std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> >,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > >,0> > v54; 
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > > v55; 
  Windows::Xbox::System::User *v56; 
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > > v57; 
  __int64 v58; 
  __int64 v59; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v60; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v61; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v62; 
  std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *v63; 
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >,bool> result; 
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >,bool> v65; 
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >,bool> v66; 
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >,bool> v67; 
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >,bool> v68; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v69; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v70; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v71; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v72; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v73; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v74; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v75; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v76; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v77; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > p_addr; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > _Right; 
  wchar_t *_Ptr; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > v81; 
  char pDestBuffer[40]; 
  wchar_t _Buffer[32]; 
  char v84[512]; 
  char v85[512]; 

  v59 = -2i64;
  v56 = currentUser;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v54._Mypair._Myval2._Myval2._Mysize = *((_QWORD *)&_XMM0 + 1);
  v13 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
  v60 = v13;
  v13->_Left = v13;
  v13->_Parent = v13;
  v13->_Right = v13;
  *(_WORD *)&v13->_Color = 257;
  v54._Mypair._Myval2._Myval2._Myhead = v13;
  *(_OWORD *)&v72._Mypair._Myval2._Mysize = _xmm;
  v72._Mypair._Myval2._Bx._Buf[0] = 0;
  *(_OWORD *)&v74._Mypair._Myval2._Mysize = _xmm;
  v74._Mypair._Myval2._Bx._Buf[0] = 0;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v74, url);
  *(_OWORD *)&p_addr._Mypair._Myval2._Mysize = _xmm;
  p_addr._Mypair._Myval2._Bx._Buf[0] = 0;
  *(_OWORD *)&_Right._Mypair._Myval2._Mysize = _xmm;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  *(_OWORD *)&v77._Mypair._Myval2._Mysize = _xmm;
  v77._Mypair._Myval2._Bx._Buf[0] = 0;
  *(_OWORD *)&v73._Mypair._Myval2._Mysize = _xmm;
  v73._Mypair._Myval2._Bx._Buf[0] = 0;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v73, verb);
  v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, const wchar_t *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)&this->id + 24i64))(*(_QWORD *)&this->id, verb, url, *(_QWORD *)&this->method[4], 0i64, 0i64, 0i64, 0i64);
  if ( v14 >= 0 )
  {
    v15 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
    v15->_Left = v54._Mypair._Myval2._Myval2._Myhead;
    v15->_Parent = v54._Mypair._Myval2._Myval2._Myhead;
    v15->_Right = v54._Mypair._Myval2._Myval2._Myhead;
    *(_WORD *)&v15->_Color = 0;
    v15->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    v15->_Myval.first._Mypair._Myval2._Myres = 7i64;
    v15->_Myval.first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign((std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)&v15->_Myval.first, L"User-Agent");
    v15->_Myval.second._Mypair._Myval2._Mysize = 0i64;
    v15->_Myval.second._Mypair._Myval2._Myres = 7i64;
    v15->_Myval.second._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v15->_Myval.second, USER_AGENT);
    std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::_Insert_nohint<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>> &,std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>,void *> *>(&v54, &result, 0, &v15->_Myval, v15);
    v16 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
    v16->_Left = v54._Mypair._Myval2._Myval2._Myhead;
    v16->_Parent = v54._Mypair._Myval2._Myval2._Myhead;
    v16->_Right = v54._Mypair._Myval2._Myval2._Myhead;
    *(_WORD *)&v16->_Color = 0;
    v16->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    v16->_Myval.first._Mypair._Myval2._Myres = 7i64;
    v16->_Myval.first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign((std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)&v16->_Myval.first, L"Content-Type");
    v16->_Myval.second._Mypair._Myval2._Mysize = 0i64;
    v16->_Myval.second._Mypair._Myval2._Myres = 7i64;
    v16->_Myval.second._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v16->_Myval.second, L"application/json\r\n");
    std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::_Insert_nohint<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>> &,std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>,void *> *>(&v54, &v65, 0, &v16->_Myval, v16);
    j_swprintf(_Buffer, 0x20ui64, L"%d\r\n", *(unsigned int *)&this->url[28]);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v77, _Buffer);
    Ptr = &v77;
    if ( v77._Mypair._Myval2._Myres >= 8 )
      Ptr = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v77._Mypair._Myval2._Bx._Ptr;
    v61 = Ptr;
    v18 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
    v18->_Left = v54._Mypair._Myval2._Myval2._Myhead;
    v18->_Parent = v54._Mypair._Myval2._Myval2._Myhead;
    v18->_Right = v54._Mypair._Myval2._Myval2._Myhead;
    *(_WORD *)&v18->_Color = 0;
    v18->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    v18->_Myval.first._Mypair._Myval2._Myres = 7i64;
    v18->_Myval.first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign((std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)&v18->_Myval.first, L"x-xbl-contract-version");
    v18->_Myval.second._Mypair._Myval2._Mysize = 0i64;
    v18->_Myval.second._Mypair._Myval2._Myres = 7i64;
    v18->_Myval.second._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v18->_Myval.second, Ptr->_Mypair._Myval2._Bx._Buf);
    std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::_Insert_nohint<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>> &,std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>,void *> *>(&v54, &v66, 0, &v18->_Myval, v18);
    if ( ignoreCacheAndETag )
    {
      v19 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
      v19->_Left = v54._Mypair._Myval2._Myval2._Myhead;
      v19->_Parent = v54._Mypair._Myval2._Myval2._Myhead;
      v19->_Right = v54._Mypair._Myval2._Myval2._Myhead;
      *(_WORD *)&v19->_Color = 0;
      v19->_Myval.first._Mypair._Myval2._Mysize = 0i64;
      v19->_Myval.first._Mypair._Myval2._Myres = 7i64;
      v19->_Myval.first._Mypair._Myval2._Bx._Buf[0] = 0;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign((std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)&v19->_Myval.first, L"If-Modified-Since");
      v19->_Myval.second._Mypair._Myval2._Mysize = 0i64;
      v19->_Myval.second._Mypair._Myval2._Myres = 7i64;
      v19->_Myval.second._Mypair._Myval2._Bx._Buf[0] = 0;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&v19->_Myval.second, L"Sat, 29 Oct 1994 19:43:31 GMT\r\n");
      std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::_Insert_nohint<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>> &,std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>,void *> *>(&v54, &v67, 0, &v19->_Myval, v19);
    }
    j_swprintf(_Buffer, 0x20ui64, L"%d", dataLength);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign(&_Right, _Buffer);
    _Ptr = (wchar_t *)L"Content-Length";
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v81, &_Right);
    v20 = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)HttpHeapMalloc(0x60ui64);
    v20->_Left = v54._Mypair._Myval2._Myval2._Myhead;
    v20->_Parent = v54._Mypair._Myval2._Myval2._Myhead;
    v20->_Right = v54._Mypair._Myval2._Myval2._Myhead;
    *(_WORD *)&v20->_Color = 0;
    v20->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    v20->_Myval.first._Mypair._Myval2._Myres = 7i64;
    v20->_Myval.first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::assign((std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)&v20->_Myval.first, _Ptr);
    v20->_Myval.second = v81;
    *(_OWORD *)&v81._Mypair._Myval2._Mysize = _xmm;
    v81._Mypair._Myval2._Bx._Buf[0] = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::_Insert_nohint<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>> &,std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>,void *> *>(&v54, &v68, 0, &v20->_Myval, v20);
    *(_OWORD *)&v81._Mypair._Myval2._Mysize = _xmm;
    v81._Mypair._Myval2._Bx._Buf[0] = 0;
    Myhead = v54._Mypair._Myval2._Myval2._Myhead;
    v62 = v54._Mypair._Myval2._Myval2._Myhead;
    Left = v54._Mypair._Myval2._Myval2._Myhead->_Left;
    v63 = Left;
    if ( Left == v54._Mypair._Myval2._Myval2._Myhead )
    {
LABEL_28:
      v55._Ptr = NULL;
      v30 = &v73;
      if ( v73._Mypair._Myval2._Myres >= 8 )
        v30 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v73._Mypair._Myval2._Bx._Ptr;
      Platform::String::String(NULL, v30->_Mypair._Myval2._Bx._Buf);
      v32 = (HSTRING)v31;
      v55._Ptr = v31;
      ConvertPlatformStringToCharArray((Platform::String *)v31, pDestBuffer, 0x20ui64);
      WindowsDeleteString_0(v32);
      v55._Ptr = NULL;
      v33 = &v74;
      if ( v74._Mypair._Myval2._Myres >= 8 )
        v33 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v74._Mypair._Myval2._Bx._Ptr;
      Platform::String::String(NULL, v33->_Mypair._Myval2._Bx._Buf);
      v35 = (HSTRING)v34;
      v55._Ptr = v34;
      ConvertPlatformStringToCharArray((Platform::String *)v34, v85, 0x200ui64);
      WindowsDeleteString_0(v35);
      v55._Ptr = NULL;
      v36 = &v72;
      if ( v72._Mypair._Myval2._Myres >= 8 )
        v36 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v72._Mypair._Myval2._Bx._Ptr;
      Platform::String::String(NULL, v36->_Mypair._Myval2._Bx._Buf);
      v38 = (HSTRING)v37;
      v55._Ptr = v37;
      ConvertPlatformStringToCharArray((Platform::String *)v37, v84, 0x200ui64);
      WindowsDeleteString_0(v38);
      Com_Printf(25, "HttpRequest::Open - making %s request to URL [%s]\nheaders=[%s]\n", pDestBuffer, v85, v84);
      v55._Ptr = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)&v69;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v69, &v72);
      v40 = v39;
      v57._Ptr = (std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > >,void *> *)&v70;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v70, &v74);
      v42 = v41;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v71, &v73);
      v14 = HttpRequest::RequestAuthToken(this, v43, v42, v40, data, dataLength, &p_addr, v56);
      if ( v14 < 0 )
        goto LABEL_71;
      p_p_addr = &p_addr;
      if ( p_addr._Mypair._Myval2._Myres >= 8 )
        p_p_addr = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)p_addr._Mypair._Myval2._Bx._Ptr;
      v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *))(**(_QWORD **)&this->id + 72i64))(*(_QWORD *)&this->id, L"Authorization", p_p_addr);
      if ( v14 < 0 )
        goto LABEL_71;
      if ( data )
      {
        v58 = 0i64;
        v45 = HttpHeapMalloc(0x38ui64);
        v46 = v45;
        if ( v45 )
        {
          v45[5] = 1;
          *(_QWORD *)v45 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISequentialStream'};
          *((_QWORD *)v45 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          *(_QWORD *)v46 = &RequestStream::`vftable'{for `ISequentialStream'};
          *((_QWORD *)v46 + 1) = &RequestStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
          v46[6] = 1;
          *((_QWORD *)v46 + 4) = 0i64;
          *((_QWORD *)v46 + 5) = 0i64;
          *((_QWORD *)v46 + 6) = 0i64;
        }
        else
        {
          v46 = NULL;
        }
        v47 = *(_QWORD *)&this->url[12];
        *(_QWORD *)&this->url[12] = v46;
        if ( v47 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16i64))(v47);
          v46 = *(_DWORD **)&this->url[12];
        }
        v48 = strnlen(data, 0x200ui64);
        if ( v48 < 0x200 )
        {
          *((_QWORD *)v46 + 5) = v48;
          *((_QWORD *)v46 + 6) = 0i64;
          v49 = (char *)HttpHeapMalloc(v48 + 1);
          *((_QWORD *)v46 + 4) = v49;
          if ( v49 )
            strncpy_s(v49, *((_QWORD *)v46 + 5) + 1i64, data, *((_QWORD *)v46 + 5));
        }
        v50 = *(_QWORD *)&this->url[12];
        v51 = *(_QWORD *)(v50 + 40);
      }
      else
      {
        v51 = 0i64;
        v50 = 0i64;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)&this->id + 32i64))(*(_QWORD *)&this->id, v50, v51);
    }
    else
    {
      while ( 1 )
      {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v75, &Left->_Myval.first);
        std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>(&v76, &Left->_Myval.second);
        v23 = &v75;
        if ( v75._Mypair._Myval2._Myres >= 8 )
          v23 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v75._Mypair._Myval2._Bx._Ptr;
        std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::append(&v72, v23->_Mypair._Myval2._Bx._Buf, v75._Mypair._Myval2._Mysize);
        std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::append(&v72, L": ", 2ui64);
        v24 = &v76;
        if ( v76._Mypair._Myval2._Myres >= 8 )
          v24 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v76._Mypair._Myval2._Bx._Ptr;
        std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::append(&v72, v24->_Mypair._Myval2._Bx._Buf, v76._Mypair._Myval2._Mysize);
        v25 = &v76;
        if ( v76._Mypair._Myval2._Myres >= 8 )
          v25 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v76._Mypair._Myval2._Bx._Ptr;
        v26 = &v75;
        if ( v75._Mypair._Myval2._Myres >= 8 )
          v26 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)v75._Mypair._Myval2._Bx._Ptr;
        v14 = (*(__int64 (__fastcall **)(_QWORD, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *))(**(_QWORD **)&this->id + 72i64))(*(_QWORD *)&this->id, v26, v25);
        if ( v14 < 0 )
          break;
        if ( v76._Mypair._Myval2._Myres >= 8 )
          HttpHeapFree(v76._Mypair._Myval2._Bx._Ptr);
        v76._Mypair._Myval2._Mysize = 0i64;
        v76._Mypair._Myval2._Myres = 7i64;
        v76._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( v75._Mypair._Myval2._Myres >= 8 )
          HttpHeapFree(v75._Mypair._Myval2._Bx._Ptr);
        Right = Left->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( Left != i->_Right )
              break;
            Left = i;
          }
          Left = i;
        }
        else
        {
          Left = Left->_Right;
          for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
            Left = j;
        }
        if ( Left == Myhead )
          goto LABEL_28;
      }
      if ( v76._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v76._Mypair._Myval2._Bx._Ptr);
      v76._Mypair._Myval2._Mysize = 0i64;
      v76._Mypair._Myval2._Myres = 7i64;
      v76._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v75._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v75._Mypair._Myval2._Bx._Ptr);
    }
    if ( v14 >= 0 )
    {
      LODWORD(_Newnode) = v14;
      Com_Printf(25, "IXMLHTTP: Opened request [%S] for \"%S\", result: %x\n", verb, url, _Newnode);
      if ( v73._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v73._Mypair._Myval2._Bx._Ptr);
      *(_OWORD *)&v73._Mypair._Myval2._Mysize = _xmm;
      v73._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v77._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v77._Mypair._Myval2._Bx._Ptr);
      *(_OWORD *)&v77._Mypair._Myval2._Mysize = _xmm;
      v77._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( _Right._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(_Right._Mypair._Myval2._Bx._Ptr);
      if ( p_addr._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(p_addr._Mypair._Myval2._Bx._Ptr);
      *(_OWORD *)&p_addr._Mypair._Myval2._Mysize = _xmm;
      p_addr._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v74._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v74._Mypair._Myval2._Bx._Ptr);
      *(_OWORD *)&v74._Mypair._Myval2._Mysize = _xmm;
      v74._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v72._Mypair._Myval2._Myres >= 8 )
        HttpHeapFree(v72._Mypair._Myval2._Bx._Ptr);
      *(_OWORD *)&v72._Mypair._Myval2._Mysize = _xmm;
      v72._Mypair._Myval2._Bx._Buf[0] = 0;
      std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::erase(&v54, &v57, (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >)v54._Mypair._Myval2._Myval2._Myhead->_Left, (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >)v54._Mypair._Myval2._Myval2._Myhead);
      HttpHeapFree(v54._Mypair._Myval2._Myval2._Myhead);
      return (unsigned int)v14;
    }
  }
LABEL_71:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this->id + 40i64))(*(_QWORD *)&this->id);
  LODWORD(_Newnode) = v14;
  Com_Printf(25, "IXMLHTTP: Failed to open request [%S] for \"%S\", result: %x\n", verb, url, _Newnode);
  if ( v73._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(v73._Mypair._Myval2._Bx._Ptr);
  *(_OWORD *)&v73._Mypair._Myval2._Mysize = _xmm;
  v73._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v77._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(v77._Mypair._Myval2._Bx._Ptr);
  *(_OWORD *)&v77._Mypair._Myval2._Mysize = _xmm;
  v77._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( _Right._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(_Right._Mypair._Myval2._Bx._Ptr);
  if ( p_addr._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(p_addr._Mypair._Myval2._Bx._Ptr);
  *(_OWORD *)&p_addr._Mypair._Myval2._Mysize = _xmm;
  p_addr._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v74._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(v74._Mypair._Myval2._Bx._Ptr);
  *(_OWORD *)&v74._Mypair._Myval2._Mysize = _xmm;
  v74._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v72._Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(v72._Mypair._Myval2._Bx._Ptr);
  *(_OWORD *)&v72._Mypair._Myval2._Mysize = _xmm;
  v72._Mypair._Myval2._Bx._Buf[0] = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>,ltstr,STLHeapAllocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>> const,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>>>,0>>::erase(&v54, &v55, (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >)v54._Mypair._Myval2._Myval2._Myhead->_Left, (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > > > > >)v54._Mypair._Myval2._Myval2._Myhead);
  HttpHeapFree(v54._Mypair._Myval2._Myval2._Myhead);
  return (unsigned int)v14;
}

/*
==============
HttpRequest::Open
==============
*/
HRESULT HttpRequest::Open(HttpRequest *this, const wchar_t *verb, const wchar_t *url, bool ignoreCacheAndETag, Windows::Xbox::System::User *currentUser)
{
  return HttpRequest::Open(this, verb, url, NULL, 0, ignoreCacheAndETag, currentUser);
}

/*
==============
RequestStream::Open
==============
*/
__int64 RequestStream::Open(RequestStream *this, const char *psBuffer, unsigned int cbBufferSize)
{
  char *v5; 

  if ( !psBuffer || cbBufferSize >= 0x200 )
    return 2147942487i64;
  this->m_buffSize = cbBufferSize;
  this->m_buffSeekIndex = 0i64;
  v5 = (char *)HttpHeapMalloc(cbBufferSize + 1);
  this->m_buffer = v5;
  if ( !v5 )
    return 2147942414i64;
  strncpy_s(v5, this->m_buffSize + 1, psBuffer, this->m_buffSize);
  return 0i64;
}

/*
==============
RequestStream::QueryInterface
==============
*/
__int64 RequestStream::QueryInterface(RequestStream *this, const _GUID *riid, void **ppvObject)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0> *v5; 

  if ( !ppvObject )
    return 2147942487i64;
  *ppvObject = NULL;
  if ( *(_OWORD *)riid == *(_OWORD *)&IID_IUnknown || *(_QWORD *)&riid->Data1 == *(_QWORD *)&IID_IDispatch.Data1 && *(_QWORD *)riid->Data4 == *(_QWORD *)IID_IDispatch.Data4 )
  {
    v5 = &this->Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>;
    if ( !this )
      v5 = NULL;
    ((void (__fastcall *)(RequestStream *, const _GUID *, _QWORD))this->AddRef)(this, riid, 0i64);
    *ppvObject = v5;
    return 0i64;
  }
  else if ( *(_QWORD *)&riid->Data1 == *(_QWORD *)&IID_ISequentialStream.Data1 && *(_QWORD *)riid->Data4 == *(_QWORD *)IID_ISequentialStream.Data4 )
  {
    ((void (__fastcall *)(RequestStream *, const _GUID *, _QWORD))this->AddRef)(this, riid, 0i64);
    *ppvObject = this;
    return 0i64;
  }
  else
  {
    return 2147500034i64;
  }
}

/*
==============
RequestStream::Read
==============
*/
__int64 RequestStream::Read(RequestStream *this, void *pv, unsigned int cb, unsigned int *pcbNumReadBytes)
{
  unsigned int v4; 
  char *m_buffer; 
  unsigned __int64 m_buffSeekIndex; 

  v4 = 0;
  if ( !pv )
    return 2147942487i64;
  m_buffer = this->m_buffer;
  *pcbNumReadBytes = 0;
  if ( cb )
  {
    while ( 1 )
    {
      m_buffSeekIndex = this->m_buffSeekIndex;
      if ( m_buffSeekIndex == this->m_buffSize )
        break;
      *((_BYTE *)pv + *pcbNumReadBytes) = m_buffer[m_buffSeekIndex];
      ++this->m_buffSeekIndex;
      if ( ++*pcbNumReadBytes >= cb )
        return 0i64;
    }
    return 1;
  }
  return v4;
}

/*
==============
HttpCallback::ReadDataFromStream
==============
*/
__int64 HttpCallback::ReadDataFromStream(HttpCallback *this, ISequentialStream *pStream)
{
  __int64 m_countBytesRemainingForDecode_low; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int bytesToConvert[4]; 
  char bufferToConvert[512]; 

  if ( !pStream )
    return 2147942487i64;
  while ( 1 )
  {
    m_countBytesRemainingForDecode_low = LODWORD(this->m_countBytesRemainingForDecode);
    bytesToConvert[0] = 0;
    if ( (_DWORD)m_countBytesRemainingForDecode_low )
      memcpy_0(bufferToConvert, this->m_remainingBytesForConversion, (unsigned int)m_countBytesRemainingForDecode_low);
    v6 = pStream->Read(pStream, &bufferToConvert[m_countBytesRemainingForDecode_low], 511 - m_countBytesRemainingForDecode_low, bytesToConvert);
    v8 = (unsigned int)(m_countBytesRemainingForDecode_low + bytesToConvert[0]);
    bytesToConvert[0] += m_countBytesRemainingForDecode_low;
    if ( v6 < 0 || !(_DWORD)v8 )
      break;
    this->m_countBytesRemainingForDecode = 0i64;
    *(_WORD *)this->m_remainingBytesForConversion = 0;
    this->m_remainingBytesForConversion[2] = 0;
    if ( (unsigned int)v8 >= 0x200 )
    {
      j___report_rangecheckfailure(v7);
      JUMPOUT(0x142825F59i64);
    }
    bufferToConvert[v8] = 0;
    Com_Printf(25, "IXMLHTTP: Read %u bytes.\n", v8);
    HttpCallback::ConvertAndStoreData(this, bufferToConvert, bytesToConvert[0]);
  }
  return 0i64;
}

/*
==============
RequestStream::Release
==============
*/
__int64 RequestStream::Release(RequestStream *this)
{
  unsigned __int32 v1; 

  v1 = _InterlockedDecrement(&this->m_cRef);
  if ( !v1 && this )
    ((void (__fastcall *)(RequestStream *, __int64))this->~RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>)(this, 1i64);
  return v1;
}

/*
==============
ReportFailureAndStop
==============
*/
void ReportFailureAndStop(const char *pFmt, const char *strFileName, unsigned int dwLineNumber, ...)
{
  unsigned __int64 *v5; 
  char _Buffer[1024]; 
  char Buffer[1024]; 
  va_list va; 

  va_start(va, dwLineNumber);
  v5 = j___local_stdio_printf_options();
  __stdio_common_vsprintf_s(*v5, Buffer, 0x400ui64, pFmt, NULL, va);
  sprintf_s<1024>((char (*)[1024])_Buffer, "XDK failure: %s(%d): %s\n", strFileName, dwLineNumber, Buffer);
  Com_Printf(25, _Buffer);
  if ( IsDebuggerPresent() )
    __debugbreak();
  else
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FB69FC, _Buffer);
}

/*
==============
HttpRequest::RequestAuthToken
==============
*/
__int64 HttpRequest::RequestAuthToken(HttpRequest *this, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *httpMethod, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *url, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *authTokenHeaderString, const char *data, unsigned int dataLength, std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *AuthTokenOut, Windows::Xbox::System::User *currentUser)
{
  unsigned int v10; 
  __int64 v11; 
  Platform::Array<unsigned char,1> *v12; 
  _BYTE *v13; 
  _BYTE *v14; 
  __int64 v15; 
  __int64 v16; 
  _BYTE *v17; 
  __int64 v18; 
  __int64 v19; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *Ptr; 
  HSTRING v21; 
  Platform::String *v22; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v23; 
  HSTRING v24; 
  HSTRING v25; 
  const wchar_t *v26; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v27; 
  HSTRING v28; 
  unsigned __int8 *v29; 
  unsigned int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v34; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v35; 
  int v36; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v37; 
  int v38; 
  int v39; 
  int v40; 
  bool v41; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v42; 
  int v43; 
  int v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  char v49; 
  _BYTE *v50; 
  Windows::Xbox::System::User *v51; 
  unsigned int v52; 
  HSTRING string; 
  HttpRequest *v54; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v55; 
  HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *v56; 
  __int64 v57; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v58; 
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *v59; 
  __int64 v60; 
  _QWORD v61[11]; 

  v61[4] = -2i64;
  v59 = url;
  v58 = httpMethod;
  v54 = this;
  v61[8] = httpMethod;
  v61[10] = url;
  v61[9] = authTokenHeaderString;
  v55 = AuthTokenOut;
  v51 = currentUser;
  v10 = 0;
  LODWORD(string) = 0;
  v52 = -2147467259;
  v49 = 1;
  v11 = 0i64;
  v57 = 0i64;
  v12 = (Platform::Array<unsigned char,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
  if ( data )
  {
    Platform::Array<unsigned char,1>::Array<unsigned char,1>(v12, (unsigned __int8 *)data, dataLength);
    v14 = v13;
    v50 = v13;
    v15 = (__int64)v13;
    if ( v13 )
    {
      if ( v13[76] )
      {
        string = (HSTRING)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
        Platform::Array<unsigned char,1>::Array<unsigned char,1>((Platform::Array<unsigned char,1> *)string, *((unsigned __int8 **)v14 + 10), *((_DWORD *)v14 + 18));
        v15 = v16;
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 8i64))(v13);
      }
      v11 = v15;
      v57 = v15;
    }
    if ( v14 )
LABEL_15:
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 16i64))(v14);
  }
  else
  {
    Platform::Array<unsigned char,1>::Array<unsigned char,1>(v12, (unsigned __int8 *)&_dataArg, 1u);
    v14 = v17;
    v50 = v17;
    v18 = (__int64)v17;
    if ( v17 )
    {
      if ( v17[76] )
      {
        string = (HSTRING)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
        Platform::Array<unsigned char,1>::Array<unsigned char,1>((Platform::Array<unsigned char,1> *)string, *((unsigned __int8 **)v14 + 10), *((_DWORD *)v14 + 18));
        v18 = v19;
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v17 + 8i64))(v17);
      }
      v11 = v18;
      v57 = v18;
    }
    if ( v14 )
      goto LABEL_15;
  }
  v50 = NULL;
  Ptr = authTokenHeaderString;
  if ( authTokenHeaderString->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)authTokenHeaderString->_Mypair._Myval2._Bx._Ptr;
  Platform::String::String(NULL, Ptr->_Mypair._Myval2._Bx._Buf);
  v22 = (Platform::String *)v21;
  string = v21;
  v61[5] = v21;
  v50 = NULL;
  v23 = url;
  if ( url->_Mypair._Myval2._Myres >= 8 )
    v23 = (std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t> > *)url->_Mypair._Myval2._Bx._Ptr;
  Platform::String::String(NULL, v23->_Mypair._Myval2._Bx._Buf);
  v25 = v24;
  v61[6] = v24;
  v50 = NULL;
  v26 = (const wchar_t *)v58;
  if ( v58->_Mypair._Myval2._Myres >= 8 )
    v26 = v58->_Mypair._Myval2._Bx._Ptr;
  Platform::String::String(NULL, v26);
  v28 = (HSTRING)v27;
  v56 = v27;
  v50 = NULL;
  if ( v11 )
  {
    v29 = *(unsigned __int8 **)(v11 + 80);
    v30 = *(_DWORD *)(v11 + 72);
  }
  else
  {
    v29 = NULL;
    v30 = 0;
  }
  v31 = v51->__abi___GetTokenAndSignatureAsync__2(v51, (Platform::String *)v28, (Platform::String *)v25, v22, v30, v29, (Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> **)&v50);
  if ( v31 < 0 )
    __abi_WinRTraiseException(v31);
  v32 = (__int64)v50;
  v33 = (__int64)v50;
  if ( v50 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v50 + 8i64))(v50);
    v32 = (__int64)v50;
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16i64))(v32);
  v51 = (Windows::Xbox::System::User *)v33;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8i64))(v33);
  v60 = v33;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
  WindowsDeleteString_0(v28);
  WindowsDeleteString_0(v25);
  WindowsDeleteString_0(string);
  v56 = (HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  v61[0] = v54;
  v61[1] = &v55;
  v61[2] = &v52;
  v61[3] = &v49;
  Windows::Foundation::AsyncOperationCompletedHandler_Windows::Xbox::System::GetTokenAndSignatureResult___::AsyncOperationCompletedHandler_Windows::Xbox::System::GetTokenAndSignatureResult_____lambda_d739ad2abf72538a023998f430cc57bb___(v56, (Platform::CallbackContext)v61, 2);
  v35 = v34;
  v56 = v34;
  v36 = (*(__int64 (__fastcall **)(__int64, HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *))(*(_QWORD *)v33 + 48i64))(v33, v34);
  if ( v36 < 0 )
    __abi_WinRTraiseException(v36);
  if ( v35 )
    (*(void (__fastcall **)(HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *))&v35->__this->url[4])(v35);
  while ( 1 )
  {
    v37 = NULL;
    v51 = NULL;
    if ( v33 )
    {
      v38 = (**(__int64 (__fastcall ***)(__int64, void *, Windows::Xbox::System::User **))v33)(v33, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v51);
      if ( v38 < 0 )
        __abi_WinRTraiseException(v38);
      v37 = (HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *)v51;
    }
    v56 = v37;
    v39 = v10 | 1;
    LODWORD(string) = v39;
    LODWORD(v54) = 0;
    v40 = (*(__int64 (__fastcall **)(HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *, HttpRequest **))&v37->__this->url[44])(v37, &v54);
    if ( v40 < 0 )
      __abi_WinRTraiseException(v40);
    v41 = !(_DWORD)v54 || v49 == 1;
    v10 = v39 & 0xFFFFFFFE;
    (*(void (__fastcall **)(HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *))&v37->__this->url[4])(v37);
    if ( !v41 )
      break;
    Sleep(1u);
  }
  v42 = NULL;
  v51 = NULL;
  if ( v33 )
  {
    v43 = (**(__int64 (__fastcall ***)(__int64, void *, Windows::Xbox::System::User **))v33)(v33, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v51);
    if ( v43 < 0 )
      __abi_WinRTraiseException(v43);
    v42 = (HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *)v51;
  }
  v56 = v42;
  v44 = (*(__int64 (__fastcall **)(HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *))&v42->__this->url[68])(v42);
  if ( v44 < 0 )
    __abi_WinRTraiseException(v44);
  (*(void (__fastcall **)(HttpRequest::RequestAuthToken::__l3::<lambda_d739ad2abf72538a023998f430cc57bb> *))&v42->__this->url[4])(v42);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,STLHeapAllocator<wchar_t>>::append(v55, L"\r\n", 2ui64);
  Com_Printf(25, "Authtoken length: %d\n", v55->_Mypair._Myval2._Mysize);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
  v45 = (__int64)v59;
  v46 = (__int64)v58;
  v47 = v52;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  if ( *(_QWORD *)(v46 + 24) >= 8ui64 )
    HttpHeapFree(*(void **)v46);
  *(_QWORD *)(v46 + 16) = 0i64;
  *(_QWORD *)(v46 + 24) = 7i64;
  *(_WORD *)v46 = 0;
  if ( *(_QWORD *)(v45 + 24) >= 8ui64 )
    HttpHeapFree(*(void **)v45);
  *(_QWORD *)(v45 + 16) = 0i64;
  *(_QWORD *)(v45 + 24) = 7i64;
  *(_WORD *)v45 = 0;
  if ( authTokenHeaderString->_Mypair._Myval2._Myres >= 8 )
    HttpHeapFree(authTokenHeaderString->_Mypair._Myval2._Bx._Ptr);
  authTokenHeaderString->_Mypair._Myval2._Mysize = 0i64;
  authTokenHeaderString->_Mypair._Myval2._Myres = 7i64;
  authTokenHeaderString->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v47;
}

/*
==============
HttpCallback::RuntimeClassInitialize
==============
*/
HRESULT HttpCallback::RuntimeClassInitialize(HttpCallback *this, wchar_t *pAppBuffer, unsigned __int64 AppBufferByteLength)
{
  HANDLE Event; 
  HRESULT result; 

  Event = CreateEventExW(NULL, NULL, 1u, 0x1F0003u);
  if ( Event )
  {
    this->m_hComplete = Event;
    if ( pAppBuffer )
    {
      this->m_pBuffer = pAppBuffer;
      this->m_bufferMaxByteLength = AppBufferByteLength;
      this->m_hasApplicationSuppliedBuffer = 1;
    }
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}

/*
==============
RequestStream::Size
==============
*/
unsigned __int64 RequestStream::Size(RequestStream *this)
{
  return this->m_buffSize;
}

/*
==============
HttpCallback::WaitForFinish
==============
*/
_BOOL8 HttpCallback::WaitForFinish(HttpCallback *this)
{
  DWORD v2; 
  HRESULT LastError; 

  v2 = WaitForSingleObject(this->m_hComplete, 0xFFFFFFFF);
  if ( v2 != -1 )
    return v2 == 0;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  this->m_hr = LastError;
  return 0i64;
}

/*
==============
HttpRequest::WaitForFinish
==============
*/
_BOOL8 HttpRequest::WaitForFinish(HttpRequest *this)
{
  __int64 v1; 
  DWORD v2; 
  signed int LastError; 

  v1 = *(_QWORD *)&this->url[4];
  if ( !v1 )
    return 0i64;
  v2 = WaitForSingleObject(*(HANDLE *)(v1 + 104), 0xFFFFFFFF);
  if ( v2 == -1 )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    *(_DWORD *)(v1 + 16) = LastError;
    return 0i64;
  }
  return v2 == 0;
}

/*
==============
RequestStream::Write
==============
*/
__int64 RequestStream::Write(RequestStream *this, const void *pv, unsigned int cb, unsigned int *pcbWritten)
{
  return 2147500033i64;
}

