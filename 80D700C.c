int __fastcall sub_80D700C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r0@1
  int v4; // r0@7
  signed __int16 v5; // r1@7
  signed __int16 v6; // r0@12
  __int16 v7; // r1@18
  int v8; // r0@22
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v8 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v8;
    if ( v8 << 16 > 0 )
    {
      *((_WORD *)v2 + 6) = 0;
      if ( sub_80D7194(v2, v1) << 24 || sub_80D7194(v2, v1) << 24 )
      {
_080D7178:
        ++*((_WORD *)v2 + 4);
        return v10;
      }
    }
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v10;
      v4 = battle_side_get_owner(v202F7C8);
      v5 = -1;
      if ( !(v4 << 24) )
        v5 = 1;
      *((_WORD *)v2 + 5) = v5;
      if ( word_3004B00[0] )
      {
        if ( word_3004B00[0] == 4 )
        {
          *((_WORD *)v2 + 7) = 120 - (*((_WORD *)v2 + 5) << 7);
          *((_WORD *)v2 + 9) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
          *((_WORD *)v2 + 8) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) - 32 * *((_WORD *)v2 + 5);
        }
        else
        {
          if ( word_3004B00[0] & 1 )
          {
            *((_WORD *)v2 + 7) = 256;
            v6 = -16;
          }
          else
          {
            *((_WORD *)v2 + 7) = -16;
            v6 = 256;
          }
          *((_WORD *)v2 + 8) = v6;
          if ( *((_WORD *)v2 + 5) == 1 )
          {
            *((_WORD *)v2 + 9) = 80 - 10 * word_3004B00[0];
          }
          else
          {
            *((_WORD *)v2 + 9) = 10 * word_3004B00[0] + 40;
            v7 = *((_WORD *)v2 + 7);
            *((_WORD *)v2 + 7) = *((_WORD *)v2 + 8);
            *((_WORD *)v2 + 8) = v7;
          }
        }
      }
      else
      {
        *((_WORD *)v2 + 7) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
        *((_WORD *)v2 + 9) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
        *((_WORD *)v2 + 8) = (*((_WORD *)v2 + 5) << 7) + 120;
      }
      if ( *((_WORD *)v2 + 7) >= (signed int)*((_WORD *)v2 + 8) )
      {
        *((_WORD *)v2 + 5) = -1;
        *((_WORD *)v2 + 10) = 3;
      }
      else
      {
        *((_WORD *)v2 + 5) = 1;
        *((_WORD *)v2 + 10) = 0;
      }
      goto _080D7178;
    }
    if ( v3 == 2 && !*((_WORD *)v2 + 11) )
      move_anim_task_del(v1);
  }
  return v10;
}
