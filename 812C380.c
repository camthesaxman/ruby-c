int __fastcall sub_812C380(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v3; // r0@4
  __int16 v4; // r0@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v4000052 = ((16 - *(_WORD *)(a1 + 46)) << 8) | *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 48) )
    v2 = *(_WORD *)(a1 + 46) - 1;
  else
    v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  v3 = *(_WORD *)(v1 + 46);
  if ( v3 == 15 || v3 == 4 )
    *(_WORD *)(v1 + 48) ^= 1u;
  v4 = *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 50) = v4 + 1;
  if ( v4 > 70 )
  {
    v4000050 = 0;
    v4000052 = 0;
    StartSpriteAffineAnim(v1, 1);
    *(_WORD *)(v1 + 50) = 0;
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_BYTE *)(v1 + 44) |= 0x80u;
    *(_DWORD *)(v1 + 28) = sub_812C40C;
  }
  return v6;
}
