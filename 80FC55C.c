int __fastcall sub_80FC55C(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( v200001C == *(_WORD *)(a1 + 46) )
  {
    v2 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v2;
    if ( v2 > 16 )
    {
      *(_WORD *)(v1 + 48) = 0;
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
    }
  }
  else
  {
    *(_WORD *)(a1 + 48) = 16;
    *(_BYTE *)(a1 + 62) &= 0xFBu;
  }
  return v4;
}
