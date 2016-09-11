int __fastcall sub_80E202C(unsigned __int8 a1)
{
  int *v1; // r3@2
  unsigned __int8 v2; // r1@4
  unsigned __int8 v3; // r2@4
  int v5; // [sp+Ch] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    if ( (signed int)*((_WORD *)v1 + 6) <= 0 )
    {
      move_anim_task_del(a1);
    }
    else
    {
      if ( *((_WORD *)v1 + 12) )
      {
        v2 = *((_BYTE *)v1 + 16);
        v3 = *((_BYTE *)v1 + 14);
      }
      else
      {
        v2 = *((_BYTE *)v1 + 14);
        v3 = *((_BYTE *)v1 + 16);
      }
      if ( LOWORD(dword_3004B20[10 * a1 + 3]) == 1 )
        v3 = 0;
      sub_80E1FDC(a1, v2, v3);
    }
  }
  return v5;
}
