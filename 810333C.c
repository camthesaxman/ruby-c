signed int sub_810333C()
{
  int v0; // r5@5
  __int16 v1; // r4@6
  __int16 v3; // r4@13

  if ( sub_81032E8() << 24 )
  {
    if ( v2000034 == 2 || v2000030 <= 1 || v2000030 == 4 )
      return 1;
    LOWORD(v0) = 0;
    while ( 1 )
    {
      v1 = v0;
      if ( (unsigned __int8)sub_8102BF8(1u, 2 - v0) == v2000007 )
        break;
      v0 = ((signed __int16)v0 + 1) & 0xFFFF;
      if ( (signed __int16)(v1 + 1) > 4 )
        return 1;
    }
_08103390:
    v2000036 = 2;
    v2000030 = v0;
    return 1;
  }
  if ( v2000034 != 2 )
  {
    LOWORD(v0) = 0;
    while ( 1 )
    {
      v3 = v0;
      if ( (unsigned __int8)sub_8102BF8(1u, 2 - v0) == v2000007 )
        break;
      v0 = ((signed __int16)v0 + 1) & 0xFFFF;
      if ( (signed __int16)(v3 + 1) > 4 )
        return 0;
    }
    goto _08103390;
  }
  return 0;
}
