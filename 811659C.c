int __fastcall sub_811659C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  unsigned int v4; // r0@5
  __int16 v5; // r1@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 9);
  if ( *((_WORD *)v2 + 9) && v3 >= 0 && v3 <= 2 )
  {
    if ( task_is_not_running_overworld_fanfare() << 24 )
    {
      v4 = sub_8053108(0x1Du);
      v5 = *((_WORD *)v2 + 15) + 1;
      *((_WORD *)v2 + 15) = v5;
      if ( v4 < v5 )
        sav12_xor_set(0x1Du, *((_WORD *)v2 + 15));
      sub_8116C34(v1, sub_811677C, 0xFFFF, 3);
    }
  }
  else if ( !(unsigned __int8)mplay_has_finished_maybe() )
  {
    HIWORD(dword_3004B20[10 * v1 + 7]) = 0;
    sub_8116C34(v1, sub_81167F4, 0xFFFF, 3);
  }
  return v7;
}
