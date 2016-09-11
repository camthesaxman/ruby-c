int __fastcall sub_8130A94(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v3; // r1@2
  int v4; // r0@3
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 48) )
  {
    *(_WORD *)(v1 + 46) = 0;
    v3 = (*(_WORD *)(v1 + 50) + 1) & 1;
    *(_WORD *)(v1 + 50) = v3;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * v3;
    if ( *(_WORD *)(v1 + 50) )
    {
      v4 = *(_WORD *)(v1 + 52) - 1;
      *(_WORD *)(v1 + 52) = v4;
      if ( !(v4 << 16) )
        move_anim_8072740(v1);
    }
  }
  return v6;
}
