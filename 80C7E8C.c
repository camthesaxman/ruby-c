signed int __fastcall sub_80C7E8C(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  _BYTE *v3; // r10@2
  int v5; // r0@6
  int v6; // r3@6
  int v7; // r9@6
  int v8; // r8@6
  int v9; // r6@7
  int v10; // r7@7
  int v11; // r5@7
  char *v12; // r4@7
  signed int v13; // r0@8
  int v14; // r1@11
  int v15; // ST08_4@11
  char v16; // r0@11
  int v17; // [sp+0h] [bp-2Ch]@6
  int v18; // [sp+4h] [bp-28h]@6

  v2 = a1;
  if ( a2 == 1 )
  {
    v3 = &gUnknown_083D611C;
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v3 = &gUnknown_083D60FC;
  }
  v17 = (unsigned __int8)sub_80C7A08(a1);
  v5 = 8 * v2 + v2038800;
  v6 = 0;
  v18 = 8 * *(_BYTE *)(v5 + 4);
  v7 = (signed __int16)(*(_WORD *)v5 + 7);
  v8 = (signed __int16)(*(_WORD *)(v5 + 2) + 7);
_080C7EE8:
  v9 = 0;
  v10 = v17 + v6;
  v11 = v17 + v6;
  v12 = (char *)&Unknown_83D613C + 2 * v6 + v18;
  while ( 1 )
  {
    v13 = v11;
    if ( v11 < 0 )
      v13 = v10 + 3;
    if ( *v12 )
    {
      v15 = v6;
      v14 = (2 * (v11 - 4 * (v13 >> 2)) + v9) & 0xFF;
      v16 = MapGridIsImpassableAt(v3[4 * v14] + v7, v3[4 * v14 + 1] + v8);
      v6 = v15;
      if ( v16 == 1 )
        return 0;
    }
    ++v12;
    if ( ++v9 > 1 )
    {
      if ( ++v6 <= 3 )
        goto _080C7EE8;
      return 1;
    }
  }
}
