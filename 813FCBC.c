int __fastcall sub_813FCBC(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( gSprites[68 * *(_BYTE *)((unsigned __int8)battle_get_side_with_given_state(0) + 0x2024BE0) + 43] == 1 )
  {
    audio_play_and_stuff(0x3Du, 0);
    v2 = &dword_3004B20[10 * v1];
    dword_2020020[17 * *((_WORD *)v2 + 4)] = (int)sub_813FD90;
    CreateTask((int)sub_813FD34, 10);
    *v2 = (int)sub_813FB7C;
  }
  return v4;
}
