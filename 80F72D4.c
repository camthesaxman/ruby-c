signed int sub_80F72D4()
{
  signed int v0; // r2@1
  int v1; // r5@1
  int v2; // r4@7
  _BYTE *v3; // r1@9
  int v4; // r4@10
  int v5; // r4@14

  v0 = *(_BYTE *)(v20388B8 + 4272);
  v1 = v20388B8 + (v0 << 8) + 48;
  if ( v0 == 13 )
  {
    CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 192, v20388B8 + 3376, 8);
    v5 = 0;
    do
    {
      CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 224, v1 + 32 * ++v5, 8);
      v5 = (unsigned __int16)v5;
    }
    while ( (unsigned __int16)v5 <= 5u );
    CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 256, v1 + 224, 8);
    ++*(_BYTE *)(v20388B8 + 4272);
  }
  else
  {
    if ( v0 <= 13 )
    {
      if ( !*(_BYTE *)(v20388B8 + 4272) )
      {
        CpuFastSet(*(_DWORD *)(v20388B8 + 40), v20388B8 + (*(_BYTE *)(v20388B8 + 4272) << 8) + 48, 8);
        v2 = 0;
        do
        {
          CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 32, v1 + 32 * ++v2, 8);
          v2 = (unsigned __int16)v2;
        }
        while ( (unsigned __int16)v2 <= 5u );
        CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 64, v1 + 224, 8);
        v3 = (_BYTE *)(v20388B8 + 4272);
        goto _080F7392;
      }
_080F734C:
      CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 96, v20388B8 + (*(_BYTE *)(v20388B8 + 4272) << 8) + 48, 8);
      v4 = 0;
      do
      {
        CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 128, v1 + 32 * ++v4, 8);
        v4 = (unsigned __int16)v4;
      }
      while ( (unsigned __int16)v4 <= 5u );
      CpuFastSet(*(_DWORD *)(v20388B8 + 40) + 160, v1 + 224, 8);
      v3 = (_BYTE *)(v20388B8 + 4272);
_080F7392:
      ++*v3;
      return 1;
    }
    if ( v0 != 14 )
      goto _080F734C;
  }
  return 0;
}
