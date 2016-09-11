int __fastcall sub_80D463C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r2@1
  __int16 v3; // r0@4
  __int16 v4; // r0@8
  unsigned __int8 v5; // r0@10
  int v7; // [sp+14h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( *((_WORD *)v1 + 4) )
  {
    if ( v2 == 1 && !*((_WORD *)v1 + 13) )
      move_anim_task_del(a1);
  }
  else
  {
    v3 = *((_WORD *)v1 + 6) + 1;
    *((_WORD *)v1 + 6) = v3;
    if ( v3 > 2 )
    {
      *((_WORD *)v1 + 6) = v2;
      sub_80D472C(v1);
    }
    if ( *((_WORD *)v1 + 14) && !*((_WORD *)v1 + 17) )
    {
      word_3004B00[0] = 1;
      word_3004B02 = 0;
      word_3004B04 = 12;
      v4 = (unsigned __int8)CreateTask((int)sub_80E1864, 80);
      if ( (unsigned __int8)v4 != 255 )
      {
        call_via_r1((unsigned __int8)v4, dword_3004B20[10 * (unsigned __int8)v4]);
        ++v202F7B2;
      }
      word_3004B00[0] = 3;
      v5 = CreateTask((int)sub_80E1864, 80);
      if ( v5 != 255 )
      {
        call_via_r1(v5, dword_3004B20[10 * v5]);
        ++v202F7B2;
      }
      *((_WORD *)v1 + 17) = 1;
    }
    if ( *((_WORD *)v1 + 15) >= (signed int)*((_WORD *)v1 + 16) )
      ++*((_WORD *)v1 + 4);
  }
  return v7;
}
