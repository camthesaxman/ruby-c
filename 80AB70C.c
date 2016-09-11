signed int __fastcall sub_80AB70C(_BYTE *a1)
{
  _BYTE *v1; // r10@1
  unsigned int v2; // r0@1
  signed int v3; // r2@3
  unsigned int v4; // r3@3
  unsigned int v5; // r0@5
  signed int v6; // r4@7
  signed int v7; // r3@7
  unsigned int v8; // r5@7
  int v9; // r0@14
  int v10; // r0@14
  int v11; // r0@14
  int v12; // r0@14
  int v13; // r0@14
  int v14; // r0@14
  int v15; // r0@14
  char v16; // r0@14
  signed int result; // r0@15
  int v18; // [sp+0h] [bp-64h]@13
  char v19; // [sp+20h] [bp-44h]@13
  int v20; // [sp+40h] [bp-24h]@4

  v1 = a1;
  v2 = *a1;
  if ( v2 > 6 )
  {
def_80AB72A:
    *v1 = 0;
    result = 1;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v202F390 |= 0x80u;
        v3 = 100663296;
        v4 = 98304;
        do
        {
          v20 = 0;
          v40000D4 = &v20;
          v40000D8 = v3;
          v40000DC = -2063596544;
          v3 += 4096;
          v4 -= 4096;
        }
        while ( v4 > 0x1000 );
        v20 = 0;
        v40000D4 = &v20;
        v40000D8 = v3;
        v5 = (v4 >> 2) | 0x85000000;
        goto _080AB7E6;
      case 1u:
        LZDecompressVram((int)&gContestMiscGfx, 100663296);
        break;
      case 2u:
        v6 = 100671488;
        LZDecompressVram((int)&gContestAudienceGfx, 100671488);
        v7 = 33642496;
        v8 = 0x2000;
        do
        {
          v40000D4 = v6;
          v40000D8 = v7;
          v40000DC = -2080373760;
          v6 += 4096;
          v7 += 4096;
          v8 -= 4096;
        }
        while ( v8 > 0x1000 );
        v40000D4 = v6;
        v40000D8 = v7;
        v5 = (v8 >> 2) | 0x84000000;
_080AB7E6:
        v40000DC = v5;
        break;
      case 3u:
        LZDecompressVram((int)&gUnknown_08D1725C, 100716544);
        break;
      case 4u:
        LZDecompressVram((int)&gUnknown_08D17424, 100720640);
        v40000D4 = 100720640;
        v40000D8 = 33655300;
        v40000DC = -2080374272;
        break;
      case 5u:
        LoadCompressedPalette((int)&gUnknown_08D17144, 0, 512);
        CpuSet(33745864, &v18, 67108872);
        CpuSet(32 * (v2038695 + 5) + 33745608, &v19, 67108872);
        CpuSet(&v19, 33745864, 67108872);
        CpuSet(&v18, 32 * (v2038695 + 5) + 33745608, 67108872);
        v40000D4 = 33745608;
        v40000D8 = 33652740;
        v40000DC = -2080374656;
        sub_80AB350();
        break;
      case 6u:
        v9 = sub_80B1118();
        v10 = sub_80AFA5C(v9);
        v11 = sub_80AEB30(v10);
        v2019216 = sub_80AE8B4(v11);
        v12 = sub_80AFE30();
        v13 = sub_80B0034(v12);
        v14 = sub_80B00C8(v13);
        v15 = sub_80B0324(v14);
        sub_80B0518(v15);
        v2024A72 = 0;
        v2024A73 = 1;
        v2024A74 = 3;
        v2024A75 = 2;
        v20239F8 = 0;
        v2024C07 = 2;
        v2024C08 = 3;
        v16 = sub_80AE858();
        *(_BYTE *)(v2024C07 + 0x2024BE0) = v16;
        sub_80B292C();
        break;
      default:
        goto def_80AB72A;
    }
    ++*v1;
    result = 0;
  }
  return result;
}
