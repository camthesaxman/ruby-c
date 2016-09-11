int __fastcall sub_80CDF70(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > (signed int)*(_WORD *)(v1 + 48) )
  {
    *(_WORD *)(v1 + 46) = 0;
    --*(_WORD *)(v1 + 34);
  }
  *(_WORD *)(v1 + 34) -= *(_WORD *)(v1 + 46);
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    move_anim_8072740(v1);
  return v4;
}
