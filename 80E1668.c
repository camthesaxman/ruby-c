int __fastcall sub_80E1668(char a1, int a2, unsigned __int16 a3)
{
  signed int v3; // r4@1
  __int16 v4; // r3@2
  signed int v5; // r0@2
  signed int v6; // r2@6
  int v7; // r0@6
  signed int v8; // r2@7
  signed int v9; // r1@8
  __int16 v10; // r3@9
  signed int v11; // r2@10
  signed int v12; // r1@10
  int v14; // [sp+0h] [bp-1Ch]@4
  int v15; // [sp+18h] [bp-4h]@0

  a2 = (unsigned __int16)a2;
  v3 = a3;
  if ( a1 == 1 )
  {
    v4 = word_30042C0;
    v5 = 67108884;
  }
  else
  {
    v4 = word_3004288;
    v5 = 67108888;
  }
  v14 = v5;
  if ( a2 & 0x8000 )
    a2 = 0;
  v6 = a2 << 16;
  v7 = v3 << 16;
  v3 = (signed __int16)v3;
  if ( a2 << 16 < v7 )
  {
    do
    {
      v8 = v6 >> 16;
      word_3004DE0[v8] = v4;
      word_3005560[v8] = v4;
      a2 = (v8 + 1) & 0xFFFF;
      v6 = (v8 + 1) << 16;
    }
    while ( v6 >> 16 < v3 );
  }
  v9 = a2 << 16;
  if ( v9 >> 16 <= 159 )
  {
    v10 = v4 + 240;
    do
    {
      v11 = v9 >> 16;
      v12 = v9 >> 16;
      word_3004DE0[v12] = v10;
      word_3005560[v12] = v10;
      v9 = ++v11 << 16;
    }
    while ( (signed __int16)v11 <= 159 );
  }
  sub_80895F8(v14, -1570766847, 1);
  return v15;
}
