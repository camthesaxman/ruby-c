int __fastcall sub_8044210(unsigned __int8 a1, __int16 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  __int16 v4; // r6@1
  __int16 v5; // r9@1
  int v6; // r7@1
  char *v7; // r8@1
  int v8; // r4@1
  int *v9; // r7@3
  signed int v10; // r10@3
  int v11; // r0@3
  char *v12; // r0@5
  int v13; // r4@6
  char *v14; // r6@7
  signed int v15; // r5@7
  signed int v16; // r4@7
  int v17; // r1@8
  int v19; // [sp+0h] [bp-34h]@1
  __int16 v20; // [sp+6h] [bp-2Eh]@3
  int v21; // [sp+30h] [bp-4h]@9

  v3 = a1;
  v4 = a2;
  v5 = a2;
  v6 = a3;
  memcpy(&v19, &gUnknown_0820A89C, 20);
  v7 = &gSprites[68 * v3];
  v8 = *((_WORD *)v7 + 29);
  if ( *(_BYTE *)(4 * v8 + 0x2017800) & 0x10 )
  {
    if ( v6 )
    {
      v9 = (int *)&gUnknown_0820A894;
      v10 = 2;
      sub_8003504((int)&v20, v5, 0xFu);
      if ( !(battle_side_get_owner((unsigned __int8)v8) << 24) )
      {
        v12 = sub_8043CDC(116);
        CpuSet(v12, (32 * *((_WORD *)v7 + 2) & 0x7FFF) + 100730496, 67108872);
      }
    }
    else
    {
      v9 = (int *)&gUnknown_0820A87C;
      v10 = 6;
      v11 = sub_8003504((int)&v20, v4, 0x2Bu);
      *(_BYTE *)v11 = -70;
      *(_BYTE *)(v11 + 1) = -1;
    }
    v13 = *(_WORD *)&gSprites[68 * v3 + 56];
    sub_80034D4(0x2000000, (int)&v19);
    if ( v10 )
    {
      v14 = &gSprites[68 * v13];
      v15 = 33554464;
      v16 = v10;
      do
      {
        v17 = *v9;
        ++v9;
        CpuSet(v15, v17 + (32 * *((_WORD *)v14 + 2) & 0x7FFF), 67108872);
        v15 += 64;
        --v16;
      }
      while ( v16 );
    }
  }
  return v21;
}
