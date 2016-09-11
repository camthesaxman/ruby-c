int __fastcall sub_80DB508(int a1)
{
  int v1; // r4@1
  int v2; // r3@2
  __int16 v3; // r0@2
  int v4; // r2@4
  __int16 v5; // r0@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 50) )
  {
    v2 = *(_WORD *)(a1 + 46);
    v3 = *(_WORD *)(a1 + 36) - (v2 << 16 >> 24);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 46);
    v3 = (v2 << 16 >> 24) + *(_WORD *)(a1 + 36);
  }
  *(_WORD *)(v1 + 36) = v3;
  v4 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 38) -= v4 << 16 >> 24;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 48) = v4 - 32;
  if ( v2 & 0x8000 )
    *(_WORD *)(v1 + 46) = 0;
  v5 = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v5;
  if ( v5 == 31 )
    move_anim_8072740(v1);
  return v7;
}
