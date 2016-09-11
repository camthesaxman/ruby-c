int __fastcall sub_80318FC(int a1, unsigned __int8 a2)
{
  int v2; // r8@1
  int v3; // r9@1
  int v4; // r6@2
  int v5; // r7@3
  int v6; // r10@4
  int v7; // ST00_4@4
  int v8; // r7@4
  int v9; // r4@4
  int v11; // [sp+Ch] [bp-28h]@1
  int v12; // [sp+30h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v11 = GetMonData(a1, 0);
  if ( *(_WORD *)(4 * v3 + 0x2017802) )
  {
    v4 = *(_WORD *)(4 * v3 + 0x2017802);
    v5 = *(_DWORD *)(4 * v3 + 0x2024E70);
  }
  else
  {
    v4 = GetMonData(v2, 11) & 0xFFFF;
  }
  v6 = GetMonData(v2, 1);
  v7 = *(int *)((char *)&gUnknown_081FAF4C + (4 * battle_get_per_side_status(v3) & 0x3FF));
  sub_800D334((int)(&gMonBackPicTable + 2 * v4), gMonBackPicCoords[4 * v4], gMonBackPicCoords[4 * v4 + 1]);
  v8 = 16 * v3 + 256;
  v9 = 16 * v3;
  if ( *(_WORD *)(4 * v3 + 0x2017802) )
    species_and_otid_get_pal(v4, v6, v11);
  else
    pokemon_get_pal(v2);
  sub_800D238();
  LoadPalette(0x2000000, 16 * v3 + 256, 32);
  LoadPalette(0x2000000, v9 + 128, 32);
  if ( v4 == 385 )
  {
    v8 = v9 + 256;
    sub_800D238();
    LoadPalette(32 * *(_BYTE *)(v3 + 33705604) + 33645568, v9 + 256, 32);
  }
  if ( *(_WORD *)(4 * v3 + 0x2017802) )
  {
    BlendPalette(v8, 16, 6, 0x7FFF);
    CpuSet(2 * v8 + 33746632, 2 * v8 + 33745608, 67108872);
  }
  return v12;
}
