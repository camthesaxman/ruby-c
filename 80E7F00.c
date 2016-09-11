int __fastcall sub_80E7F00(signed __int16 a1, unsigned __int16 a2)
{
  int v2; // r6@1
  int v3; // r9@1
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r3@1
  _BYTE *v8; // r1@3
  char v9; // r0@3
  int v11; // [sp+18h] [bp-4h]@0

  v2 = (unsigned __int16)a1;
  v3 = a2;
  v4 = (unsigned __int16)a1 / (signed int)v2001083 & 0xFFFF;
  v5 = (unsigned __int16)a1 % (signed int)v2001083 & 0xFFFF;
  v6 = (unsigned __int16)sub_80EB2D4(*(_WORD *)(2 * (unsigned __int16)a1 + 0x200100C));
  v7 = (unsigned __int16)sub_80EB2D4(v3);
  if ( v6 == 7 )
  {
    if ( v7 != 7 )
    {
      v8 = (_BYTE *)(v4 + 33558654);
      v9 = *(_BYTE *)(v4 + 33558654) - 1;
_080E7F7A:
      *v8 = v9;
      goto _080E7F7C;
    }
  }
  else if ( v7 == 7 )
  {
    v8 = (_BYTE *)(v4 + 33558654);
    v9 = *(_BYTE *)(v4 + 33558654) + 1;
    goto _080E7F7A;
  }
_080E7F7C:
  *(_BYTE *)(2 * v4 + v5 + 33558668) = 0;
  *(_WORD *)(2 * v2 + 0x200100C) = v3;
  return v11;
}
