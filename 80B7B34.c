int __fastcall sub_80B7B34(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // ST00_4@1
  unsigned int v8; // r3@1
  int v9; // r6@1
  int v10; // r1@2
  int v12; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3 << 8;
  v6 = 15 * a2;
  v7 = 32 * (a1 + 1) + 100696064;
  CpuFastSet((char *)&gDecoration10000_Gfx + 256 * a3, 960 * a2 + v7, 32);
  CpuFastSet((char *)&unk_8EA2AC4 + v5, 960 * (v4 + 1) + v7, 32);
  v8 = 0;
  v9 = 2 * v6 + 1 + v3;
  do
  {
    v10 = 2 * (32 * v4 + v3 + v8);
    *(_WORD *)(v10 + 100726784) = v8 + v9 - 4096;
    *(_WORD *)(v10 + 100726848) = v8 + 30 * (v4 + 1) + 1 + v3 - 4096;
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 3 );
  return v12;
}
