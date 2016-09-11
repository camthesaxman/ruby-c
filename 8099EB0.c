int __fastcall sub_8099EB0(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r1@1
  unsigned int v4; // r7@1
  char v5; // r2@2
  void **v6; // r4@5
  int v8; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  if ( v3 )
  {
    v5 = 0;
    if ( !v20008BA )
      v5 = 1;
    v20008BA = v5;
    sub_809A14C(100716544);
  }
  v6 = &gWallpaperTable + 4 * *(_BYTE *)(v2 + 33784930);
  LoadPalette((int)v6[3], (3145728 * (unsigned int)v20008BA + 0x400000) >> 16, 96);
  LZ77UnCompWram(v6[2], 33557858);
  sub_8099F58(100716544, 33557858, (char)v4, v20008BA);
  LZ77UnCompVram(*v6, (v20008BA << 13) + 100696064);
  return v8;
}
