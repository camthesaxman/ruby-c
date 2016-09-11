int sub_813AF78()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@2
  unsigned __int8 v2; // r10@2
  _WORD *v3; // r8@3
  int v4; // r4@3
  int v5; // ST00_4@5
  int v6; // ST04_4@5
  int v7; // ST08_4@5
  int v8; // ST0C_4@5
  int v9; // ST10_4@5
  int v10; // ST14_4@5
  int v11; // ST18_4@5
  int v12; // ST1C_4@5
  int v13; // ST20_4@5
  int v14; // r2@5
  int v15; // r6@5
  int v16; // r7@5
  int v17; // r1@5
  int v18; // r6@5
  int v19; // r7@5
  int v20; // r1@5
  int v21; // r6@5
  int v22; // r7@5
  int v23; // r2@5
  int v24; // r2@5
  int v26; // [sp+40h] [bp-4h]@0

  v0 = 6;
  do
  {
    v1 = (v0 + 1) & 0xFF;
    v2 = v0 + 1;
    if ( v1 <= 0xF )
    {
      v3 = (_WORD *)(36 * v0 + 33718944);
      v4 = 36 * v0 + 33718912;
      do
      {
        if ( !*v3 )
        {
          v5 = *(_DWORD *)v4;
          v6 = *(_DWORD *)(v4 + 4);
          v7 = *(_DWORD *)(v4 + 8);
          v8 = *(_DWORD *)(v4 + 12);
          v9 = *(_DWORD *)(v4 + 16);
          v10 = *(_DWORD *)(v4 + 20);
          v11 = *(_DWORD *)(v4 + 24);
          v12 = *(_DWORD *)(v4 + 28);
          v13 = *(_DWORD *)(v4 + 32);
          v14 = 36 * v1 + 33718912;
          v15 = *(_DWORD *)(36 * v1 + 0x2028284);
          v16 = *(_DWORD *)(36 * v1 + 0x2028288);
          *(_DWORD *)v4 = *(_DWORD *)(36 * v1 + 0x2028280);
          *(_DWORD *)(v4 + 4) = v15;
          *(_DWORD *)(v4 + 8) = v16;
          v17 = v4 + 12;
          v18 = *(_DWORD *)(36 * v1 + 0x2028290);
          v19 = *(_DWORD *)(36 * v1 + 0x2028294);
          *(_DWORD *)v17 = *(_DWORD *)(36 * v1 + 0x202828C);
          *(_DWORD *)(v17 + 4) = v18;
          *(_DWORD *)(v17 + 8) = v19;
          v20 = v4 + 24;
          v21 = *(_DWORD *)(36 * v1 + 0x202829C);
          v22 = *(_DWORD *)(36 * v1 + 0x20282A0);
          *(_DWORD *)v20 = *(_DWORD *)(36 * v1 + 0x2028298);
          *(_DWORD *)(v20 + 4) = v21;
          *(_DWORD *)(v20 + 8) = v22;
          *(_DWORD *)v14 = v5;
          *(_DWORD *)(v14 + 4) = v6;
          *(_DWORD *)(v14 + 8) = v7;
          v23 = 36 * v1 + 33718924;
          *(_DWORD *)v23 = v8;
          *(_DWORD *)(v23 + 4) = v9;
          *(_DWORD *)(v23 + 8) = v10;
          v24 = 36 * v1 + 33718936;
          *(_DWORD *)v24 = v11;
          *(_DWORD *)(v24 + 4) = v12;
          *(_DWORD *)(v24 + 8) = v13;
        }
        v1 = (v1 + 1) & 0xFF;
      }
      while ( v1 <= 0xF );
    }
    v0 = v2;
  }
  while ( v2 <= 0xEu );
  return v26;
}
