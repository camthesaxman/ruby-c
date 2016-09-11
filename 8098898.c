int __fastcall sub_8098898(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  _BYTE *v3; // r0@3
  _BYTE *v4; // r1@3
  _BYTE *v5; // r6@7
  int v6; // r4@7
  _BYTE *v7; // r0@7
  _BYTE *v8; // r6@8
  int v9; // r4@8
  _BYTE *v10; // r0@8
  _BYTE *i; // r2@10
  int v13; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(0xAu, 0x10u);
  v2 = (unsigned __int8)gUnknown_083B6DF4[8 * v1 + 4];
  if ( v2 > 6 )
  {
def_80988C0:
    v3 = (_BYTE *)33564308;
    v4 = *(_BYTE **)&gUnknown_083B6DF4[8 * v1];
  }
  else
  {
    switch ( v2 )
    {
      case 2u:
        v3 = StringCopy((_BYTE *)0x2002694, *(_BYTE **)&gUnknown_083B6DF4[8 * v1]);
        v4 = (_BYTE *)33559034;
        break;
      case 5u:
        v3 = StringCopy((_BYTE *)0x2002694, *(_BYTE **)&gUnknown_083B6DF4[8 * v1]);
        v4 = (_BYTE *)33564388;
        break;
      case 1u:
        v3 = StringCopy((_BYTE *)0x2002694, (_BYTE *)0x20011FA);
        v4 = *(_BYTE **)&gUnknown_083B6DF4[8 * v1];
        break;
      case 4u:
        v3 = StringCopy((_BYTE *)0x2002694, (_BYTE *)0x20026E4);
        v4 = *(_BYTE **)&gUnknown_083B6DF4[8 * v1];
        break;
      case 3u:
        v5 = *(_BYTE **)&gUnknown_083B6DF4[8 * v1];
        v6 = (int)&v5[(unsigned __int16)StringLength(*(_BYTE **)&gUnknown_083B6DF4[8 * v1]) + 1];
        v7 = StringCopy((_BYTE *)0x2002694, v5);
        v3 = StringCopy(v7, (_BYTE *)0x20011FA);
        v4 = (_BYTE *)v6;
        break;
      case 6u:
        v8 = *(_BYTE **)&gUnknown_083B6DF4[8 * v1];
        v9 = (int)&v8[(unsigned __int16)StringLength(*(_BYTE **)&gUnknown_083B6DF4[8 * v1]) - 1];
        v10 = StringCopy((_BYTE *)0x2002694, v8);
        v3 = StringCopy(v10 - 1, (_BYTE *)0x20026E4);
        v4 = (_BYTE *)v9;
        break;
      default:
        goto def_80988C0;
    }
  }
  for ( i = StringCopy(v3, v4); (unsigned int)i < 0x20026A6; ++i )
    *i = 0;
  *i = -1;
  MenuPrint(33564308, 11, 0x11u);
  return v13;
}
