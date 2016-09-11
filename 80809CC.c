int __fastcall task_mpl_807DD60(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( LOBYTE(dword_3004B20[10 * *((_WORD *)v2 + 5) + 1]) != 1 )
    {
      pal_fill_for_maplights();
_08080A1C:
      ++*((_WORD *)v2 + 4);
      return v5;
    }
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v5;
      *((_WORD *)v2 + 5) = (unsigned __int8)sub_8083664();
      goto _08080A1C;
    }
    if ( v3 == 2 && sub_8080E70() == 1 )
    {
      script_env_2_disable();
      DestroyTask(v1);
    }
  }
  return v5;
}
