int sub_80E8DD8()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-1Ch]@1
  int v4; // [sp+1Ch] [bp-4h]@1

  v4000010 = 0;
  v4000012 = 0;
  v4000014 = 0;
  v4000016 = 0;
  v400001A = 0;
  v4000018 = 0;
  v400001C = 0;
  v400001E = 0;
  v4000008 = -29952;
  v400000A = 3337;
  CpuSet(&gUnknown_08E945D0, 33558984, 640);
  LZ77UnCompWram(&gUnknown_08E953D0, 33560264);
  LZ77UnCompVram(&gMenuWordGroupFrame_Gfx, 100696064);
  CpuSet(33558984, 100689920, 640);
  LoadPalette((int)&gMenuWordGroupFrame1_Pal, 64, 64);
  v400000C = 3586;
  v40000D4 = &gUnknown_08E9AB00;
  v40000D8 = 100687872;
  v40000DC = -2147483616;
  LZ77UnCompVram(&gUnknown_08E9AB60, 100691968);
  LoadPalette((int)&gUnknown_08E9AB40, 0, 32);
  LoadPalette((int)&gUnknown_083DBDFC, 16, 32);
  v400000E = 3855;
  v3 = 0;
  v40000D4 = &v3;
  v40000D8 = 100694016;
  v40000DC = -2063597056;
  LoadPalette((int)&gUnknown_083DBE40, 32, 32);
  v202EB46 = 0x7FFF;
  v202EB2A = 28507;
  v202EB38 = 29596;
  v202EF46 = 0x7FFF;
  v202EF2A = 28507;
  v202EF38 = 29596;
  v20010BC = 0;
  v0 = sub_80E8FA4(33746744);
  sub_80E948C(v0);
  sub_80E9198(10);
  v1 = sub_80E91D4(0);
  sub_80E95A4(v1);
  v4000050 = 0;
  return v4;
}
