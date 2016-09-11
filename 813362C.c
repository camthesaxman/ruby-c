int sub_813362C()
{
  int *v0; // r4@2
  int v1; // r1@3
  char v2; // r0@6
  int v3; // r2@11
  char v4; // r2@21
  char v5; // r3@21
  int v7; // [sp+8h] [bp-4h]@0

  if ( word_30017A0 & 0x40 )
  {
    v0 = &dword_30007B0;
    if ( !*(_BYTE *)(dword_30007B0 + 27) )
      goto _08133796;
    audio_play(5u);
    --*(_BYTE *)(dword_30007B0 + 27);
    *(_BYTE *)(dword_30007B0 + 707) = 1;
    v1 = dword_30007B0;
    if ( *(_BYTE *)(dword_30007B0 + 24) )
    {
      sub_813360C(-1);
      goto _08133796;
    }
    if ( *(_BYTE *)(dword_30007B0 + 25) )
    {
      v2 = *(_BYTE *)(dword_30007B0 + 25) - 1;
_081336DC:
      *(_BYTE *)(v1 + 25) = v2;
      ++*(_BYTE *)(*v0 + 30);
      goto _08133796;
    }
  }
  else if ( word_30017A0 & 0x80 )
  {
    v0 = &dword_30007B0;
    if ( *(_BYTE *)(dword_30007B0 + 27) >= *(_BYTE *)(dword_30007B0 + 26) - 1 )
      goto _08133796;
    audio_play(5u);
    ++*(_BYTE *)(dword_30007B0 + 27);
    *(_BYTE *)(dword_30007B0 + 707) = 1;
    v1 = dword_30007B0;
    if ( *(_BYTE *)(dword_30007B0 + 24) != 2 )
    {
      sub_813360C(1);
      goto _08133796;
    }
    v3 = *(_BYTE *)(dword_30007B0 + 25);
    if ( v3 != *(_BYTE *)(dword_30007B0 + 26) - 3 )
    {
      v2 = v3 + 1;
      goto _081336DC;
    }
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    if ( *(_BYTE *)(dword_30007B0 + 27) == *(_BYTE *)(dword_30007B0 + 26) - 1 )
    {
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"ÁÝêÙ");
      MenuPrintMessage((int)gStringVar4, 3, 0xFu);
      *(_BYTE *)dword_30007B0 = 12;
    }
    else
    {
      *(_BYTE *)dword_30007B0 = 8;
      StringCopy(gStringVar2, (_BYTE *)(dword_30007B0 + 25 * *(_BYTE *)(dword_30007B0 + 27) + 82));
      StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"ÎÙÕ×Ü");
      MenuPrintMessage((int)gStringVar4, 3, 0xFu);
    }
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    *(_BYTE *)dword_30007B0 = 12;
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"ÁÝêÙ");
    MenuPrintMessage((int)gStringVar4, 3, 0xFu);
  }
_08133796:
  if ( (unsigned int)*(_BYTE *)(dword_30007B0 + 26) > 3 )
  {
    v4 = byte_20200CA & 0xFB;
    byte_20200CA &= 0xFBu;
    v5 = byte_202010E & 0xFB;
    byte_202010E &= 0xFBu;
    if ( *(_BYTE *)(dword_30007B0 + 25) )
    {
      if ( *(_BYTE *)(dword_30007B0 + 25) == *(_BYTE *)(dword_30007B0 + 26) - 3 )
        byte_202010E = v5 | 4;
    }
    else
    {
      byte_20200CA = v4 | 4;
    }
  }
  return v7;
}
