int __fastcall sub_810562C(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(v1 + 46) )
  {
    *(_WORD *)(v1 + 46) = v2 - 1;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 38) = 0;
    *(_BYTE *)(v1 + 62) |= 4u;
  }
  else
  {
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 48);
    *(_WORD *)(v1 + 38) += *(_WORD *)(v1 + 50);
    v3 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v3;
    if ( v3 > 7 )
    {
      *(_WORD *)(v1 + 46) = *(_WORD *)(v1 + 60);
      *(_WORD *)(v1 + 52) = 0;
    }
  }
  return v5;
}
