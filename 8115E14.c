int __fastcall sub_8115E14(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int *v3; // r4@1
  signed int v4; // r0@1
  unsigned __int8 v5; // r0@7
  int *v6; // r4@13
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_8115B58(BYTE3(v1));
  v3 = &dword_3004B20[10 * v2];
  v4 = *((_WORD *)v3 + 5);
  if ( v4 == 30 )
  {
    v5 = 0;
    goto _08115E4C;
  }
  if ( v4 <= 30 )
  {
    if ( *((_WORD *)v3 + 5) )
      goto _08115E5E;
    v5 = *((_BYTE *)v3 + 16);
_08115E4C:
    sub_81157D0(v5);
    ++*((_WORD *)v3 + 5);
    goto _08115E6E;
  }
  if ( v4 == 59 )
  {
    *((_WORD *)v3 + 5) = 0;
    goto _08115E6E;
  }
_08115E5E:
  ++HIWORD(dword_3004B20[10 * v2 + 2]);
_08115E6E:
  if ( word_300179E & 1 )
  {
    v6 = &dword_3004B20[10 * v2];
    if ( v2019008 & *((_DWORD *)&unk_83F8C08 + 5 * *((_WORD *)v6 + 8)) )
    {
      audio_play(0x16u);
    }
    else
    {
      m4aSongNumStart(95);
      *v6 = (int)sub_8115DA0;
    }
  }
  return v8;
}
