int sub_80E6BC0()
{
  char v0; // r0@11
  int v1; // r0@17
  int v2; // r0@17
  int v4; // [sp+4h] [bp-4h]@0

  if ( v2001024 == 1 )
  {
    v0 = ProcessMenuInputNoWrap_();
    if ( !v0 )
    {
      v1 = sub_80E7D6C();
      v2 = sub_80E98C4(v1);
      sub_80E95A4(v2);
      goto _080E6C3E;
    }
    if ( v0 > 0 )
    {
      if ( v0 != 1 )
        return v4;
    }
    else if ( v0 != -1 )
    {
      return v4;
    }
    ++v2001024;
  }
  else
  {
    if ( (signed int)v2001024 <= 1 )
    {
      if ( v2001024 )
        return v4;
      sub_80E8398(2);
      if ( v2001008 == 6 )
      {
        sub_80E91D4(6);
        v2001024 = 100;
        return v4;
      }
      sub_80E91D4(2);
      DisplayYesNoMenu(0x17u, 8u, 1);
      MoveMenuCursor(1);
_080E6C3E:
      ++v2001024;
      return v4;
    }
    if ( v2001024 == 2 )
    {
      sub_80E81FC();
      sub_80E682C((int)sub_80E6AC4);
    }
    else if ( v2001024 == 100 && word_300179E & 3 )
    {
      sub_80E682C((int)sub_80E6AC4);
    }
  }
  return v4;
}
