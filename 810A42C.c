int __fastcall sub_810A42C(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned int v3; // r0@3
  unsigned int v4; // r7@3
  unsigned __int16 v5; // r0@3
  _WORD *v6; // r5@3
  int v7; // r4@3
  unsigned int v8; // r3@3
  int v9; // r6@3
  __int16 v10; // r4@6
  __int16 v11; // r5@6
  int v13; // [sp+0h] [bp-60h]@3
  char v14; // [sp+5h] [bp-5Bh]@3
  char v15; // [sp+6h] [bp-5Ah]@3
  char v16; // [sp+7h] [bp-59h]@3
  int v17; // [sp+5Ch] [bp-4h]@6

  a1 = (unsigned __int8)a1;
  v2 = a2;
  if ( (unsigned __int8)a1 != 255 )
  {
    MenuZeroFillWindowRect(
      gUnknown_083F76BE[2 * a1],
      gUnknown_083F76BE[2 * a1 + 1],
      gUnknown_083F76BE[2 * a1] + 13,
      gUnknown_083F76BE[2 * a1 + 1] + 3);
    v4000040 = 0;
    v4000044 = 0;
  }
  v3 = sub_8109E50(v2) << 16;
  v4 = v3 >> 16;
  v5 = SpeciesToNationalPokedexNum(HIWORD(v3));
  v6 = sub_8090D3C(v5);
  sub_810A410(&v13, 0, 15, 8);
  v14 = -4;
  v15 = 17;
  v16 = 5;
  v7 = 8;
  v8 = 0;
  v9 = 2 * v2;
  if ( *(_BYTE *)v6 != 255 )
  {
    do
    {
      *((_BYTE *)&v13 + v7) = *((_BYTE *)v6 + v8);
      v8 = (v8 + 1) & 0xFF;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( *((_BYTE *)v6 + v8) != 255 && v8 <= 0xA );
  }
  *((_BYTE *)&v13 + v7) = 0;
  StringCopy((_BYTE *)&v13 + ((v7 + 1) & 0xFF), &gUnknown_0840E5CD);
  v10 = gUnknown_083F76BE[v9];
  v11 = gUnknown_083F76BE[v9 + 1];
  MenuPrint((int)&v13, gUnknown_083F76BE[v9], gUnknown_083F76BE[v9 + 1]);
  sub_810A410(&v13, 0, 15, 8);
  sub_8072C74((int)&v14, (int)&gSpeciesNames[11 * v4], 0x6Bu, 1u);
  MenuPrint((int)&v13, v10, v11 + 2);
  v4000040 = ((8 * v10 + 4) << 8) | (8 * (v10 + 13) + 4) & 0xFF;
  v4000044 = (v11 << 11) | 8 * (v11 + 4) & 0xFF;
  return v17;
}
