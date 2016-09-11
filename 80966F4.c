int __fastcall sub_80966F4(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r8@1
  int v4; // r6@1
  __int16 v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+14h] [bp-4h]@1

  v3 = a1;
  v4 = (32 * GetSpriteTileStartByTag(*(_WORD *)(v2038478 + 576)) & 0x1FFFFF) + (a3 << 8) + 100728832 + 32 * a2;
  v6 = 4369;
  v40000D4 = &v6;
  v40000D8 = 33788768;
  v40000DC = -2130705920;
  sub_8004E3C((int)&gWindowConfig_81E6D38, 33788768, v3);
  v40000D4 = 33788768;
  v40000D8 = v4;
  v40000DC = -2147483136;
  return v7;
}
