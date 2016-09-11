int sub_80E7FA8()
{
  int v0; // r8@1
  int v1; // r5@1
  _BYTE *v2; // r1@2
  _BYTE *v3; // r2@2
  unsigned __int16 v4; // r4@2
  signed int v5; // r3@3
  int v6; // r0@4

  v0 = 0;
  v1 = 0;
  if ( v200100A > 0u )
  {
    while ( 1 )
    {
      sub_80EB218(33598996, *(_WORD *)(2 * v1 + v2001004), 0);
      sub_80EB218(33599041, *(_WORD *)(2 * v1 + 0x200100C), 0);
      v2 = (_BYTE *)33598996;
      v3 = (_BYTE *)33599041;
      v4 = v1 + 1;
      if ( v200AE14 != v200AE41 )
        goto _080E8018;
      v5 = 33558528;
      if ( v200AE14 != 255 )
        break;
_080E8010:
      if ( *v2 != *v3 )
        goto _080E8018;
_080E8024:
      v1 = (unsigned __int16)(v1 + 1);
      if ( v4 >= (unsigned int)*(_BYTE *)(v5 + 10) )
        return (unsigned __int8)v0;
    }
    while ( 1 )
    {
      ++v2;
      ++v3;
      v6 = *v2;
      if ( v6 != *v3 )
        break;
      if ( v6 == 255 )
        goto _080E8010;
    }
_080E8018:
    v0 = (v0 + 1) & 0xFFFF;
    v5 = 33558528;
    goto _080E8024;
  }
  return (unsigned __int8)v0;
}
