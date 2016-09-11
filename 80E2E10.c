int __fastcall sub_80E2E10(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@4
  char *v4; // r3@7
  char v5; // r2@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 8) )
  {
    if ( *((_WORD *)v2 + 5) )
    {
      --*((_WORD *)v2 + 5);
    }
    else
    {
      v3 = duplicate_obj_of_side_rel2move_in_transparent_mode(*((_BYTE *)v2 + 8));
      *((_WORD *)v2 + 10) = v3;
      if ( !(v3 & 0x8000) )
      {
        v5 = 2;
        if ( *((_WORD *)v2 + 4) )
          v5 = 1;
        v4 = &gSprites[68 * *((_WORD *)v2 + 10)];
        v4[5] = v4[5] & 0xF3 | 4 * v5;
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 10) + 46] = *((_WORD *)v2 + 7);
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 10) + 48] = v1;
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 10) + 50] = 5;
        dword_2020020[17 * *((_WORD *)v2 + 10)] = (int)sub_80E2EE8;
        ++*((_WORD *)v2 + 9);
      }
      --*((_WORD *)v2 + 8);
      *((_WORD *)v2 + 5) = *((_WORD *)v2 + 6);
    }
  }
  else if ( !*((_WORD *)v2 + 9) )
  {
    move_anim_task_del(a1);
  }
  return v7;
}
