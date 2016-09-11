int __fastcall sub_80D9328(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  __int16 v3; // r2@2
  __int16 v4; // r4@2
  __int16 v5; // r1@2
  __int16 v6; // r3@2
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == 11 )
  {
    v3 = *(_WORD *)(v1 + 32);
    v4 = *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 50) = v3 - v4;
    v5 = *(_WORD *)(v1 + 34);
    v6 = *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 54) = v5 - v6;
    *(_WORD *)(v1 + 46) = 8;
    *(_WORD *)(v1 + 32) = v3 + v4;
    *(_WORD *)(v1 + 34) = v5 + v6;
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 28) = sub_8078B34;
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
  }
  return v8;
}
