int __fastcall sub_80D7A28(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 20 )
    move_anim_8074EE0(v1);
  return v4;
}
