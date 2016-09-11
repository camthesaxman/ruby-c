int __fastcall sub_80FE604(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v3; // r0@8
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_30017A0 & 0x40 )
    {
      audio_play(5u);
      MoveMenuCursor(-1);
    }
    else if ( word_30017A0 & 0x80 )
    {
      audio_play(5u);
      MoveMenuCursor(1);
    }
    else if ( word_300179E & 1 )
    {
      audio_play(5u);
      v20388F6 = GetMenuCursorPos();
      if ( v20388F6 == 8 )
      {
        sub_80FE728(v1);
      }
      else
      {
        v3 = sub_8134194(v20388F6);
        v20388D5 = v3;
        if ( v3 << 24 )
        {
          sub_8134104(v20388F6);
          v20388D0 = *(_DWORD *)&gUnknown_08402E40[8 * v20388F6];
          sub_80FEF50(v1);
          sub_80F944C();
          sub_80F9480(33786103, 8u);
          InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
          dword_3004B20[10 * v1] = (int)sub_80FE868;
        }
        else
        {
          sub_8072DEC(0);
          MenuZeroFillWindowRect(0, 0, 0xEu, 0x13u);
          DisplayItemMessageOnField(v1, (int)"ÎÜÙæÙ", (int)sub_80FE418, 0);
        }
      }
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      sub_80FE728(v2);
    }
  }
  return v5;
}
