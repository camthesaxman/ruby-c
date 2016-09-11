int __fastcall sub_80440EC(unsigned __int8 a1, __int16 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  __int16 v4; // r6@1
  int v5; // r8@1
  char *v6; // r4@1
  __int16 v7; // r5@1
  int v8; // r0@5
  int *v9; // r4@5
  signed int v10; // r8@7
  int v11; // r0@7
  int v12; // r0@8
  char *v13; // r6@12
  int *v14; // r7@12
  signed int v15; // r5@12
  signed int v16; // r4@12
  int v17; // r1@13
  int v19; // [sp+0h] [bp-2Ch]@1
  __int16 v20; // [sp+6h] [bp-26h]@7
  int v21; // [sp+28h] [bp-4h]@14

  v3 = a1;
  v4 = a2;
  v5 = a3;
  memcpy(&v19, &gUnknown_0820A864, 20);
  v6 = &gSprites[68 * v3];
  v7 = *((_WORD *)v6 + 29);
  if ( (unsigned __int8)battle_type_is_double(58) != 1
    && (unsigned __int8)battle_side_get_owner((unsigned __int8)v7) != 1 )
  {
    if ( v5 )
    {
      v12 = battle_side_get_owner(*((_WORD *)v6 + 29) & 0xFF);
      v9 = (int *)&gUnknown_0820A85C;
      if ( !(v12 << 24) )
        v9 = (int *)&gUnknown_0820A854;
      v10 = 2;
      sub_8003504((int)&v20, v4, 0xFu);
    }
    else
    {
      v8 = battle_side_get_owner(*((_WORD *)v6 + 29) & 0xFF);
      v9 = (int *)&gUnknown_0820A848;
      if ( !(v8 << 24) )
        v9 = (int *)&gUnknown_0820A83C;
      v10 = 3;
      v11 = sub_8003504((int)&v20, v4, 0x13u);
      *(_BYTE *)v11 = -70;
      *(_BYTE *)(v11 + 1) = -1;
    }
    sub_80034D4(0x2000000, (int)&v19);
    if ( v10 )
    {
      v13 = &gSprites[68 * v3];
      v14 = v9;
      v15 = 33554464;
      v16 = v10;
      do
      {
        v17 = *v14;
        ++v14;
        CpuSet(v15, v17 + (32 * *((_WORD *)v13 + 2) & 0x7FFF), 67108872);
        v15 += 64;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    sub_8044210(v3, v4, v5);
  }
  return v21;
}
