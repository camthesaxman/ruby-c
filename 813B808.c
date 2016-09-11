int __fastcall sub_813B808(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  LZ77UnCompVram(&gIntroCopyright_Gfx, a1 + 100663296);
  LoadPalette((int)&gIntroCopyright_Pal, v4, 32);
  CpuSet(&gIntroCopyright_Tilemap, v3 + 100663296, 640);
  return v6;
}
