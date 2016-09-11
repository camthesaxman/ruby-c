int __fastcall sub_8092644(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r2@1
  int *v3; // r6@1
  char **v4; // r1@1
  char *v5; // r8@1
  _BYTE *v6; // r2@1
  _WORD *v7; // r4@1
  _WORD *v8; // r5@1
  unsigned int v9; // r2@1
  signed int v10; // r3@6
  unsigned int v11; // r0@14
  int v12; // r1@18
  int v14; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  v3 = &dword_3004B20[v2];
  v4 = &(&gUnknown_083B5A7C)[8 * BYTE2(dword_3004B20[v2 + 2])];
  v5 = *v4;
  v6 = &byte_3004B28[v2 * 4];
  v7 = &v6[2 * *((_BYTE *)v4 + 4)];
  v8 = &v6[2 * *((_BYTE *)v4 + 5)];
  v9 = (*((_WORD *)v4 + 3) - 1) & 0xFFFF;
  if ( word_300179E & 1 )
  {
    sub_814ADC8();
    audio_play(0x15u);
    MenuZeroFillWindowRect(0x12u, 1u, 0x1Cu, 0xCu);
    sub_8092C8C(1);
_080926E0:
    *v3 = (int)sub_809217C;
    return v14;
  }
  if ( word_300179E & 2 )
  {
    sub_814ADC8();
    audio_play(0x17u);
    MenuZeroFillWindowRect(0x12u, 1u, 0x1Cu, 0xCu);
    sub_8092C8C(1);
    *v7 = *((_WORD *)v3 + 18);
    *v8 = *((_WORD *)v3 + 19);
    goto _080926E0;
  }
  v10 = 0;
  if ( !(word_30017A0 & 0x40) )
  {
    if ( !(word_30017A0 & 0x80) )
      return v14;
    v11 = *v7;
    if ( v11 > 4 || v11 >= v9 )
    {
      if ( v9 > 5 )
      {
        v12 = *v8;
        if ( v12 < (signed int)(v9 - 5) )
        {
          *v8 = v12 + 1;
          sub_8092D78(v1);
          sub_80925B4(5);
          v10 = 1;
        }
      }
      if ( !v10 )
        return v14;
    }
    else
    {
      sub_80925B4(v11);
      sub_80925B4(++*v7);
    }
    audio_play(5u);
    sub_8091E20(*(_DWORD *)&v5[8 * (*v7 + *v8)]);
    return v14;
  }
  if ( *v7 )
  {
    sub_80925B4(*v7);
    sub_80925B4(--*v7);
_08092734:
    audio_play(5u);
    sub_8091E20(*(_DWORD *)&v5[8 * (*v7 + *v8)]);
    return v14;
  }
  if ( *v8 )
  {
    --*v8;
    sub_8092D78(a1);
    sub_80925B4(*v7);
    v10 = 1;
  }
  if ( v10 )
    goto _08092734;
  return v14;
}
