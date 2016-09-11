int __fastcall sub_8079814(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r2@3
  __int16 v5; // r2@5
  __int16 v6; // r1@5
  int v7; // r0@6
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 8) + 1;
  *((_WORD *)v2 + 8) = v3;
  if ( v3 >= (signed int)*((_WORD *)v2 + 9) )
  {
    *((_WORD *)v2 + 8) = 0;
    if ( *((_WORD *)v2 + 10) )
    {
      v5 = *((_WORD *)v2 + 6) - 1;
      *((_WORD *)v2 + 6) = v5;
      BlendPalette(*((_WORD *)v2 + 4), 0xFu, v5, *((_WORD *)v2 + 5));
      v6 = *((_WORD *)v2 + 6);
      if ( !*((_WORD *)v2 + 6) )
      {
        v7 = *((_WORD *)v2 + 11) - 1;
        *((_WORD *)v2 + 11) = v7;
        if ( v7 << 16 )
        {
          *((_WORD *)v2 + 8) = v6;
          *((_WORD *)v2 + 10) = v6;
        }
        else
        {
          move_anim_task_del(v1);
        }
      }
    }
    else
    {
      v4 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v4;
      BlendPalette(*((_WORD *)v2 + 4), 0xFu, v4, *((_WORD *)v2 + 5));
      if ( *((_WORD *)v2 + 6) == *((_WORD *)v2 + 7) )
        *((_WORD *)v2 + 10) = 1;
    }
  }
  return v9;
}
