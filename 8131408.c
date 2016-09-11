int __fastcall sub_8131408(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r3@1
  int *v3; // r4@1
  signed int v4; // r5@1
  char *v5; // r1@8
  int v6; // r1@9
  char *v7; // r2@9
  char v8; // r0@14
  __int16 v9; // r0@15
  int v10; // r0@19
  char *v11; // r1@19
  int v12; // r0@19
  char v13; // r0@22
  int v15; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 4);
  if ( v4 == 1 )
  {
    v6 = *((_WORD *)v3 + 14) + 112;
    *((_WORD *)v3 + 14) = v6;
    v7 = &gSprites[68 * v2];
    *((_WORD *)v7 + 19) += v6 << 16 >> 24;
    if ( *((_WORD *)v7 + 17) + (signed int)*((_WORD *)v7 + 19) >= -32 )
      *((_WORD *)v7 + 18) = 0;
    if ( (signed int)*((_WORD *)v7 + 19) > 0 )
      *((_WORD *)v7 + 19) = 0;
    if ( !*((_WORD *)v7 + 19) )
    {
      v8 = sub_8076F98(0xC0u);
      audio_play_and_stuff(0x7Du, v8);
      *((_WORD *)v3 + 14) -= 2048;
      goto _08131506;
    }
  }
  else
  {
    if ( v4 <= 1 )
    {
      if ( *((_WORD *)v3 + 4) )
        return v15;
      v5 = &gSprites[68 * v2];
      *((_WORD *)v5 + 19) = -200;
      *((_WORD *)v5 + 18) = 200;
      v5[62] &= 0xFBu;
      *((_WORD *)v3 + 14) = 0;
      goto _08131506;
    }
    if ( v4 != 2 )
    {
      if ( v4 == 3 )
      {
        v10 = *((_WORD *)v3 + 14) + 112;
        *((_WORD *)v3 + 14) = v10;
        v11 = &gSprites[68 * v2];
        v12 = (v10 << 16 >> 24) + *((_WORD *)v11 + 19);
        *((_WORD *)v11 + 19) = v12;
        if ( v12 << 16 > 0 )
          *((_WORD *)v11 + 19) = 0;
        if ( !*((_WORD *)v11 + 19) )
        {
          v13 = sub_8076F98(0xC0u);
          audio_play_and_stuff(0x7Du, v13);
          move_anim_task_del(v1);
        }
      }
      return v15;
    }
    v9 = *((_WORD *)v3 + 14) - 112;
    *((_WORD *)v3 + 14) = v9;
    if ( v9 & 0x8000 )
      *((_WORD *)v3 + 14) = 0;
    *(_WORD *)&gSprites[68 * v2 + 38] -= LOWORD(dword_3004B20[10 * v1 + 7]) << 16 >> 24;
    if ( !*((_WORD *)v3 + 14) )
    {
_08131506:
      ++*((_WORD *)v3 + 4);
      return v15;
    }
  }
  return v15;
}
