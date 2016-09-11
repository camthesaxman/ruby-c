int sub_8097004()
{
  int v0; // r0@7
  unsigned __int8 v1; // r0@9
  int v3; // [sp+4h] [bp-4h]@0

  if ( v2000004 == 1 )
  {
    if ( !(sub_80985CC() << 24) )
    {
      v1 = sub_809B0F4();
      sub_809B0C0(v1);
_08097044:
      ++v2000004;
      return v3;
    }
  }
  else
  {
    if ( (signed int)v2000004 <= 1 )
    {
      if ( v2000004 )
        return v3;
      v0 = audio_play(5u);
      add_to_c3_somehow(v0);
      goto _08097044;
    }
    if ( v2000004 == 2 && !(sub_809AC00() << 24) )
    {
      if ( v20011F6 )
        BoxSetMosaic(v20011F6);
      sub_8096BE0((int)sub_8096C84);
    }
  }
  return v3;
}
