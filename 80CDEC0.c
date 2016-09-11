int __fastcall sub_80CDEC0(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 8 )
      move_anim_8072740(v1);
  }
  return v5;
}
