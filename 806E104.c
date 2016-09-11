int __fastcall sub_806E104(int a1, unsigned __int8 a2, int a3)
{
  char *v3; // r0@1
  int v4; // r4@1
  unsigned int v5; // r3@1
  int v6; // r2@1
  int v8; // [sp+8h] [bp-4h]@0

  v3 = (char *)&gUnknown_08376738 + 24 * a2 + (4 * a1 & 0x3FF);
  v4 = 2 * ((((unsigned __int8)*v3 - 1) & 0xFF) + (32 * ((unsigned __int8)v3[1] + 1) & 0x1FFF)) + 100724736;
  v5 = 0;
  v6 = (4 * a3 & 0xFF) + 396;
  do
  {
    *(_WORD *)(2 * v5 + v4) = (v6 + v5) | 0xB000;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 3 );
  return v8;
}
