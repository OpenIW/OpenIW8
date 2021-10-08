/*
==============
forward_DCT
==============
*/
void forward_DCT(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **sample_data, __int16 (*coef_blocks)[64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  jpeg_forward_dct *fdct; 
  void (__fastcall *start_pass)(jpeg_compress_struct *); 
  __int16 *v9; 
  __int64 v10; 
  unsigned __int8 **v12; 
  __int64 v13; 
  char *v14; 
  unsigned __int8 **v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  int v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  int v24; 
  unsigned __int8 *v25; 
  int *v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  char v76[4]; 
  char v77[252]; 

  fdct = cinfo->fdct;
  start_pass = fdct[1].start_pass;
  if ( num_blocks )
  {
    v9 = &(*coef_blocks)[2];
    v10 = num_blocks;
    v12 = &sample_data[start_row + 2];
    v13 = *((_QWORD *)&fdct[1].forward_DCT + compptr->quant_tbl_no) - (_QWORD)v77;
    do
    {
      v14 = v76;
      v15 = v12;
      v16 = 2i64;
      do
      {
        v17 = &(*(v15 - 2))[start_col];
        *(_DWORD *)v14 = *v17 - 128;
        *((_DWORD *)v14 + 1) = v17[1] - 128;
        *((_DWORD *)v14 + 2) = v17[2] - 128;
        *((_DWORD *)v14 + 3) = v17[3] - 128;
        *((_DWORD *)v14 + 4) = v17[4] - 128;
        *((_DWORD *)v14 + 5) = v17[5] - 128;
        *((_DWORD *)v14 + 6) = v17[6] - 128;
        v18 = v17[7] - 128;
        v19 = (__int64)*(v15 - 1);
        *((_DWORD *)v14 + 7) = v18;
        v20 = (unsigned __int8 *)(start_col + v19);
        *((_DWORD *)v14 + 8) = *v20 - 128;
        *((_DWORD *)v14 + 9) = v20[1] - 128;
        *((_DWORD *)v14 + 10) = v20[2] - 128;
        *((_DWORD *)v14 + 11) = v20[3] - 128;
        *((_DWORD *)v14 + 12) = v20[4] - 128;
        *((_DWORD *)v14 + 13) = v20[5] - 128;
        *((_DWORD *)v14 + 14) = v20[6] - 128;
        v21 = v20[7];
        v22 = *v15;
        *((_DWORD *)v14 + 15) = v21 - 128;
        v23 = &v22[start_col];
        *((_DWORD *)v14 + 16) = *v23 - 128;
        *((_DWORD *)v14 + 17) = v23[1] - 128;
        *((_DWORD *)v14 + 18) = v23[2] - 128;
        *((_DWORD *)v14 + 19) = v23[3] - 128;
        *((_DWORD *)v14 + 20) = v23[4] - 128;
        *((_DWORD *)v14 + 21) = v23[5] - 128;
        *((_DWORD *)v14 + 22) = v23[6] - 128;
        v24 = v23[7];
        v25 = &v15[1][start_col];
        *((_DWORD *)v14 + 23) = v24 - 128;
        v15 += 4;
        *((_DWORD *)v14 + 24) = *v25 - 128;
        v14 += 128;
        *((_DWORD *)v14 - 7) = v25[1] - 128;
        *((_DWORD *)v14 - 6) = v25[2] - 128;
        *((_DWORD *)v14 - 5) = v25[3] - 128;
        *((_DWORD *)v14 - 4) = v25[4] - 128;
        *((_DWORD *)v14 - 3) = v25[5] - 128;
        *((_DWORD *)v14 - 2) = v25[6] - 128;
        *((_DWORD *)v14 - 1) = v25[7] - 128;
        --v16;
      }
      while ( v16 );
      ((void (__fastcall *)(char *, char *, unsigned __int8 **, _QWORD))start_pass)(v76, v14, v15, start_col);
      v26 = (int *)v77;
      v27 = 8i64;
      do
      {
        v28 = *(int *)((char *)v26 + v13);
        v29 = *(v26 - 1);
        v30 = v28 >> 1;
        if ( v29 >= 0 )
        {
          v33 = v30 + v29;
          if ( v33 < v28 )
            LOWORD(v32) = 0;
          else
            v32 = v33 / v28;
        }
        else
        {
          v31 = v30 - v29;
          if ( v31 < v28 )
            LOWORD(v32) = 0;
          else
            v32 = -(v31 / v28);
        }
        v34 = *v26;
        *(v9 - 2) = v32;
        v35 = *(int *)((char *)v26 + v13 + 4);
        v36 = v35 >> 1;
        if ( v34 >= 0 )
        {
          v39 = v36 + v34;
          if ( v39 < v35 )
            LOWORD(v38) = 0;
          else
            v38 = v39 / v35;
        }
        else
        {
          v37 = v36 - v34;
          if ( v37 < v35 )
            LOWORD(v38) = 0;
          else
            v38 = -(v37 / v35);
        }
        v40 = v26[1];
        *(v9 - 1) = v38;
        v41 = *(int *)((char *)v26 + v13 + 8);
        v42 = v41 >> 1;
        if ( v40 >= 0 )
        {
          v45 = v42 + v40;
          if ( v45 < v41 )
            LOWORD(v44) = 0;
          else
            v44 = v45 / v41;
        }
        else
        {
          v43 = v42 - v40;
          if ( v43 < v41 )
            LOWORD(v44) = 0;
          else
            v44 = -(v43 / v41);
        }
        v46 = v26[2];
        *v9 = v44;
        v47 = *(int *)((char *)v26 + v13 + 12);
        v48 = v47 >> 1;
        if ( v46 >= 0 )
        {
          v51 = v48 + v46;
          if ( v51 < v47 )
            LOWORD(v50) = 0;
          else
            v50 = v51 / v47;
        }
        else
        {
          v49 = v48 - v46;
          if ( v49 < v47 )
            LOWORD(v50) = 0;
          else
            v50 = -(v49 / v47);
        }
        v52 = v26[3];
        v9[1] = v50;
        v53 = *(int *)((char *)v26 + v13 + 16);
        v54 = v53 >> 1;
        if ( v52 >= 0 )
        {
          v57 = v54 + v52;
          if ( v57 < v53 )
            LOWORD(v56) = 0;
          else
            v56 = v57 / v53;
        }
        else
        {
          v55 = v54 - v52;
          if ( v55 < v53 )
            LOWORD(v56) = 0;
          else
            v56 = -(v55 / v53);
        }
        v58 = v26[4];
        v9[2] = v56;
        v59 = *(int *)((char *)v26 + v13 + 20);
        v60 = v59 >> 1;
        if ( v58 >= 0 )
        {
          v63 = v60 + v58;
          if ( v63 < v59 )
            LOWORD(v62) = 0;
          else
            v62 = v63 / v59;
        }
        else
        {
          v61 = v60 - v58;
          if ( v61 < v59 )
            LOWORD(v62) = 0;
          else
            v62 = -(v61 / v59);
        }
        v64 = v26[5];
        v9[3] = v62;
        v65 = *(int *)((char *)v26 + v13 + 24);
        v66 = v65 >> 1;
        if ( v64 >= 0 )
        {
          v69 = v66 + v64;
          if ( v69 < v65 )
            LOWORD(v68) = 0;
          else
            v68 = v69 / v65;
        }
        else
        {
          v67 = v66 - v64;
          if ( v67 < v65 )
            LOWORD(v68) = 0;
          else
            v68 = -(v67 / v65);
        }
        v70 = v26[6];
        v9[4] = v68;
        v71 = *(int *)((char *)v26 + v13 + 28);
        v72 = v71 >> 1;
        if ( v70 >= 0 )
        {
          v75 = v72 + v70;
          if ( v75 < v71 )
            LOWORD(v74) = 0;
          else
            v74 = v75 / v71;
        }
        else
        {
          v73 = v72 - v70;
          if ( v73 < v71 )
            LOWORD(v74) = 0;
          else
            v74 = -(v73 / v71);
        }
        v9[5] = v74;
        v26 += 8;
        v9 += 8;
        --v27;
      }
      while ( v27 );
      start_col += 8;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
forward_DCT_float
==============
*/
void forward_DCT_float(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **sample_data, __int16 (*coef_blocks)[64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  jpeg_forward_dct *fdct; 
  void (__fastcall *forward_DCT)(jpeg_compress_struct *, jpeg_component_info *, unsigned __int8 **, __int16 (*)[64], unsigned int, unsigned int, unsigned int); 
  unsigned __int64 v13; 
  __int16 *v16; 
  unsigned __int8 **v17; 
  __int64 v18; 
  unsigned __int8 **v21; 
  __int64 v22; 
  __int64 v86; 
  __int16 *v88; 
  __int64 v107; 
  __int16 v141[2]; 
  char v143[236]; 
  __int16 v144[10]; 
  void *retaddr; 

  _R11 = &retaddr;
  fdct = cinfo->fdct;
  forward_DCT = fdct[3].forward_DCT;
  v13 = *((_QWORD *)&fdct[4].start_pass + compptr->quant_tbl_no);
  if ( num_blocks )
  {
    _RBX = (char *)v141 - v13;
    v16 = &(*coef_blocks)[63];
    v17 = &sample_data[start_row + 2];
    v18 = num_blocks;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, cs:__real@46800100
      vmovaps xmmword ptr [r11-58h], xmm7
    }
    do
    {
      _RDX = (char *)v141;
      v21 = v17;
      v22 = 2i64;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+4], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+8], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+0Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+10h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+14h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+18h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+1Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+20h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+24h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+28h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+2Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+30h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+34h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+38h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+3Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+40h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+44h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+48h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+4Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+50h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+54h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+58h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+5Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+60h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+64h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+68h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+6Ch], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+70h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+74h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx+78h], xmm0
        }
        _RDX += 128;
        v21 += 4;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdx-4], xmm0
        }
        --v22;
      }
      while ( v22 );
      ((void (__fastcall *)(__int16 *, char *, unsigned __int8 **, _QWORD))forward_DCT)(v141, _RDX, v21, start_col);
      if ( (v16 - 63 > v144 || v16 < v141) && ((unsigned __int64)(v16 - 63) > v13 + 252 || (unsigned __int64)v16 < v13) )
      {
        __asm
        {
          vmovups xmm5, cs:__xmm@46800100468001004680010046800100
          vmovdqu xmm7, cs:__xmm@40004000400040004000400040004000
        }
        v107 = 4i64;
        _RDX = &v143[-v13];
        _RCX = v16 - 55;
        _RAX = v13 + 32;
        do
        {
          _RCX += 16;
          __asm
          {
            vmovups xmm1, xmmword ptr [rbx+rax-20h]
            vmulps  xmm1, xmm1, xmmword ptr [rax-20h]
          }
          _RAX += 64i64;
          __asm
          {
            vaddps  xmm2, xmm1, xmm5
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vmovq   xmm1, xmm7
            vpsubw  xmm2, xmm4, xmm1
            vmovups xmm1, xmmword ptr [rdx+rax-60h]
            vmulps  xmm1, xmm1, xmmword ptr [rax-50h]
            vmovq   qword ptr [rcx-30h], xmm2
            vaddps  xmm2, xmm1, xmm5
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vmovq   xmm1, xmm7
            vpsubw  xmm2, xmm4, xmm1
            vmovups xmm1, xmmword ptr [rbx+rax-40h]
            vmulps  xmm1, xmm1, xmmword ptr [rax-40h]
            vmovq   qword ptr [rcx-28h], xmm2
            vaddps  xmm2, xmm1, xmm5
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vmovq   xmm1, xmm7
            vpsubw  xmm2, xmm4, xmm1
            vmovups xmm1, xmmword ptr [rdx+rax-40h]
            vmulps  xmm1, xmm1, xmmword ptr [rax-30h]
            vmovq   qword ptr [rcx-20h], xmm2
            vaddps  xmm2, xmm1, xmm5
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vmovq   xmm1, xmm7
            vpsubw  xmm2, xmm4, xmm1
            vmovq   qword ptr [rcx-18h], xmm2
          }
          --v107;
        }
        while ( v107 );
      }
      else
      {
        v86 = 16i64;
        _R8 = v143 - v13 + 10;
        v88 = v16 - 61;
        _RCX = v13 + 8;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rcx-8]
            vmulss  xmm1, xmm0, dword ptr [rcx-8]
            vmovss  xmm0, dword ptr [r8+rcx-8]
            vaddss  xmm2, xmm1, xmm6
            vcvttss2si eax, xmm2
          }
          _RCX += 16i64;
          *(v88 - 2) = _EAX - 0x4000;
          v88 += 4;
          __asm
          {
            vmulss  xmm1, xmm0, dword ptr [rcx-14h]
            vmovss  xmm0, dword ptr [rbx+rcx-10h]
            vaddss  xmm2, xmm1, xmm6
            vcvttss2si eax, xmm2
          }
          *(v88 - 5) = _EAX - 0x4000;
          __asm
          {
            vmulss  xmm1, xmm0, dword ptr [rcx-10h]
            vmovss  xmm0, dword ptr [r8+rcx-10h]
            vaddss  xmm2, xmm1, xmm6
            vcvttss2si eax, xmm2
          }
          *(v88 - 4) = _EAX - 0x4000;
          __asm
          {
            vmulss  xmm1, xmm0, dword ptr [rcx-0Ch]
            vaddss  xmm2, xmm1, xmm6
            vcvttss2si eax, xmm2
          }
          *(v88 - 3) = _EAX - 0x4000;
          --v86;
        }
        while ( v86 );
      }
      v16 += 64;
      start_col += 8;
      --v18;
    }
    while ( v18 );
    __asm
    {
      vmovaps xmm7, [rsp+198h+var_58]
      vmovaps xmm6, [rsp+198h+var_48]
    }
  }
}

