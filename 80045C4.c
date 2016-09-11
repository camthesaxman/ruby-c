signed int __fastcall WaitWithDownArrow(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@2

  v1 = a1;
  v2 = 1;
  if ( PlayerCanInterruptWait() << 24 )
  {
    if ( !(word_300179E & 3) )
    {
LABEL_7:
      DrawMovingDownArrow(v1);
      return 0;
    }
    audio_play(5);
  }
  else
  {
    v3 = *(_BYTE *)(v1 + 13) - 1;
    *(_BYTE *)(v1 + 13) = v3;
    if ( v3 << 24 )
      goto LABEL_7;
  }
  TryEraseDownArrow(v1);
  return v2;
}
