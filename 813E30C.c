int __fastcall sub_813E30C(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r2@6
  int v4; // r1@9
  __int16 v5; // ST00_2@9
  int v6; // r2@13
  int v7; // r1@16
  __int16 v8; // ST00_2@16
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  ++*(_WORD *)(a1 + 60);
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 0x14 )
  {
    switch ( v2 )
    {
      case 1u:
        *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
        *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2;
        *(_WORD *)(v1 + 46) = 10;
        *(_WORD *)(v1 + 54) = 36;
        goto _0813E3A8;
      case 0xAu:
_0813E3A8:
        if ( (signed int)*(_WORD *)(v1 + 32) <= 144 )
        {
          *(_WORD *)(v1 + 32) += 4;
          --*(_WORD *)(v1 + 34);
          *(_WORD *)(v1 + 38) = -(signed __int16)sine(*(_WORD *)(v1 + 50) & 0xFF, 24);
          *(_WORD *)(v1 + 50) += 4;
        }
        v3 = *(_WORD *)(v1 + 54);
        *(_WORD *)(v1 + 52) -= v3;
        if ( *(_WORD *)(v1 + 60) & 1 && v3 << 16 )
          *(_WORD *)(v1 + 54) = v3 - 1;
        v4 = *(_WORD *)(v1 + 52);
        v5 = *(_WORD *)((char *)gSineTable + (2 * (v4 + 64) & 0x1FF));
        SetOamMatrix(
          1,
          v5,
          *(_WORD *)((char *)gSineTable + (2 * v4 & 0x1FF)),
          -*(_WORD *)((char *)gSineTable + (2 * v4 & 0x1FF)),
          v5);
        return v10;
      case 2u:
        *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
        *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 4;
        *(_WORD *)(v1 + 46) = 20;
        *(_WORD *)(v1 + 54) = 36;
        goto _0813E440;
      case 0x14u:
_0813E440:
        if ( (signed int)*(_WORD *)(v1 + 32) <= 96 )
        {
          *(_WORD *)(v1 + 32) += 3;
          --*(_WORD *)(v1 + 34);
          *(_WORD *)(v1 + 38) = -(signed __int16)sine(*(_WORD *)(v1 + 50) & 0xFF, 24);
          *(_WORD *)(v1 + 50) += 4;
        }
        v6 = *(_WORD *)(v1 + 54);
        *(_WORD *)(v1 + 52) -= v6;
        if ( *(_WORD *)(v1 + 60) & 1 && v6 << 16 )
          *(_WORD *)(v1 + 54) = v6 - 1;
        v7 = *(_WORD *)(v1 + 52);
        v8 = *(_WORD *)((char *)gSineTable + (2 * (v7 + 64) & 0x1FF));
        SetOamMatrix(
          2,
          v8,
          *(_WORD *)((char *)gSineTable + (2 * v7 & 0x1FF)),
          -*(_WORD *)((char *)gSineTable + (2 * v7 & 0x1FF)),
          v8);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
