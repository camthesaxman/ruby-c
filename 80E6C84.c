int sub_80E6C84()
{
  char v0; // r0@18
  int v1; // r1@18
  char v2; // r0@23
  int v3; // r0@31
  int v5; // [sp+4h] [bp-4h]@0

  if ( v2001024 == 1 )
  {
    v0 = ProcessMenuInputNoWrap_();
    v1 = v0;
    if ( !v0 )
    {
      sub_80E91D4(4);
      DisplayYesNoMenu(0x17u, 8u, 0);
      MoveMenuCursor(1);
      goto _080E6D1C;
    }
    if ( v0 <= 0 )
      goto _080E6D34;
    goto _080E6D3E;
  }
  if ( (signed int)v2001024 <= 1 )
  {
    if ( v2001024 )
      return v5;
    sub_80E8398(2);
    sub_80E91D4(3);
    DisplayYesNoMenu(0x17u, 8u, 0);
    MoveMenuCursor(1);
    if ( v2001008 == 9
      || v2001008 == 4
      || v2001008 == 7
      || v2001008 == 8
      || v2001008 == 10
      || v2001008 == 11
      || v2001008 == 12
      || v2001008 == 5
      || v2001008 == 13 )
    {
      v2001024 = 2;
      return v5;
    }
_080E6D1C:
    ++v2001024;
    return v5;
  }
  if ( v2001024 == 2 )
  {
    v2 = ProcessMenuInputNoWrap_();
    v1 = v2;
    if ( !v2 )
    {
      v202E8DC = 0;
      sub_80E682C((int)sub_80E752C);
      return v5;
    }
    if ( v2 <= 0 )
    {
_080E6D34:
      if ( v1 != -1 )
        return v5;
      goto _080E6D58;
    }
_080E6D3E:
    if ( v1 != 1 )
      return v5;
_080E6D58:
    v2001024 = 255;
    return v5;
  }
  if ( v2001024 == 255 )
  {
    v3 = sub_8072DEC(255);
    sub_80E81FC(v3);
    sub_80E682C((int)sub_80E6AC4);
  }
  return v5;
}
