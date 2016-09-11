int __fastcall sub_811155C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r1@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8111110();
  v2 = &dword_3004B20[10 * v1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( word_300179E & 2 )
    {
      *((_WORD *)v2 + 5) = 1;
      audio_play(3u);
    }
    else
    {
      if ( !(word_300179E & 0x10) && (!(word_300179E & 0x100) || v2024EB7 != 1) )
        return v5;
      *((_WORD *)v2 + 5) = 2;
      audio_play(0x6Du);
    }
_0811163C:
    ++LOWORD(dword_3004B20[10 * v1 + 2]);
    return v5;
  }
  if ( v3 <= 1 )
  {
    if ( !*((_WORD *)v2 + 4) )
      goto _0811159E;
    goto _08111590;
  }
  if ( v3 == 2 )
  {
    BeginNormalPaletteFade(-21, 0, 0, 0x10u, 0);
    goto _0811163C;
  }
  if ( v3 == 3 )
  {
    if ( !(v202F38F & 0x80) )
    {
      sub_8111738();
      *v20006E4 = *((_WORD *)v2 + 5);
      DestroyTask(v1);
    }
    return v5;
  }
_08111590:
  LOWORD(dword_3004B20[10 * v1 + 2]) = 0;
_0811159E:
  if ( !(v202F38F & 0x80) )
    goto _0811163C;
  return v5;
}
