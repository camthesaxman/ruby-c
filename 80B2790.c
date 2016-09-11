int __fastcall sub_80B2790(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r5@1
  int v3; // r7@1
  _BYTE *v4; // r0@1
  char *v5; // r1@19
  char *v6; // r1@21
  char v7; // r0@21
  int v8; // r5@22
  char v9; // r1@25
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)sub_80B2760(*(_WORD *)(28 * a1 + 0x2019266));
  v3 = (unsigned __int16)sub_80B2778(*(_WORD *)((v1 << 6) + 0x2038570));
  memset(33657672, 0, 20);
  sub_8075624();
  v4 = (_BYTE *)33705607;
  do
    *v4-- = 0;
  while ( (signed int)v4 >= 33705604 );
  if ( v2 == 144 )
    goto _080B2848;
  if ( v2 > 144 )
  {
    if ( v2 == 216 )
    {
      v6 = (char *)33748926;
      v7 = -1;
      goto _080B28BC;
    }
    if ( v2 <= 216 )
    {
      if ( v2 != 174 )
        goto _080B28BE;
      v5 = (char *)&gBaseStats + 28 * v3;
      if ( v5[6] != 7 && v5[7] != 7 )
      {
_080B28B8:
        v6 = (char *)33748932;
        v7 = 1;
        goto _080B28BC;
      }
      v6 = (char *)33748932;
      v7 = 0;
_080B28BC:
      *v6 = v7;
      goto _080B28BE;
    }
    if ( v2 == 218 )
    {
      v6 = (char *)33748926;
      v7 = 0;
      goto _080B28BC;
    }
    if ( v2 != 272 )
      goto _080B28BE;
_080B2848:
    v8 = *(_BYTE *)(28 * v1 + 0x201927B) << 6;
    v201934A = sub_80B2778(*(_WORD *)(v8 + 0x2038570));
    v2019358 = *(_DWORD *)(v8 + 33785256);
    v201934C |= 1u;
    goto _080B28BE;
  }
  if ( v2 == 76 )
    goto _080B2898;
  if ( v2 <= 76 )
  {
    if ( v2 != 13 )
      goto _080B28BE;
_080B2898:
    v9 = v201925E;
    if ( !v201925E )
    {
      v201925E = 2;
      v202F7C4 = v9;
      goto _080B28BE;
    }
    goto _080B28B8;
  }
  if ( v2 == 130 || v2 == 143 )
    goto _080B2898;
_080B28BE:
  sub_80B2968();
  return v11;
}
