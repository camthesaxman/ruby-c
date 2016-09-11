int __fastcall sub_8080A5C(unsigned __int8 a1)
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
    if ( sub_8007ECC() << 24 )
    {
      pal_fill_for_maplights();
_08080A9E:
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
      sub_80084A4();
      goto _08080A9E;
    }
    if ( v3 == 2 && sub_8080E70() == 1 )
    {
      sub_8007B14();
      script_env_2_disable();
      DestroyTask(v1);
    }
  }
  return v5;
}
