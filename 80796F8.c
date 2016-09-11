int __fastcall sub_80796F8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  __int16 v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 > (signed int)*((_WORD *)v2 + 5) )
  {
    *((_WORD *)v2 + 4) = 0;
    v4 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v4;
    if ( v4 & 1 )
    {
      if ( *((_WORD *)v2 + 7) != *((_WORD *)v2 + 11) )
        *((_WORD *)v2 + 7) += *((_WORD *)v2 + 9);
    }
    else if ( *((_WORD *)v2 + 8) != *((_WORD *)v2 + 12) )
    {
      *((_WORD *)v2 + 8) += *((_WORD *)v2 + 10);
    }
    v4000052 = (*((_WORD *)v2 + 8) << 8) | *((_WORD *)v2 + 7);
    if ( *((_WORD *)v2 + 7) == *((_WORD *)v2 + 11) && *((_WORD *)v2 + 8) == *((_WORD *)v2 + 12) )
      move_anim_task_del(v1);
  }
  return v6;
}
