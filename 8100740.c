int __fastcall sub_8100740(int a1, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r2@1
  signed int v4; // r3@1
  unsigned int v5; // r5@3
  int v6; // r6@3
  unsigned int v7; // r5@12
  int v8; // r5@15
  int v9; // r4@16
  unsigned int v10; // r2@16
  unsigned int v11; // r5@18
  int v12; // r2@19
  unsigned int v13; // r5@21
  int v15; // [sp+0h] [bp-34h]@4
  int v16; // [sp+30h] [bp-4h]@23

  v2 = a2 << 16;
  v3 = v2 >> 16;
  v4 = v2 >> 26;
  if ( v2 >> 16 )
    v3 = HIWORD(v2) & 0x3FF;
  v5 = 0;
  v6 = v202E828;
  do
  {
    *((_BYTE *)&v15 + v5) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v6 + 16) + 4) + 32 * v3 + v5);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0x1F );
  if ( v4 == 1 )
  {
    v8 = 0;
    do
    {
      v9 = 4 * v8++ + a1;
      *(_BYTE *)v9 = (*((_BYTE *)&v15 + 4 * v8 - 1) >> 4) + 16 * (*((_BYTE *)&v15 + 4 * v8 - 1) & 0xF);
      *(_BYTE *)(v9 + 1) = (*((_BYTE *)&v15 + 4 * v8 - 2) >> 4) + 16 * (*((_BYTE *)&v15 + 4 * v8 - 2) & 0xF);
      *(_BYTE *)(v9 + 2) = (*((_BYTE *)&v15 + 4 * v8 - 3) >> 4) + 16 * (*((_BYTE *)&v15 + 4 * v8 - 3) & 0xF);
      v10 = *((_BYTE *)&v15 + 4 * v8 - 4);
      *(_BYTE *)(v9 + 3) = (v10 >> 4) + 16 * (v10 & 0xF);
      v8 = (unsigned __int16)v8;
    }
    while ( (unsigned __int16)v8 <= 7u );
  }
  else if ( v4 > 1 )
  {
    if ( v4 == 2 )
    {
      v11 = 0;
      do
      {
        v12 = 4 * v11 + a1;
        *(_BYTE *)v12 = *((_BYTE *)&v15 + 4 * (7 - v11));
        *(_BYTE *)(v12 + 1) = *((_BYTE *)&v15 + 4 * (7 - v11) + 1);
        *(_BYTE *)(v12 + 2) = *((_BYTE *)&v15 + 4 * (7 - v11) + 2);
        *(_BYTE *)(v12 + 3) = *((_BYTE *)&v15 + 4 * (7 - v11) + 3);
        v11 = (v11 + 1) & 0xFFFF;
      }
      while ( v11 <= 7 );
    }
    else if ( v4 == 3 )
    {
      v13 = 0;
      do
      {
        *(_BYTE *)(a1 + v13) = (*((_BYTE *)&v15 + 31 - v13) >> 4) + 16 * (*((_BYTE *)&v15 + 31 - v13) & 0xF);
        v13 = (v13 + 1) & 0xFFFF;
      }
      while ( v13 <= 0x1F );
    }
  }
  else if ( !v4 )
  {
    v7 = 0;
    do
    {
      *(_BYTE *)(a1 + v7) = *((_BYTE *)&v15 + v7);
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 0x1F );
  }
  return v16;
}
