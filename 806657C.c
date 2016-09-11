signed int __fastcall sub_806657C(int a1)
{
  _BYTE *v1; // r1@1
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r0@3
  char v6; // [sp+4h] [bp-14h]@1
  char v7; // [sp+6h] [bp-12h]@1

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  PlayerGetDestCoords(&v6, &v7);
  if ( v2 != 255 || v3 != 255 )
    v4 = warp1_set(v2, v3, -1, v6 - 7, v7 - 7);
  else
    v4 = sub_8053720(v6 - 7, v7 - 7);
  sp13F_fall_to_last_warp(v4);
  player_avatar_init_params_reset();
  return 1;
}
