int __fastcall sub_80DE8D8(int a1)
{
  int v1; // r2@1
  __int16 v2; // r3@1
  int v3; // r0@2
  int v4; // r1@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54);
  if ( *(_WORD *)(a1 + 54) )
  {
    v3 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 46);
    *(_WORD *)(v1 + 46) = v3;
    v4 = *(_WORD *)(v1 + 52) + *(_WORD *)(v1 + 48);
    *(_WORD *)(v1 + 48) = v4;
    *(_WORD *)(v1 + 32) = v3 << 16 >> 20;
    *(_WORD *)(v1 + 34) = v4 << 16 >> 20;
    *(_WORD *)(v1 + 54) = v2 - 1;
    if ( v2 == 1 )
      *(_WORD *)(v1 + 46) = 0;
  }
  return v6;
}
