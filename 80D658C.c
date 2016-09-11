int __fastcall sub_80D658C(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) - 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == -1 )
  {
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    *(_WORD *)(v1 + 56) = *(_WORD *)(v1 + 54);
  }
  v3 = *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v3 - 1;
  if ( v3 << 16 <= 0 )
    move_anim_8072740(v1);
  return v5;
}
