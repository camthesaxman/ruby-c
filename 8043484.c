int __fastcall sub_8043484(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@3
  unsigned int v3; // r4@4
  int v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
    BeginNormalPaletteFade(-1, -1, 0, 16);
  v2 = *(_WORD *)(v1 + 46);
  if ( (unsigned int)v2 <= 3 )
  {
    v3 = 0;
    do
    {
      sub_80435FC(v2);
      v4 = (v3 << 16) + 0x10000;
      v3 = (unsigned int)v4 >> 16;
      v2 = v4 >> 16;
    }
    while ( v2 <= 3 );
  }
  ++*(_WORD *)(v1 + 46);
  if ( !(v202F38F & 0x80) )
  {
    audio_play(113);
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_8043504;
    *(_WORD *)(v1 + 46) = 0;
  }
  return v6;
}
