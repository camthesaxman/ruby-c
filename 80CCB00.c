int __fastcall sub_80CCB00(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  __int16 v3; // r0@2
  __int16 v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 52) += v2;
  *(_WORD *)(a1 + 54) += *(_WORD *)(a1 + 50);
  if ( *(_WORD *)(a1 + 56) )
    v3 = v2 - 24;
  else
    v3 = v2 + 24;
  *(_WORD *)(v1 + 48) = v3;
  *(_WORD *)(v1 + 50) -= 24;
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 52) << 16 >> 24;
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 54) << 16 >> 24;
  v4 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v4;
  if ( v4 == 20 )
  {
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
    *(_WORD *)(v1 + 46) = 3;
    *(_DWORD *)(v1 + 28) = sub_80782D8;
  }
  return v6;
}
