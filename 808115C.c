int __fastcall sub_808115C(unsigned __int8 a1)
{
  int v1; // r1@1
  int *v2; // r5@1
  int *v3; // r4@1
  char *v4; // r6@1
  unsigned int v5; // r1@1
  unsigned __int16 v6; // r0@3
  int v7; // r0@4
  unsigned __int8 v8; // r0@6
  unsigned __int8 v9; // r0@6
  unsigned __int8 v10; // r0@8
  int v11; // r0@9
  int v13; // [sp+Ch] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = &dword_3004B20[v1 + 3];
  v4 = (char *)&dword_3004B20[v1 + 3] + 2;
  v5 = LOWORD(dword_3004B20[v1 + 2]);
  if ( v5 <= 4 )
  {
    switch ( v5 )
    {
      case 0u:
        player_bitmagic();
        PlayerGetDestCoords(v3, v4);
        v6 = sub_8058790(*(_WORD *)v3, *(_WORD *)v4 - 1);
        audio_play(v6);
        *((_WORD *)v2 + 5) = (char)task_overworld_door_add_if_role_69_for_opening_door_at(
                                     *(_WORD *)v3,
                                     *(_WORD *)v4 - 1);
        *((_WORD *)v2 + 4) = 1;
        break;
      case 1u:
        v7 = *((_WORD *)v2 + 5);
        if ( v7 < 0 || LOBYTE(dword_3004B20[10 * v7 + 1]) != 1 )
        {
          v8 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
          FieldObjectClearAnimIfSpecialAnimActive(&dword_30048A0[9 * v8]);
          v9 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
          FieldObjectSetSpecialAnim(&dword_30048A0[9 * v9], 9);
          *((_WORD *)v2 + 4) = 2;
        }
        break;
      case 2u:
        if ( walkrun_is_standing_still() << 24 )
        {
          *((_WORD *)v2 + 5) = (char)sub_805870C(*(_WORD *)v3, *(_WORD *)v4 - 1);
          v10 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
          FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v10]);
          sub_8080958(0);
          *((_WORD *)v2 + 4) = 3;
        }
        break;
      case 3u:
        v11 = *((_WORD *)v2 + 5);
        if ( v11 < 0 || LOBYTE(dword_3004B20[10 * v11 + 1]) != 1 )
          *((_WORD *)v2 + 4) = 4;
        break;
      case 4u:
        sub_8053FF8();
        sub_8080918();
        play_some_sound();
        *((_WORD *)v2 + 4) = 0;
        *v2 = (int)task0A_fade_n_map_maybe;
        break;
      default:
        return v13;
    }
  }
  return v13;
}
