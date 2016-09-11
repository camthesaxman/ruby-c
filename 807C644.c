int __fastcall sub_807C644(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r2@9
  __int16 v3; // r0@9
  __int16 v4; // r0@10
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v4000050 = 8514;
  v4000052 = 7951;
  v4000054 = 0;
  if ( word_300179E & 1 || word_300179E & 8 )
  {
    play_sound_effect(4u);
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, -1);
    SetMainCallback2((int)sub_807C774);
  }
  else
  {
    if ( (word_300179C & 0x46) == 70 )
      SetMainCallback2((int)sub_807C7AC);
    if ( (word_300179C & 0x26) != 38 || sub_80691DC() != 1 )
    {
      v400002C = 0;
      v2 = &dword_3004B20[10 * v1];
      v3 = *((_WORD *)v2 + 4) + 1;
      *((_WORD *)v2 + 4) = v3;
      if ( v3 & 1 )
      {
        v4 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v4;
        word_30041B4 = v4;
        word_30042C0 = 0;
      }
      sub_807C7E4(*((_BYTE *)v2 + 8));
      if ( !(_WORD)dword_3007384 )
      {
        BeginNormalPaletteFade(-1, 0, 0, 0x10u, -1);
        SetMainCallback2((int)sub_807C790);
      }
    }
    else
    {
      play_sound_effect(4u);
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      SetMainCallback2((int)sub_807C7C8);
    }
  }
  return v6;
}
