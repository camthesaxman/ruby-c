int __fastcall s33_play_music(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  int v3; // r5@1
  _BYTE *v4; // r0@1
  int v5; // r1@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)v2;
  v4 = *(_BYTE **)(v1 + 8);
  v5 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  if ( v5 == 1 )
    sav1_set_battle_music_maybe(v2);
  current_map_music_set(v3);
  return 0;
}
