int __fastcall sub_80812C8(unsigned __int8 a1)
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
    if ( !sub_8080E64() && sub_8054034() << 24 )
    {
_08081312:
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
      player_bitmagic();
      script_env_2_enable();
      goto _08081312;
    }
    if ( v3 == 2 )
    {
      warp_in();
      SetMainCallback2((int)sub_8054534);
      DestroyTask(v1);
    }
  }
  return v5;
}
