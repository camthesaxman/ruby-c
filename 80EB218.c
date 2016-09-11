_BYTE *__fastcall sub_80EB218(_BYTE *a1, int a2, char a3)
{
  _BYTE *v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r4@1
  __int16 v6; // r7@1
  char v7; // r8@1
  char *v8; // r1@2
  _BYTE *v9; // r1@4
  signed int v10; // r2@5
  int v11; // r1@5
  _BYTE *v12; // r1@14

  v3 = a1;
  v4 = a2 << 16;
  v5 = (unsigned __int16)a2;
  v6 = a2;
  v7 = a3;
  if ( sub_80EB37C((unsigned __int16)a2) << 24 )
  {
    v8 = (char *)&OtherText_ThreeQuestions;
_080EB2A2:
    v9 = StringCopy(v3, v8);
    goto _080EB2AA;
  }
  if ( v5 != 0xFFFF )
  {
    v10 = v4 >> 25;
    v11 = v6 & 0x1FF;
    if ( (signed int)(v4 >> 25) > 19 )
    {
      if ( v10 != 21 )
        goto _080EB290;
    }
    else
    {
      if ( v10 >= 18 )
      {
        v8 = &gMoveNames[13 * v11];
        goto _080EB2A2;
      }
      if ( v10 )
      {
_080EB290:
        v8 = *(char **)(4 * (v6 & 0x1FF) + (v10 << 10) + 0x20051A4);
        goto _080EB2A2;
      }
    }
    v8 = &gSpeciesNames[11 * v11];
    goto _080EB2A2;
  }
  v9 = v3;
  *v3 = -1;
_080EB2AA:
  *v9 = -4;
  v9[1] = 19;
  v9[2] = 8 * v7;
  v12 = v9 + 3;
  *v12 = -1;
  return v12;
}
