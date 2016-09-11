int __fastcall sub_80BC824(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  _BYTE *v3; // r4@1
  char v4; // r0@3
  __int16 v5; // r0@5
  int v6; // r0@14
  int v7; // r0@18
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  v3 = &byte_3004B28[40 * a1];
  if ( word_30017A0 & 0x40 )
  {
    if ( *((_WORD *)v3 + 1) )
    {
      audio_play(5u);
      v4 = -1;
_080BC8B6:
      *((_WORD *)v3 + 1) = (unsigned __int8)MoveMenuCursor(v4);
      return v9;
    }
    if ( *((_WORD *)v3 + 2) )
    {
      audio_play(5u);
      v5 = *((_WORD *)v3 + 2) - 1;
_080BC8A4:
      *((_WORD *)v3 + 2) = v5;
      sub_80BC6B0(v1);
      return v9;
    }
  }
  else if ( word_30017A0 & 0x80 )
  {
    if ( *((_WORD *)v3 + 1) != *((_WORD *)v3 + 3) )
    {
      audio_play(5u);
      v4 = 1;
      goto _080BC8B6;
    }
    if ( *((_WORD *)v3 + 2) + *((_WORD *)v3 + 1) != *(_WORD *)v3 )
    {
      audio_play(5u);
      v5 = *((_WORD *)v3 + 2) + 1;
      goto _080BC8A4;
    }
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    v6 = *((_WORD *)v3 + 1) + *((_WORD *)v3 + 2);
    if ( v6 == *(_WORD *)v3 )
    {
      sub_8072DEC(v6);
      MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
      sub_80BCC54(v1);
    }
    else
    {
      sub_8072DEC(v6);
      *((_WORD *)v3 + 4) = (unsigned __int8)sub_80BC948((v3[4] + v3[2]) & 0xFF);
      sub_80BC980(v1);
    }
  }
  else if ( word_300179E & 2 )
  {
    v7 = audio_play(5u);
    sub_8072DEC(v7);
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    sub_80BCC54(v2);
  }
  return v9;
}