/*
==============
jinit_forward_dct
==============
*/
void jinit_forward_dct(jpeg_compress_struct *cinfo)
{
  jpeg_forward_dct *v2; 
  J_DCT_METHOD dct_method; 
  __int32 v4; 
  void (__fastcall *v5)(int *); 

  v2 = (jpeg_forward_dct *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 96i64);
  cinfo->fdct = v2;
  v2->start_pass = start_pass_fdctmgr;
  dct_method = cinfo->dct_method;
  if ( dct_method == JDCT_ISLOW )
  {
    v2->forward_DCT = forward_DCT;
    v5 = j_jpeg_fdct_islow;
    goto LABEL_8;
  }
  v4 = dct_method - 1;
  if ( !v4 )
  {
    v2->forward_DCT = forward_DCT;
    v5 = j_jpeg_fdct_ifast;
LABEL_8:
    v2[1].start_pass = (void (__fastcall *)(jpeg_compress_struct *))v5;
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    v2->forward_DCT = forward_DCT_float;
    v2[3].forward_DCT = (void (__fastcall *)(jpeg_compress_struct *, jpeg_component_info *, unsigned __int8 **, __int16 (*)[64], unsigned int, unsigned int, unsigned int))j_jpeg_fdct_float;
  }
  else
  {
    cinfo->err->msg_code = 48;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
LABEL_9:
  v2[1].forward_DCT = NULL;
  v2[4].start_pass = NULL;
  v2[2].start_pass = NULL;
  v2[4].forward_DCT = NULL;
  v2[2].forward_DCT = NULL;
  v2[5].start_pass = NULL;
  v2[3].start_pass = NULL;
  v2[5].forward_DCT = NULL;
}

/*
==============
start_pass_fdctmgr
==============
*/
void start_pass_fdctmgr(jpeg_compress_struct *cinfo)
{
  jpeg_forward_dct *fdct; 
  int v10; 
  int *p_quant_tbl_no; 
  __int64 v20; 
  __int64 v21; 
  J_DCT_METHOD dct_method; 
  JQUANT_TBL *v23; 
  __int32 v24; 
  unsigned __int64 v77; 
  unsigned __int64 v78; 
  const __int16 *v79; 
  signed __int64 v80; 
  int v81; 
  int v82; 
  __int64 v87; 
  unsigned __int64 v119; 
  __int64 v120; 
  __int64 v125; 
  void *retaddr; 

  _R11 = &retaddr;
  fdct = cinfo->fdct;
  v10 = 0;
  if ( cinfo->num_components > 0 )
  {
    p_quant_tbl_no = &cinfo->comp_info->quant_tbl_no;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovsd  xmm6, cs:__real@3fc0000000000000
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovsd  xmm7, cs:__real@3fb7121a553f020e
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovsd  xmm8, cs:__real@3fb87de2a6a4b571
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovsd  xmm9, cs:__real@3fbb36b92cbb96ff
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovsd  xmm10, cs:__real@3fc45d381a1f4fb3
      vmovaps [rsp+0B8h+var_88], xmm11
      vmovsd  xmm11, cs:__real@3fcd906bcf54da60
      vmovaps [rsp+0B8h+var_98], xmm12
      vmovsd  xmm12, cs:__real@3fdcfefefd02b69d
    }
    do
    {
      v20 = *p_quant_tbl_no;
      v21 = v20;
      if ( (unsigned int)v20 > 3 || !cinfo->quant_tbl_ptrs[v20] )
      {
        cinfo->err->msg_code = 52;
        cinfo->err->msg_parm.i[0] = v20;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      dct_method = cinfo->dct_method;
      v23 = cinfo->quant_tbl_ptrs[v21];
      if ( dct_method )
      {
        v24 = dct_method - 1;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            _RDX = *((_QWORD *)&fdct[4].start_pass + v21);
            if ( !_RDX )
            {
              _RDX = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
              *((_QWORD *)&fdct[4].start_pass + v21) = _RDX;
            }
            _R8 = 0i64;
            _R9 = aanscalefactor;
            do
            {
              _ECX = v23->quantval[_R8];
              _R8 += 8i64;
              __asm
              {
                vmovsd  xmm2, qword ptr [r9]
                vmovd   xmm0, ecx
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm6, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-20h], xmm0
              }
              _EAX = v23->quantval[_R8 - 7];
              ++_R9;
              __asm
              {
                vmovd   xmm1, eax
                vcvtdq2pd xmm1, xmm1
                vmulsd  xmm0, xmm1, xmm2
                vdivsd  xmm0, xmm7, xmm0
                vcvtsd2ss xmm1, xmm0, xmm0
                vmovss  dword ptr [rdx+r8*4-1Ch], xmm1
              }
              _EAX = v23->quantval[_R8 - 6];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm8, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-18h], xmm0
              }
              _EAX = v23->quantval[_R8 - 5];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm9, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-14h], xmm0
              }
              _EAX = v23->quantval[_R8 - 4];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm6, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-10h], xmm0
              }
              _EAX = v23->quantval[_R8 - 3];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm10, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-0Ch], xmm0
              }
              _EAX = v23->quantval[_R8 - 2];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm11, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-8], xmm0
              }
              _EAX = v23->quantval[_R8 - 1];
              __asm
              {
                vmovd   xmm0, eax
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm2
                vdivsd  xmm1, xmm12, xmm1
                vcvtsd2ss xmm0, xmm1, xmm1
                vmovss  dword ptr [rdx+r8*4-4], xmm0
              }
            }
            while ( (__int64)_R9 < (__int64)&unk_1447509C0 );
          }
          else
          {
            cinfo->err->msg_code = 48;
            cinfo->err->error_exit((jpeg_common_struct *)cinfo);
          }
        }
        else
        {
          v77 = *((_QWORD *)&fdct[1].forward_DCT + v21);
          if ( !v77 )
          {
            v77 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
            *((_QWORD *)&fdct[1].forward_DCT + v21) = v77;
          }
          v78 = v77 + 252;
          if ( (v77 > (unsigned __int64)&aanscales[63] || v78 < (unsigned __int64)aanscales) && (v77 > (unsigned __int64)&v23->quantval[63] || v78 < (unsigned __int64)v23) )
          {
            __asm { vmovdqu xmm4, cs:__xmm@00000400000004000000040000000400 }
            _EAX = 11;
            _R8 = v77 + 32;
            _RCX = (char *)((char *)aanscales - (char *)v23);
            v87 = 4i64;
            __asm { vmovd   xmm5, eax }
            _RDX = (char *)((char *)&aanscales[4] - (char *)v23);
            _RAX = &v23->quantval[8];
            do
            {
              _R8 += 64i64;
              __asm
              {
                vmovq   xmm0, qword ptr [rax+rcx-10h]
                vmovq   xmm1, qword ptr [rax-10h]
              }
              _RAX += 16;
              __asm
              {
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
                vmovq   xmm0, qword ptr [rax+rdx-30h]
                vpaddd  xmm3, xmm2, xmm4
                vpmovsxwd xmm2, xmm0
                vpsrad  xmm1, xmm3, xmm5
                vmovdqu xmmword ptr [r8-60h], xmm1
                vmovq   xmm1, qword ptr [rax-28h]
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
                vmovq   xmm0, qword ptr [rax+rcx-20h]
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
                vmovdqu xmmword ptr [r8-50h], xmm1
                vmovq   xmm1, qword ptr [rax-20h]
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
                vmovq   xmm0, qword ptr [rax+rdx-20h]
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
                vmovdqu xmmword ptr [r8-40h], xmm1
                vmovq   xmm1, qword ptr [rax-18h]
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
                vmovdqu xmmword ptr [r8-30h], xmm1
              }
              --v87;
            }
            while ( v87 );
          }
          else
          {
            v79 = aanscales;
            v80 = (char *)v23 - (char *)aanscales;
            do
            {
              v81 = *(unsigned __int16 *)((char *)v79 + v80);
              v77 += 4i64;
              v82 = *v79++;
              *(_DWORD *)(v77 - 4) = (v82 * v81 + 1024) >> 11;
            }
            while ( (__int64)v79 < (__int64)aanscalefactor );
          }
        }
      }
      else
      {
        v119 = *((_QWORD *)&fdct[1].forward_DCT + v21);
        if ( !v119 )
        {
          v119 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
          *((_QWORD *)&fdct[1].forward_DCT + v21) = v119;
        }
        v120 = 0i64;
        if ( v119 > (unsigned __int64)&v23->quantval[63] || v119 + 252 < (unsigned __int64)v23 )
        {
          _EAX = 3;
          _RBX = &v23->quantval[8];
          __asm { vmovd   xmm3, eax }
          _RAX = v119 + 32;
          v125 = 4i64;
          do
          {
            _RAX += 64i64;
            __asm { vmovq   xmm0, qword ptr [rbx-10h] }
            _RBX += 16;
            __asm
            {
              vpmovzxwd xmm1, xmm0
              vmovq   xmm0, qword ptr [rbx-28h]
              vpslld  xmm2, xmm1, xmm3
              vmovdqu xmmword ptr [rax-60h], xmm2
              vpmovzxwd xmm1, xmm0
              vmovq   xmm0, qword ptr [rbx-20h]
              vpslld  xmm2, xmm1, xmm3
              vmovdqu xmmword ptr [rax-50h], xmm2
              vpmovzxwd xmm1, xmm0
              vmovq   xmm0, qword ptr [rbx-18h]
              vpslld  xmm2, xmm1, xmm3
              vmovdqu xmmword ptr [rax-40h], xmm2
              vpmovzxwd xmm1, xmm0
              vpslld  xmm2, xmm1, xmm3
              vmovdqu xmmword ptr [rax-30h], xmm2
            }
            --v125;
          }
          while ( v125 );
        }
        else
        {
          do
          {
            *(_DWORD *)(v119 + 4 * v120) = 8 * v23->quantval[v120];
            ++v120;
          }
          while ( v120 < 64 );
        }
      }
      ++v10;
      p_quant_tbl_no += 24;
    }
    while ( v10 < cinfo->num_components );
    __asm
    {
      vmovaps xmm12, [rsp+0B8h+var_98]
      vmovaps xmm11, [rsp+0B8h+var_88]
      vmovaps xmm10, [rsp+0B8h+var_78]
      vmovaps xmm9, [rsp+0B8h+var_68]
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
  }
}

