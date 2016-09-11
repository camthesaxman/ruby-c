int __fastcall sub_80D6BB8(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  int *v2; // r5@1
  __int16 v3; // r0@2
  int v4; // r0@3
  char *v5; // r4@4
  __int16 v6; // r3@4
  __int16 v7; // r2@4
  __int16 v8; // r0@4
  __int16 v9; // r0@6
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 10) )
  {
    v3 = *((_WORD *)v2 + 16) + 1;
    *((_WORD *)v2 + 16) = v3;
    if ( v3 > (signed int)*((_WORD *)v2 + 17) )
    {
      *((_WORD *)v2 + 16) = 0;
      v4 = (unsigned __int8)CreateSprite((int)"ã'ã'$ß7\b°™=\b", *((_WORD *)v2 + 18), *((_WORD *)v2 + 19));
      if ( v4 != 64 )
      {
        v5 = &gSprites[68 * v4];
        v6 = gUnknown_083D9968[2 * *((_WORD *)v2 + 13)] + *((_WORD *)v5 + 16);
        *((_WORD *)v5 + 16) = v6;
        v7 = gUnknown_083D9968[2 * *((_WORD *)v2 + 13) + 1] + *((_WORD *)v5 + 17);
        *((_WORD *)v5 + 17) = v7;
        *((_WORD *)v5 + 23) = 40 - 5 * *((_WORD *)v2 + 12);
        *((_WORD *)v5 + 24) = v6;
        *((_WORD *)v5 + 25) = *((_WORD *)v2 + 18);
        *((_WORD *)v5 + 26) = v7;
        *((_WORD *)v5 + 27) = *((_WORD *)v2 + 19);
        *((_WORD *)v5 + 28) = v1;
        obj_translate_based_on_private_1_2_3_4((int)v5);
        oamt_set_x3A_32((int)v5, (int)sub_80D6D00);
        *((_DWORD *)v5 + 7) = sub_8078600;
        v8 = *((_WORD *)v2 + 13) + 1;
        *((_WORD *)v2 + 13) = v8;
        if ( v8 > 15 )
          *((_WORD *)v2 + 13) = 0;
        v9 = *((_WORD *)v2 + 14) + 1;
        *((_WORD *)v2 + 14) = v9;
        if ( v9 >= (signed int)*((_WORD *)v2 + 15) )
        {
          *((_WORD *)v2 + 14) = 0;
          if ( (signed int)*((_WORD *)v2 + 12) <= 5 )
            ++*((_WORD *)v2 + 12);
        }
        ++*((_WORD *)v2 + 11);
        --*((_WORD *)v2 + 10);
      }
    }
  }
  else if ( !*((_WORD *)v2 + 11) )
  {
    move_anim_task_del(a1);
  }
  return v11;
}
