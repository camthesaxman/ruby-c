int __fastcall sub_81456B4(unsigned __int16 a1, __int16 a2, __int16 a3, unsigned __int16 a4)
{
  __int16 v4; // r10@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // r7@3
  int v8; // r0@6
  unsigned __int8 v9; // r0@6
  int v10; // r4@6
  unsigned int v11; // r2@6
  char *v12; // r3@6
  char *v13; // r0@6
  __int16 v15; // [sp+10h] [bp-24h]@1

  v4 = a2;
  v15 = a3;
  v5 = a4;
  v6 = NationalPokedexNumToSpecies(a1);
  if ( v6 == 201 )
  {
    v7 = v2024EC0;
  }
  else if ( v6 == 308 )
  {
    v7 = v2024EC4;
  }
  else
  {
    v7 = 0;
  }
  sub_800D378(
    &gMonFrontPicTable[2 * v6],
    gMonFrontPicCoords[4 * v6],
    gMonFrontPicCoords[4 * v6 + 1],
    0x2000000,
    gUnknown_0840B5A0[v5],
    v6,
    v7,
    1u);
  v8 = species_and_otid_get_pal(v6, 0, 0xFFFFu);
  LoadCompressedPalette(v8, 16 * v5 + 256, 32);
  sub_8143648(v5, (unsigned __int8)v5);
  v9 = CreateSprite(33705612, v4, v15);
  v10 = v9;
  v11 = 68 * v9;
  v12 = &gSprites[v11];
  v12[5] = (gSprites[v11 + 5] & 0xF | 16 * v5) & 0xF3 | 4;
  *((_WORD *)v12 + 24) = v5 + 1;
  gSprites[v11 + 62] |= 4u;
  dword_2020020[v11 / 4] = (int)sub_81454E0;
  v13 = &gSprites[68
                * (unsigned __int8)CreateSprite(
                                     (int)&gSpriteTemplate_840CAEC,
                                     *(_WORD *)&gSprites[v11 + 32],
                                     *(_WORD *)&gSprites[v11 + 34])];
  *((_WORD *)v13 + 23) = v10;
  StartSpriteAnimIfDifferent((int)v13, v5);
  return v10;
}
