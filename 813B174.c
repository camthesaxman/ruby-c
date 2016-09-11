int __fastcall sub_813B174(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  char v3; // r0@4
  char v4; // r0@6
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_30017A0 & 0x40 )
    {
      if ( v201FE00 )
      {
        audio_play(5u);
        v3 = -1;
_0813B1E6:
        v201FE00 = MoveMenuCursor(v3);
        return v6;
      }
      if ( v201FE02 )
      {
        audio_play(5u);
        v4 = v201FE02 - 1;
        goto _0813B208;
      }
    }
    else
    {
      if ( word_30017A0 & 0x80 )
      {
        if ( v201FE00 != v201FE01 - 1 )
        {
          audio_play(5u);
          v3 = 1;
          goto _0813B1E6;
        }
        if ( v201FE02 + v201FE00 == v201FE03 )
          return v6;
        audio_play(5u);
        v4 = v201FE02 + 1;
_0813B208:
        v201FE02 = v4;
        sub_813B01C();
        return v6;
      }
      if ( word_300179E & 1 )
      {
        sub_8072DEC(word_300179E & 1);
        audio_play(5u);
        if ( v201FE02 + v201FE00 == v201FE03 )
        {
          sub_813B320(v1);
        }
        else
        {
          sub_813B27C();
          dword_3004B20[10 * v1] = (int)sub_813B294;
        }
      }
      else if ( word_300179E & 2 )
      {
        sub_8072DEC(word_300179E & 2);
        audio_play(5u);
        sub_813B320(v2);
      }
    }
  }
  return v6;
}
