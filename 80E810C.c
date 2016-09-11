int sub_80E810C()
{
  int v0; // r5@1
  _BYTE *v1; // r0@2
  _BYTE *v2; // r0@2
  _BYTE *v3; // r0@2
  _BYTE *v4; // r3@2
  unsigned __int16 v5; // r4@2
  int v6; // r2@3
  int v7; // r1@4

  v0 = 0;
  do
  {
    v1 = (_BYTE *)sub_80EB218(33599086, v200100C, 0);
    *v1 = 0;
    sub_80EB218(v1 + 1, v200100E, 0);
    v2 = (_BYTE *)sub_80EB218(33599214, (unsigned __int16)gBerryMasterWifePhrases[2 * v0], 0);
    *v2 = 0;
    sub_80EB218(v2 + 1, (unsigned __int16)word_83DB682[2 * v0], 0);
    v3 = (_BYTE *)33599086;
    v4 = (_BYTE *)33599214;
    v5 = v0 + 1;
    while ( 1 )
    {
      v6 = *v3;
      if ( v6 == 255 )
        break;
      v7 = *v4;
      if ( v7 != 255 )
      {
        ++v4;
        ++v3;
        if ( v6 == v7 )
          continue;
      }
      if ( *v3 != 255 )
        goto _080E81A8;
      break;
    }
    if ( *v4 == 255 )
      return (unsigned __int8)v5;
_080E81A8:
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v5 <= 4u );
  return 0;
}
