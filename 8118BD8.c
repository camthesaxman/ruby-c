int __fastcall sub_8118BD8(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r1@1
  __int16 v4; // r4@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  v3 = v2 + 1;
  *(_WORD *)(v1 + 50) = v2 + 1;
  if ( v2 > 44 )
  {
    if ( v3 >= (signed int)*(_WORD *)(v1 + 60) )
    {
      *(_BYTE *)(v1 + 44) &= 0xBFu;
      *(_BYTE *)(v1 + 42) = 1;
      *(_BYTE *)(v1 + 63) = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
      *(_WORD *)(v1 + 50) = 0;
      *(_DWORD *)(v1 + 28) = sub_8118B30;
      m4aSongNumStart(61);
    }
    else if ( !((unsigned __int8)gSprites[68 * v2019073 + 44] << 26) )
    {
      if ( gSprites[68 * v2019073 + 43] == 1 )
        ++*(_WORD *)(v1 + 38);
      else
        --*(_WORD *)(v1 + 38);
    }
  }
  else
  {
    v4 = *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 38) = v4 - 1;
    if ( v3 == 45 && gSprites[68 * v2019073 + 43] == 1 )
      *(_WORD *)(v1 + 38) = v4;
  }
  return v6;
}
