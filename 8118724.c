int __fastcall sub_8118724(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  __int16 v3; // r4@5
  __int16 v4; // r0@5
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v201908C = _addsf3(v201908C, v2019090);
  v2 = _addsf3(v2019088, v201908C);
  v2019088 = v2;
  if ( _gesf2() < 0 )
  {
    if ( _ltsf2(v2, 0) < 0 )
      v2019088 = _addsf3(v2, 1135869952);
  }
  else
  {
    v2019088 = _subsf3(v2, 1135869952);
  }
  *(_WORD *)(v1 + 52) = _fixsfsi(v2019088);
  v2019098 = _addsf3(v2019098, v201909C);
  v2019094 = _addsf3(v2019094, v2019098);
  *(_WORD *)(v1 + 54) = _fixsfsi(v2019094);
  v3 = sine2(*(_WORD *)(v1 + 52));
  v4 = cosine2(*(_WORD *)(v1 + 52));
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 54) * v3 >> 12;
  *(_WORD *)(v1 + 38) = -v4 * *(_WORD *)(v1 + 54) >> 12;
  if ( mplay_has_finished_maybe() << 24 )
  {
    m4aMPlayPanpotControl(&unk_30073C0, 0xFFFF, (char)*(_WORD *)(v1 + 36));
    m4aMPlayPanpotControl(&unk_3007400, 0xFFFF, (char)*(_WORD *)(v1 + 36));
  }
  return v6;
}
