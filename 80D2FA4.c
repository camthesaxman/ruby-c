int __fastcall sub_80D2FA4(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  __int16 v3; // r0@1
  int v4; // r1@1
  __int16 v5; // r0@3
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  v3 = v2 + *(_WORD *)(a1 + 52);
  *(_WORD *)(v1 + 52) = v3;
  *(_WORD *)(v1 + 38) = v3;
  v4 = v2 + 1;
  *(_WORD *)(v1 + 50) = v4;
  if ( v3 > 48 && v4 << 16 > 0 )
  {
    v5 = *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 50) = v5 - 5;
    *(_WORD *)(v1 + 54) = v5 + 1;
  }
  if ( (signed int)*(_WORD *)(v1 + 54) > 3 )
  {
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (*(_WORD *)(v1 + 50) % 2 & 1);
    move_anim_8072740(v1);
  }
  if ( *(_WORD *)(v1 + 54) == 4 )
    move_anim_8072740(v1);
  return v7;
}
