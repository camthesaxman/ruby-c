int sub_80E6D7C()
{
  int v0; // r0@14
  signed int v1; // r0@15
  int v2; // r0@26
  int v3; // r0@27
  int v4; // r6@27
  int v5; // r0@43
  int v6; // r0@43
  int v7; // r0@12
  int v9; // [sp+10h] [bp-4h]@0

  if ( v2001024 == 10 )
  {
    if ( !(word_300179E & 3) )
      return v9;
    goto _080E6F12;
  }
  if ( (signed int)v2001024 > 10 )
  {
    if ( v2001024 != 101 )
    {
      if ( (signed int)v2001024 > 101 )
      {
        if ( v2001024 == 102 )
        {
          v7 = sub_80E7E50(102);
          sub_80E95A4(v7);
          sub_80E682C((int)sub_80E6AC4);
        }
        return v9;
      }
      if ( v2001024 != 100 )
        return v9;
      sub_80E91D4(7);
      ++v2001024;
    }
    if ( !(word_300179E & 1) )
      return v9;
    goto _080E6F3C;
  }
  if ( !v2001024 )
  {
    v0 = sub_80E8398(2);
    if ( sub_80E8054(v0) << 24 )
    {
      v1 = 5;
_080E6DEE:
      sub_80E91D4(v1);
      v2001024 = 10;
      return v9;
    }
    if ( v2001008 == 9 )
    {
      if ( !(sub_80E7FA8() << 24) )
      {
        v1 = 8;
        goto _080E6DEE;
      }
      if ( v200100C == 0xFFFF || v200100E == 0xFFFF )
      {
        v1 = 9;
        goto _080E6DEE;
      }
    }
    if ( v2001008 == 4 && !(sub_80E7FA8() << 24) )
    {
      sub_80E682C((int)sub_80E6C84);
      return v9;
    }
    v2 = sub_80E91D4(1);
    sub_80E9744(v2);
    DisplayYesNoMenu(0x17u, 8u, 0);
    MoveMenuCursor(0);
_080E6F3C:
    ++v2001024;
    return v9;
  }
  if ( v2001024 != 1 )
    return v9;
  v3 = ProcessMenuInputNoWrap_() << 24;
  v4 = v3 >> 24;
  if ( v3 >> 24 )
  {
    if ( v4 > 0 )
    {
      if ( v4 != 1 )
        return v9;
    }
    else
    {
      v3 = -1;
      if ( v4 != -1 )
        return v9;
    }
    v5 = sub_8072DEC(v3);
    sub_80E81FC(v5);
    v6 = v2001008;
    if ( v2001008 == 6 )
    {
      v6 = sub_80E7FA8() << 24;
      if ( v6 )
      {
        v2001024 = 100;
        return v9;
      }
    }
    sub_80E95A4(v6);
_080E6F12:
    sub_80E682C((int)sub_80E6AC4);
    return v9;
  }
  v202E8DC = (unsigned int)-(unsigned __int8)sub_80E7FA8() >> 31;
  sub_80E7D9C();
  if ( !v2001008 )
    v202E8CC = (unsigned __int8)sub_80E8094();
  if ( v2001008 == 9 )
  {
    sub_80E81C0();
    v202E8CC = (unsigned __int8)sub_80FA364(33598588);
  }
  if ( v2001008 == 13 )
  {
    if ( v200100C == 0xFFFF || v200100E == 0xFFFF )
      v202E8DC = 0;
    v202E8CC = (unsigned __int8)sub_80E810C();
  }
  sub_80E682C((int)sub_80E752C);
  return v9;
}
