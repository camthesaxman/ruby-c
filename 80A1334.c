int __fastcall sub_80A1334(unsigned __int8 a1)
{
  unsigned __int8 v1; // r10@1
  _BYTE *v2; // r7@1
  __int16 v3; // r0@1
  signed int v4; // r1@1
  signed int v5; // r0@1
  signed int v6; // r0@4
  signed int v7; // r9@4
  int v8; // r4@5
  unsigned int v9; // r5@5
  signed int v10; // r6@5
  signed int v11; // r4@8
  unsigned int v12; // r5@8
  int v13; // r1@15
  int v14; // r2@15
  __int16 v16; // [sp+0h] [bp-24h]@9
  int v17; // [sp+20h] [bp-4h]@22

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2 + *((_WORD *)v2 + 1);
  *((_WORD *)v2 + 1) = v3;
  v4 = v3;
  v5 = 0;
  if ( v4 >= 0 )
  {
    v5 = 10;
    if ( v4 <= 10 )
      v5 = *((_WORD *)v2 + 1);
  }
  v6 = v5 << 16;
  v7 = v6;
  if ( v6 >> 16 > 0 )
  {
    v8 = 2 * (10 - (v6 >> 16)) + 100686656;
    v9 = 0;
    v10 = v6 >> 16;
    do
    {
      CpuSet((char *)&gUnknown_08E73E88 + 64 * (v9 + 13), v8, v10 & 0x1FFFFF);
      v8 += 64;
      v9 = (v9 + 1) & 0xFF;
    }
    while ( v9 <= 6 );
  }
  if ( v7 >> 16 > 9 )
  {
    MenuZeroFillWindowRect(0, 0x13u, 9u, 0x13u);
  }
  else
  {
    v11 = 100686656;
    v12 = 0;
    do
    {
      v16 = *((_WORD *)v2 + 2);
      CpuSet(&v16, v11, (10 - (v7 >> 16)) & 0x1FFFFF | 0x1000000);
      v11 += 64;
      v12 = (v12 + 1) & 0xFF;
    }
    while ( v12 <= 6 );
  }
  if ( !*(_WORD *)v2 || (signed int)*((_WORD *)v2 + 1) < 0 )
  {
    if ( v201800B == 2 )
    {
      MenuZeroFillWindowRect(0, 0xEu, 9u, 0x12u);
      sub_80A0958(33652752, v13, v14);
      if ( sub_80A1CD8(33652752) << 24 )
        sub_80A1FF8(&gUnknown_0840F813, 13, 1, 18);
    }
    DestroyTask(v1);
  }
  if ( (signed int)*((_WORD *)v2 + 1) > 9 )
  {
    if ( v201800B == 2 )
      sub_80A00F4(v2[6]);
    sub_80A0428(33652752, v2 + 6);
    DestroyTask(v1);
  }
  return v17;
}
