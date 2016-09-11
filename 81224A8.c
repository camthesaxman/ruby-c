int __fastcall sub_81224A8(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r0@1
  int *v5; // r0@2
  int v6; // r1@2
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = (unsigned __int8)sub_81220C8();
  if ( v4 != 255 )
  {
    sub_806D538(v4, 0);
    v5 = dword_3004B20;
    v6 = 5 * v2;
_08122518:
    v5[2 * v6] = (int)sub_8122480;
    return v8;
  }
  if ( !v2039270 )
  {
    audio_play(0x20u);
    sub_806D538(0xEu, 0);
    v5 = dword_3004B20;
    v6 = 5 * v3;
    goto _08122518;
  }
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v2] = (int)sub_8122450;
  return v8;
}
