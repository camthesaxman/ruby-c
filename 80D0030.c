int __fastcall sub_80D0030(int a1)
{
  int v1; // r4@1
  char v2; // r0@1
  signed int v3; // r1@1
  _WORD *v4; // r0@1
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_8076F98(0x3Fu);
  audio_play_and_stuff(0xA6u, v2);
  *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
  *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
  *(_WORD *)(v1 + 38) = 0;
  *(_WORD *)(v1 + 36) = 0;
  v3 = 7;
  v4 = (_WORD *)(v1 + 60);
  do
  {
    *v4 = 0;
    --v4;
    --v3;
  }
  while ( v3 >= 0 );
  *(_WORD *)(v1 + 58) = -12 - (Random() & 7);
  *(_WORD *)(v1 + 60) = (unsigned __int16)Random() % 0xA0u + 160;
  *(_DWORD *)(v1 + 28) = sub_80D00B4;
  *(_BYTE *)(v1 + 44) &= 0x7Fu;
  return v6;
}
