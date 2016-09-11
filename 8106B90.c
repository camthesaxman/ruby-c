int __fastcall sub_8106B90(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r9@1
  int v5; // r0@1
  int v6; // r3@2
  int v7; // r1@3
  unsigned __int16 v8; // r8@3
  int v9; // r12@3
  int v10; // r4@3
  unsigned int v11; // r3@4
  unsigned __int16 v12; // r6@4
  int v13; // r5@4
  int v14; // r2@4
  unsigned int v15; // r1@5
  unsigned int v16; // r1@6
  signed __int16 *v17; // r0@9
  signed __int16 v18; // r1@9
  int v20; // [sp+0h] [bp-2Ch]@1
  unsigned __int16 v21; // [sp+4h] [bp-28h]@2
  int v22; // [sp+8h] [bp-24h]@2
  int v23; // [sp+28h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v20 = a3;
  v5 = 0;
  do
  {
    v6 = 0;
    v21 = v5 + 1;
    v22 = 8 * v5;
    do
    {
      v7 = 0;
      v8 = v6 + 1;
      v9 = 32 * (v22 + v6);
      v10 = 8 * v6;
      do
      {
        v11 = 0;
        v12 = v7 + 1;
        v13 = v9 + 4 * v7;
        v14 = ((v22 + v7) << 7) + v20;
        do
        {
          v15 = *(_BYTE *)(v13 + (v11 >> 1) + v3);
          if ( v11 & 1 )
            v16 = v15 >> 4;
          else
            v16 = v15 & 0xF;
          if ( v16 )
          {
            v17 = (signed __int16 *)(2 * (v10 + v11) + v14);
            v18 = *(_WORD *)(2 * v16 + v4);
          }
          else
          {
            v17 = (signed __int16 *)(2 * (v10 + v11) + v14);
            v18 = -32768;
          }
          *v17 = v18;
          v11 = (v11 + 1) & 0xFFFF;
        }
        while ( v11 <= 7 );
        v7 = v12;
      }
      while ( v12 <= 7u );
      v6 = v8;
    }
    while ( v8 <= 7u );
    v5 = v21;
  }
  while ( v21 <= 7u );
  return v23;
}
