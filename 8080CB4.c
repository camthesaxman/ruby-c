int __fastcall task_map_chg_seq_0807E20C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r0@1
  int *v4; // r4@10
  unsigned __int8 v5; // r0@10
  char v6; // r0@10
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( sub_8080E70() )
    {
      sub_8080958(1);
      v4 = &dword_30048A0[9 * (unsigned __int8)GetFieldObjectIdByLocalIdAndMap(0xFFu)];
      v5 = player_get_direction_lower_nybble();
      v6 = GetGoSpeed0AnimId(v5);
      FieldObjectSetSpecialAnim(v4, v6);
      *((_WORD *)v2 + 4) = 2;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      if ( walkrun_is_standing_still() << 24 )
      {
        sub_806451C();
        *((_WORD *)v2 + 4) = 3;
      }
    }
    else if ( v3 == 3 )
    {
      script_env_2_disable();
      DestroyTask(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    sub_8080958(0);
    player_bitmagic();
    PlayerGetDestCoords((_WORD *)v2 + 6, (_WORD *)v2 + 7);
    *((_WORD *)v2 + 4) = 1;
  }
  return v8;
}
