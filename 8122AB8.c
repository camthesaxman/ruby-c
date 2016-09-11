int __fastcall sub_8122AB8(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_806D3B4(a1, v2023A20, v2023A40);
  v2 = &dword_3004B20[10 * v1];
  if ( !*((_WORD *)v2 + 4) )
  {
    *v2 = (int)sub_8122B10;
    v201B261 = 2;
    audio_play(0x78u);
  }
  return v4;
}
