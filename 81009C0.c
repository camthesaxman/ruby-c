int __fastcall sub_81009C0(int a1)
{
  int v1; // r2@1
  _BYTE *v2; // r3@3
  char v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 60) )
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
  }
  else
  {
    if ( (signed int)*(_WORD *)(a1 + 58) > 14 )
    {
      v2 = (_BYTE *)(a1 + 62);
      v3 = *(_BYTE *)(a1 + 62) | 4;
    }
    else
    {
      v2 = (_BYTE *)(a1 + 62);
      v3 = *(_BYTE *)(a1 + 62) & 0xFB;
    }
    *v2 = v3;
    *(_WORD *)(v1 + 58) = (*(_WORD *)(v1 + 58) + 1) & 0x1F;
  }
  return v5;
}
