int __fastcall sub_80DAF0C(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  __int16 v3; // r0@1
  int v4; // r6@2
  int v5; // r3@2
  int v6; // r0@2
  unsigned int v7; // r1@3
  signed __int16 v8; // r0@5
  unsigned int v9; // r0@10
  int v11; // [sp+0h] [bp-28h]@3
  unsigned __int16 v12; // [sp+4h] [bp-24h]@10
  unsigned __int16 v13; // [sp+6h] [bp-22h]@3
  __int16 v14; // [sp+Eh] [bp-1Ah]@10
  int v15; // [sp+24h] [bp-4h]@11

  v1 = a1;
  v2 = a1 + 46;
  v3 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v3;
  if ( v3 > 4 )
  {
    v4 = *(_WORD *)(v1 + 58) * (signed int)*(_WORD *)(v1 + 54) >> 8;
    *(_WORD *)(v1 + 36) = v4;
    v5 = *(_WORD *)(v1 + 58) * (signed int)*(_WORD *)(v1 + 56) >> 8;
    *(_WORD *)(v1 + 38) = v5;
    v6 = (*(_WORD *)(v1 + 52) & 0xFF) + *(_WORD *)(v1 + 58);
    *(_WORD *)(v1 + 58) = v6;
    if ( (signed __int16)v6 >= (*(_WORD *)(v1 + 50) & 0xFF) )
    {
      *(_WORD *)(v1 + 32) += v4;
      *(_WORD *)(v1 + 34) += v5;
      *(_WORD *)(v1 + 36) = 0;
      *(_WORD *)(v1 + 38) = 0;
      memcpy(&v11, (const char *)v2, 16);
      memset(v2, 0, 16);
      *(_WORD *)(v2 + 8) = *(_WORD *)(v1 + 34) << 8;
      v7 = (unsigned int)v13 >> 8;
      *(_WORD *)(v2 + 6) = v7;
      *(_WORD *)(v2 + 2) = 0;
      *(_WORD *)(v2 + 10) = HIWORD(v11);
      if ( *(_BYTE *)(v1 + 42) )
      {
        if ( v7 & 8 )
          v8 = -32767;
        else
          v8 = -32766;
      }
      else if ( v7 & 8 )
      {
        v8 = 1;
      }
      else
      {
        v8 = 2;
      }
      *(_WORD *)(v2 + 4) = v8;
      v9 = (unsigned int)v12 >> 8;
      *(_BYTE *)(v2 + 12) = HIBYTE(v12);
      *(_BYTE *)(v2 + 13) = v9 - 2;
      *(_WORD *)(v2 + 14) = *(_WORD *)(v2 + 14) & 1 | 2 * v14;
      *(_DWORD *)(v1 + 28) = sub_80DA6F0;
    }
  }
  return v15;
}
