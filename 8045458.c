int __fastcall sub_8045458(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  char *v3; // r5@3
  int v4; // r4@3
  int v5; // r2@3
  unsigned __int16 v6; // r0@4
  unsigned __int16 v7; // r0@4
  int v8; // r4@5
  char *v9; // r0@6
  int v11; // [sp+0h] [bp-18h]@7
  int v12; // [sp+14h] [bp-4h]@8

  v2 = a2;
  if ( !(v20239F8 & 0x200) && !(v20239F8 & 8) )
  {
    v3 = &gSprites[68 * a1];
    v4 = *((_WORD *)v3 + 29) & 0xFF;
    if ( battle_side_get_owner(v4) << 24 )
    {
      v6 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v4 + 0x2024A6A), 11, v5);
      v7 = SpeciesToNationalPokedexNum(v6);
      if ( sub_8090D90(v7, 1) << 24 )
      {
        v8 = *((_WORD *)v3 + 28) & 0xFF;
        if ( v2 )
        {
          v9 = sub_8043CDC(70);
          CpuSet(v9, (32 * *(_WORD *)&gSprites[68 * v8 + 4] & 0x7FFF) + 100729088, 67108872);
        }
        else
        {
          v11 = 0;
          CpuSet(&v11, (32 * *(_WORD *)&gSprites[68 * v8 + 4] & 0x7FFF) + 100729088, 83886088);
        }
      }
    }
  }
  return v12;
}
