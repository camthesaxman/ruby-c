int __fastcall sub_8100E70(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *((_WORD *)v2 + 2);
  if ( v3 == 1 )
  {
    SetUpPuttingAwayDecorationPlayerAvatar();
    pal_fill_black();
    *((_WORD *)v2 + 2) = 2;
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 && (unsigned __int8)sub_807D770() == 1 )
    {
      *((_WORD *)v2 + 12) = 1;
      sub_8100EEC(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 2) && !(v202F38F & 0x80) )
  {
    sub_80FF0E0(v1);
    *((_WORD *)v2 + 2) = 1;
    *((_WORD *)v2 + 6) = 1;
    *((_WORD *)v2 + 5) = 1;
    sub_8072DEC(1);
  }
  return v5;
}
