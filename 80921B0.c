int __fastcall sub_80921B0(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r6@2
  int *v3; // r6@9
  int v4; // r1@11
  int *v5; // r4@17
  int v6; // r1@18
  int *v7; // r4@20
  int v8; // r1@21
  int *v9; // r4@23
  int v10; // r1@24
  int *v11; // r4@26
  int v12; // r1@27
  int v14; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( LOWORD(dword_3004B20[10 * a1 + 2]) )
  {
    v2 = &gUnknown_083B586C;
    if ( !sub_806912C() )
      v2 = &gUnknown_083B58A4;
  }
  else
  {
    v2 = &gUnknown_083B5850;
    if ( !sub_806912C() )
      v2 = &gUnknown_083B5888;
  }
  if ( word_300179E & 2 )
  {
    audio_play(0x17u);
    sub_8092EB0(v1);
    dword_3004B20[10 * v1] = (int)sub_809204C;
  }
  else if ( word_300179E & 1 )
  {
    v3 = &dword_3004B20[10 * v1];
    if ( *((_WORD *)v3 + 5) == 6 )
    {
      if ( *((_WORD *)v3 + 4) )
      {
        v202FFBA = 64;
        v4 = v202FFB4;
        *(_WORD *)(v202FFB4 + 1578) = 64;
        v202FFB8 = 0;
        *(_WORD *)(v4 + 1552) = 0;
        v2024EBD = sub_8092E10(v1, 5);
        if ( !sub_806912C() )
          v2024EBD = 0;
        *(_WORD *)(v202FFB4 + 1556) = v2024EBD;
        v2024EBC = sub_8092E10(v1, 4);
        *(_WORD *)(v202FFB4 + 1560) = v2024EBC;
        audio_play(3u);
        *v3 = (int)sub_80927B8;
      }
      else
      {
        sub_8091E20((int)&gUnknown_0840E067);
        *v3 = (int)sub_80923FC;
        audio_play(0x70u);
      }
    }
    else
    {
      audio_play(0x15u);
      *v3 = (int)sub_80925CC;
    }
  }
  else
  {
    if ( word_300179E & 0x20 )
    {
      v5 = &dword_3004B20[10 * v1];
      if ( v2[4 * *((_WORD *)v5 + 5)] != 255 )
      {
        audio_play(5u);
        v6 = v2[4 * *((_WORD *)v5 + 5)];
        *((_WORD *)v5 + 5) = v6;
        sub_8092AD4(*((_BYTE *)v5 + 8), v6);
      }
    }
    if ( word_300179E & 0x10 )
    {
      v7 = &dword_3004B20[10 * v1];
      if ( v2[4 * *((_WORD *)v7 + 5) + 1] != 255 )
      {
        audio_play(5u);
        v8 = v2[4 * *((_WORD *)v7 + 5) + 1];
        *((_WORD *)v7 + 5) = v8;
        sub_8092AD4(*((_BYTE *)v7 + 8), v8);
      }
    }
    if ( word_300179E & 0x40 )
    {
      v9 = &dword_3004B20[10 * v1];
      if ( v2[4 * *((_WORD *)v9 + 5) + 2] != 255 )
      {
        audio_play(5u);
        v10 = v2[4 * *((_WORD *)v9 + 5) + 2];
        *((_WORD *)v9 + 5) = v10;
        sub_8092AD4(*((_BYTE *)v9 + 8), v10);
      }
    }
    if ( word_300179E & 0x80 )
    {
      v11 = &dword_3004B20[10 * v1];
      if ( v2[4 * *((_WORD *)v11 + 5) + 3] != 255 )
      {
        audio_play(5u);
        v12 = v2[4 * *((_WORD *)v11 + 5) + 3];
        *((_WORD *)v11 + 5) = v12;
        sub_8092AD4(*((_BYTE *)v11 + 8), v12);
      }
    }
  }
  return v14;
}
