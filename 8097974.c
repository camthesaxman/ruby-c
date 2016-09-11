int sub_8097974()
{
  int v0; // r0@10
  int v1; // r0@18
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2000004 != 1 )
  {
    if ( (signed int)v2000004 <= 1 )
    {
      if ( v2000004 )
        return v3;
      sub_8098A80();
      sub_8098898(2);
      goto _08097A3C;
    }
    if ( v2000004 != 2 )
    {
      if ( v2000004 == 3 && !(sub_8099E08() << 24) )
      {
        sub_809A860(1);
        sub_8096BE0((int)sub_8096C84);
      }
      return v3;
    }
    v2000D60 = sub_809CF30();
    if ( v2000D60 == -2 )
      return v3;
    if ( v2000D60 == -1 )
    {
      sub_8098A5C(-1);
      v2000004 = 0;
      return v3;
    }
    v1 = audio_play(5u);
    sub_8098A5C(v1);
    v2000D60 -= 16;
    sub_8099DCC(v2000D60);
_08097A3C:
    ++v2000004;
    return v3;
  }
  v2000D5E = sub_809CF30();
  if ( v2000D5E == -1 )
  {
    v0 = sub_809A860(1);
    sub_8098A5C(v0);
    sub_8096BE0((int)sub_8096C84);
    return v3;
  }
  if ( v2000D5E >= -1 && v2000D5E <= 15 && v2000D5E >= 12 )
  {
    audio_play(5u);
    v2000D5E -= 12;
    sub_8098AA8(v2000D5E);
    sub_8098898(3);
    goto _08097A3C;
  }
  return v3;
}
