signed int __fastcall mplay_80342A4(unsigned __int8 a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( !(mplay_has_finished_maybe() << 24) )
    goto _08031764;
  ++*(_BYTE *)(12 * v1 + 0x2017818);
  if ( (unsigned int)*(_BYTE *)(12 * v2024A60 + 0x2017818) > 0x1D )
  {
    m4aMPlayStop(&unk_30073C0);
    m4aMPlayStop(&unk_3007400);
_08031764:
    *(_BYTE *)(12 * v1 + 0x2017818) = 0;
    return 0;
  }
  return 1;
}
